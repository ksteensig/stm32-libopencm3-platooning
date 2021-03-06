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

/* Peak_Detector_1_Comp_1 */
#define Peak_Detector_1_Comp_1_ctComp__CLK CYREG_CMP2_CLK
#define Peak_Detector_1_Comp_1_ctComp__CMP_MASK 0x04u
#define Peak_Detector_1_Comp_1_ctComp__CMP_NUMBER 2u
#define Peak_Detector_1_Comp_1_ctComp__CR CYREG_CMP2_CR
#define Peak_Detector_1_Comp_1_ctComp__LUT__CR CYREG_LUT2_CR
#define Peak_Detector_1_Comp_1_ctComp__LUT__MSK CYREG_LUT_MSK
#define Peak_Detector_1_Comp_1_ctComp__LUT__MSK_MASK 0x04u
#define Peak_Detector_1_Comp_1_ctComp__LUT__MSK_SHIFT 2u
#define Peak_Detector_1_Comp_1_ctComp__LUT__MX CYREG_LUT2_MX
#define Peak_Detector_1_Comp_1_ctComp__LUT__SR CYREG_LUT_SR
#define Peak_Detector_1_Comp_1_ctComp__LUT__SR_MASK 0x04u
#define Peak_Detector_1_Comp_1_ctComp__LUT__SR_SHIFT 2u
#define Peak_Detector_1_Comp_1_ctComp__PM_ACT_CFG CYREG_PM_ACT_CFG7
#define Peak_Detector_1_Comp_1_ctComp__PM_ACT_MSK 0x04u
#define Peak_Detector_1_Comp_1_ctComp__PM_STBY_CFG CYREG_PM_STBY_CFG7
#define Peak_Detector_1_Comp_1_ctComp__PM_STBY_MSK 0x04u
#define Peak_Detector_1_Comp_1_ctComp__SW0 CYREG_CMP2_SW0
#define Peak_Detector_1_Comp_1_ctComp__SW2 CYREG_CMP2_SW2
#define Peak_Detector_1_Comp_1_ctComp__SW3 CYREG_CMP2_SW3
#define Peak_Detector_1_Comp_1_ctComp__SW4 CYREG_CMP2_SW4
#define Peak_Detector_1_Comp_1_ctComp__SW6 CYREG_CMP2_SW6
#define Peak_Detector_1_Comp_1_ctComp__TR0 CYREG_CMP2_TR0
#define Peak_Detector_1_Comp_1_ctComp__TR1 CYREG_CMP2_TR1
#define Peak_Detector_1_Comp_1_ctComp__TRIM__TR0 CYREG_FLSHID_MFG_CFG_CMP2_TR0
#define Peak_Detector_1_Comp_1_ctComp__TRIM__TR0_HS CYREG_FLSHID_CUST_TABLES_CMP2_TR0_HS
#define Peak_Detector_1_Comp_1_ctComp__TRIM__TR1 CYREG_FLSHID_MFG_CFG_CMP2_TR1
#define Peak_Detector_1_Comp_1_ctComp__TRIM__TR1_HS CYREG_FLSHID_CUST_TABLES_CMP2_TR1_HS
#define Peak_Detector_1_Comp_1_ctComp__WRK CYREG_CMP_WRK
#define Peak_Detector_1_Comp_1_ctComp__WRK_MASK 0x04u
#define Peak_Detector_1_Comp_1_ctComp__WRK_SHIFT 2u

/* Peak_Detector_1_Mixer_1_SC */
#define Peak_Detector_1_Mixer_1_SC__BST CYREG_SC0_BST
#define Peak_Detector_1_Mixer_1_SC__CLK CYREG_SC0_CLK
#define Peak_Detector_1_Mixer_1_SC__CMPINV CYREG_SC_CMPINV
#define Peak_Detector_1_Mixer_1_SC__CMPINV_MASK 0x01u
#define Peak_Detector_1_Mixer_1_SC__CPTR CYREG_SC_CPTR
#define Peak_Detector_1_Mixer_1_SC__CPTR_MASK 0x01u
#define Peak_Detector_1_Mixer_1_SC__CR0 CYREG_SC0_CR0
#define Peak_Detector_1_Mixer_1_SC__CR1 CYREG_SC0_CR1
#define Peak_Detector_1_Mixer_1_SC__CR2 CYREG_SC0_CR2
#define Peak_Detector_1_Mixer_1_SC__MSK CYREG_SC_MSK
#define Peak_Detector_1_Mixer_1_SC__MSK_MASK 0x01u
#define Peak_Detector_1_Mixer_1_SC__PM_ACT_CFG CYREG_PM_ACT_CFG9
#define Peak_Detector_1_Mixer_1_SC__PM_ACT_MSK 0x01u
#define Peak_Detector_1_Mixer_1_SC__PM_STBY_CFG CYREG_PM_STBY_CFG9
#define Peak_Detector_1_Mixer_1_SC__PM_STBY_MSK 0x01u
#define Peak_Detector_1_Mixer_1_SC__SR CYREG_SC_SR
#define Peak_Detector_1_Mixer_1_SC__SR_MASK 0x01u
#define Peak_Detector_1_Mixer_1_SC__SW0 CYREG_SC0_SW0
#define Peak_Detector_1_Mixer_1_SC__SW10 CYREG_SC0_SW10
#define Peak_Detector_1_Mixer_1_SC__SW2 CYREG_SC0_SW2
#define Peak_Detector_1_Mixer_1_SC__SW3 CYREG_SC0_SW3
#define Peak_Detector_1_Mixer_1_SC__SW4 CYREG_SC0_SW4
#define Peak_Detector_1_Mixer_1_SC__SW6 CYREG_SC0_SW6
#define Peak_Detector_1_Mixer_1_SC__SW7 CYREG_SC0_SW7
#define Peak_Detector_1_Mixer_1_SC__SW8 CYREG_SC0_SW8
#define Peak_Detector_1_Mixer_1_SC__WRK1 CYREG_SC_WRK1
#define Peak_Detector_1_Mixer_1_SC__WRK1_MASK 0x01u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "SecondTry"
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
#define CYDEV_INTR_RISING 0x00000000u
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
