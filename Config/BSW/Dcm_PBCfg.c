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
 * @file        : Dcm_PBCfg.c
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Dcm Postbuild Cfg Data Definitions
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* PRQA S 3132, 1531 EOF */ /* VL_QAC_MagicNum, VL_QAC_OneFunRef */
/* =================================================== inclusions =================================================== */
#include "Dcm_PBCfg.h"
#include "Dcm_Internal.h"
/* ============================================ internal data definitions =========================================== */
#define DCM_START_SEC_CONFIG_DATA_BOOLEAN
#include "Dcm_MemMap.h"
DCM_LOCAL const boolean Dcm_DsdSubServiceUsed[13] =
{
    TRUE, /* &Dcm_DsdSubServiceUsed[0] */
    TRUE, /* &Dcm_DsdSubServiceUsed[1] */
    TRUE, /* &Dcm_DsdSubServiceUsed[2] */
    TRUE, /* &Dcm_DsdSubServiceUsed[3] */
    TRUE, /* &Dcm_DsdSubServiceUsed[4] */
    TRUE, /* &Dcm_DsdSubServiceUsed[5] */
    TRUE, /* &Dcm_DsdSubServiceUsed[6] */
    TRUE, /* &Dcm_DsdSubServiceUsed[7] */
    TRUE, /* &Dcm_DsdSubServiceUsed[8] */
    TRUE, /* &Dcm_DsdSubServiceUsed[9] */
    TRUE, /* &Dcm_DsdSubServiceUsed[10] */
    TRUE, /* &Dcm_DsdSubServiceUsed[11] */
    TRUE, /* &Dcm_DsdSubServiceUsed[12] */
};
#define DCM_STOP_SEC_CONFIG_DATA_BOOLEAN
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_BOOLEAN
#include "Dcm_MemMap.h"
DCM_LOCAL const boolean Dcm_DsdServiceUsed[8] =
{
    TRUE, /* &Dcm_DsdServiceUsed[0] */
    TRUE, /* &Dcm_DsdServiceUsed[1] */
    TRUE, /* &Dcm_DsdServiceUsed[2] */
    TRUE, /* &Dcm_DsdServiceUsed[3] */
    TRUE, /* &Dcm_DsdServiceUsed[4] */
    TRUE, /* &Dcm_DsdServiceUsed[5] */
    TRUE, /* &Dcm_DsdServiceUsed[6] */
    TRUE, /* &Dcm_DsdServiceUsed[7] */
};
#define DCM_STOP_SEC_CONFIG_DATA_BOOLEAN
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_BOOLEAN
#include "Dcm_MemMap.h"
DCM_LOCAL const boolean Dcm_DslProtocolRowUsed[1] =
{
    TRUE, /* &Dcm_DslProtocolRowUsed[0] */
};
#define DCM_STOP_SEC_CONFIG_DATA_BOOLEAN
#include "Dcm_MemMap.h"

#define DCM_START_SEC_CONFIG_DATA_BOOLEAN
#include "Dcm_MemMap.h"
DCM_LOCAL const boolean Dcm_DspDidUsed[1] =
{
    TRUE, /* &Dcm_DspDidUsed[0] */
};
#define DCM_STOP_SEC_CONFIG_DATA_BOOLEAN
#include "Dcm_MemMap.h"

/* ============================================ external data definitions =========================================== */
#define DCM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
const Dcm_ConfigType Dcm_Config =
{
    Dcm_DsdSubServiceUsed,
    Dcm_DsdServiceUsed,
    Dcm_DslProtocolRowUsed,
    NULL_PTR,
    NULL_PTR,
    NULL_PTR,
    Dcm_DspDidUsed,
    NULL_PTR,
    NULL_PTR,
};
#define DCM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dcm_MemMap.h"
