/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#define ON 1
#define OFF 0

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    Button_isr_Start();
    UART_Start();
    //char isr_text[20] = {"Interrupt event!\r\n"};
    
    UART_PutString("Hello!\r\n");
    
    for(;;)
    {
        /* Place your application code here. */
        BlueLED_Write(ON);
    }
}

/* [] END OF FILE */
