/*******************************************************************************
* File Name: SPIM_SCLK.h  
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

#if !defined(CY_PINS_SPIM_SCLK_H) /* Pins SPIM_SCLK_H */
#define CY_PINS_SPIM_SCLK_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "SPIM_SCLK_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 SPIM_SCLK__PORT == 15 && ((SPIM_SCLK__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    SPIM_SCLK_Write(uint8 value);
void    SPIM_SCLK_SetDriveMode(uint8 mode);
uint8   SPIM_SCLK_ReadDataReg(void);
uint8   SPIM_SCLK_Read(void);
void    SPIM_SCLK_SetInterruptMode(uint16 position, uint16 mode);
uint8   SPIM_SCLK_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the SPIM_SCLK_SetDriveMode() function.
     *  @{
     */
        #define SPIM_SCLK_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define SPIM_SCLK_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define SPIM_SCLK_DM_RES_UP          PIN_DM_RES_UP
        #define SPIM_SCLK_DM_RES_DWN         PIN_DM_RES_DWN
        #define SPIM_SCLK_DM_OD_LO           PIN_DM_OD_LO
        #define SPIM_SCLK_DM_OD_HI           PIN_DM_OD_HI
        #define SPIM_SCLK_DM_STRONG          PIN_DM_STRONG
        #define SPIM_SCLK_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define SPIM_SCLK_MASK               SPIM_SCLK__MASK
#define SPIM_SCLK_SHIFT              SPIM_SCLK__SHIFT
#define SPIM_SCLK_WIDTH              1u

/* Interrupt constants */
#if defined(SPIM_SCLK__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in SPIM_SCLK_SetInterruptMode() function.
     *  @{
     */
        #define SPIM_SCLK_INTR_NONE      (uint16)(0x0000u)
        #define SPIM_SCLK_INTR_RISING    (uint16)(0x0001u)
        #define SPIM_SCLK_INTR_FALLING   (uint16)(0x0002u)
        #define SPIM_SCLK_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define SPIM_SCLK_INTR_MASK      (0x01u) 
#endif /* (SPIM_SCLK__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define SPIM_SCLK_PS                     (* (reg8 *) SPIM_SCLK__PS)
/* Data Register */
#define SPIM_SCLK_DR                     (* (reg8 *) SPIM_SCLK__DR)
/* Port Number */
#define SPIM_SCLK_PRT_NUM                (* (reg8 *) SPIM_SCLK__PRT) 
/* Connect to Analog Globals */                                                  
#define SPIM_SCLK_AG                     (* (reg8 *) SPIM_SCLK__AG)                       
/* Analog MUX bux enable */
#define SPIM_SCLK_AMUX                   (* (reg8 *) SPIM_SCLK__AMUX) 
/* Bidirectional Enable */                                                        
#define SPIM_SCLK_BIE                    (* (reg8 *) SPIM_SCLK__BIE)
/* Bit-mask for Aliased Register Access */
#define SPIM_SCLK_BIT_MASK               (* (reg8 *) SPIM_SCLK__BIT_MASK)
/* Bypass Enable */
#define SPIM_SCLK_BYP                    (* (reg8 *) SPIM_SCLK__BYP)
/* Port wide control signals */                                                   
#define SPIM_SCLK_CTL                    (* (reg8 *) SPIM_SCLK__CTL)
/* Drive Modes */
#define SPIM_SCLK_DM0                    (* (reg8 *) SPIM_SCLK__DM0) 
#define SPIM_SCLK_DM1                    (* (reg8 *) SPIM_SCLK__DM1)
#define SPIM_SCLK_DM2                    (* (reg8 *) SPIM_SCLK__DM2) 
/* Input Buffer Disable Override */
#define SPIM_SCLK_INP_DIS                (* (reg8 *) SPIM_SCLK__INP_DIS)
/* LCD Common or Segment Drive */
#define SPIM_SCLK_LCD_COM_SEG            (* (reg8 *) SPIM_SCLK__LCD_COM_SEG)
/* Enable Segment LCD */
#define SPIM_SCLK_LCD_EN                 (* (reg8 *) SPIM_SCLK__LCD_EN)
/* Slew Rate Control */
#define SPIM_SCLK_SLW                    (* (reg8 *) SPIM_SCLK__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define SPIM_SCLK_PRTDSI__CAPS_SEL       (* (reg8 *) SPIM_SCLK__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define SPIM_SCLK_PRTDSI__DBL_SYNC_IN    (* (reg8 *) SPIM_SCLK__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define SPIM_SCLK_PRTDSI__OE_SEL0        (* (reg8 *) SPIM_SCLK__PRTDSI__OE_SEL0) 
#define SPIM_SCLK_PRTDSI__OE_SEL1        (* (reg8 *) SPIM_SCLK__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define SPIM_SCLK_PRTDSI__OUT_SEL0       (* (reg8 *) SPIM_SCLK__PRTDSI__OUT_SEL0) 
#define SPIM_SCLK_PRTDSI__OUT_SEL1       (* (reg8 *) SPIM_SCLK__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define SPIM_SCLK_PRTDSI__SYNC_OUT       (* (reg8 *) SPIM_SCLK__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(SPIM_SCLK__SIO_CFG)
    #define SPIM_SCLK_SIO_HYST_EN        (* (reg8 *) SPIM_SCLK__SIO_HYST_EN)
    #define SPIM_SCLK_SIO_REG_HIFREQ     (* (reg8 *) SPIM_SCLK__SIO_REG_HIFREQ)
    #define SPIM_SCLK_SIO_CFG            (* (reg8 *) SPIM_SCLK__SIO_CFG)
    #define SPIM_SCLK_SIO_DIFF           (* (reg8 *) SPIM_SCLK__SIO_DIFF)
#endif /* (SPIM_SCLK__SIO_CFG) */

/* Interrupt Registers */
#if defined(SPIM_SCLK__INTSTAT)
    #define SPIM_SCLK_INTSTAT            (* (reg8 *) SPIM_SCLK__INTSTAT)
    #define SPIM_SCLK_SNAP               (* (reg8 *) SPIM_SCLK__SNAP)
    
	#define SPIM_SCLK_0_INTTYPE_REG 		(* (reg8 *) SPIM_SCLK__0__INTTYPE)
#endif /* (SPIM_SCLK__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_SPIM_SCLK_H */


/* [] END OF FILE */
