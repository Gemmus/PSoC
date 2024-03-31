/* ================================================================
 *
 * Copyright: Gemma Qin,  Metropolia UAS, Finland, 2024
 *
 * PSoC Design Course 2024: Exercise 4, SPI & I2C
 *
 * Connect digital temperature sensors to PSoC via I2C and SPI, 
 * and transfer the data to computer via UART. 
 *
 * ================================================================
*/

#include <project.h>
#include "stdio.h"

/* Project Defines */
#define TRANSMIT_BUFFER_SIZE 64

/* Global variables */
// Flag for data transmission:
volatile uint8 new_data = 0;   

// Running average related variables:
uint32 Vout_sum = 0;
uint32 n = 0;
uint32 Vout_sum_isr = 0;
uint32 n_isr = 0;

// Data to be transmitted:
float32 temp = 0;
float32 Vout_average;

/* Function declarations */
void tempCalc();

/* Interrupt declarations */
CY_ISR_PROTO(MyADCIsr);
CY_ISR(MyClockIsr);

/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  Initialises components and interrupts.
*  Reads data from two temperature sensors using I2C and SPI interfaces.
*  Transmit read data via UART.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Remarks: 
*  - Specification: 
*       - UART: 12[6] RX, 12[7] TX, 115200 bps
*       - I2C: 12[0] SCL, 12[1] SDA (different from exercise description, 
*              followed datasheet recommendation), I2C_CLK 800kHz
*       - SPI: 12[3] SS, 12[4] MISO, 12[5] SCLK, SPI_CLK 1.6 MHz, 16-bit
*  - Design works without external pull up resistor, internal pull up resistor 
     of 5 kOhm resolves same matter.
*
*******************************************************************************/
int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* Local variables */
    // UART
    char transmit_buffer[TRANSMIT_BUFFER_SIZE];
    // SPI
    uint16 SPIM_value = 0x0000;
    float32 SPIM_temp;
    // I2C
    const int TC74_addr = 0x4a;
    uint8 TC74_value;
    uint8 status;

    /* Start the components and interrupts */
    UART_Start();
    SPIM_Start();
    I2C_Start();
    ADC_DelSig_Start();
    Timer_Start();
    
    ADC_Isr_StartEx(MyADCIsr);
    Clock_Isr_StartEx(MyClockIsr);

    /* Send message to verify COM port is connected properly */
    UART_PutString("COM Port Open\r\n");    
    
    /* Start the ADC conversion */
    ADC_DelSig_StartConvert();

    for(;;)
    {   
        /* When Timer Isr called */
        if (new_data) {
            /* Data acquisition from SPI, initalization */ 
            SPIM_WriteTxData(SPIM_value);

            /* Data acquisition from I2C */ 
            TC74_value = UINT8_MAX; // Error value in case it cannot read
            status = I2C_MasterSendStart(TC74_addr, I2C_WRITE_XFER_MODE);
            if ((status & I2C_MSTAT_ERR_MASK) == 0) {
                status = I2C_MasterWriteByte(0x00);
                if ((status & I2C_MSTAT_ERR_MASK) == 0) {
                    status = I2C_MasterSendRestart(TC74_addr, I2C_READ_XFER_MODE);
                    if ((status & I2C_MSTAT_ERR_MASK) == 0) {
                        TC74_value = I2C_MasterReadByte(I2C_NAK_DATA);
                    }
                }
            }
            I2C_MasterSendStop();
        
            /* Data acquisition from SPI, reading (Placed here on purpose to use I2C as delay) */ 
            SPIM_value = SPIM_ReadRxData();
            SPIM_value = (SPIM_value >> 1) & 0x0fff; // Handling received data: shift and mask
            
            /* Calculate Vout running average */
            tempCalc();
            
            /* Format data */ 
            sprintf(transmit_buffer, 
                "{ \"ADC\": %d , \"LM35\": %.1f, \"TC74\": %d, \"SPI\": %.1f }\r\n", 
                (int)Vout_average, temp, TC74_value, (float)SPIM_value/10 );     
            /* Send data to UART */
            UART_PutString(transmit_buffer);
            
            /* Clears flag */
            new_data = 0;  
        }
    }
}

/*******************************************************************************
* Function Name: tempCalc
********************************************************************************
*
* Summary:
*  Calculates the average of Vout and the temperature. 
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void tempCalc() {
    Vout_average = Vout_sum_isr / n_isr;    // Calculates running average
    temp = Vout_average / 10;   // Converts to temperature: Vout = 10mV/C * T from LM35 datasheet
    return;
}

/*******************************************************************************
* Function Name: MyADCIsr         ADC Interrupt Service Routine
********************************************************************************
*
* Summary:
*  Reads Vout data from sensor, adds to running average aand increment sampling
*  counter by one.
*
* Parameters:  
*
* Return:
*   None
*
*******************************************************************************/
CY_ISR(MyADCIsr) {
    uint32 Output = ADC_DelSig_CountsTo_mVolts(ADC_DelSig_GetResult16());
    Vout_sum += Output;
    n++;
}

/*******************************************************************************
* Function Name: MyClockIsr         Timer Interrupt Service Routine
********************************************************************************
*
* Summary:
*  Reads the control register and returns it's value.
*  Copies and resets respective parameters while ADC interrupt is disabled.
*  Sets flag to transmit information to UART.
*
* Parameters:  
*
* Return:
*   None
*
*******************************************************************************/
CY_ISR(MyClockIsr) {
    Timer_ReadStatusRegister();
    ADC_Isr_Disable();
    Vout_sum_isr = Vout_sum;
    n_isr = n;
    Vout_sum = 0;
    n = 0;
    ADC_Isr_Enable();
    new_data = 1;
}

/* [] END OF FILE */