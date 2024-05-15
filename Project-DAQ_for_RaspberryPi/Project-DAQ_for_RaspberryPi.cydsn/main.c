/* ================================================================================================================================================================
 *
 * Copyright: Gemma Qin, Metropolia UAS, Finland, 2024
 * 
 * PSoC Design Course 2024: Project 
 *
 * Project Description: 
 * The project aims to create a device for data acquisition primarily tailored for Raspberry Pi 4 model B, which lacks an integrated analog-to-digital converter. 
 * However, by employing the appropriate wiring, the functionality of the PSoC program can be adapted for use with various devices, such as the Bus Pirate. 
 * For this project, Bus Pirate v3.6a has been utilised. 
 * 
 * The Programmable System on Chip (PSoC) device, acting as a slave device in this project, can collect analog samples from four different analog inputs using 
 * an analog multiplexer (AMux). The selection of the channel and the reading of the sample data are initiated by the master device, which is the Raspberry Pi 4 
 * model B in this project. The slave device oversamples the selected channel, providing a sample rate of 11,583 samples per second. From these oversamples, 
 * an average is calculated and enqueued to the circular buffer implemented for this project. If the master device requests the sample, it is dequeued from the 
 * ring buffer if it is available. The circular buffer also guarantees the mechanism to avoid missing data for the system.
 *
 * The interface of serial communication between the devices is I²C and the appropriate wiring between the master and slave device needs to be employed 
 * to achieve successful data transmission. 
 *
 * ================================================================================================================================================================
*/

/*  Libraries  */
#include "project.h"
#include "stdio.h"
#include "ring_buffer.h"

// SELECT MODE HERE:
#define DEBUG_MODE   // If defined, DEBUG_UART of PSoC is used

/* Project Defines */
#define I2C_BUFFER_SIZE 8
#define MAX_AVG_SAMPLES 11583
// Temp. sensor related
#define TEMP_SENSOR_CONV 10  // For both LM35 and TMP36
#define TMP36_OFFSET 500 // 500 mV
// Channel related
#define NUMBER_OF_CHANNELS 4
#define CHANNEL_MASK ((uint8_t) NUMBER_OF_CHANNELS - 1)
#define POTENTIOMETER0_CHANNEL 0
#define LM35_CHANNEL 1
#define TMP36_CHANNEL 2
#define POTENTIOMETER3_CHANNEL 3
// Sample data related
#define VALID_SAMPLE 1
#define INVALID_SAMPLE 0
// Debug UART related
#ifdef DEBUG_MODE
#define TRANSMIT_BUFFER_SIZE 128
#endif 

/* Interrupt declaration */
CY_ISR_PROTO(MyADCIsr);

/* Function declarations */
uint16_t floatToUint16(float value);

/* Globals */
// Running average
volatile uint8_t new_data = 0;
uint32_t Output_sum = 0;
uint16_t n = 0;
uint32_t Output_sum_copy;
uint16_t n_copy = 0;

/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  When new_data flag is set, enqueues data sample to circular buffer.
*  The programme handles the channel change when master device initiates it.
*  The programme dequeues from circular buffer and transmit data sample to master when requested.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Remarks: 
*  - Specification: 
*       - DEBUG_UART: 12[6] RX, 12[7] TX, 115200 bps
*       - I2C Slave: 12[0] SCL, 12[1] SDA, I2C_CLK 6.4 MHz, no RST
*       - ADC_DelSig: 
*               - AMux: 4 channels (2[3] Potentiometer, 2[4] LM35, 2[5] TMP36, 2[6] Potentiometer)
*               - ADC_Clock 3 MHz
*               - ADC_ISR
*  - Design works with internal pull up resistor of 5 kOhm.
*
*******************************************************************************/
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Local variables */
#ifdef DEBUG_MODE
    // UART buffer
    char transmit_buffer[TRANSMIT_BUFFER_SIZE];
#endif

    // Channels: 0: potentiometer(U 103, 306E), 1: LM35, 2: TMP36, 3: Potentiometer (U 103, 306E)
    uint8_t channel = 0;
    
    // I2C
    uint8_t I2C_read_buffer[3] = {0};
    uint8_t I2C_write_buffer;

    // Ring buffer
    CircularBuffer cb;

    // State machine
    typedef enum {
        EMPTY_FIFO,     // Empty, data is not yet available (ie. too soon)
        BUFFER,         // Valid data available
    } state;
    
    state I2C_read_state = EMPTY_FIFO;

    /* Start the components and interrupts */
#ifdef DEBUG_MODE
    DEBUG_UART_Start();
#endif
    ADC_DelSig_Start();
    AMux_Start();

    I2C_SlaveInitReadBuf((uint8_t*)&I2C_read_buffer, sizeof(I2C_read_buffer));
    I2C_SlaveInitWriteBuf(&I2C_write_buffer, sizeof(I2C_write_buffer));
    I2C_Start();

    circBuffInit(&cb);
    
    AMux_Select(channel);
    ADC_ISR_StartEx(MyADCIsr);
    
#ifdef DEBUG_MODE    
    /* Send message to verify COM port is connected properly */
    DEBUG_UART_PutString("COM Port Open\r\n");
#endif
    
    /* Start the ADC conversion */
    ADC_DelSig_StartConvert();

    for(;;)
    {
        /* Enqueue new sample to ring buffer */
        if (new_data) {
            new_data = 0;
            float output_avg = Output_sum_copy / n_copy;
            enqueueCircBuff(&cb, output_avg);
            
            if (I2C_read_state == EMPTY_FIFO) {
                // Adding valid sample
                if (dequeueCircBuff(&cb, (uint16_t*) &I2C_read_buffer[1])) {
                    I2C_read_buffer[0] = VALID_SAMPLE;
                    I2C_read_state = BUFFER;
                } else {
                    I2C_read_buffer[0] = INVALID_SAMPLE;
                }
            }
#ifdef DEBUG_MODE   
            // For DEBUG_UART 
            if (channel == LM35_CHANNEL) {
                float temp = output_avg / TEMP_SENSOR_CONV;
                sprintf(transmit_buffer,"Temp LM35: %.1f C\r\n", temp);
            } else if (channel == TMP36_CHANNEL) {
                float temp = (output_avg - TMP36_OFFSET) / TEMP_SENSOR_CONV;
                sprintf(transmit_buffer,"Temp TMP36: %.1f C\r\n", temp);
            } else if (channel == POTENTIOMETER0_CHANNEL) {
                sprintf(transmit_buffer,"Read trimpot 0: %.2f\r\n", output_avg);
            } else if (channel == POTENTIOMETER3_CHANNEL) {
                sprintf(transmit_buffer,"Read trimpot 3: %.2f\r\n", output_avg);
            }
            DEBUG_UART_PutString(transmit_buffer);
#endif
        }

        /* Allow master to change channel */
        if (I2C_SlaveStatus() & I2C_SSTAT_WR_CMPLT) {
            // Cleans ring buffer and running average values
            while (!isCircBuffEmpty(&cb)) {
                uint16_t retval;
                dequeueCircBuff(&cb, &retval);
            }
            new_data = 0;
            Output_sum = 0;
            n = 0;
            I2C_read_buffer[0] = INVALID_SAMPLE;
            
            // Changes channel
            channel = I2C_write_buffer & CHANNEL_MASK;
            AMux_Select(channel);
            
            I2C_read_state = EMPTY_FIFO;
            I2C_SlaveClearWriteStatus();
            I2C_SlaveClearWriteBuf();
            
#ifdef DEBUG_MODE   
            sprintf(transmit_buffer,"I2C slave write: 0x%02x\r\n", I2C_write_buffer);
            DEBUG_UART_PutString(transmit_buffer);
#endif
        }
        
        /* Allow master to read */
        if (I2C_SlaveStatus() & I2C_SSTAT_RD_CMPLT) {
            uint16_t readcount = I2C_SlaveGetReadBufSize();
            if (readcount > 1) {
                if (dequeueCircBuff(&cb, (uint16_t *)&I2C_read_buffer[1])) {
                    I2C_read_state = BUFFER;
                    I2C_read_buffer[0] = VALID_SAMPLE;
                } else {
                    I2C_read_state = EMPTY_FIFO;
                    I2C_read_buffer[0] = INVALID_SAMPLE;
                }
            }
            I2C_SlaveClearReadStatus();
            I2C_SlaveClearReadBuf();
            
#ifdef DEBUG_MODE   
            sprintf(transmit_buffer,"I2C slave read(%d): 0x%02x 0x%02x\r\n", readcount, I2C_read_buffer[1], I2C_read_buffer[2]);
            DEBUG_UART_PutString(transmit_buffer);
#endif 
        }
    }
}

/*******************************************************************************
* Function Name: floatToUint16
********************************************************************************
*
* Summary:
*   Converts float value to uint16_t
*
* Parameters:  
*   value:        input       float value that is converted
*
* Return:
*   result:       output      uint16_t of input value
*
*******************************************************************************/
uint16_t floatToUint16(float value) {
    uint16_t result = (uint16_t)value; // truncate
    return result;
}

/*******************************************************************************
* Function Name: MyADCIsr         ADC Interrupt Service Routine
********************************************************************************
*
* Summary:
*   Reads and adds data to a running average variable, and increments counter
*   by one.
*   Resets running average variables and sets flag new_data when MAX_AVG_SAMPLES
*   is exceeded.
*
* Parameters:  
*   None
*
* Return:
*   None
*
*******************************************************************************/
CY_ISR(MyADCIsr) {
    //uint16_t Output = ADC_DelSig_GetResult16();                                  // For normal use (raw data)
    uint16_t Output = ADC_DelSig_CountsTo_mVolts(ADC_DelSig_GetResult16());        // For temp. sensor use (converts to raw data to mV)
    Output_sum += Output;
    n++;
    if (n >= MAX_AVG_SAMPLES) {
        Output_sum_copy = Output_sum;
        n_copy = n;
        Output_sum = 0;
        n =  0;
        new_data = 1;
    }
}

/* [] END OF FILE */
