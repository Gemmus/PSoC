/*******************************************************************************
* File Name: OW_Isr.h
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
#if !defined(CY_ISR_OW_Isr_H)
#define CY_ISR_OW_Isr_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void OW_Isr_Start(void);
void OW_Isr_StartEx(cyisraddress address);
void OW_Isr_Stop(void);

CY_ISR_PROTO(OW_Isr_Interrupt);

void OW_Isr_SetVector(cyisraddress address);
cyisraddress OW_Isr_GetVector(void);

void OW_Isr_SetPriority(uint8 priority);
uint8 OW_Isr_GetPriority(void);

void OW_Isr_Enable(void);
uint8 OW_Isr_GetState(void);
void OW_Isr_Disable(void);

void OW_Isr_SetPending(void);
void OW_Isr_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the OW_Isr ISR. */
#define OW_Isr_INTC_VECTOR            ((reg32 *) OW_Isr__INTC_VECT)

/* Address of the OW_Isr ISR priority. */
#define OW_Isr_INTC_PRIOR             ((reg8 *) OW_Isr__INTC_PRIOR_REG)

/* Priority of the OW_Isr interrupt. */
#define OW_Isr_INTC_PRIOR_NUMBER      OW_Isr__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable OW_Isr interrupt. */
#define OW_Isr_INTC_SET_EN            ((reg32 *) OW_Isr__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the OW_Isr interrupt. */
#define OW_Isr_INTC_CLR_EN            ((reg32 *) OW_Isr__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the OW_Isr interrupt state to pending. */
#define OW_Isr_INTC_SET_PD            ((reg32 *) OW_Isr__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the OW_Isr interrupt. */
#define OW_Isr_INTC_CLR_PD            ((reg32 *) OW_Isr__INTC_CLR_PD_REG)


#endif /* CY_ISR_OW_Isr_H */


/* [] END OF FILE */
