/**
 * COPYRIGHT
 * ---------------------------------------------------------------------------------------------------------------------
 * Copyright (c) iSOFT INFRASTRUCTURE SOFTWARE CO., LTD. This software is proprietary to
 * iSOFT INFRASTRUCTURE SOFTWARE CO., LTD., and all rights are reserved by iSOFT INFRASTRUCTURE SOFTWARE CO., LTD.
 * Without the express written permission of the company, no organization or individual may copy, install, trial,
 * distribute, or reverse engineer this software. For terms of use and further details, please refer to the End User
 * License Agreement (EULA) or contact us business@i-soft.com.cn for more assistance.
 *
 * This file contains code from EasyXMen, which is licensed under the LGPL-2.1. However, due to a special exception,
 * you are not required to comply with the provisions of section 6a of LGPL-2.1. Specifically, you may distribute
 * your software, including this file, under terms of your choice, including proprietary licenses, without needing to
 * provide the source code or object code as specified in section 6a. For more details, please refer to the project's
 * LICENSE and EXCEPTION files and the specific exception statement.
 * ---------------------------------------------------------------------------------------------------------------------
 * FILE DESCRIPTION
 * ---------------------------------------------------------------------------------------------------------------------
 * @MCU         : S32K148
 * @file        : Com_Cfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Pre-compile configuration parameter of Com
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef  COM_CFG_H_
#define  COM_CFG_H_
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Com_PBcfg.h"

/*******************************************************************************
**                      Macros                                                **
*******************************************************************************/
#define COM_CANCELLATION_SUPPORT                STD_OFF

#define COM_DEV_ERROR_DETECT                    STD_OFF

#define COM_ENABLE_SIGNAL_GROUP_ARRAY_API       STD_ON

#define COM_VERSION_INFO_API                    STD_OFF

#define COM_ENABLE_MDT_FOR_CYCLIC_TRANSMISSION  STD_ON

#define COM_METADATA_SUPPORT                    STD_OFF

#define COM_RETRY_FAILED_TRANSMIT_REQUESTS      STD_OFF

#define COM_MULTIPLE_PARTITION_USED             STD_OFF

#define COM_SIGNAL_INITVALUE_SUPPORT            STD_ON

#define COM_SIGNAL_INVALID_VALUE_SUPPORT        STD_OFF

#define COM_SIGNAL_SUBSTITUE_VALUE_SUPPORT      STD_ON

#define COM_TXMODE_AND_FILTER_SUPPORT           STD_ON

#define COM_SIGNAL_TIMEOUT_SUPPORT              STD_ON

#define COM_MAX_PARTITION_NUMBER                1u

#define COM_MULITIVARIANT_SUPPORT               STD_OFF

#define COM_MAX_IPDU_NUMBER                      8u

#define COM_MAX_RXIPDUGROUP_NUMBER                 0u
#define COM_MAX_TXIPDUGROUP_NUMBER                 1u
#define COM_MAX_IPDUGROUP_NUMBER                   1u

#define COM_MAX_RXIPDU_CALLOUT_NUMBER   0u

#define COM_MAX_RXIPDU_NUMBER                          5u
#define COM_MAX_TXIPDU_NUMBER                          3u

#define COM_MAX_SIGNALGROUPARRY_NUMBER  0u

#define COM_MAX_RXSIG_TIMEOUT_NUMBER                       20u


#define COM_MAX_RX_SIGNAL_8BIT_INVALIDVALUE_NUMBER   0u

#define COM_MAX_TX_SIGNAL_8BIT_INVALIDVALUE_NUMBER   0u

#define COM_MAX_RXSIGNAL_INVALID_NUMBER        0u

#define COM_MAX_TXSIGNAL_INVALID_NUMBER        0u

#define COM_MAX_RXGRPSIG_INVALID_NUMBER        0u

#define COM_MAX_TXGRPSIG_INVALID_NUMBER        0u

#define COM_MAX_RXSIGNAL_FILTERTYPE_MAX_NUMBER  0u
#define COM_MAX_TXSIGNAL_FILTERTYPE_MAX_NUMBER  0u
#define COM_MAX_RXGRPSIG_FILTERTYPE_MAX_NUMBER  0u
#define COM_MAX_TXGRPSIG_FILTERTYPE_MAX_NUMBER  0u
#define COM_MAX_DESTSIG_FILTERTYPE_MAX_NUMBER    0u

/* Maximum value of the sum of mumber of TxSignal,TxGroupSignal and DestDescription which configure filter. */
#define COM_MAX_TMC_TX_ALL_TYPE_SIGNAL_NUMBER               0u

 #define COM_MAX_TXSIG_ERROR_AND_NOTIFY_NUMBER  0u
 #define COM_MAX_TXSIGGRP_ERROR_AND_NOTIFY_NUMBER  0u

#define COM_MAX_ONEEVERYNFILTERSIGNAL_NUMBER    0u
#define COM_MAX_RXMASKNEWDIFFERMASKOLD_NUMBER   0u
#define COM_MAX_RXMASKNEWDIFFERX_NUMBER   0u
#define COM_MAX_RXMASKNEWEQUALSX_NUMBER   0u
#define COM_MAX_RXNEWISOUTSIDE_NUMBER   0u
#define COM_MAX_RXNEWISWITHIN_NUMBER   0u

#define COM_MAX_TXMASKNEWDIFFERMASKOLD_NUMBER   0u
#define COM_MAX_TXMASKNEWDIFFERX_NUMBER   0u
#define COM_MAX_TXMASKNEWEQUALSX_NUMBER   0u
#define COM_MAX_TXNEWISOUTSIDE_NUMBER   0u
#define COM_MAX_TXNEWISWITHIN_NUMBER   0u

#define COM_MAX_TXSIGNAL_TIMEOUT_NUMBER    0u
#define COM_MAX_TXSIGGRP_TIMEOUT_NUMBER 0u

#define COM_MAX_SIGANDGRPSIG_NUMBER                  30u
#define COM_MAX_RXSIGNAL_NUMBER                        22u
#define COM_MAX_TXSIGNAL_NUMBER                        8u

#define COM_MAX_TXGROUPSIGNAL_NUMBER                   0u
#define COM_MAX_RXGROUPSIGNAL_NUMBER                   0u

#define COM_MAX_SIGGROUP_NUMBER         0u
#define COM_MAX_RXSIGNALGROUP_NUMBER    0u
#define COM_MAX_TXSIGNALGROUP_NUMBER    0u

#define COM_MAX_RXGRPSIG_SUBSTITUTE_NUMBER     0u

#define COM_MAX_GWMAPPING_NUMBER                       0u
#define COM_MAX_GW_DESTINATION_NUM                     0u
#define COM_MAX_GW_SOURCE_DESCRIPTION_NUMBER           0u
#define COM_MAX_GW_DESTINATION_DESCRIPTION_NUMBER      0u

/* Maximum number of Destination signals of GwMappings for all variants */
#define COM_MAX_GW_DESTINATION_SIGNAL_NUMBER      0u

/* Maximum number of Destination GroupSignals of GwMappings for all variants */
#define COM_MAX_GW_DESTINATION_GROUP_SIGNAL_NUMBER      0u

/* Maximum number of GW Source Signals with Type of UNIT8_N or UNIN8_DYN for all variants */
#define COM_MAX_GW_SOURCE_NDYN_SIGNAL_NUMBER      0u

/* Maximum number of GW Source GroupSignals with Type of UNIT8_N or UNIN8_DYN for all variants */
#define COM_MAX_GW_SOURCE_NDYN_GROUP_SIGNAL_NUMBER      0u

/* Maximum number of GW Source Descriptions with Type of UNIT8_N or UNIN8_DYN for all variants */
#define COM_MAX_GW_SOURCE_NDYN_DESCRIPTION_NUMBER      0u

/* Maximum number of GW Destination Signals with Type of UNIT8_N or UNIN8_DYN for all variants */
#define COM_MAX_GW_DESTINATION_NDYN_SIGNAL_NUMBER      0u

/* Maximum number of GW Destination GroupSignals with Type of UNIT8_N or UNIN8_DYN for all variants */
#define COM_MAX_GW_DESTINATION_NDYN_GROUP_SIGNAL_NUMBER      0u

/* Maximum number of GW Destination Descriptions with Type of UNIT8_N or UNIN8_DYN for all variants */
#define COM_MAX_GW_DESTINATION_NDYN_DESCRIPTION_NUMBER      0u

#define COM_MAX_NUMBER_OF_MAIN_FUNCTION_ROUTE_SIGNALS 0u
#define COM_MAX_NUMBER_OF_MAIN_FUNCTION_RX            1u
#define COM_MAX_NUMBER_OF_MAIN_FUNCTION_TX            1u

#define COM_MAX_TX_MODE_TRUE_PERIOD_NUMBER   2u

#define COM_MAX_TX_MODE_FALSE_PERIOD_NUMBER    0u

#define COM_MAX_TX_MODE_TRUE_DIRECT_NUMBER   0u

#define COM_MAX_TX_MODE_FALSE_DIRECT_NUMBER   0u

#define COM_MAX_TX_MODE_TRUE_MIXED_NUMBER    0u

#define COM_MAX_TX_MODE_FALSE_MIXED_NUMBER    0u

#define COM_MAX_TX_MODE_TRUE_DIRECT_NOREPETITION_NUMBER   0u

#define COM_MAX_TX_MODE_FALSE_DIRECT_NOREPETITION_NUMBER   0u

#define COM_MAX_TX_MODE_TRUE_MIXED_NOREPETITION_NUMBER    1u

#define COM_MAX_TX_MODE_FALSE_MIXED_NOREPETITION_NUMBER    0u

/* PRQA S 0791 ++ */ /* VL_Com_0791 */
#define ComConf_ComIPduGroup_ComIPduGroup_Default        ComIPduGroup_Default

#define ComConf_ComIPdu_ComIPdu_Tx_0x123        ComIPdu_Tx_0x123
#define ComConf_ComIPdu_ComIPdu_Rx_0x120        ComIPdu_Rx_0x120
#define ComConf_ComIPdu_ComIPdu_Rx_PT_Status_Can1_0x200        ComIPdu_Rx_PT_Status_Can1_0x200
#define ComConf_ComIPdu_ComIPdu_Rx_PT_Torque_Can1_0x210        ComIPdu_Rx_PT_Torque_Can1_0x210
#define ComConf_ComIPdu_ComIPdu_Rx_Body_Status_Can2_0x100        ComIPdu_Rx_Body_Status_Can2_0x100
#define ComConf_ComIPdu_ComIPdu_Rx_Light_Cmd_Can2_0x110        ComIPdu_Rx_Light_Cmd_Can2_0x110
#define ComConf_ComIPdu_ComIPdu_Tx_PT_Cmd_Can1_0x201        ComIPdu_Tx_PT_Cmd_Can1_0x201
#define ComConf_ComIPdu_ComIPdu_Tx_Body_GwStatus_Can2_0x101        ComIPdu_Tx_Body_GwStatus_Can2_0x101

#define ComConf_ComSignal_Sig_TxCounter   Sig_TxCounter
#define ComConf_ComSignal_Sig_TxTemp   Sig_TxTemp
#define ComConf_ComSignal_Sig_TxStatus   Sig_TxStatus
#define ComConf_ComSignal_Sig_RxCounter   Sig_RxCounter
#define ComConf_ComSignal_Sig_RxVoltage   Sig_RxVoltage
#define ComConf_ComSignal_Sig_VehicleSpeed   Sig_VehicleSpeed
#define ComConf_ComSignal_Sig_EngineSpeed   Sig_EngineSpeed
#define ComConf_ComSignal_Sig_Gear   Sig_Gear
#define ComConf_ComSignal_Sig_SOC   Sig_SOC
#define ComConf_ComSignal_Sig_ActualTorque   Sig_ActualTorque
#define ComConf_ComSignal_Sig_TorqueLimit   Sig_TorqueLimit
#define ComConf_ComSignal_Sig_MotorTemp   Sig_MotorTemp
#define ComConf_ComSignal_Sig_DeratingFactor   Sig_DeratingFactor
#define ComConf_ComSignal_Sig_DoorStatus   Sig_DoorStatus
#define ComConf_ComSignal_Sig_LockStatus   Sig_LockStatus
#define ComConf_ComSignal_Sig_LightStatus   Sig_LightStatus
#define ComConf_ComSignal_Sig_WiperStatus   Sig_WiperStatus
#define ComConf_ComSignal_Sig_TrunkStatus   Sig_TrunkStatus
#define ComConf_ComSignal_Sig_HoodStatus   Sig_HoodStatus
#define ComConf_ComSignal_Sig_BatteryVoltage   Sig_BatteryVoltage
#define ComConf_ComSignal_Sig_IgnitionStatus   Sig_IgnitionStatus
#define ComConf_ComSignal_Sig_LightCmd   Sig_LightCmd
#define ComConf_ComSignal_Sig_TurnCmd   Sig_TurnCmd
#define ComConf_ComSignal_Sig_FlashCmd   Sig_FlashCmd
#define ComConf_ComSignal_Sig_LightLevel   Sig_LightLevel
#define ComConf_ComSignal_Sig_TorqueLimitCmd   Sig_TorqueLimitCmd
#define ComConf_ComSignal_Sig_GwVehicleSpeed   Sig_GwVehicleSpeed
#define ComConf_ComSignal_Sig_GwDoorStatus   Sig_GwDoorStatus
#define ComConf_ComSignal_Sig_GwLightStatus   Sig_GwLightStatus
#define ComConf_ComSignal_Sig_GwAliveCounter   Sig_GwAliveCounter

/* PRQA S 0791 -- */

#endif
/***********************************************************************************************************************
**                                      End of file                                                                   **
***********************************************************************************************************************/
