/*******************************************************************************
* File Name: Pin26.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Pin26_H) /* Pins Pin26_H */
#define CY_PINS_Pin26_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pin26_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Pin26__PORT == 15 && ((Pin26__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Pin26_Write(uint8 value);
void    Pin26_SetDriveMode(uint8 mode);
uint8   Pin26_ReadDataReg(void);
uint8   Pin26_Read(void);
void    Pin26_SetInterruptMode(uint16 position, uint16 mode);
uint8   Pin26_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Pin26_SetDriveMode() function.
     *  @{
     */
        #define Pin26_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Pin26_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Pin26_DM_RES_UP          PIN_DM_RES_UP
        #define Pin26_DM_RES_DWN         PIN_DM_RES_DWN
        #define Pin26_DM_OD_LO           PIN_DM_OD_LO
        #define Pin26_DM_OD_HI           PIN_DM_OD_HI
        #define Pin26_DM_STRONG          PIN_DM_STRONG
        #define Pin26_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Pin26_MASK               Pin26__MASK
#define Pin26_SHIFT              Pin26__SHIFT
#define Pin26_WIDTH              1u

/* Interrupt constants */
#if defined(Pin26__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Pin26_SetInterruptMode() function.
     *  @{
     */
        #define Pin26_INTR_NONE      (uint16)(0x0000u)
        #define Pin26_INTR_RISING    (uint16)(0x0001u)
        #define Pin26_INTR_FALLING   (uint16)(0x0002u)
        #define Pin26_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Pin26_INTR_MASK      (0x01u) 
#endif /* (Pin26__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin26_PS                     (* (reg8 *) Pin26__PS)
/* Data Register */
#define Pin26_DR                     (* (reg8 *) Pin26__DR)
/* Port Number */
#define Pin26_PRT_NUM                (* (reg8 *) Pin26__PRT) 
/* Connect to Analog Globals */                                                  
#define Pin26_AG                     (* (reg8 *) Pin26__AG)                       
/* Analog MUX bux enable */
#define Pin26_AMUX                   (* (reg8 *) Pin26__AMUX) 
/* Bidirectional Enable */                                                        
#define Pin26_BIE                    (* (reg8 *) Pin26__BIE)
/* Bit-mask for Aliased Register Access */
#define Pin26_BIT_MASK               (* (reg8 *) Pin26__BIT_MASK)
/* Bypass Enable */
#define Pin26_BYP                    (* (reg8 *) Pin26__BYP)
/* Port wide control signals */                                                   
#define Pin26_CTL                    (* (reg8 *) Pin26__CTL)
/* Drive Modes */
#define Pin26_DM0                    (* (reg8 *) Pin26__DM0) 
#define Pin26_DM1                    (* (reg8 *) Pin26__DM1)
#define Pin26_DM2                    (* (reg8 *) Pin26__DM2) 
/* Input Buffer Disable Override */
#define Pin26_INP_DIS                (* (reg8 *) Pin26__INP_DIS)
/* LCD Common or Segment Drive */
#define Pin26_LCD_COM_SEG            (* (reg8 *) Pin26__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pin26_LCD_EN                 (* (reg8 *) Pin26__LCD_EN)
/* Slew Rate Control */
#define Pin26_SLW                    (* (reg8 *) Pin26__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pin26_PRTDSI__CAPS_SEL       (* (reg8 *) Pin26__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pin26_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pin26__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pin26_PRTDSI__OE_SEL0        (* (reg8 *) Pin26__PRTDSI__OE_SEL0) 
#define Pin26_PRTDSI__OE_SEL1        (* (reg8 *) Pin26__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pin26_PRTDSI__OUT_SEL0       (* (reg8 *) Pin26__PRTDSI__OUT_SEL0) 
#define Pin26_PRTDSI__OUT_SEL1       (* (reg8 *) Pin26__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pin26_PRTDSI__SYNC_OUT       (* (reg8 *) Pin26__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Pin26__SIO_CFG)
    #define Pin26_SIO_HYST_EN        (* (reg8 *) Pin26__SIO_HYST_EN)
    #define Pin26_SIO_REG_HIFREQ     (* (reg8 *) Pin26__SIO_REG_HIFREQ)
    #define Pin26_SIO_CFG            (* (reg8 *) Pin26__SIO_CFG)
    #define Pin26_SIO_DIFF           (* (reg8 *) Pin26__SIO_DIFF)
#endif /* (Pin26__SIO_CFG) */

/* Interrupt Registers */
#if defined(Pin26__INTSTAT)
    #define Pin26_INTSTAT            (* (reg8 *) Pin26__INTSTAT)
    #define Pin26_SNAP               (* (reg8 *) Pin26__SNAP)
    
	#define Pin26_0_INTTYPE_REG 		(* (reg8 *) Pin26__0__INTTYPE)
#endif /* (Pin26__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Pin26_H */


/* [] END OF FILE */
