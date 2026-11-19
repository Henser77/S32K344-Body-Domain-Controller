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
 * @file        : CanTp_PBcfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Configuration parameter of CanTp
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef  CANTP_PBCFG_H
#define  CANTP_PBCFG_H
/* =================================================== inclusions =================================================== */
#include "ComStack_Types.h"
#include "CanTp_Lcfg.h"

#ifdef __cplusplus
extern "C" {
#endif
/* ===================================================== macros ===================================================== */
/**
 * @name  CanTpRxNSduIDMacros_Internal
 * @{
 * @brief these macros define unique identifiers for referenced RxNSdu for CanTp.
 */
#define CANTP_CanTpRxNSdu_Diag 0u /**< RxNSdu internal identifier */
/** @} */


/**
 * @name  CanTpTxNSduIDMacros_Internal
 * @{
 * @brief these macros define unique identifiers for referenced TxNSdu for CanTp.
 */
#define CANTP_CanTpTxNSdu_Diag 0u /**< TxNSdu internal identifier */
/** @} */

/**
 * @name  CanTpRxPduIDMacros_Internal
 * @{
 * @brief these macros define unique identifiers for referenced RxPDUs for CanTp.
 */
#define CANTP_CanTpRxNPdu_0 0u /**< RxPDU internal identifier */
#define CANTP_CanTpRxFcNPdu_0 0u /**< RxFCPDU internal identifier */
/** @} */

/**
 * @name  CanTpTxPduIDMacros_Internal
 * @{
 * @brief these macros define unique identifiers for referenced TxPDUs for CanTp.
 */
#define CANTP_CanTpTxNPdu_0 0u  /**< TxPDU internal identifier */
#define CANTP_CanTpTxFcNPdu_0 0u /**< TxFCPDU internal identifier */
/** @} */

/* ================================================ type definitions ================================================ */
/**
 * @brief  Defines the data type for As,Bs,Cs,Ar,Br,Cr time.
 */
typedef uint32 CanTp_AbcTimeType;
/**
 * @brief  Defines the data type for NSdu/NPdu number
 */
typedef uint8 CanTp_PduNumType;
/**
 * @brief  Defines the data type for Partition identify
 */
typedef uint8 CanTp_PartitionIdType;
/**
 * @brief  This data type is used to generate the mapping relationship between pre rxPdu and rxNSdu
 */
typedef struct
{
    uint8 RxNSdu_index; /**< index of the rxNSdu to which the rxPdu belongs.@range 0..255*/
    uint8 TxNSduFc_index; /**< index of the txNSdu to which the rxPdu (acting as a CanTpRxFcNPdu) belongs.@range 0..255*/
    CanTp_AddressingFormatType AddressingFormat; /**< the rxPdu addressing format @range NA*/
} CanTp_RxPduMapType;

/**
 * @brief  This data type is used to generate the mapping relationship between pre txPdu and txNSdu
 */
typedef struct
{
    uint8 TxNSdu_index; /**< index of the txNSdu to which the txPdu belongs.@range 0..255*/
    uint8 RxNSduFc_index; /**< index of the rxNSdu to which the txPdu (acting as a CanTpTxFcNPdu) belongs.@range 0..255*/
    CanTp_AddressingFormatType AddressingFormat; /**< the txPdu addressing format @range NA*/
} CanTp_TxPduMapType;

/**
 * @brief    Structure defining the configuration parameters for pre txNSdu
 */
typedef struct
{
    PduIdType TxIPduId;  /**< identifier for the tx IPdu.@range 0..63335*/
    PduIdType TxNSduId;  /**< identifier for the tx NSdu.@range 0..63335*/
    PduIdType TxNPduId;  /**< identifier for the tx NPdu.@range 0..63335*/
    PduIdType RxFcNPduId;/**< identifier for the rx FcNPdu.@range 0..63335*/
    PduIdType TxLPduId;  /**< identifier for the tx LPdu.@range 0..63335*/
    CanTp_AbcTimeType N_As; /**< timer for N_As, an integer multiple of the MainfunctionPeriod.@range 0..4294967295*/
    CanTp_AbcTimeType N_Bs; /**< timer for N_Bs, an integer multiple of the MainfunctionPeriod.@range 0..4294967295*/
    CanTp_AbcTimeType N_Cs; /**< timer for N_Cs, an integer multiple of the MainfunctionPeriod.@range 0..4294967295*/
    CanTp_AddressingFormatType  AddressingFormat; /**< addressing format used for communication.@range 0..4294967295*/
    const uint8 NAe; /**< network address extension.@range 0..255*/
    const uint8 NSa; /**< network source address. @range 0..255*/
    const uint8 NTa; /**< network target address.@range 0..255*/
    const uint8 CanTpPduFlag; /**< bit0-3:MetaDataLength,bit 4:CanwithCanFD,bit5:CanTpTc,bit6-bit7:reserved @range 0..255*/
    PduLengthType TxNPduDLC; /**< tx NSdu pdu length @range 0..63335*/
    CanTp_PaddingActivationType TxPaddingActivation; /**< padding activation setting for tx NSdu @range NA*/
    CanTp_TaTypeType TxTaType; /**< type of addressing (functional or physical). @range NA*/
} CanTp_TxNSduType;

/**
 * @brief    Structure defining the configuration parameters for pre rxNSdu
 */
typedef struct
{
    PduIdType RxIPduId;   /**< identifier for the rx IPdu.@range 0..63335*/
    PduIdType RxNSduId;   /**< identifier for the rx NSdu.@range 0..63335*/
    PduIdType RxNPduId;   /**< identifier for the rx NPdu.@range 0..63335*/
    PduIdType TxFcNPduId; /**< identifier for the tx FcNPdu.@range 0..63335*/
    PduIdType TxFcLPduId; /**< identifier for the rx LPdu.@range 0..63335*/
    CanTp_AbcTimeType N_Ar; /**< timer for N_Ar, an integer multiple of the MainfunctionPeriod.@range 0..4294967295*/
    CanTp_AbcTimeType N_Br; /**< timer for N_Br, an integer multiple of the MainfunctionPeriod.@range 0..4294967295*/
    CanTp_AbcTimeType N_Cr; /**< timer for N_Cr, an integer multiple of the MainfunctionPeriod.@range 0..4294967295*/
    uint8 RxWftMax; /**< how many Flow Control wait N-PDUs can be consecutively transmitted by the receiver.@range 0..255*/
    uint8 Bs; /**< BlockSize @range 0..255*/
    uint8 STmin; /**< SeparationTime minimum @range 0..255*/
    CanTp_AddressingFormatType AddressingFormat; /**< addressing format used for communication.@range 0..255*/
    const uint8 NAe; /**< network address extension.@range 0..255*/
    const uint8 NSa; /**< network source address.@range 0..255 */
    const uint8 NTa; /**< network target address.@range 0..255*/
    uint8 CanTpPduFlag; /**< bit0-3:MetaDataLength,bit 4:CanwithCanFD,bit5-bit7:reserved @range 0..255*/
    PduLengthType RxNPduDLC; /**< rx NSdu pdu length @range 0..63335*/
    CanTp_PaddingActivationType RxPaddingActivation; /**< padding activation setting for rx NSdu @range NA*/
    CanTp_TaTypeType RxTaType; /**< type of addressing (functional or physical).@range NA*/
} CanTp_RxNSduType;


/**
 * @brief   Configuration of the CanTp module
 */
typedef struct
{
    const CanTp_PduNumType CanTpRxNSduNum; /**< number of RxNSdu @range 0..255*/
    const CanTp_PduNumType CanTpTxNSduNum; /**< number of TxNSdu @range 0..255*/
    const CanTp_PduNumType CanTpRxNPduNum; /**< number of RxNPdu @range 0..255*/
    const CanTp_PduNumType CanTpTxNPduNum; /**< number of TxNPdu @range 0..255*/
    const CanTp_RxNSduType* CanTpRxNSduCfg; /**< pointer to the configuration of RxNPdu @range NA*/
    const CanTp_TxNSduType* CanTpTxNSduCfg; /**< pointer to the configuration of TxNSdu @range NA*/
    const CanTp_RxPduMapType* RxPduMap;  /**< pointer to the configuration of RxNPdu @range NA*/
    const CanTp_TxPduMapType* TxPduMap;  /**< pointer to the configuration of TxNPdu @range NA*/
} CanTp_ConfigType;
/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */

/* ========================================== external function definitions ========================================= */
/** This type of the external data structure shall contain the post build initialization data for the CanTp. */
#define CANTP_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanTp_MemMap.h"
extern const CanTp_ConfigType CanTp_Config;
#define CANTP_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanTp_MemMap.h"
/* ========================================== internal function definitions ========================================= */
#ifdef __cplusplus
}
#endif
#endif
