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
 * @file        : ComM_Cfg.h
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Pre-compile configuration parameter of ComM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef COMM_CFG_H_
#define COMM_CFG_H_

/* =================================================== inclusions =================================================== */
#include "Rte_ComM_Type.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */
/* PRQA S 3414 ++ */ /* VL_QAC_FctLikeMacro */
#if !defined(COMM_LOCAL)
#define COMM_LOCAL static
#endif

#if !defined(COMM_LOCAL_INLINE)
#define COMM_LOCAL_INLINE static inline
#endif
/* PRQA S 3414 -- */ /* VL_QAC_FctLikeMacro */

/* Pre-compile time configuration parameter with manual */
#define COMM_DEV_ERROR_DETECT            STD_ON
#define COMM_DCM_ENABLED                 STD_ON
#define COMM_VERSION_INFO_API            STD_OFF
#define COMM_SYNCHRONOUS_WAKE_UP         STD_ON
#define COMM_PNC_SUPPORT                 STD_OFF
#define COMM_RESET_AFTER_FORCING_NO_COMM STD_OFF
#define COMM_MODE_LIMITATION_ENABLED     STD_OFF
#define COMM_WAKEUP_INHIBITION_ENABLED   STD_OFF
#define COMM_GLOBAL_NVM_BLOCK_DESCRIPTOR STD_OFF

/* Pre-compile time configuration parameter with auto */
#define COMM_MULTIPLE_PARTITION_ENABLED                   STD_OFF
#define COMM_NM_ENABLED                                   STD_ON
#define COMM_CURRENT_CHANNEL_REQUEST_NOTIFICATION_ENABLED STD_OFF
#define COMM_CURRENT_MODE_NOTIFICATION_ENABLED            STD_OFF

#define COMM_PARTITION_NUMBER 1u
#define COMM_CHANNEL_NUMBER   3u
#define COMM_PNC_NUMBER       0u
#define COMM_USER_NUMBER      7u



#define ComMConf_ComMChannel_ComMChannel_Can0 0u
#define ComMConf_ComMChannel_ComMChannel_Can1 1u
#define ComMConf_ComMChannel_ComMChannel_Can2 2u


#define ComMConf_ComMUser_ComMUser_Dcm_Can0 0u
#define ComMConf_ComMUser_ComMUser_App_Can0 1u
#define ComMConf_ComMUser_ComMUser_Nm_Can0 2u
#define ComMConf_ComMUser_ComMUser_App_Can1 3u
#define ComMConf_ComMUser_ComMUser_Nm_Can1 4u
#define ComMConf_ComMUser_ComMUser_App_Can2 5u
#define ComMConf_ComMUser_ComMUser_Nm_Can2 6u

/* ================================================ type definitions ================================================ */
typedef struct
{
    const struct ComM_ChannelConfigType_Tag* ChannelConfigs; /* PRQA S 3313, 1536 */ /* VL_ComM_UseStructTagPtr, VL_ComM_1536 */
    const struct ComM_UserConfigType_Tag* UserConfigs; /* PRQA S 3313, 1536 */ /* VL_ComM_UseStructTagPtr, VL_ComM_1536 */
} ComM_ConfigType;

/* ========================================== internal function definitions ========================================= */

/* =========================================== external data declarations =========================================== */
#define COMM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"
extern const ComM_ConfigType ComM_Config;
#define COMM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"

/* ========================================= external function declarations ========================================= */

#ifdef __cplusplus
}
#endif

#endif
