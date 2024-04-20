;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* Rx */
Rx__0__INTTYPE EQU CYREG_PICU12_INTTYPE6
Rx__0__MASK EQU 0x40
Rx__0__PC EQU CYREG_PRT12_PC6
Rx__0__PORT EQU 12
Rx__0__SHIFT EQU 6
Rx__AG EQU CYREG_PRT12_AG
Rx__BIE EQU CYREG_PRT12_BIE
Rx__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Rx__BYP EQU CYREG_PRT12_BYP
Rx__DM0 EQU CYREG_PRT12_DM0
Rx__DM1 EQU CYREG_PRT12_DM1
Rx__DM2 EQU CYREG_PRT12_DM2
Rx__DR EQU CYREG_PRT12_DR
Rx__INP_DIS EQU CYREG_PRT12_INP_DIS
Rx__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Rx__MASK EQU 0x40
Rx__PORT EQU 12
Rx__PRT EQU CYREG_PRT12_PRT
Rx__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Rx__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Rx__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Rx__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Rx__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Rx__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Rx__PS EQU CYREG_PRT12_PS
Rx__SHIFT EQU 6
Rx__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Rx__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Rx__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Rx__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Rx__SLW EQU CYREG_PRT12_SLW

/* Tx */
Tx__0__INTTYPE EQU CYREG_PICU12_INTTYPE7
Tx__0__MASK EQU 0x80
Tx__0__PC EQU CYREG_PRT12_PC7
Tx__0__PORT EQU 12
Tx__0__SHIFT EQU 7
Tx__AG EQU CYREG_PRT12_AG
Tx__BIE EQU CYREG_PRT12_BIE
Tx__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Tx__BYP EQU CYREG_PRT12_BYP
Tx__DM0 EQU CYREG_PRT12_DM0
Tx__DM1 EQU CYREG_PRT12_DM1
Tx__DM2 EQU CYREG_PRT12_DM2
Tx__DR EQU CYREG_PRT12_DR
Tx__INP_DIS EQU CYREG_PRT12_INP_DIS
Tx__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Tx__MASK EQU 0x80
Tx__PORT EQU 12
Tx__PRT EQU CYREG_PRT12_PRT
Tx__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Tx__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Tx__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Tx__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Tx__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Tx__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Tx__PS EQU CYREG_PRT12_PS
Tx__SHIFT EQU 7
Tx__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Tx__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Tx__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Tx__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Tx__SLW EQU CYREG_PRT12_SLW

/* I2C */
I2C_bI2C_UDB_Shifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB05_06_A0
I2C_bI2C_UDB_Shifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB05_06_A1
I2C_bI2C_UDB_Shifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB05_06_D0
I2C_bI2C_UDB_Shifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB05_06_D1
I2C_bI2C_UDB_Shifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB05_06_ACTL
I2C_bI2C_UDB_Shifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB05_06_F0
I2C_bI2C_UDB_Shifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB05_06_F1
I2C_bI2C_UDB_Shifter_u0__A0_A1_REG EQU CYREG_B0_UDB05_A0_A1
I2C_bI2C_UDB_Shifter_u0__A0_REG EQU CYREG_B0_UDB05_A0
I2C_bI2C_UDB_Shifter_u0__A1_REG EQU CYREG_B0_UDB05_A1
I2C_bI2C_UDB_Shifter_u0__D0_D1_REG EQU CYREG_B0_UDB05_D0_D1
I2C_bI2C_UDB_Shifter_u0__D0_REG EQU CYREG_B0_UDB05_D0
I2C_bI2C_UDB_Shifter_u0__D1_REG EQU CYREG_B0_UDB05_D1
I2C_bI2C_UDB_Shifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB05_ACTL
I2C_bI2C_UDB_Shifter_u0__F0_F1_REG EQU CYREG_B0_UDB05_F0_F1
I2C_bI2C_UDB_Shifter_u0__F0_REG EQU CYREG_B0_UDB05_F0
I2C_bI2C_UDB_Shifter_u0__F1_REG EQU CYREG_B0_UDB05_F1
I2C_bI2C_UDB_Slave_BitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
I2C_bI2C_UDB_Slave_BitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB02_03_CTL
I2C_bI2C_UDB_Slave_BitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB02_03_CTL
I2C_bI2C_UDB_Slave_BitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB02_03_CTL
I2C_bI2C_UDB_Slave_BitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB02_03_CTL
I2C_bI2C_UDB_Slave_BitCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB02_03_MSK
I2C_bI2C_UDB_Slave_BitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB02_03_MSK
I2C_bI2C_UDB_Slave_BitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB02_03_MSK
I2C_bI2C_UDB_Slave_BitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB02_03_MSK
I2C_bI2C_UDB_Slave_BitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
I2C_bI2C_UDB_Slave_BitCounter__CONTROL_REG EQU CYREG_B0_UDB02_CTL
I2C_bI2C_UDB_Slave_BitCounter__CONTROL_ST_REG EQU CYREG_B0_UDB02_ST_CTL
I2C_bI2C_UDB_Slave_BitCounter__COUNT_REG EQU CYREG_B0_UDB02_CTL
I2C_bI2C_UDB_Slave_BitCounter__COUNT_ST_REG EQU CYREG_B0_UDB02_ST_CTL
I2C_bI2C_UDB_Slave_BitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
I2C_bI2C_UDB_Slave_BitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
I2C_bI2C_UDB_Slave_BitCounter__PERIOD_REG EQU CYREG_B0_UDB02_MSK
I2C_bI2C_UDB_Slave_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
I2C_bI2C_UDB_Slave_BitCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB02_03_ST
I2C_bI2C_UDB_Slave_BitCounter_ST__MASK_REG EQU CYREG_B0_UDB02_MSK
I2C_bI2C_UDB_Slave_BitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
I2C_bI2C_UDB_Slave_BitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
I2C_bI2C_UDB_Slave_BitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
I2C_bI2C_UDB_Slave_BitCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB02_ST_CTL
I2C_bI2C_UDB_Slave_BitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB02_ST_CTL
I2C_bI2C_UDB_Slave_BitCounter_ST__STATUS_REG EQU CYREG_B0_UDB02_ST
I2C_bI2C_UDB_StsReg__0__MASK EQU 0x01
I2C_bI2C_UDB_StsReg__0__POS EQU 0
I2C_bI2C_UDB_StsReg__1__MASK EQU 0x02
I2C_bI2C_UDB_StsReg__1__POS EQU 1
I2C_bI2C_UDB_StsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB05_06_ACTL
I2C_bI2C_UDB_StsReg__16BIT_STATUS_REG EQU CYREG_B0_UDB05_06_ST
I2C_bI2C_UDB_StsReg__3__MASK EQU 0x08
I2C_bI2C_UDB_StsReg__3__POS EQU 3
I2C_bI2C_UDB_StsReg__5__MASK EQU 0x20
I2C_bI2C_UDB_StsReg__5__POS EQU 5
I2C_bI2C_UDB_StsReg__MASK EQU 0x2B
I2C_bI2C_UDB_StsReg__MASK_REG EQU CYREG_B0_UDB05_MSK
I2C_bI2C_UDB_StsReg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB05_ACTL
I2C_bI2C_UDB_StsReg__STATUS_REG EQU CYREG_B0_UDB05_ST
I2C_bI2C_UDB_SyncCtl_CtrlReg__0__MASK EQU 0x01
I2C_bI2C_UDB_SyncCtl_CtrlReg__0__POS EQU 0
I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB06_07_ACTL
I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB06_07_CTL
I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB06_07_CTL
I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB06_07_CTL
I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB06_07_CTL
I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB06_07_MSK
I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB06_07_MSK
I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB06_07_MSK
I2C_bI2C_UDB_SyncCtl_CtrlReg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB06_07_MSK
I2C_bI2C_UDB_SyncCtl_CtrlReg__2__MASK EQU 0x04
I2C_bI2C_UDB_SyncCtl_CtrlReg__2__POS EQU 2
I2C_bI2C_UDB_SyncCtl_CtrlReg__3__MASK EQU 0x08
I2C_bI2C_UDB_SyncCtl_CtrlReg__3__POS EQU 3
I2C_bI2C_UDB_SyncCtl_CtrlReg__4__MASK EQU 0x10
I2C_bI2C_UDB_SyncCtl_CtrlReg__4__POS EQU 4
I2C_bI2C_UDB_SyncCtl_CtrlReg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB06_ACTL
I2C_bI2C_UDB_SyncCtl_CtrlReg__CONTROL_REG EQU CYREG_B1_UDB06_CTL
I2C_bI2C_UDB_SyncCtl_CtrlReg__CONTROL_ST_REG EQU CYREG_B1_UDB06_ST_CTL
I2C_bI2C_UDB_SyncCtl_CtrlReg__COUNT_REG EQU CYREG_B1_UDB06_CTL
I2C_bI2C_UDB_SyncCtl_CtrlReg__COUNT_ST_REG EQU CYREG_B1_UDB06_ST_CTL
I2C_bI2C_UDB_SyncCtl_CtrlReg__MASK EQU 0x1D
I2C_bI2C_UDB_SyncCtl_CtrlReg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB06_MSK_ACTL
I2C_bI2C_UDB_SyncCtl_CtrlReg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB06_MSK_ACTL
I2C_bI2C_UDB_SyncCtl_CtrlReg__PERIOD_REG EQU CYREG_B1_UDB06_MSK
I2C_Clock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
I2C_Clock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
I2C_Clock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
I2C_Clock__CFG2_SRC_SEL_MASK EQU 0x07
I2C_Clock__INDEX EQU 0x01
I2C_Clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
I2C_Clock__PM_ACT_MSK EQU 0x02
I2C_Clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
I2C_Clock__PM_STBY_MSK EQU 0x02
I2C_I2C_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
I2C_I2C_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
I2C_I2C_IRQ__INTC_MASK EQU 0x02
I2C_I2C_IRQ__INTC_NUMBER EQU 1
I2C_I2C_IRQ__INTC_PRIOR_NUM EQU 7
I2C_I2C_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
I2C_I2C_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
I2C_I2C_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* RST */
RST__0__INTTYPE EQU CYREG_PICU15_INTTYPE1
RST__0__MASK EQU 0x02
RST__0__PC EQU CYREG_IO_PC_PRT15_PC1
RST__0__PORT EQU 15
RST__0__SHIFT EQU 1
RST__AG EQU CYREG_PRT15_AG
RST__AMUX EQU CYREG_PRT15_AMUX
RST__BIE EQU CYREG_PRT15_BIE
RST__BIT_MASK EQU CYREG_PRT15_BIT_MASK
RST__BYP EQU CYREG_PRT15_BYP
RST__CTL EQU CYREG_PRT15_CTL
RST__DM0 EQU CYREG_PRT15_DM0
RST__DM1 EQU CYREG_PRT15_DM1
RST__DM2 EQU CYREG_PRT15_DM2
RST__DR EQU CYREG_PRT15_DR
RST__INP_DIS EQU CYREG_PRT15_INP_DIS
RST__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
RST__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
RST__LCD_EN EQU CYREG_PRT15_LCD_EN
RST__MASK EQU 0x02
RST__PORT EQU 15
RST__PRT EQU CYREG_PRT15_PRT
RST__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
RST__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
RST__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
RST__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
RST__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
RST__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
RST__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
RST__PS EQU CYREG_PRT15_PS
RST__SHIFT EQU 1
RST__SLW EQU CYREG_PRT15_SLW

/* SCL */
SCL__0__INTTYPE EQU CYREG_PICU12_INTTYPE0
SCL__0__MASK EQU 0x01
SCL__0__PC EQU CYREG_PRT12_PC0
SCL__0__PORT EQU 12
SCL__0__SHIFT EQU 0
SCL__AG EQU CYREG_PRT12_AG
SCL__BIE EQU CYREG_PRT12_BIE
SCL__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SCL__BYP EQU CYREG_PRT12_BYP
SCL__DM0 EQU CYREG_PRT12_DM0
SCL__DM1 EQU CYREG_PRT12_DM1
SCL__DM2 EQU CYREG_PRT12_DM2
SCL__DR EQU CYREG_PRT12_DR
SCL__INP_DIS EQU CYREG_PRT12_INP_DIS
SCL__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
SCL__MASK EQU 0x01
SCL__PORT EQU 12
SCL__PRT EQU CYREG_PRT12_PRT
SCL__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SCL__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SCL__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SCL__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SCL__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SCL__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SCL__PS EQU CYREG_PRT12_PS
SCL__SHIFT EQU 0
SCL__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SCL__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SCL__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SCL__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SCL__SLW EQU CYREG_PRT12_SLW

/* SDA */
SDA__0__INTTYPE EQU CYREG_PICU12_INTTYPE1
SDA__0__MASK EQU 0x02
SDA__0__PC EQU CYREG_PRT12_PC1
SDA__0__PORT EQU 12
SDA__0__SHIFT EQU 1
SDA__AG EQU CYREG_PRT12_AG
SDA__BIE EQU CYREG_PRT12_BIE
SDA__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SDA__BYP EQU CYREG_PRT12_BYP
SDA__DM0 EQU CYREG_PRT12_DM0
SDA__DM1 EQU CYREG_PRT12_DM1
SDA__DM2 EQU CYREG_PRT12_DM2
SDA__DR EQU CYREG_PRT12_DR
SDA__INP_DIS EQU CYREG_PRT12_INP_DIS
SDA__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
SDA__MASK EQU 0x02
SDA__PORT EQU 12
SDA__PRT EQU CYREG_PRT12_PRT
SDA__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SDA__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SDA__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SDA__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SDA__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SDA__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SDA__PS EQU CYREG_PRT12_PS
SDA__SHIFT EQU 1
SDA__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SDA__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SDA__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SDA__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SDA__SLW EQU CYREG_PRT12_SLW

/* Pin25 */
Pin25__0__INTTYPE EQU CYREG_PICU2_INTTYPE5
Pin25__0__MASK EQU 0x20
Pin25__0__PC EQU CYREG_PRT2_PC5
Pin25__0__PORT EQU 2
Pin25__0__SHIFT EQU 5
Pin25__AG EQU CYREG_PRT2_AG
Pin25__AMUX EQU CYREG_PRT2_AMUX
Pin25__BIE EQU CYREG_PRT2_BIE
Pin25__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Pin25__BYP EQU CYREG_PRT2_BYP
Pin25__CTL EQU CYREG_PRT2_CTL
Pin25__DM0 EQU CYREG_PRT2_DM0
Pin25__DM1 EQU CYREG_PRT2_DM1
Pin25__DM2 EQU CYREG_PRT2_DM2
Pin25__DR EQU CYREG_PRT2_DR
Pin25__INP_DIS EQU CYREG_PRT2_INP_DIS
Pin25__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Pin25__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Pin25__LCD_EN EQU CYREG_PRT2_LCD_EN
Pin25__MASK EQU 0x20
Pin25__PORT EQU 2
Pin25__PRT EQU CYREG_PRT2_PRT
Pin25__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Pin25__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Pin25__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Pin25__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Pin25__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Pin25__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Pin25__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Pin25__PS EQU CYREG_PRT2_PS
Pin25__SHIFT EQU 5
Pin25__SLW EQU CYREG_PRT2_SLW

/* Pin26 */
Pin26__0__INTTYPE EQU CYREG_PICU2_INTTYPE6
Pin26__0__MASK EQU 0x40
Pin26__0__PC EQU CYREG_PRT2_PC6
Pin26__0__PORT EQU 2
Pin26__0__SHIFT EQU 6
Pin26__AG EQU CYREG_PRT2_AG
Pin26__AMUX EQU CYREG_PRT2_AMUX
Pin26__BIE EQU CYREG_PRT2_BIE
Pin26__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Pin26__BYP EQU CYREG_PRT2_BYP
Pin26__CTL EQU CYREG_PRT2_CTL
Pin26__DM0 EQU CYREG_PRT2_DM0
Pin26__DM1 EQU CYREG_PRT2_DM1
Pin26__DM2 EQU CYREG_PRT2_DM2
Pin26__DR EQU CYREG_PRT2_DR
Pin26__INP_DIS EQU CYREG_PRT2_INP_DIS
Pin26__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Pin26__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Pin26__LCD_EN EQU CYREG_PRT2_LCD_EN
Pin26__MASK EQU 0x40
Pin26__PORT EQU 2
Pin26__PRT EQU CYREG_PRT2_PRT
Pin26__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Pin26__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Pin26__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Pin26__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Pin26__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Pin26__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Pin26__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Pin26__PS EQU CYREG_PRT2_PS
Pin26__SHIFT EQU 6
Pin26__SLW EQU CYREG_PRT2_SLW

/* ADC_ISR */
ADC_ISR__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ADC_ISR__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ADC_ISR__INTC_MASK EQU 0x20000000
ADC_ISR__INTC_NUMBER EQU 29
ADC_ISR__INTC_PRIOR_NUM EQU 7
ADC_ISR__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_29
ADC_ISR__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ADC_ISR__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* ADC_Clock */
ADC_Clock__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
ADC_Clock__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
ADC_Clock__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
ADC_Clock__CFG2_SRC_SEL_MASK EQU 0x07
ADC_Clock__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
ADC_Clock__CFG3_PHASE_DLY_MASK EQU 0x0F
ADC_Clock__INDEX EQU 0x00
ADC_Clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
ADC_Clock__PM_ACT_MSK EQU 0x01
ADC_Clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
ADC_Clock__PM_STBY_MSK EQU 0x01

/* ADC_DelSig */
ADC_DelSig_DEC__COHER EQU CYREG_DEC_COHER
ADC_DelSig_DEC__CR EQU CYREG_DEC_CR
ADC_DelSig_DEC__DR1 EQU CYREG_DEC_DR1
ADC_DelSig_DEC__DR2 EQU CYREG_DEC_DR2
ADC_DelSig_DEC__DR2H EQU CYREG_DEC_DR2H
ADC_DelSig_DEC__GCOR EQU CYREG_DEC_GCOR
ADC_DelSig_DEC__GCORH EQU CYREG_DEC_GCORH
ADC_DelSig_DEC__GVAL EQU CYREG_DEC_GVAL
ADC_DelSig_DEC__OCOR EQU CYREG_DEC_OCOR
ADC_DelSig_DEC__OCORH EQU CYREG_DEC_OCORH
ADC_DelSig_DEC__OCORM EQU CYREG_DEC_OCORM
ADC_DelSig_DEC__OUTSAMP EQU CYREG_DEC_OUTSAMP
ADC_DelSig_DEC__OUTSAMPH EQU CYREG_DEC_OUTSAMPH
ADC_DelSig_DEC__OUTSAMPM EQU CYREG_DEC_OUTSAMPM
ADC_DelSig_DEC__OUTSAMPS EQU CYREG_DEC_OUTSAMPS
ADC_DelSig_DEC__PM_ACT_CFG EQU CYREG_PM_ACT_CFG10
ADC_DelSig_DEC__PM_ACT_MSK EQU 0x01
ADC_DelSig_DEC__PM_STBY_CFG EQU CYREG_PM_STBY_CFG10
ADC_DelSig_DEC__PM_STBY_MSK EQU 0x01
ADC_DelSig_DEC__SHIFT1 EQU CYREG_DEC_SHIFT1
ADC_DelSig_DEC__SHIFT2 EQU CYREG_DEC_SHIFT2
ADC_DelSig_DEC__SR EQU CYREG_DEC_SR
ADC_DelSig_DEC__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DEC_M1
ADC_DelSig_DEC__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DEC_M2
ADC_DelSig_DEC__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DEC_M3
ADC_DelSig_DEC__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DEC_M4
ADC_DelSig_DEC__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DEC_M5
ADC_DelSig_DEC__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DEC_M6
ADC_DelSig_DEC__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DEC_M7
ADC_DelSig_DEC__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DEC_M8
ADC_DelSig_DSM__BUF0 EQU CYREG_DSM0_BUF0
ADC_DelSig_DSM__BUF1 EQU CYREG_DSM0_BUF1
ADC_DelSig_DSM__BUF2 EQU CYREG_DSM0_BUF2
ADC_DelSig_DSM__BUF3 EQU CYREG_DSM0_BUF3
ADC_DelSig_DSM__CLK EQU CYREG_DSM0_CLK
ADC_DelSig_DSM__CR0 EQU CYREG_DSM0_CR0
ADC_DelSig_DSM__CR1 EQU CYREG_DSM0_CR1
ADC_DelSig_DSM__CR10 EQU CYREG_DSM0_CR10
ADC_DelSig_DSM__CR11 EQU CYREG_DSM0_CR11
ADC_DelSig_DSM__CR12 EQU CYREG_DSM0_CR12
ADC_DelSig_DSM__CR13 EQU CYREG_DSM0_CR13
ADC_DelSig_DSM__CR14 EQU CYREG_DSM0_CR14
ADC_DelSig_DSM__CR15 EQU CYREG_DSM0_CR15
ADC_DelSig_DSM__CR16 EQU CYREG_DSM0_CR16
ADC_DelSig_DSM__CR17 EQU CYREG_DSM0_CR17
ADC_DelSig_DSM__CR2 EQU CYREG_DSM0_CR2
ADC_DelSig_DSM__CR3 EQU CYREG_DSM0_CR3
ADC_DelSig_DSM__CR4 EQU CYREG_DSM0_CR4
ADC_DelSig_DSM__CR5 EQU CYREG_DSM0_CR5
ADC_DelSig_DSM__CR6 EQU CYREG_DSM0_CR6
ADC_DelSig_DSM__CR7 EQU CYREG_DSM0_CR7
ADC_DelSig_DSM__CR8 EQU CYREG_DSM0_CR8
ADC_DelSig_DSM__CR9 EQU CYREG_DSM0_CR9
ADC_DelSig_DSM__DEM0 EQU CYREG_DSM0_DEM0
ADC_DelSig_DSM__DEM1 EQU CYREG_DSM0_DEM1
ADC_DelSig_DSM__MISC EQU CYREG_DSM0_MISC
ADC_DelSig_DSM__OUT0 EQU CYREG_DSM0_OUT0
ADC_DelSig_DSM__OUT1 EQU CYREG_DSM0_OUT1
ADC_DelSig_DSM__REF0 EQU CYREG_DSM0_REF0
ADC_DelSig_DSM__REF1 EQU CYREG_DSM0_REF1
ADC_DelSig_DSM__REF2 EQU CYREG_DSM0_REF2
ADC_DelSig_DSM__REF3 EQU CYREG_DSM0_REF3
ADC_DelSig_DSM__RSVD1 EQU CYREG_DSM0_RSVD1
ADC_DelSig_DSM__SW0 EQU CYREG_DSM0_SW0
ADC_DelSig_DSM__SW2 EQU CYREG_DSM0_SW2
ADC_DelSig_DSM__SW3 EQU CYREG_DSM0_SW3
ADC_DelSig_DSM__SW4 EQU CYREG_DSM0_SW4
ADC_DelSig_DSM__SW6 EQU CYREG_DSM0_SW6
ADC_DelSig_DSM__TR0 EQU CYREG_NPUMP_DSM_TR0
ADC_DelSig_DSM__TST0 EQU CYREG_DSM0_TST0
ADC_DelSig_DSM__TST1 EQU CYREG_DSM0_TST1
ADC_DelSig_Ext_CP_Clk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
ADC_DelSig_Ext_CP_Clk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
ADC_DelSig_Ext_CP_Clk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
ADC_DelSig_Ext_CP_Clk__CFG2_SRC_SEL_MASK EQU 0x07
ADC_DelSig_Ext_CP_Clk__INDEX EQU 0x00
ADC_DelSig_Ext_CP_Clk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
ADC_DelSig_Ext_CP_Clk__PM_ACT_MSK EQU 0x01
ADC_DelSig_Ext_CP_Clk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
ADC_DelSig_Ext_CP_Clk__PM_STBY_MSK EQU 0x01
ADC_DelSig_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ADC_DelSig_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ADC_DelSig_IRQ__INTC_MASK EQU 0x01
ADC_DelSig_IRQ__INTC_NUMBER EQU 0
ADC_DelSig_IRQ__INTC_PRIOR_NUM EQU 7
ADC_DelSig_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
ADC_DelSig_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ADC_DelSig_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* DEBUG_UART */
DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB08_09_CTL
DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB08_09_CTL
DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB08_09_CTL
DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB08_09_CTL
DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB08_09_MSK
DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB08_09_MSK
DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB08_09_MSK
DEBUG_UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB08_09_MSK
DEBUG_UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
DEBUG_UART_BUART_sRX_RxBitCounter__CONTROL_REG EQU CYREG_B1_UDB08_CTL
DEBUG_UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG EQU CYREG_B1_UDB08_ST_CTL
DEBUG_UART_BUART_sRX_RxBitCounter__COUNT_REG EQU CYREG_B1_UDB08_CTL
DEBUG_UART_BUART_sRX_RxBitCounter__COUNT_ST_REG EQU CYREG_B1_UDB08_ST_CTL
DEBUG_UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB08_MSK_ACTL
DEBUG_UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB08_MSK_ACTL
DEBUG_UART_BUART_sRX_RxBitCounter__PERIOD_REG EQU CYREG_B1_UDB08_MSK
DEBUG_UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
DEBUG_UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG EQU CYREG_B1_UDB08_09_ST
DEBUG_UART_BUART_sRX_RxBitCounter_ST__MASK_REG EQU CYREG_B1_UDB08_MSK
DEBUG_UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB08_MSK_ACTL
DEBUG_UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB08_MSK_ACTL
DEBUG_UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
DEBUG_UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG EQU CYREG_B1_UDB08_ST_CTL
DEBUG_UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B1_UDB08_ST_CTL
DEBUG_UART_BUART_sRX_RxBitCounter_ST__STATUS_REG EQU CYREG_B1_UDB08_ST
DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG EQU CYREG_B1_UDB08_09_A0
DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG EQU CYREG_B1_UDB08_09_A1
DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG EQU CYREG_B1_UDB08_09_D0
DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG EQU CYREG_B1_UDB08_09_D1
DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG EQU CYREG_B1_UDB08_09_F0
DEBUG_UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG EQU CYREG_B1_UDB08_09_F1
DEBUG_UART_BUART_sRX_RxShifter_u0__A0_A1_REG EQU CYREG_B1_UDB08_A0_A1
DEBUG_UART_BUART_sRX_RxShifter_u0__A0_REG EQU CYREG_B1_UDB08_A0
DEBUG_UART_BUART_sRX_RxShifter_u0__A1_REG EQU CYREG_B1_UDB08_A1
DEBUG_UART_BUART_sRX_RxShifter_u0__D0_D1_REG EQU CYREG_B1_UDB08_D0_D1
DEBUG_UART_BUART_sRX_RxShifter_u0__D0_REG EQU CYREG_B1_UDB08_D0
DEBUG_UART_BUART_sRX_RxShifter_u0__D1_REG EQU CYREG_B1_UDB08_D1
DEBUG_UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
DEBUG_UART_BUART_sRX_RxShifter_u0__F0_F1_REG EQU CYREG_B1_UDB08_F0_F1
DEBUG_UART_BUART_sRX_RxShifter_u0__F0_REG EQU CYREG_B1_UDB08_F0
DEBUG_UART_BUART_sRX_RxShifter_u0__F1_REG EQU CYREG_B1_UDB08_F1
DEBUG_UART_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB08_MSK_ACTL
DEBUG_UART_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB08_MSK_ACTL
DEBUG_UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
DEBUG_UART_BUART_sRX_RxSts__16BIT_STATUS_REG EQU CYREG_B1_UDB09_10_ST
DEBUG_UART_BUART_sRX_RxSts__3__MASK EQU 0x08
DEBUG_UART_BUART_sRX_RxSts__3__POS EQU 3
DEBUG_UART_BUART_sRX_RxSts__4__MASK EQU 0x10
DEBUG_UART_BUART_sRX_RxSts__4__POS EQU 4
DEBUG_UART_BUART_sRX_RxSts__5__MASK EQU 0x20
DEBUG_UART_BUART_sRX_RxSts__5__POS EQU 5
DEBUG_UART_BUART_sRX_RxSts__MASK EQU 0x38
DEBUG_UART_BUART_sRX_RxSts__MASK_REG EQU CYREG_B1_UDB09_MSK
DEBUG_UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
DEBUG_UART_BUART_sRX_RxSts__STATUS_REG EQU CYREG_B1_UDB09_ST
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG EQU CYREG_B0_UDB03_04_A0
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG EQU CYREG_B0_UDB03_04_A1
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG EQU CYREG_B0_UDB03_04_D0
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG EQU CYREG_B0_UDB03_04_D1
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB03_04_ACTL
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG EQU CYREG_B0_UDB03_04_F0
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG EQU CYREG_B0_UDB03_04_F1
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG EQU CYREG_B0_UDB03_A0_A1
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG EQU CYREG_B0_UDB03_A0
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG EQU CYREG_B0_UDB03_A1
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG EQU CYREG_B0_UDB03_D0_D1
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG EQU CYREG_B0_UDB03_D0
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG EQU CYREG_B0_UDB03_D1
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG EQU CYREG_B0_UDB03_ACTL
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG EQU CYREG_B0_UDB03_F0_F1
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG EQU CYREG_B0_UDB03_F0
DEBUG_UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG EQU CYREG_B0_UDB03_F1
DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB07_08_A0
DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB07_08_A1
DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB07_08_D0
DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB07_08_D1
DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB07_08_ACTL
DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB07_08_F0
DEBUG_UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB07_08_F1
DEBUG_UART_BUART_sTX_TxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB07_A0_A1
DEBUG_UART_BUART_sTX_TxShifter_u0__A0_REG EQU CYREG_B0_UDB07_A0
DEBUG_UART_BUART_sTX_TxShifter_u0__A1_REG EQU CYREG_B0_UDB07_A1
DEBUG_UART_BUART_sTX_TxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB07_D0_D1
DEBUG_UART_BUART_sTX_TxShifter_u0__D0_REG EQU CYREG_B0_UDB07_D0
DEBUG_UART_BUART_sTX_TxShifter_u0__D1_REG EQU CYREG_B0_UDB07_D1
DEBUG_UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB07_ACTL
DEBUG_UART_BUART_sTX_TxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB07_F0_F1
DEBUG_UART_BUART_sTX_TxShifter_u0__F0_REG EQU CYREG_B0_UDB07_F0
DEBUG_UART_BUART_sTX_TxShifter_u0__F1_REG EQU CYREG_B0_UDB07_F1
DEBUG_UART_BUART_sTX_TxSts__0__MASK EQU 0x01
DEBUG_UART_BUART_sTX_TxSts__0__POS EQU 0
DEBUG_UART_BUART_sTX_TxSts__1__MASK EQU 0x02
DEBUG_UART_BUART_sTX_TxSts__1__POS EQU 1
DEBUG_UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB07_08_ACTL
DEBUG_UART_BUART_sTX_TxSts__16BIT_STATUS_REG EQU CYREG_B0_UDB07_08_ST
DEBUG_UART_BUART_sTX_TxSts__2__MASK EQU 0x04
DEBUG_UART_BUART_sTX_TxSts__2__POS EQU 2
DEBUG_UART_BUART_sTX_TxSts__3__MASK EQU 0x08
DEBUG_UART_BUART_sTX_TxSts__3__POS EQU 3
DEBUG_UART_BUART_sTX_TxSts__MASK EQU 0x0F
DEBUG_UART_BUART_sTX_TxSts__MASK_REG EQU CYREG_B0_UDB07_MSK
DEBUG_UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB07_ACTL
DEBUG_UART_BUART_sTX_TxSts__STATUS_REG EQU CYREG_B0_UDB07_ST
DEBUG_UART_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG2_CFG0
DEBUG_UART_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG2_CFG1
DEBUG_UART_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG2_CFG2
DEBUG_UART_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
DEBUG_UART_IntClock__INDEX EQU 0x02
DEBUG_UART_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
DEBUG_UART_IntClock__PM_ACT_MSK EQU 0x04
DEBUG_UART_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
DEBUG_UART_IntClock__PM_STBY_MSK EQU 0x04

/* LM35_Pin24 */
LM35_Pin24__0__INTTYPE EQU CYREG_PICU2_INTTYPE4
LM35_Pin24__0__MASK EQU 0x10
LM35_Pin24__0__PC EQU CYREG_PRT2_PC4
LM35_Pin24__0__PORT EQU 2
LM35_Pin24__0__SHIFT EQU 4
LM35_Pin24__AG EQU CYREG_PRT2_AG
LM35_Pin24__AMUX EQU CYREG_PRT2_AMUX
LM35_Pin24__BIE EQU CYREG_PRT2_BIE
LM35_Pin24__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LM35_Pin24__BYP EQU CYREG_PRT2_BYP
LM35_Pin24__CTL EQU CYREG_PRT2_CTL
LM35_Pin24__DM0 EQU CYREG_PRT2_DM0
LM35_Pin24__DM1 EQU CYREG_PRT2_DM1
LM35_Pin24__DM2 EQU CYREG_PRT2_DM2
LM35_Pin24__DR EQU CYREG_PRT2_DR
LM35_Pin24__INP_DIS EQU CYREG_PRT2_INP_DIS
LM35_Pin24__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LM35_Pin24__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LM35_Pin24__LCD_EN EQU CYREG_PRT2_LCD_EN
LM35_Pin24__MASK EQU 0x10
LM35_Pin24__PORT EQU 2
LM35_Pin24__PRT EQU CYREG_PRT2_PRT
LM35_Pin24__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LM35_Pin24__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LM35_Pin24__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LM35_Pin24__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LM35_Pin24__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LM35_Pin24__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LM35_Pin24__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LM35_Pin24__PS EQU CYREG_PRT2_PS
LM35_Pin24__SHIFT EQU 4
LM35_Pin24__SLW EQU CYREG_PRT2_SLW

/* Potentiometer_Pin23 */
Potentiometer_Pin23__0__INTTYPE EQU CYREG_PICU2_INTTYPE3
Potentiometer_Pin23__0__MASK EQU 0x08
Potentiometer_Pin23__0__PC EQU CYREG_PRT2_PC3
Potentiometer_Pin23__0__PORT EQU 2
Potentiometer_Pin23__0__SHIFT EQU 3
Potentiometer_Pin23__AG EQU CYREG_PRT2_AG
Potentiometer_Pin23__AMUX EQU CYREG_PRT2_AMUX
Potentiometer_Pin23__BIE EQU CYREG_PRT2_BIE
Potentiometer_Pin23__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Potentiometer_Pin23__BYP EQU CYREG_PRT2_BYP
Potentiometer_Pin23__CTL EQU CYREG_PRT2_CTL
Potentiometer_Pin23__DM0 EQU CYREG_PRT2_DM0
Potentiometer_Pin23__DM1 EQU CYREG_PRT2_DM1
Potentiometer_Pin23__DM2 EQU CYREG_PRT2_DM2
Potentiometer_Pin23__DR EQU CYREG_PRT2_DR
Potentiometer_Pin23__INP_DIS EQU CYREG_PRT2_INP_DIS
Potentiometer_Pin23__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Potentiometer_Pin23__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Potentiometer_Pin23__LCD_EN EQU CYREG_PRT2_LCD_EN
Potentiometer_Pin23__MASK EQU 0x08
Potentiometer_Pin23__PORT EQU 2
Potentiometer_Pin23__PRT EQU CYREG_PRT2_PRT
Potentiometer_Pin23__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Potentiometer_Pin23__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Potentiometer_Pin23__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Potentiometer_Pin23__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Potentiometer_Pin23__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Potentiometer_Pin23__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Potentiometer_Pin23__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Potentiometer_Pin23__PS EQU CYREG_PRT2_PS
Potentiometer_Pin23__SHIFT EQU 3
Potentiometer_Pin23__SLW EQU CYREG_PRT2_SLW

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000002
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */