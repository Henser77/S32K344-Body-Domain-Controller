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
 * @file        : Dem_PBcfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:06
 * @customer    : EasyXMen
 * @description : Post-build time Configuration declaration of Dem
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

#ifndef DEM_PBCFG_H
#define DEM_PBCFG_H

/* =================================================== inclusions =================================================== */
#include "Dem_Lcfg.h"

/* ================================================ type definitions ================================================ */

/******************* Event Parameter *************************/
/**
 * @brief This container contains the configuration (parameters) for events.
 */
typedef struct
{
    boolean EventRecoverableInSameOperationCycle; /**< If parameter is configured to FALSE, reporting of PASSED will be ignored if the event is already "testfailed
     * this operation cycle". @range 0..1 */
    boolean EventAvailable; /**< This parameter configures an Event as unavailable. It is treated by Dem as if it does not exist. true = Event is
     * available false = Event is not available @range 0..1 */
    boolean EventAvailableInVariant; /**< This parameter defines the enabled or disabled status of an event. If set to FALSE, the Event is generally
     * disabled, even though the SW-C is integrated and the Event is described in the ECUC. The Dem shall ignore all
     * calls from the SW-C. If set to TRUE, the availability of the event depends on other availability sources. @range 0..1 */
    uint8 EventConfirmationThreshold; /**< Defines the operation cycle threshold of the DTC confirmation status according "Confirmation Threshold" of ISO
     * 14229-1 @range 0..255 */
} Dem_PBEventParameterType;


/**
 * @brief This type of the external data structure shall contain the post build initialization data for the Dem.
 */
typedef struct
{
    const uint32* DtcValue; /**< Dtc Value Table Pointer @range NA */
    const Dem_PBEventParameterType* PBEvent; /**< Event PB Configuration Pointer @range NA */
 } Dem_ConfigType;

/* =========================================== external data declarations =========================================== */

#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
/**
 * @brief This type of the external data structure shall contain the post build initialization data for the Dem.
 * @range NA
 */
extern const Dem_ConfigType Dem_Config;
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

 
#endif


