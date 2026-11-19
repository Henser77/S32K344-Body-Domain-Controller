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
 * @file        : CanTp_Lcfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Link time declaration of CanTp
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef  CANTP_LCFG_H
#define  CANTP_LCFG_H
/* =================================================== inclusions =================================================== */
#include "ComStack_Types.h"
#include "CanTp_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */



/**
 * @brief  This data type is used to record the current STmin and Bs Value of pre rx connection
 */
typedef struct
{
    uint8  FcBs; /**< parameter Bs value pre rx connction @range 0..255*/
    uint8  FcSTmin; /**< parameter STmin value pre rx connction @range 0..255*/
} CanTp_ChangeParameterType;
/**
 * @brief    Structure defining some machine data for tx connection
 */
typedef struct
{
    PduIdType TxNSduId; /**< identifier for the tx NSdu.@range 0..63335*/
    PduIdType TxPduId; /**< identifier for the tx NPdu.@range 0..63335*/
    uint8 PCIOffset; /**< pci offset of the tx NPdu.@range 0..255*/
    uint8 FFDataMax; /**< maximum data length for the First Frame (FF).@range 0..255*/
    uint8 CFDataMax; /**< maximum data length for Consecutive Frames (CF).@range 0..255*/
    PduLengthType TxDLC; /**< data Length Code for tx NSdu.@range 0..63335*/
    CanTp_TxChannelType ChannelState; /**< current state of the transmission channel.@range 0..63335*/
    uint32 Timer; /**< timer for managing transmission timeouts.@range 0..4294967295*/
    uint8 STminTimer; /**< timer for managing STmin delays between CF frames.@range 0..255*/
    boolean FirstFCReceived; /**< flag indicating whether the first Flow Control (FC) message has been received. @range 0..1*/
    uint8 FcBs; /**< block size from the received Flow Control (FC) message.@range 0..255*/
    uint8 FcSTmin; /**< minimum Separation Time from the received Flow Control (FC) message.@range 0..255*/
    PduLengthType DatalenTotal; /**< total length of the data to be transmitted.@range 0..65535*/
    PduLengthType DatalenRemain; /**< current remaining length of the data to be transmitted.@range 0..255*/
    uint8 ExpectdCfSn; /**< expected sequence number (SN) for the next Consecutive Frame (CF).@range 0..255*/
    uint8 HandledCfCount; /**< count of handled Consecutive Frames (CF).*/
    uint8 LocalBuf[CANTP_CAN20_FRAME_LEN_MAX]; /**< local buffer for assembling frames.@range 0..255*/
} CanTp_TxStatusType;

/**
 * @brief    Structure defining some machine data for rx connection
 */
typedef struct
{
    PduIdType RxNSduId; /**< identifier for the rx NSdu.@range 0..65535*/
    PduIdType RxPduId;  /**< identifier for the rx NPdu.@range 0..65535*/
    uint8 PCIOffset; /**< pci offset of the rx NPdu.@range 0..255*/
    CanTp_RxChannelType ChannelState;  /**< current state of the transmission channel.@range NA*/
    uint32 Timer; /**< timer for managing receving timeouts.@range 0..4294967295*/
    PduLengthType DatalenTotal; /**< total length of the data to be transmitted.@range 0..65535*/
    PduLengthType DatalenRemain; /**< current remaining length of the data to be transmitted.@range 0..65535*/
    PduLengthType InitalDLC; /**< fixed for this PDU reception process from the FF @range 0..65535*/
    uint8 CurrentBs; /**< current Block size for receving consecutive frames.@range 0..255*/
    uint8 HandledCfCount; /**< count of handled Consecutive Frames (CF) in a block.@range 0..255*/
    uint8 ExpectdCfSn; /**< expected sequence number for the next received CF.@range 0..255*/
    uint8 SentWftCount; /**< number of consecutively sent wait FC.@range 0..255*/
    uint8 EventFlags; /**< event flags for tracking various events during reception.@range 0..255*/
} CanTp_RxStatusType;

/**
 * @brief   partition information of the CanTp module
 */
typedef struct
{
    uint8 index; /**< globalpartInfo index @range 0..255*/
    CanTp_RxStatusType* CanTpRxConnectionStatus; /**< pointer to the runtime variable of rx connection status @range NA*/
    CanTp_TxStatusType* CanTpTxConnectionStatus; /**< pointer to the runtime variable of tx connection status @range NA*/
    CanTp_ConfirmDirectionType* CanTpTxDirection; /**< pointer to the runtime variable of tx pdu direction @range NA*/
}CanTp_GPartInfoType;

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */
#define CANTP_START_SEC_VAR_INIT_UNSPECIFIED
#include "CanTp_MemMap.h"
extern CanTp_GPartInfoType CanTp_GlobalPartitionInfo[1];
#define CANTP_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "CanTp_MemMap.h"
/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */
#ifdef __cplusplus
}
#endif
#endif
