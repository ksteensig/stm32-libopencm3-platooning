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

/* ADC_A_theACLK */
#define ADC_A_theACLK__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define ADC_A_theACLK__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define ADC_A_theACLK__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define ADC_A_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_A_theACLK__INDEX 0x01u
#define ADC_A_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_A_theACLK__PM_ACT_MSK 0x02u
#define ADC_A_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_A_theACLK__PM_STBY_MSK 0x02u

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

/* ADC_B_theACLK */
#define ADC_B_theACLK__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define ADC_B_theACLK__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define ADC_B_theACLK__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define ADC_B_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_B_theACLK__INDEX 0x00u
#define ADC_B_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_B_theACLK__PM_ACT_MSK 0x01u
#define ADC_B_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_B_theACLK__PM_STBY_MSK 0x01u

/* Clock_1 */
#define Clock_1__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define Clock_1__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define Clock_1__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define Clock_1__CFG2_SRC_SEL_MASK 0x07u
#define Clock_1__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define Clock_1__CFG3_PHASE_DLY_MASK 0x0Fu
#define Clock_1__INDEX 0x00u
#define Clock_1__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define Clock_1__PM_ACT_MSK 0x01u
#define Clock_1__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define Clock_1__PM_STBY_MSK 0x01u

/* Clock_3 */
#define Clock_3__CFG0 CYREG_CLKDIST_DCFG2_CFG0
#define Clock_3__CFG1 CYREG_CLKDIST_DCFG2_CFG1
#define Clock_3__CFG2 CYREG_CLKDIST_DCFG2_CFG2
#define Clock_3__CFG2_SRC_SEL_MASK 0x07u
#define Clock_3__INDEX 0x02u
#define Clock_3__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_3__PM_ACT_MSK 0x04u
#define Clock_3__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_3__PM_STBY_MSK 0x04u

/* Comp_PD_A */
#define Comp_PD_A_ctComp__CLK CYREG_CMP3_CLK
#define Comp_PD_A_ctComp__CMP_MASK 0x08u
#define Comp_PD_A_ctComp__CMP_NUMBER 3u
#define Comp_PD_A_ctComp__CR CYREG_CMP3_CR
#define Comp_PD_A_ctComp__LUT__CR CYREG_LUT3_CR
#define Comp_PD_A_ctComp__LUT__MSK CYREG_LUT_MSK
#define Comp_PD_A_ctComp__LUT__MSK_MASK 0x08u
#define Comp_PD_A_ctComp__LUT__MSK_SHIFT 3u
#define Comp_PD_A_ctComp__LUT__MX CYREG_LUT3_MX
#define Comp_PD_A_ctComp__LUT__SR CYREG_LUT_SR
#define Comp_PD_A_ctComp__LUT__SR_MASK 0x08u
#define Comp_PD_A_ctComp__LUT__SR_SHIFT 3u
#define Comp_PD_A_ctComp__PM_ACT_CFG CYREG_PM_ACT_CFG7
#define Comp_PD_A_ctComp__PM_ACT_MSK 0x08u
#define Comp_PD_A_ctComp__PM_STBY_CFG CYREG_PM_STBY_CFG7
#define Comp_PD_A_ctComp__PM_STBY_MSK 0x08u
#define Comp_PD_A_ctComp__SW0 CYREG_CMP3_SW0
#define Comp_PD_A_ctComp__SW2 CYREG_CMP3_SW2
#define Comp_PD_A_ctComp__SW3 CYREG_CMP3_SW3
#define Comp_PD_A_ctComp__SW4 CYREG_CMP3_SW4
#define Comp_PD_A_ctComp__SW6 CYREG_CMP3_SW6
#define Comp_PD_A_ctComp__TR0 CYREG_CMP3_TR0
#define Comp_PD_A_ctComp__TR1 CYREG_CMP3_TR1
#define Comp_PD_A_ctComp__TRIM__TR0 CYREG_FLSHID_MFG_CFG_CMP3_TR0
#define Comp_PD_A_ctComp__TRIM__TR0_HS CYREG_FLSHID_CUST_TABLES_CMP3_TR0_HS
#define Comp_PD_A_ctComp__TRIM__TR1 CYREG_FLSHID_MFG_CFG_CMP3_TR1
#define Comp_PD_A_ctComp__TRIM__TR1_HS CYREG_FLSHID_CUST_TABLES_CMP3_TR1_HS
#define Comp_PD_A_ctComp__WRK CYREG_CMP_WRK
#define Comp_PD_A_ctComp__WRK_MASK 0x08u
#define Comp_PD_A_ctComp__WRK_SHIFT 3u

/* Comp_PD_B */
#define Comp_PD_B_ctComp__CLK CYREG_CMP2_CLK
#define Comp_PD_B_ctComp__CMP_MASK 0x04u
#define Comp_PD_B_ctComp__CMP_NUMBER 2u
#define Comp_PD_B_ctComp__CR CYREG_CMP2_CR
#define Comp_PD_B_ctComp__LUT__CR CYREG_LUT2_CR
#define Comp_PD_B_ctComp__LUT__MSK CYREG_LUT_MSK
#define Comp_PD_B_ctComp__LUT__MSK_MASK 0x04u
#define Comp_PD_B_ctComp__LUT__MSK_SHIFT 2u
#define Comp_PD_B_ctComp__LUT__MX CYREG_LUT2_MX
#define Comp_PD_B_ctComp__LUT__SR CYREG_LUT_SR
#define Comp_PD_B_ctComp__LUT__SR_MASK 0x04u
#define Comp_PD_B_ctComp__LUT__SR_SHIFT 2u
#define Comp_PD_B_ctComp__PM_ACT_CFG CYREG_PM_ACT_CFG7
#define Comp_PD_B_ctComp__PM_ACT_MSK 0x04u
#define Comp_PD_B_ctComp__PM_STBY_CFG CYREG_PM_STBY_CFG7
#define Comp_PD_B_ctComp__PM_STBY_MSK 0x04u
#define Comp_PD_B_ctComp__SW0 CYREG_CMP2_SW0
#define Comp_PD_B_ctComp__SW2 CYREG_CMP2_SW2
#define Comp_PD_B_ctComp__SW3 CYREG_CMP2_SW3
#define Comp_PD_B_ctComp__SW4 CYREG_CMP2_SW4
#define Comp_PD_B_ctComp__SW6 CYREG_CMP2_SW6
#define Comp_PD_B_ctComp__TR0 CYREG_CMP2_TR0
#define Comp_PD_B_ctComp__TR1 CYREG_CMP2_TR1
#define Comp_PD_B_ctComp__TRIM__TR0 CYREG_FLSHID_MFG_CFG_CMP2_TR0
#define Comp_PD_B_ctComp__TRIM__TR0_HS CYREG_FLSHID_CUST_TABLES_CMP2_TR0_HS
#define Comp_PD_B_ctComp__TRIM__TR1 CYREG_FLSHID_MFG_CFG_CMP2_TR1
#define Comp_PD_B_ctComp__TRIM__TR1_HS CYREG_FLSHID_CUST_TABLES_CMP2_TR1_HS
#define Comp_PD_B_ctComp__WRK CYREG_CMP_WRK
#define Comp_PD_B_ctComp__WRK_MASK 0x04u
#define Comp_PD_B_ctComp__WRK_SHIFT 2u

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
#define ISR_PIN_A__INTC_PRIOR_NUM 7u
#define ISR_PIN_A__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define ISR_PIN_A__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ISR_PIN_A__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ISR_PIN_B */
#define ISR_PIN_B__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ISR_PIN_B__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ISR_PIN_B__INTC_MASK 0x02u
#define ISR_PIN_B__INTC_NUMBER 1u
#define ISR_PIN_B__INTC_PRIOR_NUM 7u
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
#define Mixer_PD_A_SC__BST CYREG_SC1_BST
#define Mixer_PD_A_SC__CLK CYREG_SC1_CLK
#define Mixer_PD_A_SC__CMPINV CYREG_SC_CMPINV
#define Mixer_PD_A_SC__CMPINV_MASK 0x02u
#define Mixer_PD_A_SC__CPTR CYREG_SC_CPTR
#define Mixer_PD_A_SC__CPTR_MASK 0x02u
#define Mixer_PD_A_SC__CR0 CYREG_SC1_CR0
#define Mixer_PD_A_SC__CR1 CYREG_SC1_CR1
#define Mixer_PD_A_SC__CR2 CYREG_SC1_CR2
#define Mixer_PD_A_SC__MSK CYREG_SC_MSK
#define Mixer_PD_A_SC__MSK_MASK 0x02u
#define Mixer_PD_A_SC__PM_ACT_CFG CYREG_PM_ACT_CFG9
#define Mixer_PD_A_SC__PM_ACT_MSK 0x02u
#define Mixer_PD_A_SC__PM_STBY_CFG CYREG_PM_STBY_CFG9
#define Mixer_PD_A_SC__PM_STBY_MSK 0x02u
#define Mixer_PD_A_SC__SR CYREG_SC_SR
#define Mixer_PD_A_SC__SR_MASK 0x02u
#define Mixer_PD_A_SC__SW0 CYREG_SC1_SW0
#define Mixer_PD_A_SC__SW10 CYREG_SC1_SW10
#define Mixer_PD_A_SC__SW2 CYREG_SC1_SW2
#define Mixer_PD_A_SC__SW3 CYREG_SC1_SW3
#define Mixer_PD_A_SC__SW4 CYREG_SC1_SW4
#define Mixer_PD_A_SC__SW6 CYREG_SC1_SW6
#define Mixer_PD_A_SC__SW7 CYREG_SC1_SW7
#define Mixer_PD_A_SC__SW8 CYREG_SC1_SW8
#define Mixer_PD_A_SC__WRK1 CYREG_SC_WRK1
#define Mixer_PD_A_SC__WRK1_MASK 0x02u

/* Mixer_PD_B_SC */
#define Mixer_PD_B_SC__BST CYREG_SC0_BST
#define Mixer_PD_B_SC__CLK CYREG_SC0_CLK
#define Mixer_PD_B_SC__CMPINV CYREG_SC_CMPINV
#define Mixer_PD_B_SC__CMPINV_MASK 0x01u
#define Mixer_PD_B_SC__CPTR CYREG_SC_CPTR
#define Mixer_PD_B_SC__CPTR_MASK 0x01u
#define Mixer_PD_B_SC__CR0 CYREG_SC0_CR0
#define Mixer_PD_B_SC__CR1 CYREG_SC0_CR1
#define Mixer_PD_B_SC__CR2 CYREG_SC0_CR2
#define Mixer_PD_B_SC__MSK CYREG_SC_MSK
#define Mixer_PD_B_SC__MSK_MASK 0x01u
#define Mixer_PD_B_SC__PM_ACT_CFG CYREG_PM_ACT_CFG9
#define Mixer_PD_B_SC__PM_ACT_MSK 0x01u
#define Mixer_PD_B_SC__PM_STBY_CFG CYREG_PM_STBY_CFG9
#define Mixer_PD_B_SC__PM_STBY_MSK 0x01u
#define Mixer_PD_B_SC__SR CYREG_SC_SR
#define Mixer_PD_B_SC__SR_MASK 0x01u
#define Mixer_PD_B_SC__SW0 CYREG_SC0_SW0
#define Mixer_PD_B_SC__SW10 CYREG_SC0_SW10
#define Mixer_PD_B_SC__SW2 CYREG_SC0_SW2
#define Mixer_PD_B_SC__SW3 CYREG_SC0_SW3
#define Mixer_PD_B_SC__SW4 CYREG_SC0_SW4
#define Mixer_PD_B_SC__SW6 CYREG_SC0_SW6
#define Mixer_PD_B_SC__SW7 CYREG_SC0_SW7
#define Mixer_PD_B_SC__SW8 CYREG_SC0_SW8
#define Mixer_PD_B_SC__WRK1 CYREG_SC_WRK1
#define Mixer_PD_B_SC__WRK1_MASK 0x01u

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

/* USBUART_1 */
#define USBUART_1_arb_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_1_arb_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_1_arb_int__INTC_MASK 0x400000u
#define USBUART_1_arb_int__INTC_NUMBER 22u
#define USBUART_1_arb_int__INTC_PRIOR_NUM 7u
#define USBUART_1_arb_int__INTC_PRIOR_REG CYREG_NVIC_PRI_22
#define USBUART_1_arb_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_1_arb_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_1_bus_reset__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_1_bus_reset__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_1_bus_reset__INTC_MASK 0x800000u
#define USBUART_1_bus_reset__INTC_NUMBER 23u
#define USBUART_1_bus_reset__INTC_PRIOR_NUM 7u
#define USBUART_1_bus_reset__INTC_PRIOR_REG CYREG_NVIC_PRI_23
#define USBUART_1_bus_reset__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_1_bus_reset__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_1_Dm__0__INTTYPE CYREG_PICU15_INTTYPE7
#define USBUART_1_Dm__0__MASK 0x80u
#define USBUART_1_Dm__0__PC CYREG_IO_PC_PRT15_7_6_PC1
#define USBUART_1_Dm__0__PORT 15u
#define USBUART_1_Dm__0__SHIFT 7u
#define USBUART_1_Dm__AG CYREG_PRT15_AG
#define USBUART_1_Dm__AMUX CYREG_PRT15_AMUX
#define USBUART_1_Dm__BIE CYREG_PRT15_BIE
#define USBUART_1_Dm__BIT_MASK CYREG_PRT15_BIT_MASK
#define USBUART_1_Dm__BYP CYREG_PRT15_BYP
#define USBUART_1_Dm__CTL CYREG_PRT15_CTL
#define USBUART_1_Dm__DM0 CYREG_PRT15_DM0
#define USBUART_1_Dm__DM1 CYREG_PRT15_DM1
#define USBUART_1_Dm__DM2 CYREG_PRT15_DM2
#define USBUART_1_Dm__DR CYREG_PRT15_DR
#define USBUART_1_Dm__INP_DIS CYREG_PRT15_INP_DIS
#define USBUART_1_Dm__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define USBUART_1_Dm__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define USBUART_1_Dm__LCD_EN CYREG_PRT15_LCD_EN
#define USBUART_1_Dm__MASK 0x80u
#define USBUART_1_Dm__PORT 15u
#define USBUART_1_Dm__PRT CYREG_PRT15_PRT
#define USBUART_1_Dm__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define USBUART_1_Dm__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define USBUART_1_Dm__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define USBUART_1_Dm__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define USBUART_1_Dm__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define USBUART_1_Dm__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define USBUART_1_Dm__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define USBUART_1_Dm__PS CYREG_PRT15_PS
#define USBUART_1_Dm__SHIFT 7u
#define USBUART_1_Dm__SLW CYREG_PRT15_SLW
#define USBUART_1_Dp__0__INTTYPE CYREG_PICU15_INTTYPE6
#define USBUART_1_Dp__0__MASK 0x40u
#define USBUART_1_Dp__0__PC CYREG_IO_PC_PRT15_7_6_PC0
#define USBUART_1_Dp__0__PORT 15u
#define USBUART_1_Dp__0__SHIFT 6u
#define USBUART_1_Dp__AG CYREG_PRT15_AG
#define USBUART_1_Dp__AMUX CYREG_PRT15_AMUX
#define USBUART_1_Dp__BIE CYREG_PRT15_BIE
#define USBUART_1_Dp__BIT_MASK CYREG_PRT15_BIT_MASK
#define USBUART_1_Dp__BYP CYREG_PRT15_BYP
#define USBUART_1_Dp__CTL CYREG_PRT15_CTL
#define USBUART_1_Dp__DM0 CYREG_PRT15_DM0
#define USBUART_1_Dp__DM1 CYREG_PRT15_DM1
#define USBUART_1_Dp__DM2 CYREG_PRT15_DM2
#define USBUART_1_Dp__DR CYREG_PRT15_DR
#define USBUART_1_Dp__INP_DIS CYREG_PRT15_INP_DIS
#define USBUART_1_Dp__INTSTAT CYREG_PICU15_INTSTAT
#define USBUART_1_Dp__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define USBUART_1_Dp__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define USBUART_1_Dp__LCD_EN CYREG_PRT15_LCD_EN
#define USBUART_1_Dp__MASK 0x40u
#define USBUART_1_Dp__PORT 15u
#define USBUART_1_Dp__PRT CYREG_PRT15_PRT
#define USBUART_1_Dp__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define USBUART_1_Dp__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define USBUART_1_Dp__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define USBUART_1_Dp__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define USBUART_1_Dp__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define USBUART_1_Dp__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define USBUART_1_Dp__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define USBUART_1_Dp__PS CYREG_PRT15_PS
#define USBUART_1_Dp__SHIFT 6u
#define USBUART_1_Dp__SLW CYREG_PRT15_SLW
#define USBUART_1_Dp__SNAP CYREG_PICU_15_SNAP_15
#define USBUART_1_dp_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_1_dp_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_1_dp_int__INTC_MASK 0x1000u
#define USBUART_1_dp_int__INTC_NUMBER 12u
#define USBUART_1_dp_int__INTC_PRIOR_NUM 7u
#define USBUART_1_dp_int__INTC_PRIOR_REG CYREG_NVIC_PRI_12
#define USBUART_1_dp_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_1_dp_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_1_ep_0__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_1_ep_0__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_1_ep_0__INTC_MASK 0x1000000u
#define USBUART_1_ep_0__INTC_NUMBER 24u
#define USBUART_1_ep_0__INTC_PRIOR_NUM 7u
#define USBUART_1_ep_0__INTC_PRIOR_REG CYREG_NVIC_PRI_24
#define USBUART_1_ep_0__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_1_ep_0__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_1_ep_1__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_1_ep_1__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_1_ep_1__INTC_MASK 0x10u
#define USBUART_1_ep_1__INTC_NUMBER 4u
#define USBUART_1_ep_1__INTC_PRIOR_NUM 7u
#define USBUART_1_ep_1__INTC_PRIOR_REG CYREG_NVIC_PRI_4
#define USBUART_1_ep_1__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_1_ep_1__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_1_ep_2__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_1_ep_2__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_1_ep_2__INTC_MASK 0x20u
#define USBUART_1_ep_2__INTC_NUMBER 5u
#define USBUART_1_ep_2__INTC_PRIOR_NUM 7u
#define USBUART_1_ep_2__INTC_PRIOR_REG CYREG_NVIC_PRI_5
#define USBUART_1_ep_2__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_1_ep_2__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_1_ep_3__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_1_ep_3__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_1_ep_3__INTC_MASK 0x40u
#define USBUART_1_ep_3__INTC_NUMBER 6u
#define USBUART_1_ep_3__INTC_PRIOR_NUM 7u
#define USBUART_1_ep_3__INTC_PRIOR_REG CYREG_NVIC_PRI_6
#define USBUART_1_ep_3__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_1_ep_3__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_1_sof_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_1_sof_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_1_sof_int__INTC_MASK 0x200000u
#define USBUART_1_sof_int__INTC_NUMBER 21u
#define USBUART_1_sof_int__INTC_PRIOR_NUM 7u
#define USBUART_1_sof_int__INTC_PRIOR_REG CYREG_NVIC_PRI_21
#define USBUART_1_sof_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_1_sof_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_1_USB__ARB_CFG CYREG_USB_ARB_CFG
#define USBUART_1_USB__ARB_EP1_CFG CYREG_USB_ARB_EP1_CFG
#define USBUART_1_USB__ARB_EP1_INT_EN CYREG_USB_ARB_EP1_INT_EN
#define USBUART_1_USB__ARB_EP1_SR CYREG_USB_ARB_EP1_SR
#define USBUART_1_USB__ARB_EP2_CFG CYREG_USB_ARB_EP2_CFG
#define USBUART_1_USB__ARB_EP2_INT_EN CYREG_USB_ARB_EP2_INT_EN
#define USBUART_1_USB__ARB_EP2_SR CYREG_USB_ARB_EP2_SR
#define USBUART_1_USB__ARB_EP3_CFG CYREG_USB_ARB_EP3_CFG
#define USBUART_1_USB__ARB_EP3_INT_EN CYREG_USB_ARB_EP3_INT_EN
#define USBUART_1_USB__ARB_EP3_SR CYREG_USB_ARB_EP3_SR
#define USBUART_1_USB__ARB_EP4_CFG CYREG_USB_ARB_EP4_CFG
#define USBUART_1_USB__ARB_EP4_INT_EN CYREG_USB_ARB_EP4_INT_EN
#define USBUART_1_USB__ARB_EP4_SR CYREG_USB_ARB_EP4_SR
#define USBUART_1_USB__ARB_EP5_CFG CYREG_USB_ARB_EP5_CFG
#define USBUART_1_USB__ARB_EP5_INT_EN CYREG_USB_ARB_EP5_INT_EN
#define USBUART_1_USB__ARB_EP5_SR CYREG_USB_ARB_EP5_SR
#define USBUART_1_USB__ARB_EP6_CFG CYREG_USB_ARB_EP6_CFG
#define USBUART_1_USB__ARB_EP6_INT_EN CYREG_USB_ARB_EP6_INT_EN
#define USBUART_1_USB__ARB_EP6_SR CYREG_USB_ARB_EP6_SR
#define USBUART_1_USB__ARB_EP7_CFG CYREG_USB_ARB_EP7_CFG
#define USBUART_1_USB__ARB_EP7_INT_EN CYREG_USB_ARB_EP7_INT_EN
#define USBUART_1_USB__ARB_EP7_SR CYREG_USB_ARB_EP7_SR
#define USBUART_1_USB__ARB_EP8_CFG CYREG_USB_ARB_EP8_CFG
#define USBUART_1_USB__ARB_EP8_INT_EN CYREG_USB_ARB_EP8_INT_EN
#define USBUART_1_USB__ARB_EP8_SR CYREG_USB_ARB_EP8_SR
#define USBUART_1_USB__ARB_INT_EN CYREG_USB_ARB_INT_EN
#define USBUART_1_USB__ARB_INT_SR CYREG_USB_ARB_INT_SR
#define USBUART_1_USB__ARB_RW1_DR CYREG_USB_ARB_RW1_DR
#define USBUART_1_USB__ARB_RW1_RA CYREG_USB_ARB_RW1_RA
#define USBUART_1_USB__ARB_RW1_RA_MSB CYREG_USB_ARB_RW1_RA_MSB
#define USBUART_1_USB__ARB_RW1_WA CYREG_USB_ARB_RW1_WA
#define USBUART_1_USB__ARB_RW1_WA_MSB CYREG_USB_ARB_RW1_WA_MSB
#define USBUART_1_USB__ARB_RW2_DR CYREG_USB_ARB_RW2_DR
#define USBUART_1_USB__ARB_RW2_RA CYREG_USB_ARB_RW2_RA
#define USBUART_1_USB__ARB_RW2_RA_MSB CYREG_USB_ARB_RW2_RA_MSB
#define USBUART_1_USB__ARB_RW2_WA CYREG_USB_ARB_RW2_WA
#define USBUART_1_USB__ARB_RW2_WA_MSB CYREG_USB_ARB_RW2_WA_MSB
#define USBUART_1_USB__ARB_RW3_DR CYREG_USB_ARB_RW3_DR
#define USBUART_1_USB__ARB_RW3_RA CYREG_USB_ARB_RW3_RA
#define USBUART_1_USB__ARB_RW3_RA_MSB CYREG_USB_ARB_RW3_RA_MSB
#define USBUART_1_USB__ARB_RW3_WA CYREG_USB_ARB_RW3_WA
#define USBUART_1_USB__ARB_RW3_WA_MSB CYREG_USB_ARB_RW3_WA_MSB
#define USBUART_1_USB__ARB_RW4_DR CYREG_USB_ARB_RW4_DR
#define USBUART_1_USB__ARB_RW4_RA CYREG_USB_ARB_RW4_RA
#define USBUART_1_USB__ARB_RW4_RA_MSB CYREG_USB_ARB_RW4_RA_MSB
#define USBUART_1_USB__ARB_RW4_WA CYREG_USB_ARB_RW4_WA
#define USBUART_1_USB__ARB_RW4_WA_MSB CYREG_USB_ARB_RW4_WA_MSB
#define USBUART_1_USB__ARB_RW5_DR CYREG_USB_ARB_RW5_DR
#define USBUART_1_USB__ARB_RW5_RA CYREG_USB_ARB_RW5_RA
#define USBUART_1_USB__ARB_RW5_RA_MSB CYREG_USB_ARB_RW5_RA_MSB
#define USBUART_1_USB__ARB_RW5_WA CYREG_USB_ARB_RW5_WA
#define USBUART_1_USB__ARB_RW5_WA_MSB CYREG_USB_ARB_RW5_WA_MSB
#define USBUART_1_USB__ARB_RW6_DR CYREG_USB_ARB_RW6_DR
#define USBUART_1_USB__ARB_RW6_RA CYREG_USB_ARB_RW6_RA
#define USBUART_1_USB__ARB_RW6_RA_MSB CYREG_USB_ARB_RW6_RA_MSB
#define USBUART_1_USB__ARB_RW6_WA CYREG_USB_ARB_RW6_WA
#define USBUART_1_USB__ARB_RW6_WA_MSB CYREG_USB_ARB_RW6_WA_MSB
#define USBUART_1_USB__ARB_RW7_DR CYREG_USB_ARB_RW7_DR
#define USBUART_1_USB__ARB_RW7_RA CYREG_USB_ARB_RW7_RA
#define USBUART_1_USB__ARB_RW7_RA_MSB CYREG_USB_ARB_RW7_RA_MSB
#define USBUART_1_USB__ARB_RW7_WA CYREG_USB_ARB_RW7_WA
#define USBUART_1_USB__ARB_RW7_WA_MSB CYREG_USB_ARB_RW7_WA_MSB
#define USBUART_1_USB__ARB_RW8_DR CYREG_USB_ARB_RW8_DR
#define USBUART_1_USB__ARB_RW8_RA CYREG_USB_ARB_RW8_RA
#define USBUART_1_USB__ARB_RW8_RA_MSB CYREG_USB_ARB_RW8_RA_MSB
#define USBUART_1_USB__ARB_RW8_WA CYREG_USB_ARB_RW8_WA
#define USBUART_1_USB__ARB_RW8_WA_MSB CYREG_USB_ARB_RW8_WA_MSB
#define USBUART_1_USB__BUF_SIZE CYREG_USB_BUF_SIZE
#define USBUART_1_USB__BUS_RST_CNT CYREG_USB_BUS_RST_CNT
#define USBUART_1_USB__CR0 CYREG_USB_CR0
#define USBUART_1_USB__CR1 CYREG_USB_CR1
#define USBUART_1_USB__CWA CYREG_USB_CWA
#define USBUART_1_USB__CWA_MSB CYREG_USB_CWA_MSB
#define USBUART_1_USB__DMA_THRES CYREG_USB_DMA_THRES
#define USBUART_1_USB__DMA_THRES_MSB CYREG_USB_DMA_THRES_MSB
#define USBUART_1_USB__DYN_RECONFIG CYREG_USB_DYN_RECONFIG
#define USBUART_1_USB__EP_ACTIVE CYREG_USB_EP_ACTIVE
#define USBUART_1_USB__EP_TYPE CYREG_USB_EP_TYPE
#define USBUART_1_USB__EP0_CNT CYREG_USB_EP0_CNT
#define USBUART_1_USB__EP0_CR CYREG_USB_EP0_CR
#define USBUART_1_USB__EP0_DR0 CYREG_USB_EP0_DR0
#define USBUART_1_USB__EP0_DR1 CYREG_USB_EP0_DR1
#define USBUART_1_USB__EP0_DR2 CYREG_USB_EP0_DR2
#define USBUART_1_USB__EP0_DR3 CYREG_USB_EP0_DR3
#define USBUART_1_USB__EP0_DR4 CYREG_USB_EP0_DR4
#define USBUART_1_USB__EP0_DR5 CYREG_USB_EP0_DR5
#define USBUART_1_USB__EP0_DR6 CYREG_USB_EP0_DR6
#define USBUART_1_USB__EP0_DR7 CYREG_USB_EP0_DR7
#define USBUART_1_USB__MEM_DATA CYREG_USB_MEM_DATA_MBASE
#define USBUART_1_USB__PM_ACT_CFG CYREG_PM_ACT_CFG5
#define USBUART_1_USB__PM_ACT_MSK 0x01u
#define USBUART_1_USB__PM_STBY_CFG CYREG_PM_STBY_CFG5
#define USBUART_1_USB__PM_STBY_MSK 0x01u
#define USBUART_1_USB__SIE_EP_INT_EN CYREG_USB_SIE_EP_INT_EN
#define USBUART_1_USB__SIE_EP_INT_SR CYREG_USB_SIE_EP_INT_SR
#define USBUART_1_USB__SIE_EP1_CNT0 CYREG_USB_SIE_EP1_CNT0
#define USBUART_1_USB__SIE_EP1_CNT1 CYREG_USB_SIE_EP1_CNT1
#define USBUART_1_USB__SIE_EP1_CR0 CYREG_USB_SIE_EP1_CR0
#define USBUART_1_USB__SIE_EP2_CNT0 CYREG_USB_SIE_EP2_CNT0
#define USBUART_1_USB__SIE_EP2_CNT1 CYREG_USB_SIE_EP2_CNT1
#define USBUART_1_USB__SIE_EP2_CR0 CYREG_USB_SIE_EP2_CR0
#define USBUART_1_USB__SIE_EP3_CNT0 CYREG_USB_SIE_EP3_CNT0
#define USBUART_1_USB__SIE_EP3_CNT1 CYREG_USB_SIE_EP3_CNT1
#define USBUART_1_USB__SIE_EP3_CR0 CYREG_USB_SIE_EP3_CR0
#define USBUART_1_USB__SIE_EP4_CNT0 CYREG_USB_SIE_EP4_CNT0
#define USBUART_1_USB__SIE_EP4_CNT1 CYREG_USB_SIE_EP4_CNT1
#define USBUART_1_USB__SIE_EP4_CR0 CYREG_USB_SIE_EP4_CR0
#define USBUART_1_USB__SIE_EP5_CNT0 CYREG_USB_SIE_EP5_CNT0
#define USBUART_1_USB__SIE_EP5_CNT1 CYREG_USB_SIE_EP5_CNT1
#define USBUART_1_USB__SIE_EP5_CR0 CYREG_USB_SIE_EP5_CR0
#define USBUART_1_USB__SIE_EP6_CNT0 CYREG_USB_SIE_EP6_CNT0
#define USBUART_1_USB__SIE_EP6_CNT1 CYREG_USB_SIE_EP6_CNT1
#define USBUART_1_USB__SIE_EP6_CR0 CYREG_USB_SIE_EP6_CR0
#define USBUART_1_USB__SIE_EP7_CNT0 CYREG_USB_SIE_EP7_CNT0
#define USBUART_1_USB__SIE_EP7_CNT1 CYREG_USB_SIE_EP7_CNT1
#define USBUART_1_USB__SIE_EP7_CR0 CYREG_USB_SIE_EP7_CR0
#define USBUART_1_USB__SIE_EP8_CNT0 CYREG_USB_SIE_EP8_CNT0
#define USBUART_1_USB__SIE_EP8_CNT1 CYREG_USB_SIE_EP8_CNT1
#define USBUART_1_USB__SIE_EP8_CR0 CYREG_USB_SIE_EP8_CR0
#define USBUART_1_USB__SOF0 CYREG_USB_SOF0
#define USBUART_1_USB__SOF1 CYREG_USB_SOF1
#define USBUART_1_USB__USB_CLK_EN CYREG_USB_USB_CLK_EN
#define USBUART_1_USB__USBIO_CR0 CYREG_USB_USBIO_CR0
#define USBUART_1_USB__USBIO_CR1 CYREG_USB_USBIO_CR1

/* VDAC */
#define VDAC_viDAC8__CR0 CYREG_DAC0_CR0
#define VDAC_viDAC8__CR1 CYREG_DAC0_CR1
#define VDAC_viDAC8__D CYREG_DAC0_D
#define VDAC_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define VDAC_viDAC8__PM_ACT_MSK 0x01u
#define VDAC_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define VDAC_viDAC8__PM_STBY_MSK 0x01u
#define VDAC_viDAC8__STROBE CYREG_DAC0_STROBE
#define VDAC_viDAC8__SW0 CYREG_DAC0_SW0
#define VDAC_viDAC8__SW2 CYREG_DAC0_SW2
#define VDAC_viDAC8__SW3 CYREG_DAC0_SW3
#define VDAC_viDAC8__SW4 CYREG_DAC0_SW4
#define VDAC_viDAC8__TR CYREG_DAC0_TR
#define VDAC_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC0_M1
#define VDAC_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC0_M2
#define VDAC_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC0_M3
#define VDAC_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC0_M4
#define VDAC_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC0_M5
#define VDAC_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC0_M6
#define VDAC_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC0_M7
#define VDAC_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC0_M8
#define VDAC_viDAC8__TST CYREG_DAC0_TST

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
#define CYDEV_INTR_RISING 0x0000000Cu
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
#define CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP 
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
