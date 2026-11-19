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
 * @file        : Rte_StbM_Type.h
 * @licence     : 
 * @date        : 2026-11-05 21:06:05
 * @customer    : EasyXMen
 * @description : Application Types Header File for SWC-StbM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef RTE_STBM_TYPE_H
#define RTE_STBM_TYPE_H
/* PRQA S 1710 EOF */ /* VL_Rte_SimilarIdentifier */
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Rte_Type.h"
/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/
/* Enumeration Data Types */
#ifndef STBM_TIMEBASE_STATUS_TIMEOUT
#define STBM_TIMEBASE_STATUS_TIMEOUT (0x01U)
#endif
#ifndef STBM_TIMEBASE_STATUS_reserved
#define STBM_TIMEBASE_STATUS_reserved (0x02U)
#endif
#ifndef STBM_TIMEBASE_STATUS_SYNC_TO_GATEWAY
#define STBM_TIMEBASE_STATUS_SYNC_TO_GATEWAY (0x04U)
#endif
#ifndef STBM_TIMEBASE_STATUS_GLOBAL_TIME_BASE
#define STBM_TIMEBASE_STATUS_GLOBAL_TIME_BASE (0x08U)
#endif
#ifndef STBM_TIMEBASE_STATUS_TIMELEAP_FUTURE
#define STBM_TIMEBASE_STATUS_TIMELEAP_FUTURE (0x10U)
#endif
#ifndef STBM_TIMEBASE_STATUS_TIMELEAP_PAST
#define STBM_TIMEBASE_STATUS_TIMELEAP_PAST (0x20U)
#endif
#ifndef STBM_TIMEBASE_STATUS_RATE_CORRECTED
#define STBM_TIMEBASE_STATUS_RATE_CORRECTED (0x40U)
#endif
#ifndef STBM_TIMEBASE_STATUS_RATE_EXCEEDED
#define STBM_TIMEBASE_STATUS_RATE_EXCEEDED (0x80U)
#endif
#ifndef STBM_TIMEBASE_STATUS_PDELAY_EXCEEDED
#define STBM_TIMEBASE_STATUS_PDELAY_EXCEEDED (0x100U)
#endif
#ifndef STBM_TIMEBASE_STATUS_RATEJITTERWANDER_EXCEEDED
#define STBM_TIMEBASE_STATUS_RATEJITTERWANDER_EXCEEDED (0x200U)
#endif
#ifndef STBM_TIMEBASE_STATUS_TIME_PROGRESSION_INCONSISTENCY
#define STBM_TIMEBASE_STATUS_TIME_PROGRESSION_INCONSISTENCY (0x400U)
#endif
#ifndef STBM_TIMEBASE_STATUS_FALLBACK_TIME_EXTRAPOLATION
#define STBM_TIMEBASE_STATUS_FALLBACK_TIME_EXTRAPOLATION (0x800U)
#endif
#ifndef STBM_TIMEBASE_EV_GLOBAL_TIME
#define STBM_TIMEBASE_EV_GLOBAL_TIME (0x01UL)
#endif
#ifndef STBM_TIMEBASE_EV_TIMEOUT_OCCURRED
#define STBM_TIMEBASE_EV_TIMEOUT_OCCURRED (0x02UL)
#endif
#ifndef STBM_TIMEBASE_EV_TIMEOUT_REMOVED
#define STBM_TIMEBASE_EV_TIMEOUT_REMOVED (0x04UL)
#endif
#ifndef STBM_TIMEBASE_EV_TIMELEAP_FUTURE
#define STBM_TIMEBASE_EV_TIMELEAP_FUTURE (0x08UL)
#endif
#ifndef STBM_TIMEBASE_EV_TIMELEAP_FUTURE_REMOVED
#define STBM_TIMEBASE_EV_TIMELEAP_FUTURE_REMOVED (0x10UL)
#endif
#ifndef STBM_TIMEBASE_EV_TIMELEAP_PAST
#define STBM_TIMEBASE_EV_TIMELEAP_PAST (0x20UL)
#endif
#ifndef STBM_TIMEBASE_EV_TIMELEAP_PAST_REMOVED
#define STBM_TIMEBASE_EV_TIMELEAP_PAST_REMOVED (0x40UL)
#endif
#ifndef STBM_TIMEBASE_EV_SYNC_TO_SUBDOMAIN
#define STBM_TIMEBASE_EV_SYNC_TO_SUBDOMAIN (0x80UL)
#endif
#ifndef STBM_TIMEBASE_EV_SYNC_TO_GLOBAL_MASTER
#define STBM_TIMEBASE_EV_SYNC_TO_GLOBAL_MASTER (0x100UL)
#endif
#ifndef STBM_TIMEBASE_EV_RESYNC
#define STBM_TIMEBASE_EV_RESYNC (0x0200UL)
#endif
#ifndef STBM_TIMEBASE_EV_RATECORRECTION
#define STBM_TIMEBASE_EV_RATECORRECTION (0x0400UL)
#endif
#ifndef STBM_TIMEBASE_EV_RATE_EXCEEDED
#define STBM_TIMEBASE_EV_RATE_EXCEEDED (0x0800UL)
#endif
#ifndef STBM_TIMEBASE_EV_TIME_PROGRESSION_INCONSISTENCY
#define STBM_TIMEBASE_EV_TIME_PROGRESSION_INCONSISTENCY (0x1000UL)
#endif
#ifndef STBM_TIMEBASE_EV_TIME_PROGRESSION_INCONSISTENCY_REMOVED
#define STBM_TIMEBASE_EV_TIME_PROGRESSION_INCONSISTENCY_REMOVED (0x2000UL)
#endif
#ifndef STBM_TIMEBASE_EV_RATEJITTERWANDER_EXCEEDED
#define STBM_TIMEBASE_EV_RATEJITTERWANDER_EXCEEDED (0x4000UL)
#endif
#ifndef STBM_TIMEBASE_EV_RATEJITTERWANDER_EXCEEDED_REMOVED
#define STBM_TIMEBASE_EV_RATEJITTERWANDER_EXCEEDED_REMOVED (0x8000UL)
#endif
#ifndef STBM_TIMEBASE_EV_PDELAY_EXCEEDED
#define STBM_TIMEBASE_EV_PDELAY_EXCEEDED (0x10000UL)
#endif
#ifndef STBM_TIMEBASE_EV_PDELAY_EXCEEDED_REMOVED
#define STBM_TIMEBASE_EV_PDELAY_EXCEEDED_REMOVED (0x20000UL)
#endif
#ifndef STBM_TIMEBASE_EV_FALLBACK_TIME_EXTRAPOLATION
#define STBM_TIMEBASE_EV_FALLBACK_TIME_EXTRAPOLATION (0x40000UL)
#endif
#ifndef STBM_TIMEBASE_EV_FALLBACK_TIME_EXTRAPOLATION_REMOVED
#define STBM_TIMEBASE_EV_FALLBACK_TIME_EXTRAPOLATION_REMOVED (0x80000UL)
#endif
#ifndef STBM_SYSTEM_WIDE_MASTER_DISABLED
#define STBM_SYSTEM_WIDE_MASTER_DISABLED (0x00U)
#endif
#ifndef STBM_SYSTEM_WIDE_MASTER_ENABLED
#define STBM_SYSTEM_WIDE_MASTER_ENABLED (0x01U)
#endif
#ifndef STBM_TIMESYNC_ETHERNET
#define STBM_TIMESYNC_ETHERNET (0x01U)
#endif
#ifndef STBM_TIMESYNC_CAN
#define STBM_TIMESYNC_CAN (0x02U)
#endif
#ifndef STBM_TIMESYNC_FLEXRAY
#define STBM_TIMESYNC_FLEXRAY (0x03U)
#endif
#ifndef STBM_CLONE_CONFIG_DEFERRED_COPY
#define STBM_CLONE_CONFIG_DEFERRED_COPY (0x01U)
#endif
#ifndef STBM_CLONE_CONFIG_IMMEDIATE_TX
#define STBM_CLONE_CONFIG_IMMEDIATE_TX (0x02U)
#endif
#ifndef STBM_CLONE_CONFIG_APPLY_RATE
#define STBM_CLONE_CONFIG_APPLY_RATE (0x04U)
#endif
#ifndef STBM_CLONE_CONFIG_APPLY_OFFSET
#define STBM_CLONE_CONFIG_APPLY_OFFSET (0x08U)
#endif
#ifndef STBM_CLONE_CONFIG_RETRIGGER_DEFERRED_COPY
#define STBM_CLONE_CONFIG_RETRIGGER_DEFERRED_COPY (0x10U)
#endif
#define StbM_TimeDiffType_LowerLimit (-2147483647)
#define StbM_TimeDiffType_UpperLimit (2147483647)
#define StbM_CustomerIdType_LowerLimit (0U)
#define StbM_CustomerIdType_UpperLimit (65535U)
#define StbM_SynchronizedTimeBaseType_LowerLimit (0U)
#define StbM_SynchronizedTimeBaseType_UpperLimit (65535U)
#define StbM_RateDeviationType_LowerLimit (-32768)
#define StbM_RateDeviationType_UpperLimit (32767)

/* Implementation Data Type symbols */
      
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Declaration                               **
*******************************************************************************/

/*******************************************************************************
**                      Global Functions                                      **
*******************************************************************************/
#ifdef __cplusplus
} /* extern "C" */
#endif 
#endif /* RTE_STBM_TYPE_H */
