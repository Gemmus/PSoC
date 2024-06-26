/*******************************************************************************
* File Name: ADC_Isr.h
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
#if !defined(CY_ISR_ADC_Isr_H)
#define CY_ISR_ADC_Isr_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void ADC_Isr_Start(void);
void ADC_Isr_StartEx(cyisraddress address);
void ADC_Isr_Stop(void);

CY_ISR_PROTO(ADC_Isr_Interrupt);

void ADC_Isr_SetVector(cyisraddress address);
cyisraddress ADC_Isr_GetVector(void);

void ADC_Isr_SetPriority(uint8 priority);
uint8 ADC_Isr_GetPriority(void);

void ADC_Isr_Enable(void);
uint8 ADC_Isr_GetState(void);
void ADC_Isr_Disable(void);

void ADC_Isr_SetPending(void);
void ADC_Isr_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the ADC_Isr ISR. */
#define ADC_Isr_INTC_VECTOR            ((reg32 *) ADC_Isr__INTC_VECT)

/* Address of the ADC_Isr ISR priority. */
#define ADC_Isr_INTC_PRIOR             ((reg8 *) ADC_Isr__INTC_PRIOR_REG)

/* Priority of the ADC_Isr interrupt. */
#define ADC_Isr_INTC_PRIOR_NUMBER      ADC_Isr__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable ADC_Isr interrupt. */
#define ADC_Isr_INTC_SET_EN            ((reg32 *) ADC_Isr__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the ADC_Isr interrupt. */
#define ADC_Isr_INTC_CLR_EN            ((reg32 *) ADC_Isr__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the ADC_Isr interrupt state to pending. */
#define ADC_Isr_INTC_SET_PD            ((reg32 *) ADC_Isr__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the ADC_Isr interrupt. */
#define ADC_Isr_INTC_CLR_PD            ((reg32 *) ADC_Isr__INTC_CLR_PD_REG)


#endif /* CY_ISR_ADC_Isr_H */


/* [] END OF FILE */
