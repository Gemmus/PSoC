/* ========================================
 *
 * Copyright: Gemma Qin, Metropolia UAS, Finland, 2024
 * 
 * PSoC Design Course 2024: Project 
 *
 * Project Description: 
 * 
 *
 * ========================================
*/

/*  Libraries  */
#include "project.h"
#include "stdio.h"
#include "ring_buffer.h"

/* Project Defines */
#define TRANSMIT_BUFFER_SIZE 128
#define MAX_AVG_SAMPLES 1158

/* Interrupt declarations */
CY_ISR_PROTO(MyADCIsr);

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
*  
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
*       - I2C Slave: 12[0] SCL, 12[1] SDA, I2C_CLK 6 MHz
*       - ADC_DelSig: 
*               - AMux: 4 channels (2[3] Potentiometer, 2[4] LM35, 2[5] , 2[6] )
*               - ADC_Clock 3 MHz
*               - ADC_ISR
*  - Design works with internal pull up resistor of 5 kOhm.
*
*******************************************************************************/
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Local variables */
    // UART
    char transmit_buffer[TRANSMIT_BUFFER_SIZE];
    // I2C
    const uint8_t channel = 1;   // 0: potentiometer, 1: LM35, 2: Vcc, 3: GND

    /* Start the components and interrupts */
    DEBUG_UART_Start();
    ADC_DelSig_Start();
    AMux_Start();
    
    AMux_Select(channel);
    ADC_ISR_StartEx(MyADCIsr);
    
    /* Send message to verify COM port is connected properly */
    DEBUG_UART_PutString("COM Port Open\r\n");  
    
    /* Start the ADC conversion */
    ADC_DelSig_StartConvert();
    
    for(;;)
    {
        if (new_data) {
            float output_avg = Output_sum_copy / n_copy;
            if (channel == 1) {
            float temp = output_avg / 10;
            sprintf(transmit_buffer,"Temp: %.1f C\r\n", temp);
        } else {
            sprintf(transmit_buffer,"Read: %.2f\r\n", output_avg);
        }
        DEBUG_UART_PutString(transmit_buffer);
        }
    }
}

/* [] END OF FILE */

/*******************************************************************************
* Function Name: MyADCIsr         ADC Interrupt Service Routine
********************************************************************************
*
* Summary:
*  
*
* Parameters:  
*
* Return:
*   None
*
*******************************************************************************/
CY_ISR(MyADCIsr) {
    uint16_t Output = ADC_DelSig_CountsTo_mVolts(ADC_DelSig_GetResult16());
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