/*******************************************************************************
* File Name: BlueLED.h  
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

#if !defined(CY_PINS_BlueLED_H) /* Pins BlueLED_H */
#define CY_PINS_BlueLED_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "BlueLED_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 BlueLED__PORT == 15 && ((BlueLED__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    BlueLED_Write(uint8 value);
void    BlueLED_SetDriveMode(uint8 mode);
uint8   BlueLED_ReadDataReg(void);
uint8   BlueLED_Read(void);
void    BlueLED_SetInterruptMode(uint16 position, uint16 mode);
uint8   BlueLED_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the BlueLED_SetDriveMode() function.
     *  @{
     */
        #define BlueLED_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define BlueLED_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define BlueLED_DM_RES_UP          PIN_DM_RES_UP
        #define BlueLED_DM_RES_DWN         PIN_DM_RES_DWN
        #define BlueLED_DM_OD_LO           PIN_DM_OD_LO
        #define BlueLED_DM_OD_HI           PIN_DM_OD_HI
        #define BlueLED_DM_STRONG          PIN_DM_STRONG
        #define BlueLED_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define BlueLED_MASK               BlueLED__MASK
#define BlueLED_SHIFT              BlueLED__SHIFT
#define BlueLED_WIDTH              1u

/* Interrupt constants */
#if defined(BlueLED__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in BlueLED_SetInterruptMode() function.
     *  @{
     */
        #define BlueLED_INTR_NONE      (uint16)(0x0000u)
        #define BlueLED_INTR_RISING    (uint16)(0x0001u)
        #define BlueLED_INTR_FALLING   (uint16)(0x0002u)
        #define BlueLED_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define BlueLED_INTR_MASK      (0x01u) 
#endif /* (BlueLED__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define BlueLED_PS                     (* (reg8 *) BlueLED__PS)
/* Data Register */
#define BlueLED_DR                     (* (reg8 *) BlueLED__DR)
/* Port Number */
#define BlueLED_PRT_NUM                (* (reg8 *) BlueLED__PRT) 
/* Connect to Analog Globals */                                                  
#define BlueLED_AG                     (* (reg8 *) BlueLED__AG)                       
/* Analog MUX bux enable */
#define BlueLED_AMUX                   (* (reg8 *) BlueLED__AMUX) 
/* Bidirectional Enable */                                                        
#define BlueLED_BIE                    (* (reg8 *) BlueLED__BIE)
/* Bit-mask for Aliased Register Access */
#define BlueLED_BIT_MASK               (* (reg8 *) BlueLED__BIT_MASK)
/* Bypass Enable */
#define BlueLED_BYP                    (* (reg8 *) BlueLED__BYP)
/* Port wide control signals */                                                   
#define BlueLED_CTL                    (* (reg8 *) BlueLED__CTL)
/* Drive Modes */
#define BlueLED_DM0                    (* (reg8 *) BlueLED__DM0) 
#define BlueLED_DM1                    (* (reg8 *) BlueLED__DM1)
#define BlueLED_DM2                    (* (reg8 *) BlueLED__DM2) 
/* Input Buffer Disable Override */
#define BlueLED_INP_DIS                (* (reg8 *) BlueLED__INP_DIS)
/* LCD Common or Segment Drive */
#define BlueLED_LCD_COM_SEG            (* (reg8 *) BlueLED__LCD_COM_SEG)
/* Enable Segment LCD */
#define BlueLED_LCD_EN                 (* (reg8 *) BlueLED__LCD_EN)
/* Slew Rate Control */
#define BlueLED_SLW                    (* (reg8 *) BlueLED__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define BlueLED_PRTDSI__CAPS_SEL       (* (reg8 *) BlueLED__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define BlueLED_PRTDSI__DBL_SYNC_IN    (* (reg8 *) BlueLED__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define BlueLED_PRTDSI__OE_SEL0        (* (reg8 *) BlueLED__PRTDSI__OE_SEL0) 
#define BlueLED_PRTDSI__OE_SEL1        (* (reg8 *) BlueLED__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define BlueLED_PRTDSI__OUT_SEL0       (* (reg8 *) BlueLED__PRTDSI__OUT_SEL0) 
#define BlueLED_PRTDSI__OUT_SEL1       (* (reg8 *) BlueLED__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define BlueLED_PRTDSI__SYNC_OUT       (* (reg8 *) BlueLED__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(BlueLED__SIO_CFG)
    #define BlueLED_SIO_HYST_EN        (* (reg8 *) BlueLED__SIO_HYST_EN)
    #define BlueLED_SIO_REG_HIFREQ     (* (reg8 *) BlueLED__SIO_REG_HIFREQ)
    #define BlueLED_SIO_CFG            (* (reg8 *) BlueLED__SIO_CFG)
    #define BlueLED_SIO_DIFF           (* (reg8 *) BlueLED__SIO_DIFF)
#endif /* (BlueLED__SIO_CFG) */

/* Interrupt Registers */
#if defined(BlueLED__INTSTAT)
    #define BlueLED_INTSTAT            (* (reg8 *) BlueLED__INTSTAT)
    #define BlueLED_SNAP               (* (reg8 *) BlueLED__SNAP)
    
	#define BlueLED_0_INTTYPE_REG 		(* (reg8 *) BlueLED__0__INTTYPE)
#endif /* (BlueLED__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_BlueLED_H */


/* [] END OF FILE */
