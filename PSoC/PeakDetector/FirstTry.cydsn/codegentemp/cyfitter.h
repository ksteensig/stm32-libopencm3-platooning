/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.1 Update 1
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2017 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* ADC_A_ADC_SAR */
#define ADC_A_ADC_SAR__CLK CYREG_SAR1_CLK
#define ADC_A_ADC_SAR__CSR0 CYREG_SAR1_CSR0
#define ADC_A_ADC_SAR__CSR1 CYREG_SAR1_CSR1
#define ADC_A_ADC_SAR__CSR2 CYREG_SAR1_CSR2
#define ADC_A_ADC_SAR__CSR3 CYREG_SAR1_CSR3
#define ADC_A_ADC_SAR__CSR4 CYREG_SAR1_CSR4
#define ADC_A_ADC_SAR__CSR5 CYREG_SAR1_CSR5
#define ADC_A_ADC_SAR__CSR6 CYREG_SAR1_CSR6
#define ADC_A_ADC_SAR__PM_ACT_CFG CYREG_PM_ACT_CFG11
#define ADC_A_ADC_SAR__PM_ACT_MSK 0x02u
#define ADC_A_ADC_SAR__PM_STBY_CFG CYREG_PM_STBY_CFG11
#define ADC_A_ADC_SAR__PM_STBY_MSK 0x02u
#define ADC_A_ADC_SAR__SW0 CYREG_SAR1_SW0
#define ADC_A_ADC_SAR__SW2 CYREG_SAR1_SW2
#define ADC_A_ADC_SAR__SW3 CYREG_SAR1_SW3
#define ADC_A_ADC_SAR__SW4 CYREG_SAR1_SW4
#define ADC_A_ADC_SAR__SW6 CYREG_SAR1_SW6
#define ADC_A_ADC_SAR__TR0 CYREG_SAR1_TR0
#define ADC_A_ADC_SAR__WRK0 CYREG_SAR1_WRK0
#define ADC_A_ADC_SAR__WRK1 CYREG_SAR1_WRK1

/* ADC_A_IRQ */
#define ADC_A_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_A_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_A_IRQ__INTC_MASK 0x04u
#define ADC_A_IRQ__INTC_NUMBER 2u
#define ADC_A_IRQ__INTC_PRIOR_NUM 7u
#define ADC_A_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_2
#define ADC_A_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_A_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ADC_B_ADC_SAR */
#define ADC_B_ADC_SAR__CLK CYREG_SAR0_CLK
#define ADC_B_ADC_SAR__CSR0 CYREG_SAR0_CSR0
#define ADC_B_ADC_SAR__CSR1 CYREG_SAR0_CSR1
#define ADC_B_ADC_SAR__CSR2 CYREG_SAR0_CSR2
#define ADC_B_ADC_SAR__CSR3 CYREG_SAR0_CSR3
#define ADC_B_ADC_SAR__CSR4 CYREG_SAR0_CSR4
#define ADC_B_ADC_SAR__CSR5 CYREG_SAR0_CSR5
#define ADC_B_ADC_SAR__CSR6 CYREG_SAR0_CSR6
#define ADC_B_ADC_SAR__PM_ACT_CFG CYREG_PM_ACT_CFG11
#define ADC_B_ADC_SAR__PM_ACT_MSK 0x01u
#define ADC_B_ADC_SAR__PM_STBY_CFG CYREG_PM_STBY_CFG11
#define ADC_B_ADC_SAR__PM_STBY_MSK 0x01u
#define ADC_B_ADC_SAR__SW0 CYREG_SAR0_SW0
#define ADC_B_ADC_SAR__SW2 CYREG_SAR0_SW2
#define ADC_B_ADC_SAR__SW3 CYREG_SAR0_SW3
#define ADC_B_ADC_SAR__SW4 CYREG_SAR0_SW4
#define ADC_B_ADC_SAR__SW6 CYREG_SAR0_SW6
#define ADC_B_ADC_SAR__TR0 CYREG_SAR0_TR0
#define ADC_B_ADC_SAR__WRK0 CYREG_SAR0_WRK0
#define ADC_B_ADC_SAR__WRK1 CYREG_SAR0_WRK1

/* ADC_B_IRQ */
#define ADC_B_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_B_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_B_IRQ__INTC_MASK 0x08u
#define ADC_B_IRQ__INTC_NUMBER 3u
#define ADC_B_IRQ__INTC_PRIOR_NUM 7u
#define ADC_B_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_3
#define ADC_B_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_B_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Clock_1 */
#define Clock_1__CFG0 CYREG_CLKDIST_ACFG1_CFG0
#define Clock_1__CFG1 CYREG_CLKDIST_ACFG1_CFG1
#define Clock_1__CFG2 CYREG_CLKDIST_ACFG1_CFG2
#define Clock_1__CFG2_SRC_SEL_MASK 0x07u
#define Clock_1__CFG3 CYREG_CLKDIST_ACFG1_CFG3
#define Clock_1__CFG3_PHASE_DLY_MASK 0x0Fu
#define Clock_1__INDEX 0x01u
#define Clock_1__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define Clock_1__PM_ACT_MSK 0x02u
#define Clock_1__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define Clock_1__PM_STBY_MSK 0x02u

/* Clock_2 */
#define Clock_2__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define Clock_2__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define Clock_2__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define Clock_2__CFG2_SRC_SEL_MASK 0x07u
#define Clock_2__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define Clock_2__CFG3_PHASE_DLY_MASK 0x0Fu
#define Clock_2__INDEX 0x00u
#define Clock_2__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define Clock_2__PM_ACT_MSK 0x01u
#define Clock_2__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define Clock_2__PM_STBY_MSK 0x01u

/* Clock_3 */
#define Clock_3__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define Clock_3__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define Clock_3__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define Clock_3__CFG2_SRC_SEL_MASK 0x07u
#define Clock_3__INDEX 0x00u
#define Clock_3__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_3__PM_ACT_MSK 0x01u
#define Clock_3__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_3__PM_STBY_MSK 0x01u

/* Comp_PD_A */
#define Comp_PD_A_ctComp__CLK CYREG_CMP0_CLK
#define Comp_PD_A_ctComp__CMP_MASK 0x01u
#define Comp_PD_A_ctComp__CMP_NUMBER 0u
#define Comp_PD_A_ctComp__CR CYREG_CMP0_CR
#define Comp_PD_A_ctComp__LUT__CR CYREG_LUT0_CR
#define Comp_PD_A_ctComp__LUT__MSK CYREG_LUT_MSK
#define Comp_PD_A_ctComp__LUT__MSK_MASK 0x01u
#define Comp_PD_A_ctComp__LUT__MSK_SHIFT 0u
#define Comp_PD_A_ctComp__LUT__MX CYREG_LUT0_MX
#define Comp_PD_A_ctComp__LUT__SR CYREG_LUT_SR
#define Comp_PD_A_ctComp__LUT__SR_MASK 0x01u
#define Comp_PD_A_ctComp__LUT__SR_SHIFT 0u
#define Comp_PD_A_ctComp__PM_ACT_CFG CYREG_PM_ACT_CFG7
#define Comp_PD_A_ctComp__PM_ACT_MSK 0x01u
#define Comp_PD_A_ctComp__PM_STBY_CFG CYREG_PM_STBY_CFG7
#define Comp_PD_A_ctComp__PM_STBY_MSK 0x01u
#define Comp_PD_A_ctComp__SW0 CYREG_CMP0_SW0
#define Comp_PD_A_ctComp__SW2 CYREG_CMP0_SW2
#define Comp_PD_A_ctComp__SW3 CYREG_CMP0_SW3
#define Comp_PD_A_ctComp__SW4 CYREG_CMP0_SW4
#define Comp_PD_A_ctComp__SW6 CYREG_CMP0_SW6
#define Comp_PD_A_ctComp__TR0 CYREG_CMP0_TR0
#define Comp_PD_A_ctComp__TR1 CYREG_CMP0_TR1
#define Comp_PD_A_ctComp__TRIM__TR0 CYREG_FLSHID_MFG_CFG_CMP0_TR0
#define Comp_PD_A_ctComp__TRIM__TR0_HS CYREG_FLSHID_CUST_TABLES_CMP0_TR0_HS
#define Comp_PD_A_ctComp__TRIM__TR1 CYREG_FLSHID_MFG_CFG_CMP0_TR1
#define Comp_PD_A_ctComp__TRIM__TR1_HS CYREG_FLSHID_CUST_TABLES_CMP0_TR1_HS
#define Comp_PD_A_ctComp__WRK CYREG_CMP_WRK
#define Comp_PD_A_ctComp__WRK_MASK 0x01u
#define Comp_PD_A_ctComp__WRK_SHIFT 0u

/* Comp_PD_B */
#define Comp_PD_B_ctComp__CLK CYREG_CMP3_CLK
#define Comp_PD_B_ctComp__CMP_MASK 0x08u
#define Comp_PD_B_ctComp__CMP_NUMBER 3u
#define Comp_PD_B_ctComp__CR CYREG_CMP3_CR
#define Comp_PD_B_ctComp__LUT__CR CYREG_LUT3_CR
#define Comp_PD_B_ctComp__LUT__MSK CYREG_LUT_MSK
#define Comp_PD_B_ctComp__LUT__MSK_MASK 0x08u
#define Comp_PD_B_ctComp__LUT__MSK_SHIFT 3u
#define Comp_PD_B_ctComp__LUT__MX CYREG_LUT3_MX
#define Comp_PD_B_ctComp__LUT__SR CYREG_LUT_SR
#define Comp_PD_B_ctComp__LUT__SR_MASK 0x08u
#define Comp_PD_B_ctComp__LUT__SR_SHIFT 3u
#define Comp_PD_B_ctComp__PM_ACT_CFG CYREG_PM_ACT_CFG7
#define Comp_PD_B_ctComp__PM_ACT_MSK 0x08u
#define Comp_PD_B_ctComp__PM_STBY_CFG CYREG_PM_STBY_CFG7
#define Comp_PD_B_ctComp__PM_STBY_MSK 0x08u
#define Comp_PD_B_ctComp__SW0 CYREG_CMP3_SW0
#define Comp_PD_B_ctComp__SW2 CYREG_CMP3_SW2
#define Comp_PD_B_ctComp__SW3 CYREG_CMP3_SW3
#define Comp_PD_B_ctComp__SW4 CYREG_CMP3_SW4
#define Comp_PD_B_ctComp__SW6 CYREG_CMP3_SW6
#define Comp_PD_B_ctComp__TR0 CYREG_CMP3_TR0
#define Comp_PD_B_ctComp__TR1 CYREG_CMP3_TR1
#define Comp_PD_B_ctComp__TRIM__TR0 CYREG_FLSHID_MFG_CFG_CMP3_TR0
#define Comp_PD_B_ctComp__TRIM__TR0_HS CYREG_FLSHID_CUST_TABLES_CMP3_TR0_HS
#define Comp_PD_B_ctComp__TRIM__TR1 CYREG_FLSHID_MFG_CFG_CMP3_TR1
#define Comp_PD_B_ctComp__TRIM__TR1_HS CYREG_FLSHID_CUST_TABLES_CMP3_TR1_HS
#define Comp_PD_B_ctComp__WRK CYREG_CMP_WRK
#define Comp_PD_B_ctComp__WRK_MASK 0x08u
#define Comp_PD_B_ctComp__WRK_SHIFT 3u

/* Counter_CounterHW */
#define Counter_CounterHW__CAP0 CYREG_TMR0_CAP0
#define Counter_CounterHW__CAP1 CYREG_TMR0_CAP1
#define Counter_CounterHW__CFG0 CYREG_TMR0_CFG0
#define Counter_CounterHW__CFG1 CYREG_TMR0_CFG1
#define Counter_CounterHW__CFG2 CYREG_TMR0_CFG2
#define Counter_CounterHW__CNT_CMP0 CYREG_TMR0_CNT_CMP0
#define Counter_CounterHW__CNT_CMP1 CYREG_TMR0_CNT_CMP1
#define Counter_CounterHW__PER0 CYREG_TMR0_PER0
#define Counter_CounterHW__PER1 CYREG_TMR0_PER1
#define Counter_CounterHW__PM_ACT_CFG CYREG_PM_ACT_CFG3
#define Counter_CounterHW__PM_ACT_MSK 0x01u
#define Counter_CounterHW__PM_STBY_CFG CYREG_PM_STBY_CFG3
#define Counter_CounterHW__PM_STBY_MSK 0x01u
#define Counter_CounterHW__RT0 CYREG_TMR0_RT0
#define Counter_CounterHW__RT1 CYREG_TMR0_RT1
#define Counter_CounterHW__SR0 CYREG_TMR0_SR0

/* ISR_PIN_A */
#define ISR_PIN_A__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ISR_PIN_A__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ISR_PIN_A__INTC_MASK 0x01u
#define ISR_PIN_A__INTC_NUMBER 0u
#define ISR_PIN_A__INTC_PRIOR_NUM 0u
#define ISR_PIN_A__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define ISR_PIN_A__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ISR_PIN_A__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ISR_PIN_B */
#define ISR_PIN_B__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ISR_PIN_B__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ISR_PIN_B__INTC_MASK 0x02u
#define ISR_PIN_B__INTC_NUMBER 1u
#define ISR_PIN_B__INTC_PRIOR_NUM 0u
#define ISR_PIN_B__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define ISR_PIN_B__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ISR_PIN_B__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Mixer_A_SC */
#define Mixer_A_SC__BST CYREG_SC3_BST
#define Mixer_A_SC__CLK CYREG_SC3_CLK
#define Mixer_A_SC__CMPINV CYREG_SC_CMPINV
#define Mixer_A_SC__CMPINV_MASK 0x08u
#define Mixer_A_SC__CPTR CYREG_SC_CPTR
#define Mixer_A_SC__CPTR_MASK 0x08u
#define Mixer_A_SC__CR0 CYREG_SC3_CR0
#define Mixer_A_SC__CR1 CYREG_SC3_CR1
#define Mixer_A_SC__CR2 CYREG_SC3_CR2
#define Mixer_A_SC__MSK CYREG_SC_MSK
#define Mixer_A_SC__MSK_MASK 0x08u
#define Mixer_A_SC__PM_ACT_CFG CYREG_PM_ACT_CFG9
#define Mixer_A_SC__PM_ACT_MSK 0x08u
#define Mixer_A_SC__PM_STBY_CFG CYREG_PM_STBY_CFG9
#define Mixer_A_SC__PM_STBY_MSK 0x08u
#define Mixer_A_SC__SR CYREG_SC_SR
#define Mixer_A_SC__SR_MASK 0x08u
#define Mixer_A_SC__SW0 CYREG_SC3_SW0
#define Mixer_A_SC__SW10 CYREG_SC3_SW10
#define Mixer_A_SC__SW2 CYREG_SC3_SW2
#define Mixer_A_SC__SW3 CYREG_SC3_SW3
#define Mixer_A_SC__SW4 CYREG_SC3_SW4
#define Mixer_A_SC__SW6 CYREG_SC3_SW6
#define Mixer_A_SC__SW7 CYREG_SC3_SW7
#define Mixer_A_SC__SW8 CYREG_SC3_SW8
#define Mixer_A_SC__WRK1 CYREG_SC_WRK1
#define Mixer_A_SC__WRK1_MASK 0x08u

/* Mixer_B_SC */
#define Mixer_B_SC__BST CYREG_SC2_BST
#define Mixer_B_SC__CLK CYREG_SC2_CLK
#define Mixer_B_SC__CMPINV CYREG_SC_CMPINV
#define Mixer_B_SC__CMPINV_MASK 0x04u
#define Mixer_B_SC__CPTR CYREG_SC_CPTR
#define Mixer_B_SC__CPTR_MASK 0x04u
#define Mixer_B_SC__CR0 CYREG_SC2_CR0
#define Mixer_B_SC__CR1 CYREG_SC2_CR1
#define Mixer_B_SC__CR2 CYREG_SC2_CR2
#define Mixer_B_SC__MSK CYREG_SC_MSK
#define Mixer_B_SC__MSK_MASK 0x04u
#define Mixer_B_SC__PM_ACT_CFG CYREG_PM_ACT_CFG9
#define Mixer_B_SC__PM_ACT_MSK 0x04u
#define Mixer_B_SC__PM_STBY_CFG CYREG_PM_STBY_CFG9
#define Mixer_B_SC__PM_STBY_MSK 0x04u
#define Mixer_B_SC__SR CYREG_SC_SR
#define Mixer_B_SC__SR_MASK 0x04u
#define Mixer_B_SC__SW0 CYREG_SC2_SW0
#define Mixer_B_SC__SW10 CYREG_SC2_SW10
#define Mixer_B_SC__SW2 CYREG_SC2_SW2
#define Mixer_B_SC__SW3 CYREG_SC2_SW3
#define Mixer_B_SC__SW4 CYREG_SC2_SW4
#define Mixer_B_SC__SW6 CYREG_SC2_SW6
#define Mixer_B_SC__SW7 CYREG_SC2_SW7
#define Mixer_B_SC__SW8 CYREG_SC2_SW8
#define Mixer_B_SC__WRK1 CYREG_SC_WRK1
#define Mixer_B_SC__WRK1_MASK 0x04u

/* Mixer_PD_A_SC */
#define Mixer_PD_A_SC__BST CYREG_SC0_BST
#define Mixer_PD_A_SC__CLK CYREG_SC0_CLK
#define Mixer_PD_A_SC__CMPINV CYREG_SC_CMPINV
#define Mixer_PD_A_SC__CMPINV_MASK 0x01u
#define Mixer_PD_A_SC__CPTR CYREG_SC_CPTR
#define Mixer_PD_A_SC__CPTR_MASK 0x01u
#define Mixer_PD_A_SC__CR0 CYREG_SC0_CR0
#define Mixer_PD_A_SC__CR1 CYREG_SC0_CR1
#define Mixer_PD_A_SC__CR2 CYREG_SC0_CR2
#define Mixer_PD_A_SC__MSK CYREG_SC_MSK
#define Mixer_PD_A_SC__MSK_MASK 0x01u
#define Mixer_PD_A_SC__PM_ACT_CFG CYREG_PM_ACT_CFG9
#define Mixer_PD_A_SC__PM_ACT_MSK 0x01u
#define Mixer_PD_A_SC__PM_STBY_CFG CYREG_PM_STBY_CFG9
#define Mixer_PD_A_SC__PM_STBY_MSK 0x01u
#define Mixer_PD_A_SC__SR CYREG_SC_SR
#define Mixer_PD_A_SC__SR_MASK 0x01u
#define Mixer_PD_A_SC__SW0 CYREG_SC0_SW0
#define Mixer_PD_A_SC__SW10 CYREG_SC0_SW10
#define Mixer_PD_A_SC__SW2 CYREG_SC0_SW2
#define Mixer_PD_A_SC__SW3 CYREG_SC0_SW3
#define Mixer_PD_A_SC__SW4 CYREG_SC0_SW4
#define Mixer_PD_A_SC__SW6 CYREG_SC0_SW6
#define Mixer_PD_A_SC__SW7 CYREG_SC0_SW7
#define Mixer_PD_A_SC__SW8 CYREG_SC0_SW8
#define Mixer_PD_A_SC__WRK1 CYREG_SC_WRK1
#define Mixer_PD_A_SC__WRK1_MASK 0x01u

/* Mixer_PD_B_SC */
#define Mixer_PD_B_SC__BST CYREG_SC1_BST
#define Mixer_PD_B_SC__CLK CYREG_SC1_CLK
#define Mixer_PD_B_SC__CMPINV CYREG_SC_CMPINV
#define Mixer_PD_B_SC__CMPINV_MASK 0x02u
#define Mixer_PD_B_SC__CPTR CYREG_SC_CPTR
#define Mixer_PD_B_SC__CPTR_MASK 0x02u
#define Mixer_PD_B_SC__CR0 CYREG_SC1_CR0
#define Mixer_PD_B_SC__CR1 CYREG_SC1_CR1
#define Mixer_PD_B_SC__CR2 CYREG_SC1_CR2
#define Mixer_PD_B_SC__MSK CYREG_SC_MSK
#define Mixer_PD_B_SC__MSK_MASK 0x02u
#define Mixer_PD_B_SC__PM_ACT_CFG CYREG_PM_ACT_CFG9
#define Mixer_PD_B_SC__PM_ACT_MSK 0x02u
#define Mixer_PD_B_SC__PM_STBY_CFG CYREG_PM_STBY_CFG9
#define Mixer_PD_B_SC__PM_STBY_MSK 0x02u
#define Mixer_PD_B_SC__SR CYREG_SC_SR
#define Mixer_PD_B_SC__SR_MASK 0x02u
#define Mixer_PD_B_SC__SW0 CYREG_SC1_SW0
#define Mixer_PD_B_SC__SW10 CYREG_SC1_SW10
#define Mixer_PD_B_SC__SW2 CYREG_SC1_SW2
#define Mixer_PD_B_SC__SW3 CYREG_SC1_SW3
#define Mixer_PD_B_SC__SW4 CYREG_SC1_SW4
#define Mixer_PD_B_SC__SW6 CYREG_SC1_SW6
#define Mixer_PD_B_SC__SW7 CYREG_SC1_SW7
#define Mixer_PD_B_SC__SW8 CYREG_SC1_SW8
#define Mixer_PD_B_SC__WRK1 CYREG_SC_WRK1
#define Mixer_PD_B_SC__WRK1_MASK 0x02u

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

/* SignalA */
#define SignalA__0__INTTYPE CYREG_PICU1_INTTYPE6
#define SignalA__0__MASK 0x40u
#define SignalA__0__PC CYREG_PRT1_PC6
#define SignalA__0__PORT 1u
#define SignalA__0__SHIFT 6u
#define SignalA__AG CYREG_PRT1_AG
#define SignalA__AMUX CYREG_PRT1_AMUX
#define SignalA__BIE CYREG_PRT1_BIE
#define SignalA__BIT_MASK CYREG_PRT1_BIT_MASK
#define SignalA__BYP CYREG_PRT1_BYP
#define SignalA__CTL CYREG_PRT1_CTL
#define SignalA__DM0 CYREG_PRT1_DM0
#define SignalA__DM1 CYREG_PRT1_DM1
#define SignalA__DM2 CYREG_PRT1_DM2
#define SignalA__DR CYREG_PRT1_DR
#define SignalA__INP_DIS CYREG_PRT1_INP_DIS
#define SignalA__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define SignalA__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define SignalA__LCD_EN CYREG_PRT1_LCD_EN
#define SignalA__MASK 0x40u
#define SignalA__PORT 1u
#define SignalA__PRT CYREG_PRT1_PRT
#define SignalA__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define SignalA__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define SignalA__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define SignalA__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define SignalA__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define SignalA__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define SignalA__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define SignalA__PS CYREG_PRT1_PS
#define SignalA__SHIFT 6u
#define SignalA__SLW CYREG_PRT1_SLW

/* SignalB */
#define SignalB__0__INTTYPE CYREG_PICU2_INTTYPE6
#define SignalB__0__MASK 0x40u
#define SignalB__0__PC CYREG_PRT2_PC6
#define SignalB__0__PORT 2u
#define SignalB__0__SHIFT 6u
#define SignalB__AG CYREG_PRT2_AG
#define SignalB__AMUX CYREG_PRT2_AMUX
#define SignalB__BIE CYREG_PRT2_BIE
#define SignalB__BIT_MASK CYREG_PRT2_BIT_MASK
#define SignalB__BYP CYREG_PRT2_BYP
#define SignalB__CTL CYREG_PRT2_CTL
#define SignalB__DM0 CYREG_PRT2_DM0
#define SignalB__DM1 CYREG_PRT2_DM1
#define SignalB__DM2 CYREG_PRT2_DM2
#define SignalB__DR CYREG_PRT2_DR
#define SignalB__INP_DIS CYREG_PRT2_INP_DIS
#define SignalB__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define SignalB__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define SignalB__LCD_EN CYREG_PRT2_LCD_EN
#define SignalB__MASK 0x40u
#define SignalB__PORT 2u
#define SignalB__PRT CYREG_PRT2_PRT
#define SignalB__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define SignalB__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define SignalB__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define SignalB__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define SignalB__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define SignalB__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define SignalB__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define SignalB__PS CYREG_PRT2_PS
#define SignalB__SHIFT 6u
#define SignalB__SLW CYREG_PRT2_SLW

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

/* UART_1_BUART */
#define UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB08_09_ACTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB08_09_CTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB08_09_CTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB08_09_CTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B1_UDB08_09_CTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B1_UDB08_09_MSK
#define UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B1_UDB08_09_MSK
#define UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B1_UDB08_09_MSK
#define UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB08_09_MSK
#define UART_1_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B1_UDB08_ACTL
#define UART_1_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B1_UDB08_CTL
#define UART_1_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B1_UDB08_ST_CTL
#define UART_1_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B1_UDB08_CTL
#define UART_1_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B1_UDB08_ST_CTL
#define UART_1_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B1_UDB08_MSK
#define UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB08_09_ACTL
#define UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B1_UDB08_09_ST
#define UART_1_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B1_UDB08_MSK
#define UART_1_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B1_UDB08_ACTL
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B1_UDB08_ST_CTL
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B1_UDB08_ST_CTL
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B1_UDB08_ST
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B1_UDB08_09_A0
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B1_UDB08_09_A1
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B1_UDB08_09_D0
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B1_UDB08_09_D1
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB08_09_ACTL
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B1_UDB08_09_F0
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B1_UDB08_09_F1
#define UART_1_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B1_UDB08_A0_A1
#define UART_1_BUART_sRX_RxShifter_u0__A0_REG CYREG_B1_UDB08_A0
#define UART_1_BUART_sRX_RxShifter_u0__A1_REG CYREG_B1_UDB08_A1
#define UART_1_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B1_UDB08_D0_D1
#define UART_1_BUART_sRX_RxShifter_u0__D0_REG CYREG_B1_UDB08_D0
#define UART_1_BUART_sRX_RxShifter_u0__D1_REG CYREG_B1_UDB08_D1
#define UART_1_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B1_UDB08_ACTL
#define UART_1_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B1_UDB08_F0_F1
#define UART_1_BUART_sRX_RxShifter_u0__F0_REG CYREG_B1_UDB08_F0
#define UART_1_BUART_sRX_RxShifter_u0__F1_REG CYREG_B1_UDB08_F1
#define UART_1_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB09_10_ACTL
#define UART_1_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B1_UDB09_10_ST
#define UART_1_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_1_BUART_sRX_RxSts__3__POS 3
#define UART_1_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_1_BUART_sRX_RxSts__4__POS 4
#define UART_1_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_1_BUART_sRX_RxSts__5__POS 5
#define UART_1_BUART_sRX_RxSts__MASK 0x38u
#define UART_1_BUART_sRX_RxSts__MASK_REG CYREG_B1_UDB09_MSK
#define UART_1_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B1_UDB09_ACTL
#define UART_1_BUART_sRX_RxSts__STATUS_REG CYREG_B1_UDB09_ST
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B1_UDB10_11_A0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B1_UDB10_11_A1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B1_UDB10_11_D0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B1_UDB10_11_D1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB10_11_ACTL
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B1_UDB10_11_F0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B1_UDB10_11_F1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B1_UDB10_A0_A1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B1_UDB10_A0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B1_UDB10_A1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B1_UDB10_D0_D1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B1_UDB10_D0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B1_UDB10_D1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B1_UDB10_ACTL
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B1_UDB10_F0_F1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B1_UDB10_F0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B1_UDB10_F1
#define UART_1_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B1_UDB11_A0_A1
#define UART_1_BUART_sTX_TxShifter_u0__A0_REG CYREG_B1_UDB11_A0
#define UART_1_BUART_sTX_TxShifter_u0__A1_REG CYREG_B1_UDB11_A1
#define UART_1_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B1_UDB11_D0_D1
#define UART_1_BUART_sTX_TxShifter_u0__D0_REG CYREG_B1_UDB11_D0
#define UART_1_BUART_sTX_TxShifter_u0__D1_REG CYREG_B1_UDB11_D1
#define UART_1_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B1_UDB11_ACTL
#define UART_1_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B1_UDB11_F0_F1
#define UART_1_BUART_sTX_TxShifter_u0__F0_REG CYREG_B1_UDB11_F0
#define UART_1_BUART_sTX_TxShifter_u0__F1_REG CYREG_B1_UDB11_F1
#define UART_1_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_1_BUART_sTX_TxSts__0__POS 0
#define UART_1_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_1_BUART_sTX_TxSts__1__POS 1
#define UART_1_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB10_11_ACTL
#define UART_1_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B1_UDB10_11_ST
#define UART_1_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_1_BUART_sTX_TxSts__2__POS 2
#define UART_1_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_1_BUART_sTX_TxSts__3__POS 3
#define UART_1_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_1_BUART_sTX_TxSts__MASK_REG CYREG_B1_UDB10_MSK
#define UART_1_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B1_UDB10_ACTL
#define UART_1_BUART_sTX_TxSts__STATUS_REG CYREG_B1_UDB10_ST

/* UART_1_IntClock */
#define UART_1_IntClock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define UART_1_IntClock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define UART_1_IntClock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define UART_1_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_1_IntClock__INDEX 0x01u
#define UART_1_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_1_IntClock__PM_ACT_MSK 0x02u
#define UART_1_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_1_IntClock__PM_STBY_MSK 0x02u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 48000000U
#define BCLK__BUS_CLK__KHZ 48000U
#define BCLK__BUS_CLK__MHZ 48U
#define CY_PROJECT_NAME "FirstTry"
#define CY_VERSION "PSoC Creator  4.1 Update 1"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 16u
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
#define CYDEV_CHIP_MEMBER_4A 16u
#define CYDEV_CHIP_MEMBER_4D 12u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 17u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 15u
#define CYDEV_CHIP_MEMBER_4I 21u
#define CYDEV_CHIP_MEMBER_4J 13u
#define CYDEV_CHIP_MEMBER_4K 14u
#define CYDEV_CHIP_MEMBER_4L 20u
#define CYDEV_CHIP_MEMBER_4M 19u
#define CYDEV_CHIP_MEMBER_4N 9u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 18u
#define CYDEV_CHIP_MEMBER_4Q 11u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 22u
#define CYDEV_CHIP_MEMBER_FM3 26u
#define CYDEV_CHIP_MEMBER_FM4 27u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 23u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 24u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 25u
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
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 0u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 0u
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
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x0000000Fu
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
