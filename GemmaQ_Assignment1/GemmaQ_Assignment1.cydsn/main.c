/* ========================================
 *
 * Copyright Gemma Qin, Metropolia UAS, Finland, 2024
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CC-NA-SA 4.0
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)  /* Forever loop */
    {
        /* Place your application code here. */
        LED1_Write(1);
        CyDelay(200); 
        LED1_Write(0);
        CyDelay(800);
    }
}

/* [] END OF FILE */
