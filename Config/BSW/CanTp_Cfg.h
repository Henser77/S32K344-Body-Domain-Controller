

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
 * @file        : CanTp_Cfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Configuration parameter of CanTp
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef  CANTP_CFG_H
#define  CANTP_CFG_H

/* =================================================== inclusions =================================================== */
#include "ComStack_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */
/**
 * @name  ConfigurableFunctionsMacros
 * @{
 * @brief These macros can be used to control some configurable functions switch
 */
#define CANTP_DEV_ERROR_DETECT STD_ON /**< Switches the Development Error Detection and Notification ON or OFF */
#define CANTP_RUNTIME_ERROR_DETECT STD_ON /**< Switches the runtime Error Detection and Notification ON or OFF */
#define CANTP_VERSION_INFO_API STD_OFF /**< Preprocessor switch for enabling CanTpGetVersionInfo Api*/
#define CANTP_CHANGE_PARAMETER STD_OFF /**< Preprocessor switch for enabling CanTp_ChangeParameterRequest Api*/
#define CANTP_READ_PARAMETER STD_OFF /**< Preprocessor switch for enabling CanTpReadParameterApi Api*/
#define CANTP_FD STD_OFF /**< Enable support for CAN FD frames*/
#define CANTP_DYN_ID_SUPPORT STD_OFF /**< Enable support for dynamic ID handling via N-PDU MetaData*/
#define CANTP_GENERIC_CONNECTION_SUPPORT STD_OFF /**< Enable support for the handling of generic connections*/
#define CANTP_SYNCHRONOUS_RXINDICATION STD_OFF /**< Synchronous/Asynchronous RxIndication Handle */
#define CANTP_TC STD_ON /**< Preprocessor switch for enabling Transmit Cancellation. */
#define CANTP_RC STD_ON /**< Preprocessor switch for enabling Receive Cancellation. */
#define CANTP_RX_QUEUE STD_OFF /**< Switches Queued Reception on or off */
#define CANTP_SYNC_TRANSMIT STD_OFF /**< Whether CanTp Support to transmit SF/FF frame directly */
#define CANTP_MULTIPLE_PARTITION_ENABLED STD_OFF /**< Whether CanTp Support multiple partition */
#define CANTP_ECUC_MULTIPLE_PARTITION_EXIST STD_OFF /**< Whether Ecuc exist multiple partition */
#define CANTP_TRANSMIT_CAN20_WITH_CANFD STD_OFF /**< Whether CanTp Support compatible with CanFD and Can2.0 transmission*/
#define CANTP_SUPPORT_VARIANT STD_OFF /**< Whether CanTp Support variant*/
#define CANTP_ENABLED_RX_BYTE_PADDING STD_ON /**< Preprocessor switch for enabling byte padding when receiving*/
#define CANTP_ENABLED_TX_BYTE_PADDING STD_ON /**< Preprocessor switch for enabling byte padding when transmitting*/
/** @} */

/**
 * @name  ErrorEventsToDemMacros
 * @{
 * @brief macros group of error events for CanTp reported to Dem
 */
#define CANTP_DEM_PRODUCTION_ERROR_DETECT STD_OFF /**< whether enable to report error event to Dem*/
#define CANTP_E_AS_TIMEOUT_EABLED STD_OFF /**< whether enable to report As timeout to Dem*/
#define CANTP_E_BS_TIMEOUT_EABLED STD_OFF /**< whether enable to report Bs timeout to Dem*/
#define CANTP_E_CS_TIMEOUT_EABLED STD_OFF /**< whether enable to report Cs timeout to Dem*/
#define CANTP_E_AR_TIMEOUT_EABLED STD_OFF /**< whether enable to report Ar timeout to Dem*/
#define CANTP_E_BR_TIMEOUT_EABLED STD_OFF /**< whether enable to report Br timeout to Dem*/
#define CANTP_E_CR_TIMEOUT_EABLED STD_OFF /**< whether enable to report Cr timeout to Dem*/
#define CANTP_E_SWAPPED_CF_RECEIVED_EABLED STD_OFF /**< whether enable to report CF swapped error to Dem*/
#define CANTP_E_DROPPED_CF_DETECTED_EABLED STD_OFF /**< whether enable to report CF dropped error to Dem*/
#define CANTP_E_FC_OVERFLOW_RECEIVED_EABLED STD_OFF /**< whether enable to report receving FC overflow error to Dem*/
#define CANTP_E_FC_OVERFLOW_TRANSMITTED_EABLED STD_OFF /**< whether enable to report receving FC overflow error to Dem*/
/** @} */

/**
 * @name  AddressingModeSwitchMacros
 * @{
 * @brief configuration MACRO addressing mode for cutting
 */
#define CANTP_EXTENDED_ADDRESSING_SUPPORT     STD_OFF /**< whether support extended addressing*/
#define CANTP_NORMAL_FIXED_ADDRESSING_SUPPORT STD_OFF /**< whether support mormal fixed addressing */
#define CANTP_MIXED_ADDRESSING_SUPPORT        STD_OFF /**< whether support mixed addressing*/
#define CANTP_MIXED29_ADDRESSING_SUPPORT      STD_OFF /**< whether support mixed29 addressing*/
/** @} */

#define CANTP_PADDING_BYTE 0xccu /**< used for the initialization of unused bytes with a certain value */
#define CANTP_MAIN_FUNCTION_PERIOD 5u /**< the time for MainFunction,expressed as the value with ms */
#define CANTP_PARTITION_NUMBER 1u /**< number of partitions which CanTp located*/
#define CANTP_MAX_RXNSDU_NUMBER 1u /**< max number of RxNSdu*/
#define CANTP_MAX_TXNSDU_NUMBER 1u /**< max number of TxNSdu*/
#define CANTP_MAX_RXPDU_NUMBER 1u /**< max number of TxPdu*/
#define CANTP_MAX_TXPDU_NUMBER 1u /**< max number of TxPdu*/

/**
 * @name  CanTpRxNSduIDMacros
 * @{
 * @brief these macros define unique identifiers for referenced RxNSdu for CanTp.
 */
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_Diag 0u /**< CanTpRxNSdu_Diag symbolicName*/
/** @} */

/**
 * @name  CanTpTxNSduIDMacros
 * @{
 * @brief these macros define unique identifiers for referenced TxNSdu for CanTp.
 */
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_Diag 0u /**< CanTpTxNSdu_Diag symbolicName*/
/** @} */

/**
 * @name  CanTpRxPduIDMacros
 * @{
 * @brief these macros define unique identifiers for referenced RxPDUs for CanTp.
 */
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_0 0u /**< CanTpRxNPdu_0 symbolicName*/
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_0 0u /**< CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_0 symbolicName*/
/** @} */

/**
 * @name  CanTpTxPduIDMacros
 * @{
 * @brief these macros define unique identifiers for referenced TxPDUs for CanTp.
 */
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_0 0u /**< CanTpTxNPdu_0 symbolicName*/
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_0 0u /**< CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_0 symbolicName*/
/** @} */


#define CANTP_RXGETADROFFSET(AdrFormat) 0u /**< Addressing Offset Calculation.*/
#define CANTP_PDU_LENGTH_TYPE_MAX 0xFFFFu /**< PDU length type max value.*/
/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */

/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */
#ifdef __cplusplus
}
#endif
#endif
