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
 * @file        : ComM_PBcfg.c
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Post-Build configuration parameter of ComM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* PRQA S 1531 EOF */ /* VL_QAC_OneRefSymbol */
/* =================================================== inclusions =================================================== */
#include "ComM_Cfg.h"
#include "ComM.h"
#include "ComM_Channel.h"
#include "ComM_User.h"

#include "CanSM.h"

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* PRQA S 3120, 3132 ++ */ /* VL_QAC_MagicNum */
/* ============================================ internal data definitions =========================================== */
#define COMM_START_SEC_CONFIG_DATA_16
#include "ComM_MemMap.h"
static const ComM_UserHandleType ComM_ChannelComMChannel_Can0Users[] =
{
    ComMConf_ComMUser_ComMUser_Dcm_Can0,
    ComMConf_ComMUser_ComMUser_App_Can0,
    ComMConf_ComMUser_ComMUser_Nm_Can0,
};
#define COMM_STOP_SEC_CONFIG_DATA_16
#include "ComM_MemMap.h"
#define COMM_START_SEC_CONFIG_DATA_16
#include "ComM_MemMap.h"
static const ComM_UserHandleType ComM_ChannelComMChannel_Can1Users[] =
{
    ComMConf_ComMUser_ComMUser_App_Can1,
    ComMConf_ComMUser_ComMUser_Nm_Can1,
};
#define COMM_STOP_SEC_CONFIG_DATA_16
#include "ComM_MemMap.h"
#define COMM_START_SEC_CONFIG_DATA_16
#include "ComM_MemMap.h"
static const ComM_UserHandleType ComM_ChannelComMChannel_Can2Users[] =
{
    ComMConf_ComMUser_ComMUser_App_Can2,
    ComMConf_ComMUser_ComMUser_Nm_Can2,
};
#define COMM_STOP_SEC_CONFIG_DATA_16
#include "ComM_MemMap.h"


/* ========================================== external function definitions ========================================= */

/* ============================================ external data definitions =========================================== */
#define COMM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"
static const ComM_ChannelConfigType ComM_ChannelConfigs[COMM_CHANNEL_NUMBER] =
{
    {
        CanSM_RequestComMode,                                                      /* BusSMRequestComMode */
        0u,  /* NmLightTimeout */
        COMM_NM_VARIANT_FULL,                                    /* NmVariant */
        COMM_NOT_USED_CHANNEL_ID,                                                                  /* ManagingChannel */
        ComM_ChannelComMChannel_Can0Users,                                                       /* Users */
        3u,                                                           /* NumberOfUsers */
    },
    {
        CanSM_RequestComMode,                                                      /* BusSMRequestComMode */
        0u,  /* NmLightTimeout */
        COMM_NM_VARIANT_FULL,                                    /* NmVariant */
        COMM_NOT_USED_CHANNEL_ID,                                                                  /* ManagingChannel */
        ComM_ChannelComMChannel_Can1Users,                                                       /* Users */
        2u,                                                           /* NumberOfUsers */
    },
    {
        CanSM_RequestComMode,                                                      /* BusSMRequestComMode */
        0u,  /* NmLightTimeout */
        COMM_NM_VARIANT_FULL,                                    /* NmVariant */
        COMM_NOT_USED_CHANNEL_ID,                                                                  /* ManagingChannel */
        ComM_ChannelComMChannel_Can2Users,                                                       /* Users */
        2u,                                                           /* NumberOfUsers */
    },
};
#define COMM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"


#define COMM_START_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
static const NetworkHandleType ComM_UserComMUser_Dcm_Can0Channels[] =
{
    ComMConf_ComMChannel_ComMChannel_Can0,
};
#define COMM_STOP_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
#define COMM_START_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
static const NetworkHandleType ComM_UserComMUser_App_Can0Channels[] =
{
    ComMConf_ComMChannel_ComMChannel_Can0,
};
#define COMM_STOP_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
#define COMM_START_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
static const NetworkHandleType ComM_UserComMUser_Nm_Can0Channels[] =
{
    ComMConf_ComMChannel_ComMChannel_Can0,
};
#define COMM_STOP_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
#define COMM_START_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
static const NetworkHandleType ComM_UserComMUser_App_Can1Channels[] =
{
    ComMConf_ComMChannel_ComMChannel_Can1,
};
#define COMM_STOP_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
#define COMM_START_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
static const NetworkHandleType ComM_UserComMUser_Nm_Can1Channels[] =
{
    ComMConf_ComMChannel_ComMChannel_Can1,
};
#define COMM_STOP_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
#define COMM_START_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
static const NetworkHandleType ComM_UserComMUser_App_Can2Channels[] =
{
    ComMConf_ComMChannel_ComMChannel_Can2,
};
#define COMM_STOP_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
#define COMM_START_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
static const NetworkHandleType ComM_UserComMUser_Nm_Can2Channels[] =
{
    ComMConf_ComMChannel_ComMChannel_Can2,
};
#define COMM_STOP_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"

#define COMM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"
static const ComM_UserConfigType ComM_UserConfigs[COMM_USER_NUMBER] =
{
    {
        ComM_UserComMUser_Dcm_Can0Channels,                           /* Channels */
        1u,                                     /* NumberOfChannels */
    },
    {
        ComM_UserComMUser_App_Can0Channels,                           /* Channels */
        1u,                                     /* NumberOfChannels */
    },
    {
        ComM_UserComMUser_Nm_Can0Channels,                           /* Channels */
        1u,                                     /* NumberOfChannels */
    },
    {
        ComM_UserComMUser_App_Can1Channels,                           /* Channels */
        1u,                                     /* NumberOfChannels */
    },
    {
        ComM_UserComMUser_Nm_Can1Channels,                           /* Channels */
        1u,                                     /* NumberOfChannels */
    },
    {
        ComM_UserComMUser_App_Can2Channels,                           /* Channels */
        1u,                                     /* NumberOfChannels */
    },
    {
        ComM_UserComMUser_Nm_Can2Channels,                           /* Channels */
        1u,                                     /* NumberOfChannels */
    },
};
#define COMM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"

#define COMM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"
const ComM_ConfigType ComM_Config =
{
    ComM_ChannelConfigs,
    ComM_UserConfigs,
};
#define COMM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"

/* PRQA S 3120, 3132 -- */ /* VL_QAC_MagicNum */


/* ========================================== internal function definitions ========================================= */
