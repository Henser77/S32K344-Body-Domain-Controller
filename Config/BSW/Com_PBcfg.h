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
 * @file        : Com_PBcfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Post-Build configuration parameter of Com
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef  COM_PBCFG_H_
#define  COM_PBCFG_H_
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/*******************************************************************************
**                      Macros                                                **
*******************************************************************************/
#define COM_MAX_RXIPDUBUFF_SIZE  40u
#define COM_MAX_TXIPDUBUFF_SIZE  24u

#define COM_MAX_SIGNAL_BOOLBUFF_SIZE            0u
#define COM_MAX_RXGROUPSIGNAL_BOOLBUFF_SIZE     0u
#define COM_MAX_SIGNAL_BOOL_INVALID_SIZE        0u
#define COM_MAX_SIGNAL_BOOL_SUBSTITUTE_SIZE     0u

#define COM_MAX_SIGNAL_8BITBUFF_SIZE            22u
#define COM_MAX_RXGROUPSIGNAL_8BITBUFF_SIZE     0u
#define COM_MAX_SIGNAL_8BIT_INVALID_SIZE        0u
#define COM_MAX_SIGNAL_8BIT_SUBSTITUTE_SIZE     16u

#define COM_MAX_SIGNAL_16BITBUFF_SIZE           8u
#define COM_MAX_RXGROUPSIGNAL_16BITBUFF_SIZE    0u
#define COM_MAX_SIGNAL_16BIT_INVALID_SIZE       0u
#define COM_MAX_SIGNAL_16BIT_SUBSTITUTE_SIZE    4u

#define COM_MAX_SIGNAL_32BITBUFF_SIZE           0u
#define COM_MAX_RXGROUPSIGNAL_32BITBUFF_SIZE    0u
#define COM_MAX_SIGNAL_32BIT_INVALID_SIZE       0u
#define COM_MAX_SIGNAL_32BIT_SUBSTITUTE_SIZE    0u

#define COM_MAX_SIGNAL_64BITBUFF_SIZE           0u
#define COM_MAX_RXGROUPSIGNAL_64BITBUFF_SIZE    0u
#define COM_MAX_SIGNAL_64BIT_INVALID_SIZE       0u
#define COM_MAX_SIGNAL_64BIT_SUBSTITUTE_SIZE    0u

#define COM_MAX_GWSIGNAL_BOOLBUFF_SIZE                 0u
#define COM_MAX_GWSIGNAL_8BITBUFF_SIZE                 0u
#define COM_MAX_GWSIGNAL_16BITBUFF_SIZE                0u
#define COM_MAX_GWSIGNAL_32BITBUFF_SIZE                0u
#define COM_MAX_GWSIGNAL_64BITBUFF_SIZE                0u

#define COM_TXTPPDU_SUPPORT                        STD_OFF

#define COM_RXTPPDU_SUPPORT                        STD_OFF

#define COM_TMS_ENABLE    STD_OFF

#define COM_MDT_ENABLE  STD_OFF

#define COM_TX_SIGNAL_NOTIFICATION_ENABLE   STD_OFF

#define COM_RX_SIGNAL_NOTIFICATION_ENABLE   STD_OFF

#define COM_RX_SIGNAL_TIMEOUT_ENABLE    STD_ON

#define COM_TX_SIGNAL_TIMEOUT_ENABLE    STD_OFF

#define COM_RX_SIGNAL_TIMEOUT_NOTIFICATION_ENABLE STD_OFF

#define COM_TX_SIGNAL_TIMEOUT_NOTIFICATION_ENABLE STD_OFF

#define COM_RX_SIGNAL_UPDATE_BIT_ENABLE     STD_OFF

#define COM_TX_SIGNAL_UPDATE_BIT_ENABLE     STD_OFF

#define COM_RX_SIGNAL_INVALID_DATA_ENABLE   STD_OFF

#define COM_TX_SIGNAL_INVALID_DATA_ENABLE   STD_OFF

#define COM_RX_SIGNAL_INVALID_DATA_ACTION_NOTIFY_ENABLE     STD_OFF

#define COM_TX_SIG_PROP_TRIGGERED_ENABLE    STD_ON

#define COM_TX_SIG_PROP_TRIGGERED_ON_CHANGE_ENABLE  STD_OFF

#define COM_TX_SIG_PROP_TRIG_ON_CH_NO_REPETITION_ENABLE     STD_OFF

#define COM_TX_SIG_PROP_TRIG_NO_REPETITION_ENABLE   STD_OFF

#define COM_TX_SIGNAL_ERROR_NOTIFICATION_ENABLE     STD_OFF

#define COM_TX_SIGNAL_TYPE_UINT8_DYN_ENABLE     STD_OFF

#define COM_TX_SIGNAL_TYPE_UINT8_N_ENABLE     STD_OFF

#define COM_RX_SIGNAL_TYPE_UINT8_DYN_ENABLE     STD_OFF

#define COM_RX_SIGNAL_TYPE_UINT8_N_ENABLE   STD_OFF

#define COM_TX_SIG_GROUP_NOTIFICATION_ENABLE    STD_OFF

#define COM_RX_SIG_GROUP_NOTIFICATION_ENABLE    STD_OFF

#define COM_RX_SIG_GROUP_TIMEOUT_ENABLE     STD_OFF

#define COM_TX_SIG_GROUP_TIMEOUT_ENABLE     STD_OFF

#define COM_RX_SIG_GROUP_TIMEOUT_NOTIFICATION_ENABLE     STD_OFF

#define COM_TX_SIG_GROUP_TIMEOUT_NOTIFICATION_ENABLE    STD_OFF

#define COM_RX_SIG_GROUP_UPDATE_BIT_ENABLE  STD_OFF

#define COM_TX_SIG_GROUP_UPDATE_BIT_ENABLE  STD_OFF

#define COM_TX_SIG_GROUP_PROP_TRIGGERED_ENABLE  STD_OFF

#define COM_TX_SIG_GROUP_PROP_TRIGGERED_ON_CHANGE_ENABLE    STD_OFF

#define COM_TX_SIG_GROUP_PROP_TRIG_ON_CH_NO_REPETITION_ENABLE   STD_OFF

#define COM_TX_SIG_GROUP_PROP_TRIG_NO_REPETITION_ENABLE     STD_OFF

#define COM_TX_SIG_GROUP_ERROR_NOTIFICATION_ENABLE  STD_OFF

#define COM_TX_SIG_GROUP_INITIAL_VALUE_ONLY_ENABLE  STD_OFF

#define COM_RX_SIG_GROUP_INVALID_DATA_ACTION_NOTIFY_ENABLE  STD_OFF

#define COM_TX_GRP_SIGNAL_TYPE_UINT8_DYN_ENABLE     STD_OFF

#define COM_TX_GRP_SIGNAL_TYPE_UINT8_N_ENABLE     STD_OFF

#define COM_RX_GRP_SIGNAL_TYPE_UINT8_DYN_ENABLE      STD_OFF

#define COM_RX_GRP_SIGNAL_TYPE_UINT8_N_ENABLE   STD_OFF

#define COM_RX_GRP_SIGNAL_INVALID_DATA_ENABLE   STD_OFF

#define COM_TX_GRP_SIGNAL_INVALID_DATA_ENABLE   STD_OFF

#define COM_GW_DEST_SIG_UPDATE_BIT_ENABLE   STD_OFF

#define COM_GW_SRC_SIG_UPDATE_BIT_ENABLE    STD_OFF

#define COM_TX_IPDU_CALLOUT_ENABLE     STD_OFF

#define COM_RX_IPDU_CALLOUT_ENABLE     STD_OFF

#define COM_TX_SIG_INITIAL_VALUE_ONLY_ENABLE  STD_OFF

#define COM_RX_IPDU_SIGNAL_PROCESS_IMMEDIATE_ENABLE     STD_ON

#define COM_TX_IPDU_SIGNAL_PROCESS_IMMEDIATE_ENABLE     STD_ON

#define COM_RX_SIGNAL_TIMEOUT_ACTION_REPLACE_ENABLE     STD_OFF

#define COM_RX_SIGNAL_TIMEOUT_ACTION_SUBSTITUTE_ENABLE     STD_ON

#define COM_RX_SIG_GROUP_TIMEOUT_ACTION_REPLACE_ENABLE     STD_OFF

#define COM_RX_SIG_GROUP_TIMEOUT_ACTION_SUBSTITUTE_ENABLE     STD_OFF

#define COM_GW_SRC_DSP_SIG_TYPE_UINT8_N_ENABLE     STD_OFF

#define COM_GW_SRC_DSP_SIG_TYPE_UINT8_DYN_ENABLE     STD_OFF

#define COM_SIGNAL_SIGNED_TYPE_ENABLE     STD_ON

#define COM_TXIPDU_TIGGERTRANSMIT_CALLOUT_ENABLE   STD_OFF



 #define ComIPduGroup_Default    0u



#define ComIPdu_Rx_0x120    0u /* Rx-0 */
#define ComIPdu_Rx_PT_Status_Can1_0x200    1u /* Rx-1 */
#define ComIPdu_Rx_PT_Torque_Can1_0x210    2u /* Rx-2 */
#define ComIPdu_Rx_Body_Status_Can2_0x100    3u /* Rx-3 */
#define ComIPdu_Rx_Light_Cmd_Can2_0x110    4u /* Rx-4 */
#define ComIPdu_Tx_0x123    5u /* Tx-0 */
#define ComIPdu_Tx_PT_Cmd_Can1_0x201    6u /* Tx-1 */
#define ComIPdu_Tx_Body_GwStatus_Can2_0x101    7u /* Tx-2 */



#define Sig_RxCounter    0u /* ComIPdu_Rx_0x120 */
#define Sig_RxVoltage    1u /* ComIPdu_Rx_0x120 */
#define Sig_VehicleSpeed    2u /* ComIPdu_Rx_PT_Status_Can1_0x200 */
#define Sig_EngineSpeed    3u /* ComIPdu_Rx_PT_Status_Can1_0x200 */
#define Sig_Gear    4u /* ComIPdu_Rx_PT_Status_Can1_0x200 */
#define Sig_SOC    5u /* ComIPdu_Rx_PT_Status_Can1_0x200 */
#define Sig_ActualTorque    6u /* ComIPdu_Rx_PT_Torque_Can1_0x210 */
#define Sig_TorqueLimit    7u /* ComIPdu_Rx_PT_Torque_Can1_0x210 */
#define Sig_MotorTemp    8u /* ComIPdu_Rx_PT_Torque_Can1_0x210 */
#define Sig_DeratingFactor    9u /* ComIPdu_Rx_PT_Torque_Can1_0x210 */
#define Sig_DoorStatus    10u /* ComIPdu_Rx_Body_Status_Can2_0x100 */
#define Sig_LockStatus    11u /* ComIPdu_Rx_Body_Status_Can2_0x100 */
#define Sig_LightStatus    12u /* ComIPdu_Rx_Body_Status_Can2_0x100 */
#define Sig_WiperStatus    13u /* ComIPdu_Rx_Body_Status_Can2_0x100 */
#define Sig_TrunkStatus    14u /* ComIPdu_Rx_Body_Status_Can2_0x100 */
#define Sig_HoodStatus    15u /* ComIPdu_Rx_Body_Status_Can2_0x100 */
#define Sig_BatteryVoltage    16u /* ComIPdu_Rx_Body_Status_Can2_0x100 */
#define Sig_IgnitionStatus    17u /* ComIPdu_Rx_Body_Status_Can2_0x100 */
#define Sig_LightCmd    18u /* ComIPdu_Rx_Light_Cmd_Can2_0x110 */
#define Sig_TurnCmd    19u /* ComIPdu_Rx_Light_Cmd_Can2_0x110 */
#define Sig_FlashCmd    20u /* ComIPdu_Rx_Light_Cmd_Can2_0x110 */
#define Sig_LightLevel    21u /* ComIPdu_Rx_Light_Cmd_Can2_0x110 */

#define Sig_TxCounter    0u /* ComIPdu_Tx_0x123 */
#define Sig_TxTemp    1u /* ComIPdu_Tx_0x123 */
#define Sig_TxStatus    2u /* ComIPdu_Tx_0x123 */
#define Sig_TorqueLimitCmd    3u /* ComIPdu_Tx_PT_Cmd_Can1_0x201 */
#define Sig_GwVehicleSpeed    4u /* ComIPdu_Tx_Body_GwStatus_Can2_0x101 */
#define Sig_GwDoorStatus    5u /* ComIPdu_Tx_Body_GwStatus_Can2_0x101 */
#define Sig_GwLightStatus    6u /* ComIPdu_Tx_Body_GwStatus_Can2_0x101 */
#define Sig_GwAliveCounter    7u /* ComIPdu_Tx_Body_GwStatus_Can2_0x101 */









#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
extern const struct Com_ConfigTypeTag Com_Config;
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"


#endif
/***********************************************************************************************************************
**                                      End of file                                                                   **
***********************************************************************************************************************/
