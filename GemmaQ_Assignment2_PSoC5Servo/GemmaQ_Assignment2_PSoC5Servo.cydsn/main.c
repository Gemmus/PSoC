/* ================================================================
 *
 * Copyright: Gemma Qin,  Metropolia UAS, Finland, 2024
 *
 * PSoC Design Course 2024: Exercise 2, Timers and Interrupts
 *
 * Turn servo to different angle when button is pressed.
 *
 * ================================================================
*/

#include <stdio.h>
#include <string.h>
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
   
    UART_Start();
    UART_PutString(str);

    for(;;)  /* Forever loop */
    {

    }
}

/* [] END OF FILE */
