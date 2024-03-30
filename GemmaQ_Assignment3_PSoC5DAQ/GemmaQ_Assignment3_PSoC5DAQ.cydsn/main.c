/* ================================================================
 *
 * Copyright: Gemma Qin,  Metropolia UAS, Finland, 2024
 *
 * PSoC Design Course 2024: Exercise 3, DAQ
 *
 * Collect temperature data from a sensor. 
 *
 * ================================================================
*/

#include <project.h>
#include "stdio.h"

/* Project Defines */
#define TRANSMIT_BUFFER_SIZE  16

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
void sendDataAsJson();

/* Interrupt declarations */
CY_ISR_PROTO(MyADCIsr);
CY_ISR(MyClockIsr);

/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  Initialises components and interrupts.
*  If flag is set, transmit respective information to UART, then clears flag.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Start the components and interrupts */
    ADC_DelSig_1_Start();
    UART_1_Start();
    Timer_Start();

    ADC_Isr_StartEx(MyADCIsr);
    Clock_Isr_StartEx(MyClockIsr);

    /* Send message to verify COM port is connected properly */
    UART_1_PutString("COM Port Open\r\n");

    /* Start the ADC conversion */
    ADC_DelSig_1_StartConvert();

    for(;;)
    {   
        if (new_data) {
            tempCalc();
            sendDataAsJson();
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
* Function Name: sendDataAsJson
********************************************************************************
*
* Summary:
*  Parses data into JSON format, transmits to UART.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void sendDataAsJson() {
    char transmit_buffer[TRANSMIT_BUFFER_SIZE];
    uint16 int_Vout_ave = (int)Vout_average;
    sprintf(transmit_buffer, "{ \"ADC\": %d , \"LM35\": %.1f }\r\n", int_Vout_ave, temp);
    UART_1_PutString(transmit_buffer);
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
    uint32 Output = ADC_DelSig_1_CountsTo_mVolts(ADC_DelSig_1_GetResult16());
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
