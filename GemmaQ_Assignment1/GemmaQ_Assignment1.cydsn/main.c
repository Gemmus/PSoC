/* ================================================================
 *
 * Copyright: Gemma Qin,  Metropolia UAS, Finland, 2024
 *
 * PSoC Design Course 2024: Exercise 1, Fundamentals
 *
 * Blinks LED at rate about 1 sec when button is pressed.
 *
 * ================================================================
*/

#include <stdio.h>
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
  
    /* Variables */
    uint8 counter = 0;
    char str[20] = {"Gemma Qin\r\n"}; /* \r: ASCII 13, \n: ASCII 10 */
    
    /* Initialisation of components*/
    UART_Start();

    /* UART transmission of string */
    UART_PutString(str);
    
    for(;;)  /* Forever loop */
    {
        /* Blinks blue LED if button pressed and increments blink counter */
        if (!Button_Read()) {
            LED1_Write(counter++ % 2);
            if (counter % 2 == 0) {
                CyDelay(200);   // 200 ms ON
            } else {
                CyDelay(800);   // 800 ms OFF 
            }
        }
        /* Reads char from UART and transmits blink counter */ 
        if (UART_GetChar()) {
            sprintf(str, "%d\r\n", counter);
            UART_PutString(str);
            CyDelay(1000);
        }
    }
}

/* [] END OF FILE */
