/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* Rx */
#define Rx__0__INTTYPE CYREG_PICU12_INTTYPE6
#define Rx__0__MASK 0x40u
#define Rx__0__PC CYREG_PRT12_PC6
#define Rx__0__PORT 12u
#define Rx__0__SHIFT 6u
#define Rx__AG CYREG_PRT12_AG
#define Rx__BIE CYREG_PRT12_BIE
#define Rx__BIT_MASK CYREG_PRT12_BIT_MASK
#define Rx__BYP CYREG_PRT12_BYP
#define Rx__DM0 CYREG_PRT12_DM0
#define Rx__DM1 CYREG_PRT12_DM1
#define Rx__DM2 CYREG_PRT12_DM2
#define Rx__DR CYREG_PRT12_DR
#define Rx__INP_DIS CYREG_PRT12_INP_DIS
#define Rx__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define Rx__MASK 0x40u
#define Rx__PORT 12u
#define Rx__PRT CYREG_PRT12_PRT
#define Rx__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define Rx__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define Rx__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define Rx__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define Rx__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define Rx__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define Rx__PS CYREG_PRT12_PS
#define Rx__SHIFT 6u
#define Rx__SIO_CFG CYREG_PRT12_SIO_CFG
#define Rx__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define Rx__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define Rx__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define Rx__SLW CYREG_PRT12_SLW

/* Tx */
#define Tx__0__INTTYPE CYREG_PICU12_INTTYPE7
#define Tx__0__MASK 0x80u
#define Tx__0__PC CYREG_PRT12_PC7
#define Tx__0__PORT 12u
#define Tx__0__SHIFT 7u
#define Tx__AG CYREG_PRT12_AG
#define Tx__BIE CYREG_PRT12_BIE
#define Tx__BIT_MASK CYREG_PRT12_BIT_MASK
#define Tx__BYP CYREG_PRT12_BYP
#define Tx__DM0 CYREG_PRT12_DM0
#define Tx__DM1 CYREG_PRT12_DM1
#define Tx__DM2 CYREG_PRT12_DM2
#define Tx__DR CYREG_PRT12_DR
#define Tx__INP_DIS CYREG_PRT12_INP_DIS
#define Tx__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define Tx__MASK 0x80u
#define Tx__PORT 12u
#define Tx__PRT CYREG_PRT12_PRT
#define Tx__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define Tx__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define Tx__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define Tx__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define Tx__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define Tx__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define Tx__PS CYREG_PRT12_PS
#define Tx__SHIFT 7u
#define Tx__SIO_CFG CYREG_PRT12_SIO_CFG
#define Tx__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define Tx__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define Tx__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define Tx__SLW CYREG_PRT12_SLW

/* I2C */
#define I2C_bI2C_UDB_Shifter_u0__16BIT_A0_REG CYREG_B0_UDB06_07_A0
#define I2C_bI2C_UDB_Shifter_u0__16BIT_A1_REG CYREG_B0_UDB06_07_A1
#define I2C_bI2C_UDB_Shifter_u0__16BIT_D0_REG CYREG_B0_UDB06_07_D0
#define I2C_bI2C_UDB_Shifter_u0__16BIT_D1_REG CYREG_B0_UDB06_07_D1
#define I2C_bI2C_UDB_Shifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define I2C_bI2C_UDB_Shifter_u0__16BIT_F0_REG CYREG_B0_UDB06_07_F0
#define I2C_bI2C_UDB_Shifter_u0__16BIT_F1_REG CYREG_B0_UDB06_07_F1
#define I2C_bI2C_UDB_Shifter_u0__A0_A1_REG CYREG_B0_UDB06_A0_A1
#define I2C_bI2C_UDB_Shifter_u0__A0_REG CYREG_B0_UDB06_A0
#define I2C_bI2C_UDB_Shifter_u0__A1_REG CYREG_B0_UDB06_A1
#define I2C_bI2C_UDB_Shifter_u0__D0_D1_REG CYREG_B0_UDB06_D0_D1
#define I2C_bI2C_UDB_Shifter_u0__D0_REG CYREG_B0_UDB06_D0
#define I2C_bI2C_UDB_Shifter_u0__D1_REG CYREG_B0_UDB06_D1
#define I2C_bI2C_UDB_Shifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define I2C_bI2C_UDB_Shifter_u0__F0_F1_REG CYREG_B0_UDB06_F0_F1
#define I2C_bI2C_UDB_Shifter_u0__F0_REG CYREG_B0_UDB06_F0
#define I2C_bI2C_UDB_Shifter_u0__F1_REG CYREG_B0_UDB06_F1
#define I2C_bI2C_UDB_Shifter_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define I2C_bI2C_UDB_Shifter_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define I2C_bI2C_UDB_Slave_BitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define I2C_bI2C_UDB_Slave_BitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB06_07_CTL
#define I2C_bI2C_UDB_Slave_BitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB06_07_CTL
#define I2C_bI2C_UDB_Slave_BitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB06_07_CTL
#define I2C_bI2C_UDB_Slave_BitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB06_07_CTL
#define I2C_bI2C_UDB_Slave_BitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB06_07_MSK
#define I2C_bI2C_UDB_Slave_BitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB06_07_MSK
#define I2C_bI2C_UDB_Slave_BitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB06_07_MSK
#define I2C_bI2C_UDB_Slave_BitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB06_07_MSK
#define I2C_bI2C_UDB_Slave_BitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define I2C_bI2C_UDB_Slave_BitCounter__CONTROL_REG CYREG_B0_UDB06_CTL
#define I2C_bI2C_UDB_Slave_BitCounter__CONTROL_ST_REG CYREG_B0_UDB06_ST_CTL
#define I2C_bI2C_UDB_Slave_BitCounter__COUNT_REG CYREG_B0_UDB06_CTL
#define I2C_bI2C_UDB_Slave_BitCounter__COUNT_ST_REG CYREG_B0_UDB06_ST_CTL
#define I2C_bI2C_UDB_Slave_BitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define I2C_bI2C_UDB_Slave_BitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define I2C_bI2C_UDB_Slave_BitCounter__PERIOD_REG CYREG_B0_UDB06_MSK
#define I2C_bI2C_UDB_Slave_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define I2C_bI2C_UDB_Slave_BitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB06_07_ST
#define I2C_bI2C_UDB_Slave_BitCounter_ST__MASK_REG CYREG_B0_UDB06_MSK
#define I2C_bI2C_UDB_Slave_BitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define I2C_bI2C_UDB_Slave_BitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define I2C_bI2C_UDB_Slave_BitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define I2C_bI2C_UDB_Slave_BitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB06_ST_CTL
#define I2C_bI2C_UDB_Slave_BitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB06_ST_CTL
#define I2C_bI2C_UDB_Slave_BitCounter_ST__STATUS_REG CYREG_B0_UDB06_ST
#define I2C_bI2C_UDB_StsReg__0__MASK 0x01u
#define I2C_bI2C_UDB_StsReg__0__POS 0
#define I2C_bI2C_UDB_StsReg__1__MASK 0x02u
#define I2C_bI2C_UDB_StsReg__1__POS 1
#define I2C_bI2C_UDB_StsReg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define I2C_bI2C_UDB_StsReg__16BIT_STATUS_REG CYREG_B0_UDB07_08_ST
#define I2C_bI2C_UDB_StsReg__3__MASK 0x08u
#define I2C_bI2C_UDB_StsReg__3__POS 3
#define I2C_bI2C_UDB_StsReg__5__MASK 0x20u
#define I2C_bI2C_UDB_StsReg__5__POS 5
#define I2C_bI2C_UDB_StsReg__MASK 0x2Bu
#define I2C_bI2C_UDB_StsReg__MASK_REG CYREG_B0_UDB07_MSK
#define I2C_bI2C_UDB_StsReg__STATUS_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define I2C_bI2C_UDB_StsReg__STATUS_REG CYREG_B0_UDB07_ST
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__0__MASK 0x01u
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__0__POS 0
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB05_06_CTL
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB05_06_CTL
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB05_06_CTL
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB05_06_CTL
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_MASK_MASK_REG CYREG_B0_UDB05_06_MSK
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB05_06_MSK
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB05_06_MSK
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB05_06_MSK
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__2__MASK 0x04u
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__2__POS 2
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__3__MASK 0x08u
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__3__POS 3
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__4__MASK 0x10u
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__4__POS 4
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__CONTROL_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__CONTROL_REG CYREG_B0_UDB05_CTL
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__CONTROL_ST_REG CYREG_B0_UDB05_ST_CTL
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__COUNT_REG CYREG_B0_UDB05_CTL
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__COUNT_ST_REG CYREG_B0_UDB05_ST_CTL
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__MASK 0x1Du
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define I2C_bI2C_UDB_SyncCtl_CtrlReg__PERIOD_REG CYREG_B0_UDB05_MSK
#define I2C_Clock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define I2C_Clock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define I2C_Clock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define I2C_Clock__CFG2_SRC_SEL_MASK 0x07u
#define I2C_Clock__INDEX 0x01u
#define I2C_Clock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define I2C_Clock__PM_ACT_MSK 0x02u
#define I2C_Clock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define I2C_Clock__PM_STBY_MSK 0x02u
#define I2C_I2C_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define I2C_I2C_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define I2C_I2C_IRQ__INTC_MASK 0x02u
#define I2C_I2C_IRQ__INTC_NUMBER 1u
#define I2C_I2C_IRQ__INTC_PRIOR_NUM 7u
#define I2C_I2C_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define I2C_I2C_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define I2C_I2C_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* SCL */
#define SCL__0__INTTYPE CYREG_PICU12_INTTYPE0
#define SCL__0__MASK 0x01u
#define SCL__0__PC CYREG_PRT12_PC0
#define SCL__0__PORT 12u
#define SCL__0__SHIFT 0u
#define SCL__AG CYREG_PRT12_AG
#define SCL__BIE CYREG_PRT12_BIE
#define SCL__BIT_MASK CYREG_PRT12_BIT_MASK
#define SCL__BYP CYREG_PRT12_BYP
#define SCL__DM0 CYREG_PRT12_DM0
#define SCL__DM1 CYREG_PRT12_DM1
#define SCL__DM2 CYREG_PRT12_DM2
#define SCL__DR CYREG_PRT12_DR
#define SCL__INP_DIS CYREG_PRT12_INP_DIS
#define SCL__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define SCL__MASK 0x01u
#define SCL__PORT 12u
#define SCL__PRT CYREG_PRT12_PRT
#define SCL__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define SCL__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define SCL__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define SCL__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define SCL__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define SCL__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define SCL__PS CYREG_PRT12_PS
#define SCL__SHIFT 0u
#define SCL__SIO_CFG CYREG_PRT12_SIO_CFG
#define SCL__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define SCL__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define SCL__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define SCL__SLW CYREG_PRT12_SLW

/* SDA */
#define SDA__0__INTTYPE CYREG_PICU12_INTTYPE1
#define SDA__0__MASK 0x02u
#define SDA__0__PC CYREG_PRT12_PC1
#define SDA__0__PORT 12u
#define SDA__0__SHIFT 1u
#define SDA__AG CYREG_PRT12_AG
#define SDA__BIE CYREG_PRT12_BIE
#define SDA__BIT_MASK CYREG_PRT12_BIT_MASK
#define SDA__BYP CYREG_PRT12_BYP
#define SDA__DM0 CYREG_PRT12_DM0
#define SDA__DM1 CYREG_PRT12_DM1
#define SDA__DM2 CYREG_PRT12_DM2
#define SDA__DR CYREG_PRT12_DR
#define SDA__INP_DIS CYREG_PRT12_INP_DIS
#define SDA__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define SDA__MASK 0x02u
#define SDA__PORT 12u
#define SDA__PRT CYREG_PRT12_PRT
#define SDA__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define SDA__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define SDA__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define SDA__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define SDA__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define SDA__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define SDA__PS CYREG_PRT12_PS
#define SDA__SHIFT 1u
#define SDA__SIO_CFG CYREG_PRT12_SIO_CFG
#define SDA__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define SDA__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define SDA__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define SDA__SLW CYREG_PRT12_SLW

/* ADC_ISR */
#define ADC_ISR__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_ISR__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_ISR__INTC_MASK 0x20000000u
#define ADC_ISR__INTC_NUMBER 29u
#define ADC_ISR__INTC_PRIOR_NUM 7u
#define ADC_ISR__INTC_PRIOR_REG CYREG_NVIC_PRI_29
#define ADC_ISR__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_ISR__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ADC_Clock */
#define ADC_Clock__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define ADC_Clock__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define ADC_Clock__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define ADC_Clock__CFG2_SRC_SEL_MASK 0x07u
#define ADC_Clock__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define ADC_Clock__CFG3_PHASE_DLY_MASK 0x0Fu
#define ADC_Clock__INDEX 0x00u
#define ADC_Clock__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define ADC_Clock__PM_ACT_MSK 0x01u
#define ADC_Clock__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define ADC_Clock__PM_STBY_MSK 0x01u

/* ADC_DelSig */
#define ADC_DelSig_DEC__COHER CYREG_DEC_COHER
#define ADC_DelSig_DEC__CR CYREG_DEC_CR
#define ADC_DelSig_DEC__DR1 CYREG_DEC_DR1
#define ADC_DelSig_DEC__DR2 CYREG_DEC_DR2
#define ADC_DelSig_DEC__DR2H CYREG_DEC_DR2H
#define ADC_DelSig_DEC__GCOR CYREG_DEC_GCOR
#define ADC_DelSig_DEC__GCORH CYREG_DEC_GCORH
#define ADC_DelSig_DEC__GVAL CYREG_DEC_GVAL
#define ADC_DelSig_DEC__OCOR CYREG_DEC_OCOR
#define ADC_DelSig_DEC__OCORH CYREG_DEC_OCORH
#define ADC_DelSig_DEC__OCORM CYREG_DEC_OCORM
#define ADC_DelSig_DEC__OUTSAMP CYREG_DEC_OUTSAMP
#define ADC_DelSig_DEC__OUTSAMPH CYREG_DEC_OUTSAMPH
#define ADC_DelSig_DEC__OUTSAMPM CYREG_DEC_OUTSAMPM
#define ADC_DelSig_DEC__OUTSAMPS CYREG_DEC_OUTSAMPS
#define ADC_DelSig_DEC__PM_ACT_CFG CYREG_PM_ACT_CFG10
#define ADC_DelSig_DEC__PM_ACT_MSK 0x01u
#define ADC_DelSig_DEC__PM_STBY_CFG CYREG_PM_STBY_CFG10
#define ADC_DelSig_DEC__PM_STBY_MSK 0x01u
#define ADC_DelSig_DEC__SHIFT1 CYREG_DEC_SHIFT1
#define ADC_DelSig_DEC__SHIFT2 CYREG_DEC_SHIFT2
#define ADC_DelSig_DEC__SR CYREG_DEC_SR
#define ADC_DelSig_DEC__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DEC_M1
#define ADC_DelSig_DEC__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DEC_M2
#define ADC_DelSig_DEC__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DEC_M3
#define ADC_DelSig_DEC__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DEC_M4
#define ADC_DelSig_DEC__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DEC_M5
#define ADC_DelSig_DEC__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DEC_M6
#define ADC_DelSig_DEC__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DEC_M7
#define ADC_DelSig_DEC__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DEC_M8
#define ADC_DelSig_DSM__BUF0 CYREG_DSM0_BUF0
#define ADC_DelSig_DSM__BUF1 CYREG_DSM0_BUF1
#define ADC_DelSig_DSM__BUF2 CYREG_DSM0_BUF2
#define ADC_DelSig_DSM__BUF3 CYREG_DSM0_BUF3
#define ADC_DelSig_DSM__CLK CYREG_DSM0_CLK
#define ADC_DelSig_DSM__CR0 CYREG_DSM0_CR0
#define ADC_DelSig_DSM__CR1 CYREG_DSM0_CR1
#define ADC_DelSig_DSM__CR10 CYREG_DSM0_CR10
#define ADC_DelSig_DSM__CR11 CYREG_DSM0_CR11
#define ADC_DelSig_DSM__CR12 CYREG_DSM0_CR12
#define ADC_DelSig_DSM__CR13 CYREG_DSM0_CR13
#define ADC_DelSig_DSM__CR14 CYREG_DSM0_CR14
#define ADC_DelSig_DSM__CR15 CYREG_DSM0_CR15
#define ADC_DelSig_DSM__CR16 CYREG_DSM0_CR16
#define ADC_DelSig_DSM__CR17 CYREG_DSM0_CR17
#define ADC_DelSig_DSM__CR2 CYREG_DSM0_CR2
#define ADC_DelSig_DSM__CR3 CYREG_DSM0_CR3
#define ADC_DelSig_DSM__CR4 CYREG_DSM0_CR4
#define ADC_DelSig_DSM__CR5 CYREG_DSM0_CR5
#define ADC_DelSig_DSM__CR6 CYREG_DSM0_CR6
#define ADC_DelSig_DSM__CR7 CYREG_DSM0_CR7
#define ADC_DelSig_DSM__CR8 CYREG_DSM0_CR8
#define ADC_DelSig_DSM__CR9 CYREG_DSM0_CR9
#define ADC_DelSig_DSM__DEM0 CYREG_DSM0_DEM0
#define ADC_DelSig_DSM__DEM1 CYREG_DSM0_DEM1
#define ADC_DelSig_DSM__MISC CYREG_DSM0_MISC
#define ADC_DelSig_DSM__OUT0 CYREG_DSM0_OUT0
#define ADC_DelSig_DSM__OUT1 CYREG_DSM0_OUT1
#define ADC_DelSig_DSM__REF0 CYREG_DSM0_REF0
#define ADC_DelSig_DSM__REF1 CYREG_DSM0_REF1
#define ADC_DelSig_DSM__REF2 CYREG_DSM0_REF2
#define ADC_DelSig_DSM__REF3 CYREG_DSM0_REF3
#define ADC_DelSig_DSM__RSVD1 CYREG_DSM0_RSVD1
#define ADC_DelSig_DSM__SW0 CYREG_DSM0_SW0
#define ADC_DelSig_DSM__SW2 CYREG_DSM0_SW2
#define ADC_DelSig_DSM__SW3 CYREG_DSM0_SW3
#define ADC_DelSig_DSM__SW4 CYREG_DSM0_SW4
#define ADC_DelSig_DSM__SW6 CYREG_DSM0_SW6
#define ADC_DelSig_DSM__TR0 CYREG_NPUMP_DSM_TR0
#define ADC_DelSig_DSM__TST0 CYREG_DSM0_TST0
#define ADC_DelSig_DSM__TST1 CYREG_DSM0_TST1
#define ADC_DelSig_Ext_CP_Clk__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define ADC_DelSig_Ext_CP_Clk__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define ADC_DelSig_Ext_CP_Clk__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define ADC_DelSig_Ext_CP_Clk__CFG2_SRC_SEL_MASK 0x07u
#define ADC_DelSig_Ext_CP_Clk__INDEX 0x00u
#define ADC_DelSig_Ext_CP_Clk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_DelSig_Ext_CP_Clk__PM_ACT_MSK 0x01u
#define ADC_DelSig_Ext_CP_Clk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_DelSig_Ext_CP_Clk__PM_STBY_MSK 0x01u
#define ADC_DelSig_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_DelSig_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_DelSig_IRQ__INTC_MASK 0x01u
#define ADC_DelSig_IRQ__INTC_NUMBER 0u
#define ADC_DelSig_IRQ__INTC_PRIOR_NUM 7u
#define ADC_DelSig_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define ADC_DelSig_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_DelSig_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* DEBUG_UART */
#define DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB09_10_ACTL
#define DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB09_10_CTL
#define DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB09_10_CTL
#define DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB09_10_CTL
#define DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B1_UDB09_10_CTL
#define DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B1_UDB09_10_MSK
#define DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B1_UDB09_10_MSK
#define DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B1_UDB09_10_MSK
#define DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB09_10_MSK
#define DEBUG_UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B1_UDB09_ACTL
#define DEBUG_UART_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B1_UDB09_CTL
#define DEBUG_UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B1_UDB09_ST_CTL
#define DEBUG_UART_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B1_UDB09_CTL
#define DEBUG_UART_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B1_UDB09_ST_CTL
#define DEBUG_UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB09_MSK_ACTL
#define DEBUG_UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B1_UDB09_MSK_ACTL
#define DEBUG_UART_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B1_UDB09_MSK
#define DEBUG_UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB09_10_ACTL
#define DEBUG_UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B1_UDB09_10_ST
#define DEBUG_UART_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B1_UDB09_MSK
#define DEBUG_UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B1_UDB09_MSK_ACTL
#define DEBUG_UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B1_UDB09_MSK_ACTL
#define DEBUG_UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B1_UDB09_ACTL
#define DEBUG_UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B1_UDB09_ST_CTL
#define DEBUG_UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B1_UDB09_ST_CTL
#define DEBUG_UART_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B1_UDB09_ST
#define DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B1_UDB10_11_A0
#define DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B1_UDB10_11_A1
#define DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B1_UDB10_11_D0
#define DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B1_UDB10_11_D1
#define DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB10_11_ACTL
#define DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B1_UDB10_11_F0
#define DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B1_UDB10_11_F1
#define DEBUG_UART_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B1_UDB10_A0_A1
#define DEBUG_UART_BUART_sRX_RxShifter_u0__A0_REG CYREG_B1_UDB10_A0
#define DEBUG_UART_BUART_sRX_RxShifter_u0__A1_REG CYREG_B1_UDB10_A1
#define DEBUG_UART_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B1_UDB10_D0_D1
#define DEBUG_UART_BUART_sRX_RxShifter_u0__D0_REG CYREG_B1_UDB10_D0
#define DEBUG_UART_BUART_sRX_RxShifter_u0__D1_REG CYREG_B1_UDB10_D1
#define DEBUG_UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B1_UDB10_ACTL
#define DEBUG_UART_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B1_UDB10_F0_F1
#define DEBUG_UART_BUART_sRX_RxShifter_u0__F0_REG CYREG_B1_UDB10_F0
#define DEBUG_UART_BUART_sRX_RxShifter_u0__F1_REG CYREG_B1_UDB10_F1
#define DEBUG_UART_BUART_sRX_RxSts__3__MASK 0x08u
#define DEBUG_UART_BUART_sRX_RxSts__3__POS 3
#define DEBUG_UART_BUART_sRX_RxSts__4__MASK 0x10u
#define DEBUG_UART_BUART_sRX_RxSts__4__POS 4
#define DEBUG_UART_BUART_sRX_RxSts__5__MASK 0x20u
#define DEBUG_UART_BUART_sRX_RxSts__5__POS 5
#define DEBUG_UART_BUART_sRX_RxSts__MASK 0x38u
#define DEBUG_UART_BUART_sRX_RxSts__MASK_REG CYREG_B1_UDB11_MSK
#define DEBUG_UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B1_UDB11_ACTL
#define DEBUG_UART_BUART_sRX_RxSts__STATUS_REG CYREG_B1_UDB11_ST
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B0_UDB03_04_A0
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B0_UDB03_04_A1
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B0_UDB03_04_D0
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B0_UDB03_04_D1
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB03_04_ACTL
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B0_UDB03_04_F0
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B0_UDB03_04_F1
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB03_A0_A1
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB03_A0
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB03_A1
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB03_D0_D1
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB03_D0
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB03_D1
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB03_ACTL
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB03_F0_F1
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB03_F0
#define DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB03_F1
#define DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB04_05_A0
#define DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB04_05_A1
#define DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB04_05_D0
#define DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB04_05_D1
#define DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB04_05_ACTL
#define DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB04_05_F0
#define DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB04_05_F1
#define DEBUG_UART_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB04_A0_A1
#define DEBUG_UART_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB04_A0
#define DEBUG_UART_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB04_A1
#define DEBUG_UART_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB04_D0_D1
#define DEBUG_UART_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB04_D0
#define DEBUG_UART_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB04_D1
#define DEBUG_UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB04_ACTL
#define DEBUG_UART_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB04_F0_F1
#define DEBUG_UART_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB04_F0
#define DEBUG_UART_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB04_F1
#define DEBUG_UART_BUART_sTX_TxSts__0__MASK 0x01u
#define DEBUG_UART_BUART_sTX_TxSts__0__POS 0
#define DEBUG_UART_BUART_sTX_TxSts__1__MASK 0x02u
#define DEBUG_UART_BUART_sTX_TxSts__1__POS 1
#define DEBUG_UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define DEBUG_UART_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B1_UDB07_08_ST
#define DEBUG_UART_BUART_sTX_TxSts__2__MASK 0x04u
#define DEBUG_UART_BUART_sTX_TxSts__2__POS 2
#define DEBUG_UART_BUART_sTX_TxSts__3__MASK 0x08u
#define DEBUG_UART_BUART_sTX_TxSts__3__POS 3
#define DEBUG_UART_BUART_sTX_TxSts__MASK 0x0Fu
#define DEBUG_UART_BUART_sTX_TxSts__MASK_REG CYREG_B1_UDB07_MSK
#define DEBUG_UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define DEBUG_UART_BUART_sTX_TxSts__STATUS_REG CYREG_B1_UDB07_ST
#define DEBUG_UART_IntClock__CFG0 CYREG_CLKDIST_DCFG2_CFG0
#define DEBUG_UART_IntClock__CFG1 CYREG_CLKDIST_DCFG2_CFG1
#define DEBUG_UART_IntClock__CFG2 CYREG_CLKDIST_DCFG2_CFG2
#define DEBUG_UART_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define DEBUG_UART_IntClock__INDEX 0x02u
#define DEBUG_UART_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define DEBUG_UART_IntClock__PM_ACT_MSK 0x04u
#define DEBUG_UART_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define DEBUG_UART_IntClock__PM_STBY_MSK 0x04u

/* LM35_Pin24 */
#define LM35_Pin24__0__INTTYPE CYREG_PICU2_INTTYPE4
#define LM35_Pin24__0__MASK 0x10u
#define LM35_Pin24__0__PC CYREG_PRT2_PC4
#define LM35_Pin24__0__PORT 2u
#define LM35_Pin24__0__SHIFT 4u
#define LM35_Pin24__AG CYREG_PRT2_AG
#define LM35_Pin24__AMUX CYREG_PRT2_AMUX
#define LM35_Pin24__BIE CYREG_PRT2_BIE
#define LM35_Pin24__BIT_MASK CYREG_PRT2_BIT_MASK
#define LM35_Pin24__BYP CYREG_PRT2_BYP
#define LM35_Pin24__CTL CYREG_PRT2_CTL
#define LM35_Pin24__DM0 CYREG_PRT2_DM0
#define LM35_Pin24__DM1 CYREG_PRT2_DM1
#define LM35_Pin24__DM2 CYREG_PRT2_DM2
#define LM35_Pin24__DR CYREG_PRT2_DR
#define LM35_Pin24__INP_DIS CYREG_PRT2_INP_DIS
#define LM35_Pin24__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define LM35_Pin24__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LM35_Pin24__LCD_EN CYREG_PRT2_LCD_EN
#define LM35_Pin24__MASK 0x10u
#define LM35_Pin24__PORT 2u
#define LM35_Pin24__PRT CYREG_PRT2_PRT
#define LM35_Pin24__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LM35_Pin24__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LM35_Pin24__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LM35_Pin24__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LM35_Pin24__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LM35_Pin24__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LM35_Pin24__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LM35_Pin24__PS CYREG_PRT2_PS
#define LM35_Pin24__SHIFT 4u
#define LM35_Pin24__SLW CYREG_PRT2_SLW

/* TMP36_Pin25 */
#define TMP36_Pin25__0__INTTYPE CYREG_PICU2_INTTYPE5
#define TMP36_Pin25__0__MASK 0x20u
#define TMP36_Pin25__0__PC CYREG_PRT2_PC5
#define TMP36_Pin25__0__PORT 2u
#define TMP36_Pin25__0__SHIFT 5u
#define TMP36_Pin25__AG CYREG_PRT2_AG
#define TMP36_Pin25__AMUX CYREG_PRT2_AMUX
#define TMP36_Pin25__BIE CYREG_PRT2_BIE
#define TMP36_Pin25__BIT_MASK CYREG_PRT2_BIT_MASK
#define TMP36_Pin25__BYP CYREG_PRT2_BYP
#define TMP36_Pin25__CTL CYREG_PRT2_CTL
#define TMP36_Pin25__DM0 CYREG_PRT2_DM0
#define TMP36_Pin25__DM1 CYREG_PRT2_DM1
#define TMP36_Pin25__DM2 CYREG_PRT2_DM2
#define TMP36_Pin25__DR CYREG_PRT2_DR
#define TMP36_Pin25__INP_DIS CYREG_PRT2_INP_DIS
#define TMP36_Pin25__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define TMP36_Pin25__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define TMP36_Pin25__LCD_EN CYREG_PRT2_LCD_EN
#define TMP36_Pin25__MASK 0x20u
#define TMP36_Pin25__PORT 2u
#define TMP36_Pin25__PRT CYREG_PRT2_PRT
#define TMP36_Pin25__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define TMP36_Pin25__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define TMP36_Pin25__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define TMP36_Pin25__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define TMP36_Pin25__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define TMP36_Pin25__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define TMP36_Pin25__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define TMP36_Pin25__PS CYREG_PRT2_PS
#define TMP36_Pin25__SHIFT 5u
#define TMP36_Pin25__SLW CYREG_PRT2_SLW

/* Potentiometer0_Pin23 */
#define Potentiometer0_Pin23__0__INTTYPE CYREG_PICU2_INTTYPE3
#define Potentiometer0_Pin23__0__MASK 0x08u
#define Potentiometer0_Pin23__0__PC CYREG_PRT2_PC3
#define Potentiometer0_Pin23__0__PORT 2u
#define Potentiometer0_Pin23__0__SHIFT 3u
#define Potentiometer0_Pin23__AG CYREG_PRT2_AG
#define Potentiometer0_Pin23__AMUX CYREG_PRT2_AMUX
#define Potentiometer0_Pin23__BIE CYREG_PRT2_BIE
#define Potentiometer0_Pin23__BIT_MASK CYREG_PRT2_BIT_MASK
#define Potentiometer0_Pin23__BYP CYREG_PRT2_BYP
#define Potentiometer0_Pin23__CTL CYREG_PRT2_CTL
#define Potentiometer0_Pin23__DM0 CYREG_PRT2_DM0
#define Potentiometer0_Pin23__DM1 CYREG_PRT2_DM1
#define Potentiometer0_Pin23__DM2 CYREG_PRT2_DM2
#define Potentiometer0_Pin23__DR CYREG_PRT2_DR
#define Potentiometer0_Pin23__INP_DIS CYREG_PRT2_INP_DIS
#define Potentiometer0_Pin23__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Potentiometer0_Pin23__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Potentiometer0_Pin23__LCD_EN CYREG_PRT2_LCD_EN
#define Potentiometer0_Pin23__MASK 0x08u
#define Potentiometer0_Pin23__PORT 2u
#define Potentiometer0_Pin23__PRT CYREG_PRT2_PRT
#define Potentiometer0_Pin23__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Potentiometer0_Pin23__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Potentiometer0_Pin23__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Potentiometer0_Pin23__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Potentiometer0_Pin23__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Potentiometer0_Pin23__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Potentiometer0_Pin23__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Potentiometer0_Pin23__PS CYREG_PRT2_PS
#define Potentiometer0_Pin23__SHIFT 3u
#define Potentiometer0_Pin23__SLW CYREG_PRT2_SLW

/* Potentiometer3_Pin26 */
#define Potentiometer3_Pin26__0__INTTYPE CYREG_PICU2_INTTYPE6
#define Potentiometer3_Pin26__0__MASK 0x40u
#define Potentiometer3_Pin26__0__PC CYREG_PRT2_PC6
#define Potentiometer3_Pin26__0__PORT 2u
#define Potentiometer3_Pin26__0__SHIFT 6u
#define Potentiometer3_Pin26__AG CYREG_PRT2_AG
#define Potentiometer3_Pin26__AMUX CYREG_PRT2_AMUX
#define Potentiometer3_Pin26__BIE CYREG_PRT2_BIE
#define Potentiometer3_Pin26__BIT_MASK CYREG_PRT2_BIT_MASK
#define Potentiometer3_Pin26__BYP CYREG_PRT2_BYP
#define Potentiometer3_Pin26__CTL CYREG_PRT2_CTL
#define Potentiometer3_Pin26__DM0 CYREG_PRT2_DM0
#define Potentiometer3_Pin26__DM1 CYREG_PRT2_DM1
#define Potentiometer3_Pin26__DM2 CYREG_PRT2_DM2
#define Potentiometer3_Pin26__DR CYREG_PRT2_DR
#define Potentiometer3_Pin26__INP_DIS CYREG_PRT2_INP_DIS
#define Potentiometer3_Pin26__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Potentiometer3_Pin26__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Potentiometer3_Pin26__LCD_EN CYREG_PRT2_LCD_EN
#define Potentiometer3_Pin26__MASK 0x40u
#define Potentiometer3_Pin26__PORT 2u
#define Potentiometer3_Pin26__PRT CYREG_PRT2_PRT
#define Potentiometer3_Pin26__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Potentiometer3_Pin26__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Potentiometer3_Pin26__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Potentiometer3_Pin26__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Potentiometer3_Pin26__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Potentiometer3_Pin26__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Potentiometer3_Pin26__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Potentiometer3_Pin26__PS CYREG_PRT2_PS
#define Potentiometer3_Pin26__SHIFT 6u
#define Potentiometer3_Pin26__SLW CYREG_PRT2_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "Project-DAQ_for_RaspberryPi"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x0800
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000002u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
