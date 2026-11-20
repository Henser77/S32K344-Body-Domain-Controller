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
 * @file        : CanSM_PBcfg.c
 * @licence     : 
 * @date        : 2026-11-20 13:51:03
 * @customer    : EasyXMen
 * @description : Pre-compile parameter definition of CanSM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* =================================================== inclusions =================================================== */
#include "CanSM_PBcfg.h"
#include "CanSM_Cfg.h"
#include "CanSM.h"
#include "ComM_Cfg.h"



/* ============================================ internal data definitions =========================================== */
#define CANSM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"
static CanSM_NetWorkRunTimeType CanSM_NetworkRT_CanSMManagerNetwork_Can0;
#define CANSM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"

#define CANSM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"
static Can_ControllerStateType CanSM_ControllerModeRT_CanSMManagerNetwork_Can0[1u];
#define CANSM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"
#define CANSM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"
static CanSM_NetWorkRunTimeType CanSM_NetworkRT_CanSMManagerNetwork_Can1;
#define CANSM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"

#define CANSM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"
static Can_ControllerStateType CanSM_ControllerModeRT_CanSMManagerNetwork_Can1[1u];
#define CANSM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"
#define CANSM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"
static CanSM_NetWorkRunTimeType CanSM_NetworkRT_CanSMManagerNetwork_Can2;
#define CANSM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"

#define CANSM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"
static Can_ControllerStateType CanSM_ControllerModeRT_CanSMManagerNetwork_Can2[1u];
#define CANSM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"


#define CANSM_START_SEC_CONFIG_DATA_8
#include "CanSM_MemMap.h"
static const uint8 CanSM_MN_0ControllerId[1u] =
{
    CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0,   /*CanSMControllerId*/
};
#define CANSM_STOP_SEC_CONFIG_DATA_8
#include "CanSM_MemMap.h"
#define CANSM_START_SEC_CONFIG_DATA_8
#include "CanSM_MemMap.h"
static const uint8 CanSM_MN_1ControllerId[1u] =
{
    CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_1,   /*CanSMControllerId*/
};
#define CANSM_STOP_SEC_CONFIG_DATA_8
#include "CanSM_MemMap.h"
#define CANSM_START_SEC_CONFIG_DATA_8
#include "CanSM_MemMap.h"
static const uint8 CanSM_MN_2ControllerId[1u] =
{
    CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_2,   /*CanSMControllerId*/
};
#define CANSM_STOP_SEC_CONFIG_DATA_8
#include "CanSM_MemMap.h"




#define CANSM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanSM_MemMap.h"
static const CanSM_ControllerRefType CanSM_ControllerConfig[CANSM_NETWORK_NUM] =
{
    { 1u, &CanSM_MN_0ControllerId[0u], &CanSM_ControllerModeRT_CanSMManagerNetwork_Can0[0u]},
    { 1u, &CanSM_MN_1ControllerId[0u], &CanSM_ControllerModeRT_CanSMManagerNetwork_Can1[0u]},
    { 1u, &CanSM_MN_2ControllerId[0u], &CanSM_ControllerModeRT_CanSMManagerNetwork_Can2[0u]},
};
#define CANSM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanSM_MemMap.h"




#define CANSM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanSM_MemMap.h"
static const CanSM_ManagerNetworkType CanSM_NetworkConfig[CANSM_NETWORK_NUM] =
{
    {
        5u, /*CanSMBorCounterL1ToL2 */
        20u, /*CanSMBorTimeL1 */
        200u, /*CanSMBorTimeL2 */
        FALSE, /*CanSMEnableBusOffDelay */
        ComMConf_ComMChannel_ComMChannel_Can0, /*CanSMComMNetworkHandleRef*/
        NULL_PTR, /* TrcvRef */
        &CanSM_ControllerConfig[0u], /*ControllerRef*/
        &CanSM_NetworkRT_CanSMManagerNetwork_Can0,    /*RuntimeNetPtr*/
    },
    {
        5u, /*CanSMBorCounterL1ToL2 */
        20u, /*CanSMBorTimeL1 */
        200u, /*CanSMBorTimeL2 */
        FALSE, /*CanSMEnableBusOffDelay */
        ComMConf_ComMChannel_ComMChannel_Can1, /*CanSMComMNetworkHandleRef*/
        NULL_PTR, /* TrcvRef */
        &CanSM_ControllerConfig[1u], /*ControllerRef*/
        &CanSM_NetworkRT_CanSMManagerNetwork_Can1,    /*RuntimeNetPtr*/
    },
    {
        5u, /*CanSMBorCounterL1ToL2 */
        20u, /*CanSMBorTimeL1 */
        200u, /*CanSMBorTimeL2 */
        FALSE, /*CanSMEnableBusOffDelay */
        ComMConf_ComMChannel_ComMChannel_Can2, /*CanSMComMNetworkHandleRef*/
        NULL_PTR, /* TrcvRef */
        &CanSM_ControllerConfig[2u], /*ControllerRef*/
        &CanSM_NetworkRT_CanSMManagerNetwork_Can2,    /*RuntimeNetPtr*/
    },
};
#define CANSM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanSM_MemMap.h"

#define CANSM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanSM_MemMap.h"
const CanSM_ConfigType CanSM_Config = /* PRQA S 1531 */ /* VL_QAC_OneRefSymbol */
{
    10u, /* CanSMModeRequestRepetitionMax */
    2u, /* CanSMModeRequestRepetitionTime */
    &CanSM_NetworkConfig[0u]  /* CanSMManagerNetworkRef */
};
#define CANSM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanSM_MemMap.h"


/* ============================================ external data definitions =========================================== */

/* ========================================== external function definitions ========================================= */
