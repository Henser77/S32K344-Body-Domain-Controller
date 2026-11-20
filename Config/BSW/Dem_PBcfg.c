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
 * @file        : Dem_PBcfg.c
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Post-build time definitions of Dem
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

/* =================================================== inclusions =================================================== */
#include "Dem_PBcfg.h"

/* PRQA S 3120, 3132 ++ */ /* VL_Dem_3132, VL_Dem_3120 */
/* ============================================ external data definitions =========================================== */


/******************* Event Parameter *************************/


/**
 * @brief This container contains the configuration for EventParameter
 * @range NA
 */
#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
static const Dem_PBEventParameterType Dem_PBEvent[DEM_EVENT_NUMBER] =
{
    /** event #0 invalid */
    {
        FALSE, /** EventRecoverableInSameOperationCycle */
        FALSE, /** EventAvailable */
        FALSE, /** EventAvailableInVariant */
        0u,    /** EventConfirmationThreshold */
    },
    /** DemEventParameter_0 */
    {
        FALSE, /** EventRecoverableInSameOperationCycle */
        TRUE, /** EventAvailable */
        TRUE, /** EventAvailableInVariant */
        1u, /** EventConfirmationThreshold */
    },
};
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

 


/**
 * @brief This container contains the configuration for DtcValueTable
 * @range NA
 */
#define DEM_START_SEC_CONFIG_DATA_32
#include "Dem_MemMap.h"
/* PRQA S 1258 ++ */ /* VL_Dem_1258 */
static const uint32 Dem_DtcValueTable[DEM_DTC_NUMBER] =
{
    0x100u, /** DemDTC_TestFault */ 
};
/* PRQA S 1258 -- */
#define DEM_STOP_SEC_CONFIG_DATA_32
#include "Dem_MemMap.h"

 


 

#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
/**
 * @brief This type of the external data structure shall contain the post build initialization data for the Dem. 
 */
/* PRQA S 1531 ++ */ /* VL_Dem_1531 */
const Dem_ConfigType Dem_Config =
/* PRQA S 1531 -- */
{
    Dem_DtcValueTable, /** Dtc Value Table Pointer */
    Dem_PBEvent,
};
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

 
/* PRQA S 3120, 3132 -- */

