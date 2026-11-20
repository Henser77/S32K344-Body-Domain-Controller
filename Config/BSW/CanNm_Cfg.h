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
 * @file        : CanNm_Cfg.h
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Pre-compile parameter definition of CanNm
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

/* ================================================ misar justifications ============================================ */
#ifndef CANNM_CFG_H_
#define CANNM_CFG_H_

/* =================================================== inclusions =================================================== */
#include "Std_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* =============================================== version information ============================================== */

/* ===================================================== macros ===================================================== */
#if !defined(CANNM_LOCAL)
#define CANNM_LOCAL static /* PRQA S 3414 */ /* VL_QAC_KeyWord */
#endif

#if !defined(CANNM_LOCAL_INLINE)
#define CANNM_LOCAL_INLINE static inline
#endif

/** Pre-processor switch for enabling support of the Passive Mode. */
#define CANNM_PASSIVE_MODE_ENABLED STD_OFF

/** Enables or disables support of partial networking.*/
#define CANNM_GLOBAL_PN_SUPPORT STD_OFF

/** Enables or disables support of CarWakeUp bit evaluation in received NM PDUs. */
#define CANNM_CAR_WAKEUP_RX_ENABLED STD_OFF

/** If CWU filtering is supported, only the CWU bit within the NM PDU with source node identifier
 *  CanNmCarWakeUpFilterNodeId is considered as CWU request.
 *  */
#define CANNM_CAR_WAKEUP_FILTER_ENABLED STD_OFF

/** Pre-processor switch for enabling the asynchronous transmission of a NM PDU upon bus-communication request in
 *  Prepare-Bus-Sleep mode.
 *  */
#define CANNM_IMMEDIATE_RESTART_ENABLED STD_OFF

/** immediate NM PDUs transmit */
#define CANNM_IMMEDIATE_TRANSMIT_ENABLED STD_ON

/** Pre-processor switch for enabling busload reduction support. */
#define CANNM_BUSLOAD_REDUCTION_ENABLED STD_OFF

/** Pre-processor switch for enabling bus synchronization support. This
feature is required for gateway nodes only. */
#define CANNM_BUS_SYNCHRONIZATION_ENABLED STD_OFF

/** Pre-processor switch for enabling the Communication Control support */
#define CANNM_COM_CONTROL_ENABLED STD_OFF

/** Preprocessor switch for enabling Com User Data. */
#define CANNM_COM_USERDATA_SUPPORT STD_OFF

/** Enables/disables the coordinator synchronisation support. */
#define CANNM_COORDINATOR_SYNC_SUPPORT STD_OFF

/** Switches the Default Error Tracer (Det) detection and notification ON or OFF. */
#define CANNM_DEV_ERROR_DETECT STD_ON

/** Enable/disable the immediate tx confirmation. */
#define CANNM_IMMEDIATE_TXCONF_ENABLED  STD_OFF

/** Node identifier of local node. */
#define CANNM_NODE_ID_ENABLED STD_ON

/** Node identifier of local node. */
#define CANNM_NODE_DETECTION_ENABLED STD_OFF

/** Pre-processor switch for enabling the PDU Rx Indication. */
#define CANNM_PDU_RX_INDICATION_ENABLED STD_OFF

/** Pre-processor switch for enabling remote sleep indication support. This feature is required for gateway nodes only. */
#define CANNM_REMOTE_SLEEP_IND_ENABLED STD_OFF

/** Enable/disable the notification that a RepeatMessageRequest bit has been received */
#define CANNM_REPEAT_MSG_IND_ENABLED STD_OFF

/** Pre-processor switch for enabling the CAN NM state change notification. */
#define CANNM_STATE_CHANGE_IND_ENABLED STD_ON

/** Pre-processor switch for enabling user data support. */
#define CANNM_USER_DATA_ENABLED STD_OFF

/** Pre-processor switch for enabling version info API support.*/
#define CANNM_VERSION_INFO_API STD_OFF

/** Pre-processor switch for enabling CanNm_TriggerTransmit API support.*/
#define CANNM_TRIGGER_TRANSMIT_API STD_OFF

/** Enable/disable retry send NM-PDU when the first message send failed. */
#define CANNM_RETRY_FIRST_MESSAGE_REQUEST STD_OFF

/** Pre-processor switch for enabling multiple partition support. */
#define CANNM_MULTIPLE_PARTITION_USED STD_OFF

/** Max pdu length in all channels */
#define CANNM_PDU_MAX_LENGTH 8u

/** support Channel number */
#define CANNM_NUMBER_OF_CHANNEL 3u

/** support Partition number */
#define CANNM_NUMBER_OF_PARTITION 1u

/** support Variant number */
#define CANNM_NUMBER_OF_VARIANT 1u

/** The number of RxPDUs configured by the CanNm. */
#define CANNM_RX_PDU_NUMBER 3u

/** The number of TxPDUs configured by the CanNm. */
#define CANNM_TX_PDU_NUMBER 3u

/** The number of UserDataTxPDUs configured by the CanNm. */
#define CANNM_USERDATA_TX_PDU_NUM 0u

/* CanNmChannelConfig_Can0's all PduID */
#define CanNmConf_CanNmRxPdu_CanNmRxPdu_Can0 0u
#define CanNmConf_CanNmTxPdu_CanNmTxPdu_Can0 0u

/* CanNmChannelConfig_Can1's all PduID */
#define CanNmConf_CanNmRxPdu_CanNmRxPdu_Can1 1u
#define CanNmConf_CanNmTxPdu_CanNmTxPdu_Can1 1u

/* CanNmChannelConfig_Can2's all PduID */
#define CanNmConf_CanNmRxPdu_CanNmRxPdu_Can2 2u
#define CanNmConf_CanNmTxPdu_CanNmTxPdu_Can2 2u

/* ================================================ type definitions ================================================ */
 
/* ========================================== internal function definitions ========================================= */
 
/* =========================================== external data declarations =========================================== */
 
/* ========================================= external function declarations ========================================= */
 
#ifdef __cplusplus
}
#endif
#endif
