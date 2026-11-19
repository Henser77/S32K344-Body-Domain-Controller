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
 * @file        : CanTp_Lcfg.c
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Configuration parameter of CanTp
 * @generator   : AUTOSAR classic Platform R23_11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* =================================================== inclusions =================================================== */
#include "CanTp_Cfg.h"
#include "CanTp_Lcfg.h"
/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* PRQA S 3120,3132 ++ */ /* VL_QAC_MagicNum */


#define CANTP_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanTp_MemMap.h"
/**
 * @brief The runtime variable of rx connection status
 * @range NA
 */
static CanTp_RxStatusType CanTp_RxConnectionStatus[1];
#define CANTP_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanTp_MemMap.h"
#define CANTP_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanTp_MemMap.h"
/**
 * @brief The runtime variable of tx connection status
 * @range NA
 */
static CanTp_TxStatusType CanTp_TxConnectionStatus[1];
#define CANTP_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanTp_MemMap.h"
#define CANTP_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanTp_MemMap.h"
/**
 * @brief The runtime variable of tx pdu direction
 * @range NA
 */
static CanTp_ConfirmDirectionType CanTp_TxDirection[1];
#define CANTP_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanTp_MemMap.h"
/* ============================================ external data definitions =========================================== */


#define CANTP_START_SEC_VAR_INIT_UNSPECIFIED
#include "CanTp_MemMap.h"
/* PRQA S 1531 ++ *//* VL_CanTp_1531 */
CanTp_GPartInfoType CanTp_GlobalPartitionInfo[1] =
/* PRQA S 1531 -- */
{
    /** &CanTp_PartitionInfo[0] */
    {
        0u,                    /**< GPartInfo index */
        &CanTp_RxConnectionStatus[0], /**< RxConnectionStatus */
        &CanTp_TxConnectionStatus[0], /**< TxConnectionStatus */
        &CanTp_TxDirection[0],/**< TxDirection */
    },
};
#define CANTP_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "CanTp_MemMap.h"
/* PRQA S 3120,3132 -- */

/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */
