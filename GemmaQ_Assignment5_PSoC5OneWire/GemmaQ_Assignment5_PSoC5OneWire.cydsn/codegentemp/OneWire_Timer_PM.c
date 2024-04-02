/*******************************************************************************
* File Name: OneWire_Timer_PM.c
* Version 2.80
*
*  Description:
*     This file provides the power management source code to API for the
*     Timer.
*
*   Note:
*     None
*
*******************************************************************************
* Copyright 2008-2017, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
********************************************************************************/

#include "OneWire_Timer.h"

static OneWire_Timer_backupStruct OneWire_Timer_backup;


/*******************************************************************************
* Function Name: OneWire_Timer_SaveConfig
********************************************************************************
*
* Summary:
*     Save the current user configuration
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  OneWire_Timer_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void OneWire_Timer_SaveConfig(void) 
{
    #if (!OneWire_Timer_UsingFixedFunction)
        OneWire_Timer_backup.TimerUdb = OneWire_Timer_ReadCounter();
        OneWire_Timer_backup.InterruptMaskValue = OneWire_Timer_STATUS_MASK;
        #if (OneWire_Timer_UsingHWCaptureCounter)
            OneWire_Timer_backup.TimerCaptureCounter = OneWire_Timer_ReadCaptureCount();
        #endif /* Back Up capture counter register  */

        #if(!OneWire_Timer_UDB_CONTROL_REG_REMOVED)
            OneWire_Timer_backup.TimerControlRegister = OneWire_Timer_ReadControlRegister();
        #endif /* Backup the enable state of the Timer component */
    #endif /* Backup non retention registers in UDB implementation. All fixed function registers are retention */
}


/*******************************************************************************
* Function Name: OneWire_Timer_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  OneWire_Timer_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void OneWire_Timer_RestoreConfig(void) 
{   
    #if (!OneWire_Timer_UsingFixedFunction)

        OneWire_Timer_WriteCounter(OneWire_Timer_backup.TimerUdb);
        OneWire_Timer_STATUS_MASK =OneWire_Timer_backup.InterruptMaskValue;
        #if (OneWire_Timer_UsingHWCaptureCounter)
            OneWire_Timer_SetCaptureCount(OneWire_Timer_backup.TimerCaptureCounter);
        #endif /* Restore Capture counter register*/

        #if(!OneWire_Timer_UDB_CONTROL_REG_REMOVED)
            OneWire_Timer_WriteControlRegister(OneWire_Timer_backup.TimerControlRegister);
        #endif /* Restore the enable state of the Timer component */
    #endif /* Restore non retention registers in the UDB implementation only */
}


/*******************************************************************************
* Function Name: OneWire_Timer_Sleep
********************************************************************************
*
* Summary:
*     Stop and Save the user configuration
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  OneWire_Timer_backup.TimerEnableState:  Is modified depending on the
*  enable state of the block before entering sleep mode.
*
*******************************************************************************/
void OneWire_Timer_Sleep(void) 
{
    #if(!OneWire_Timer_UDB_CONTROL_REG_REMOVED)
        /* Save Counter's enable state */
        if(OneWire_Timer_CTRL_ENABLE == (OneWire_Timer_CONTROL & OneWire_Timer_CTRL_ENABLE))
        {
            /* Timer is enabled */
            OneWire_Timer_backup.TimerEnableState = 1u;
        }
        else
        {
            /* Timer is disabled */
            OneWire_Timer_backup.TimerEnableState = 0u;
        }
    #endif /* Back up enable state from the Timer control register */
    OneWire_Timer_Stop();
    OneWire_Timer_SaveConfig();
}


/*******************************************************************************
* Function Name: OneWire_Timer_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  OneWire_Timer_backup.enableState:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void OneWire_Timer_Wakeup(void) 
{
    OneWire_Timer_RestoreConfig();
    #if(!OneWire_Timer_UDB_CONTROL_REG_REMOVED)
        if(OneWire_Timer_backup.TimerEnableState == 1u)
        {     /* Enable Timer's operation */
                OneWire_Timer_Enable();
        } /* Do nothing if Timer was disabled before */
    #endif /* Remove this code section if Control register is removed */
}


/* [] END OF FILE */
