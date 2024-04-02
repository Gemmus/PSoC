/*******************************************************************************
* File Name: Clock_Isr.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_Clock_Isr_H)
#define CY_ISR_Clock_Isr_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void Clock_Isr_Start(void);
void Clock_Isr_StartEx(cyisraddress address);
void Clock_Isr_Stop(void);

CY_ISR_PROTO(Clock_Isr_Interrupt);

void Clock_Isr_SetVector(cyisraddress address);
cyisraddress Clock_Isr_GetVector(void);

void Clock_Isr_SetPriority(uint8 priority);
uint8 Clock_Isr_GetPriority(void);

void Clock_Isr_Enable(void);
uint8 Clock_Isr_GetState(void);
void Clock_Isr_Disable(void);

void Clock_Isr_SetPending(void);
void Clock_Isr_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the Clock_Isr ISR. */
#define Clock_Isr_INTC_VECTOR            ((reg32 *) Clock_Isr__INTC_VECT)

/* Address of the Clock_Isr ISR priority. */
#define Clock_Isr_INTC_PRIOR             ((reg8 *) Clock_Isr__INTC_PRIOR_REG)

/* Priority of the Clock_Isr interrupt. */
#define Clock_Isr_INTC_PRIOR_NUMBER      Clock_Isr__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable Clock_Isr interrupt. */
#define Clock_Isr_INTC_SET_EN            ((reg32 *) Clock_Isr__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the Clock_Isr interrupt. */
#define Clock_Isr_INTC_CLR_EN            ((reg32 *) Clock_Isr__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the Clock_Isr interrupt state to pending. */
#define Clock_Isr_INTC_SET_PD            ((reg32 *) Clock_Isr__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the Clock_Isr interrupt. */
#define Clock_Isr_INTC_CLR_PD            ((reg32 *) Clock_Isr__INTC_CLR_PD_REG)


#endif /* CY_ISR_Clock_Isr_H */


/* [] END OF FILE */
