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
#include <stdio.h>

int main(void)
{
    const int TC74addr = 0x4a;
    uint16 sI2Cval = 0x0000;
    uint8 status;
    char buffer[32];

//    CyGlobalIntEnable; /* Enable global interrupts. */

    UART_Start();
    I2C_Start();
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    UART_PutString("COM Port Open\r\n");
    
    for(;;)
    {
        /* Place your application code here. */
#if 0
        SCL_1_SetDriveMode(PIN_DM_OD_LO);
        SDA_1_SetDriveMode(PIN_DM_OD_LO);
        SCL_1_BYP = 0;
        SDA_1_BYP = 0;
        SCL_1_Write(1);
        SDA_1_Write(1);
        CyDelay(1);
        SCL_1_Write(0);
        SDA_1_Write(0);
        CyDelay(1);
        SCL_1_Write(1);
        SDA_1_Write(1);
        SCL_1_BYP = 1;
        SDA_1_BYP = 1;
#endif
        status = I2C_MasterSendStart(TC74addr, I2C_WRITE_XFER_MODE);
        status = I2C_MasterWriteByte(0x00);
        status = I2C_MasterSendRestart(TC74addr, I2C_READ_XFER_MODE);
        sI2Cval = I2C_MasterReadByte(I2C_NAK_DATA);
        status = I2C_MasterSendStop();
        sprintf(buffer, "status: %d, data: %d\r\n", status, sI2Cval);
        UART_PutString(buffer);
        CyDelay(100);
    }
}

/* [] END OF FILE */
