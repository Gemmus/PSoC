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

#include <stdio.h>
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    volatile uint16 sSPIval;
    float32 SPI_temp;
    char buffer[30];
    
    UART_Start();
    SPI_Start();

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    UART_PutString("COM Port Open\r\n");
    
    for(;;)
    {
        sSPIval = 0x0000;
        //CyGlobalIntDisable;
        SPI_WriteTxData(sSPIval);
        CyDelay(10);
        sSPIval = SPI_ReadRxData();
        sSPIval = (sSPIval >> 1) & 0x0fff;
        //CyGlobalIntEnable;
        
        SPI_temp = (float)sSPIval / 10;
        sprintf(buffer, "Value: %d, Temp: %.1f \r\n", sSPIval, SPI_temp);
        UART_PutString(buffer);
    }
}

/* [] END OF FILE */
