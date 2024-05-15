/*******************************************************************************
* File Name: Potentiometer3_Pin26.h  
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

#if !defined(CY_PINS_Potentiometer3_Pin26_H) /* Pins Potentiometer3_Pin26_H */
#define CY_PINS_Potentiometer3_Pin26_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Potentiometer3_Pin26_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Potentiometer3_Pin26__PORT == 15 && ((Potentiometer3_Pin26__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Potentiometer3_Pin26_Write(uint8 value);
void    Potentiometer3_Pin26_SetDriveMode(uint8 mode);
uint8   Potentiometer3_Pin26_ReadDataReg(void);
uint8   Potentiometer3_Pin26_Read(void);
void    Potentiometer3_Pin26_SetInterruptMode(uint16 position, uint16 mode);
uint8   Potentiometer3_Pin26_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Potentiometer3_Pin26_SetDriveMode() function.
     *  @{
     */
        #define Potentiometer3_Pin26_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Potentiometer3_Pin26_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Potentiometer3_Pin26_DM_RES_UP          PIN_DM_RES_UP
        #define Potentiometer3_Pin26_DM_RES_DWN         PIN_DM_RES_DWN
        #define Potentiometer3_Pin26_DM_OD_LO           PIN_DM_OD_LO
        #define Potentiometer3_Pin26_DM_OD_HI           PIN_DM_OD_HI
        #define Potentiometer3_Pin26_DM_STRONG          PIN_DM_STRONG
        #define Potentiometer3_Pin26_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Potentiometer3_Pin26_MASK               Potentiometer3_Pin26__MASK
#define Potentiometer3_Pin26_SHIFT              Potentiometer3_Pin26__SHIFT
#define Potentiometer3_Pin26_WIDTH              1u

/* Interrupt constants */
#if defined(Potentiometer3_Pin26__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Potentiometer3_Pin26_SetInterruptMode() function.
     *  @{
     */
        #define Potentiometer3_Pin26_INTR_NONE      (uint16)(0x0000u)
        #define Potentiometer3_Pin26_INTR_RISING    (uint16)(0x0001u)
        #define Potentiometer3_Pin26_INTR_FALLING   (uint16)(0x0002u)
        #define Potentiometer3_Pin26_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Potentiometer3_Pin26_INTR_MASK      (0x01u) 
#endif /* (Potentiometer3_Pin26__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Potentiometer3_Pin26_PS                     (* (reg8 *) Potentiometer3_Pin26__PS)
/* Data Register */
#define Potentiometer3_Pin26_DR                     (* (reg8 *) Potentiometer3_Pin26__DR)
/* Port Number */
#define Potentiometer3_Pin26_PRT_NUM                (* (reg8 *) Potentiometer3_Pin26__PRT) 
/* Connect to Analog Globals */                                                  
#define Potentiometer3_Pin26_AG                     (* (reg8 *) Potentiometer3_Pin26__AG)                       
/* Analog MUX bux enable */
#define Potentiometer3_Pin26_AMUX                   (* (reg8 *) Potentiometer3_Pin26__AMUX) 
/* Bidirectional Enable */                                                        
#define Potentiometer3_Pin26_BIE                    (* (reg8 *) Potentiometer3_Pin26__BIE)
/* Bit-mask for Aliased Register Access */
#define Potentiometer3_Pin26_BIT_MASK               (* (reg8 *) Potentiometer3_Pin26__BIT_MASK)
/* Bypass Enable */
#define Potentiometer3_Pin26_BYP                    (* (reg8 *) Potentiometer3_Pin26__BYP)
/* Port wide control signals */                                                   
#define Potentiometer3_Pin26_CTL                    (* (reg8 *) Potentiometer3_Pin26__CTL)
/* Drive Modes */
#define Potentiometer3_Pin26_DM0                    (* (reg8 *) Potentiometer3_Pin26__DM0) 
#define Potentiometer3_Pin26_DM1                    (* (reg8 *) Potentiometer3_Pin26__DM1)
#define Potentiometer3_Pin26_DM2                    (* (reg8 *) Potentiometer3_Pin26__DM2) 
/* Input Buffer Disable Override */
#define Potentiometer3_Pin26_INP_DIS                (* (reg8 *) Potentiometer3_Pin26__INP_DIS)
/* LCD Common or Segment Drive */
#define Potentiometer3_Pin26_LCD_COM_SEG            (* (reg8 *) Potentiometer3_Pin26__LCD_COM_SEG)
/* Enable Segment LCD */
#define Potentiometer3_Pin26_LCD_EN                 (* (reg8 *) Potentiometer3_Pin26__LCD_EN)
/* Slew Rate Control */
#define Potentiometer3_Pin26_SLW                    (* (reg8 *) Potentiometer3_Pin26__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Potentiometer3_Pin26_PRTDSI__CAPS_SEL       (* (reg8 *) Potentiometer3_Pin26__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Potentiometer3_Pin26_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Potentiometer3_Pin26__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Potentiometer3_Pin26_PRTDSI__OE_SEL0        (* (reg8 *) Potentiometer3_Pin26__PRTDSI__OE_SEL0) 
#define Potentiometer3_Pin26_PRTDSI__OE_SEL1        (* (reg8 *) Potentiometer3_Pin26__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Potentiometer3_Pin26_PRTDSI__OUT_SEL0       (* (reg8 *) Potentiometer3_Pin26__PRTDSI__OUT_SEL0) 
#define Potentiometer3_Pin26_PRTDSI__OUT_SEL1       (* (reg8 *) Potentiometer3_Pin26__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Potentiometer3_Pin26_PRTDSI__SYNC_OUT       (* (reg8 *) Potentiometer3_Pin26__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Potentiometer3_Pin26__SIO_CFG)
    #define Potentiometer3_Pin26_SIO_HYST_EN        (* (reg8 *) Potentiometer3_Pin26__SIO_HYST_EN)
    #define Potentiometer3_Pin26_SIO_REG_HIFREQ     (* (reg8 *) Potentiometer3_Pin26__SIO_REG_HIFREQ)
    #define Potentiometer3_Pin26_SIO_CFG            (* (reg8 *) Potentiometer3_Pin26__SIO_CFG)
    #define Potentiometer3_Pin26_SIO_DIFF           (* (reg8 *) Potentiometer3_Pin26__SIO_DIFF)
#endif /* (Potentiometer3_Pin26__SIO_CFG) */

/* Interrupt Registers */
#if defined(Potentiometer3_Pin26__INTSTAT)
    #define Potentiometer3_Pin26_INTSTAT            (* (reg8 *) Potentiometer3_Pin26__INTSTAT)
    #define Potentiometer3_Pin26_SNAP               (* (reg8 *) Potentiometer3_Pin26__SNAP)
    
	#define Potentiometer3_Pin26_0_INTTYPE_REG 		(* (reg8 *) Potentiometer3_Pin26__0__INTTYPE)
#endif /* (Potentiometer3_Pin26__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Potentiometer3_Pin26_H */


/* [] END OF FILE */
