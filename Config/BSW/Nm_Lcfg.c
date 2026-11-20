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
 * @file        : Nm_Lcfg.c
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Pre-compile configuration parameter of Nm
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* PRQA S 1502, 1334, 1533 EOF */ /* VL_QAC_1502, VL_QAC_1334, VL_QAC_1533 */
#include "Nm.h"
#include "ComM_Cfg.h"
#include "CanNm.h"


#include "SchM_Nm.h"



#define NM_START_SEC_CONFIG_DATA_PTR
#include "Nm_MemMap.h"
static const Nm_SpecificLowLayerApiType Nm_CanNm_Channel0_SpecificApi =
{
    CanNm_NetworkRequest,
    CanNm_NetworkRelease,
    CanNm_PassiveStartUp,
    CanNm_GetPduData,
    CanNm_RepeatMessageRequest,
    CanNm_GetNodeIdentifier,
    CanNm_GetLocalNodeIdentifier,
    CanNm_GetState,
};
#define NM_STOP_SEC_CONFIG_DATA_PTR
#include "Nm_MemMap.h"
#define NM_START_SEC_CONFIG_DATA_PTR
#include "Nm_MemMap.h"
static const Nm_SpecificLowLayerApiType Nm_CanNm_Channel1_SpecificApi =
{
    CanNm_NetworkRequest,
    CanNm_NetworkRelease,
    CanNm_PassiveStartUp,
    CanNm_GetPduData,
    CanNm_RepeatMessageRequest,
    CanNm_GetNodeIdentifier,
    CanNm_GetLocalNodeIdentifier,
    CanNm_GetState,
};
#define NM_STOP_SEC_CONFIG_DATA_PTR
#include "Nm_MemMap.h"
#define NM_START_SEC_CONFIG_DATA_PTR
#include "Nm_MemMap.h"
static const Nm_SpecificLowLayerApiType Nm_CanNm_Channel2_SpecificApi =
{
    CanNm_NetworkRequest,
    CanNm_NetworkRelease,
    CanNm_PassiveStartUp,
    CanNm_GetPduData,
    CanNm_RepeatMessageRequest,
    CanNm_GetNodeIdentifier,
    CanNm_GetLocalNodeIdentifier,
    CanNm_GetState,
};
#define NM_STOP_SEC_CONFIG_DATA_PTR
#include "Nm_MemMap.h"

/*Module initialize status, TRUE initialized, FALSE not initialized*/





#define NM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Nm_MemMap.h"
const Nm_ChannelLConfigType Nm_ChLConfig[NM_NUMBER_OF_CHANNELS] = /* PRQA S 1531 */ /* VL_QAC_OneRefSymbol */
{
    {
        NM_BUSNM_CANNM,             /* NmStandardBusType */
        ComMConf_ComMChannel_ComMChannel_Can0,      /* ComMChannelRef */
        &Nm_CanNm_Channel0_SpecificApi,    /* NmGenericBusNmPrefix */
        FALSE,   /* NmStateReportEnabled */
        0xffu,  /* NmStateReportSignalRef */
        FALSE,     /* NmPassiveModeEnabled */
    },
    {
        NM_BUSNM_CANNM,             /* NmStandardBusType */
        ComMConf_ComMChannel_ComMChannel_Can1,      /* ComMChannelRef */
        &Nm_CanNm_Channel1_SpecificApi,    /* NmGenericBusNmPrefix */
        FALSE,   /* NmStateReportEnabled */
        0xffu,  /* NmStateReportSignalRef */
        FALSE,     /* NmPassiveModeEnabled */
    },
    {
        NM_BUSNM_CANNM,             /* NmStandardBusType */
        ComMConf_ComMChannel_ComMChannel_Can2,      /* ComMChannelRef */
        &Nm_CanNm_Channel2_SpecificApi,    /* NmGenericBusNmPrefix */
        FALSE,   /* NmStateReportEnabled */
        0xffu,  /* NmStateReportSignalRef */
        FALSE,     /* NmPassiveModeEnabled */
    },
};
#define NM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Nm_MemMap.h"



