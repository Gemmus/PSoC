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

/* Interrupt declarations */
CY_ISR_PROTO(MyADCIsr);

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

    /* Start the components and interrupts */
    DEBUG_UART_Start();
    ADC_DelSig_Start();
    AMux_Start();
    
    ADC_ISR_StartEx(MyADCIsr);
    
    /* Send message to verify COM port is connected properly */
    DEBUG_UART_PutString("COM Port Open\r\n");  
    
    /* Start the ADC conversion */
    ADC_DelSig_StartConvert();
    
    for(;;)
    {
        /* A little put put here. */
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
    uint32 Output = ADC_DelSig_CountsTo_mVolts(ADC_DelSig_GetResult16());
}