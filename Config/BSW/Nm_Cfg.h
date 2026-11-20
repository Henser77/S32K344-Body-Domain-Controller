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
 * @file        : Nm_Cfg.h
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Pre-compile configuration parameter of Nm
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

#ifndef NM_CFG_H_
#define NM_CFG_H_

/******************************************************************************
**                      Includes                                             **
******************************************************************************/
#include "Std_Types.h"
#include "Com_Cfg.h"
/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
#if !defined(NM_LOCAL)
#define NM_LOCAL static /* PRQA S 3414 */ /* VL_QAC_KeyWord */
#endif

#if !defined(NM_LOCAL_INLINE)
#define NM_LOCAL_INLINE static inline
#endif

/* NmGlobalConstants */
#define NM_MULTIPLE_PARTITION_USED                                      STD_OFF

#define NM_NUMBER_OF_CHANNELS                                           (3u)        /* NmNumberOfChannels */

#define NM_NUMBER_OF_CLUSTERS                                           (0u)        /* NmNumberOfClusters */

/* NmGlobalProperties */

/* Switches the Default Error Tracer (Det) detection and notification ON or
OFF */
#define NM_DEV_ERROR_DETECT                                             STD_ON      /* NmDevErrorDetect */

/* Pre-processor switch for enabling Version Info API support. */
#define NM_VERSION_INFO_API                                             STD_OFF      /* NmVersionInfoApi */

/* NmGlobalFeatures */

/* Pre-processor switch if all channels enableing passiveMode */
#define NM_IF_ALL_CHANNEL_PASSIVE_MODE_ENABLED                         STD_OFF            /* NmPassiveModeEnabled */

/* Pre-processor switch for enabling support of Passive Mode of the <BusNm>s. */
/* dependency: NmPassiveModeEnable == ComMNmPassiveModeEnable */
#define NM_PASSIVE_MODE_ENABLED                                         STD_OFF     /* NmPassiveModeEnabled */

/* Pre-processor switch for enabling Remote Sleep Indication support. */
/* dependency: It must not be enabled if NM_PASSIVE_MODE_ENABLED is enabled. */
#define NM_REMOTE_SLEEP_IND_ENABLED                                     STD_OFF

/* Pre-processor switch for enabling NM Coordinator support. */
/* dependency: Only valid if NM_REMOTE_SLEEP_IND_ENABLED AND
NM_NUMBER_OF_CHANNELS > 1 */
#define NM_COORDINATOR_SUPPORT_ENABLED                                  STD_OFF

#define NM_PN_BIT_VECTORY_OFFSET                                        0xffu

#define NM_PARTITION_NUMBER                                             (1u)

/* Pre-processor switch for enabling bus synchronization support of the
<BusNm>s. This feature is required for NM Coordinator nodes only. */
/* dependency: This parameter must be enabled if
NM_COORDINATOR_SUPPORT_ENABLED is enabled. */
#define NM_BUS_SYNCHRONIZATION_ENABLED                                  STD_OFF      /* NmBusSynchronizationEnabled  */

/* Maximum PN packet length */
#define NM_PN_EIRA_INFO_LENGTH                                          (0u)
/* Specifies if NmIf calculates the PNC request information for internal and external
requests (EIRA)
true: PN request are calculated false: PN request are not calculated */
#define NM_PN_EIRA_CALC_ENABLED                                         STD_OFF
/* Specifies if NmIf calculates the PN request information for external requests. (ERA) */
#define NM_PN_ERA_CALC_ENABLED                                          STD_OFF
/* NmGlobalFeatures */
#define NM_PARTIAL_NETWORK_SUPPORT_ENABLED                              STD_OFF

/* link time */
/* Enables or disables CWU detection. */
#define NM_CAR_WAKE_UP_RX_ENABLED                                       STD_OFF      /* NmCarWakeUpRxEnabled */

/* Pre-processor switch for enabling the Communication Control support. */
#define NM_COM_CONTROL_ENABLED                                          STD_OFF      /* NmComControlEnabled */

/* Enable/Disable setting of NMUserData via SW-C. */
#define NM_COM_USER_DATA_SUPPORT                                        STD_OFF      /* NmComUserDataSupport */

/* link time */
/* Enables/disables the coordinator synchronisation support. */
/* dependency: NmCoordinatorSyncSupport shall only be valid if
NM_COORDINATOR_SUPPORT_ENABLED is TRUE. */
#define NM_COORDINATOR_SYNC_SUPPORT                                     STD_OFF      /* NmCoordinatorSupportEnabled */

/* This parameter defines the maximum shutdown time of a connected
and coordinated NM-Cluster. Note:This includes nested connections. */
/* dependency: NM_GLOBAL_COORDINATOR_TIME shall only be valid if
NM_COORDINATOR_SUPPORT_ENABLED is TRUE. */

/* Pre-processor switch for enabling the PDU Rx Indication */
#define NM_PDU_RX_INDICATION_ENABLED                                    STD_OFF      /* NmPduRxIndicationEnabled */


/* Pre-processor switch for enabling the Network Management state
change notification. */
#define NM_STATE_CHANGE_IND_ENABLED                                     STD_ON      /* NmStateChangeIndEnabled */

/* Pre-processor switch for enabling User Data support. */
#define NM_USER_DATA_ENABLED                                            STD_OFF      /* NmUserDataEnabled */

#define NM_SUPPORT_COM_SENDSIGNAL                                       STD_OFF

#endif/* NM_CFG_H_ */
