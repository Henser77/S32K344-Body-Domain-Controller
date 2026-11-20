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
 * @file        : Dem_Lcfg.c
 * @licence     : 
 * @date        : 2026-11-20 13:51:02
 * @customer    : EasyXMen
 * @description : Link time definitions of Dem
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

/* =================================================== inclusions =================================================== */
#include "Dem_Lcfg.h"
#include "NvM.h"

/* PRQA S 1531, 1533, 3120, 3132 ++ */ /* VL_Dem_1531, VL_Dem_1533, VL_Dem_3132, VL_Dem_3120 */
/* ============================================ internal data definitions =========================================== */


/******************* Client *************************/
#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
const Dem_ClientType Dem_Client[DEM_CLIENT_NUMBER] =
{
    /** DemClient_Dcm */
    {
        0u, /** EventMemorySetRef */
        0u, /** DcmClientId */
        1u, /** FirstEvent */
        2u, /** LastEvent */
    },
};
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

#define DEM_START_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
uint8 Dem_ClientSetting[DEM_DCM_CLIENT_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"

#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
Dem_ReadoutBufferEntryType Dem_ReadoutBuffer[DEM_DCM_CLIENT_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"





/******************* Event Memory Set *************************/


#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
Dem_EntryType Dem_MemoryEntry[1];
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
Dem_EventStatusDataType Dem_EventStatusData;
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
Dem_AdminDataType Dem_AdminData;
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"

#define DEM_START_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
uint8 Dem_MemoryEntryStatus[DEM_NV_RAM_BLOCK_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"

#define DEM_START_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
/**
 * @brief memory chronology
 * @range 0..255
 */
static uint8 Dem_MemChronologyDemEventMemorySetDemPrimaryMemory[1];
#define DEM_STOP_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
#define DEM_START_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
Dem_NvBlockNumType Dem_MemCounter[DEM_TOTAL_MEMORY_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"

#define DEM_START_SEC_VAR_INIT_UNSPECIFIED
#include "Dem_MemMap.h"
Dem_MemStateInfoType Dem_MemStateInfo[DEM_TOTAL_MEMORY_NUMBER] =
{
    /** DemEventMemorySet DemPrimaryMemory */
    {
        1u, /** MaxSize */
        0u, /** MemIndex */
        0u,/** FirstMemoryIndex */
        0xFFu, /** MemoryId */
        1u, /** FirstEvent */
        2u, /** LastEvent */
        Dem_MemChronologyDemEventMemorySetDemPrimaryMemory, /** ChronoPtr */
        &Dem_MemCounter[0], /** SizePtr */
    },
};
#define DEM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Dem_MemMap.h"

#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
const Dem_PrimaryMemoryType Dem_Memory[DEM_TOTAL_MEMORY_NUMBER] =
{
    /** DemEventMemorySet DemPrimaryMemory */
    {
        0x7fu, /** DtcStatusAvailabilityMask */
        DEM_DISPLACEMENT_NONE, /** EventDisplacementStrategy */
        DEM_TRIGGER_TESTFAILED, /** EventMemoryEntryStorageTrigger */
    },
};
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
/**
 * @brief This container is a collection of referenced event memories and related information for a Dem client.
 */
const Dem_EventMemorySetType Dem_EventMemorySet[DEM_EVENT_MEMORY_SET_NUMBER] =
{
    /** DemEventMemorySet */
    {
        DEM_DTC_TRANSLATION_ISO14229_1, /** TypeOfDTCSupported */
        0u, /** PrimaryMemoryRef */
    },
};
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

 
/******************* Nv Ram Block Id *************************/
/* PRQA S 1290 ++ */ /* VL_Dem_1290 */
#define DEM_START_SEC_CONFIG_DATA_16
#include "Dem_MemMap.h"
const NvM_BlockIdType Dem_NvRamBlockId[DEM_NV_RAM_BLOCK_NUMBER] =
{
    NvMConf_NvMBlockDescriptor_NvMBlock_Primary_0, /** DemNvRamBlockId_Primary_0 */
    NvMConf_NvMBlockDescriptor_NvMBlock_AdminData, /** DemNvRamBlockId_AdminData */
    NvMConf_NvMBlockDescriptor_NvMBlock_EventStatusData, /** DemNvRamBlockId_EventStatusData */
};
#define DEM_STOP_SEC_CONFIG_DATA_16
#include "Dem_MemMap.h"
/* PRQA S 1290-- */

#define DEM_START_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
uint8 Dem_MemoryStatus[DEM_NV_RAM_BLOCK_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"


/**
 * @brief Management data needed for immediate NV updates
 */
#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
Dem_NvmCommitDataType Dem_NvmCommitData;
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"

#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
Dem_NvmCommitBufferType Dem_NvmCommitBuffer;/* PRQA S 0759 */ /* VL_Dem_0759 */
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"

#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
const Dem_MemoryDataPtrType Dem_MemoryDataPtr[DEM_NV_RAM_BLOCK_NUMBER] = {
    /** Index     MemoryDataPtr                          Comment */
    /** 0 */ (Dem_MemoryDataPtrType)&Dem_GetMemoryEntry()[0],  /** [Dem_PrimaryEntry0] */
    /** 2 */ (Dem_MemoryDataPtrType)&Dem_GetAdminData(),       /** [Dem_AdminData] */
    /** 3 */ (Dem_MemoryDataPtrType)&Dem_GetEventStatusData(), /** [Dem_StatusData] */
};
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

            
#define DEM_START_SEC_CONFIG_DATA_8
#include "Dem_MemMap.h"
const Dem_MemoryDataSizeType Dem_MemoryDataSize[DEM_NV_RAM_BLOCK_NUMBER] = {
    /** Index     MemoryDataSize                                                          Comment */
    /** 0 */ (Dem_MemoryDataSizeType)sizeof(Dem_GetMemoryEntry()[0]),  /** [Dem_PrimaryEntry0] */
    /** 2 */ (Dem_MemoryDataSizeType)sizeof(Dem_GetAdminData()),       /** [Dem_AdminData] */
    /** 3 */ (Dem_MemoryDataSizeType)sizeof(Dem_GetEventStatusData()), /** [Dem_StatusData] */
};
#define DEM_STOP_SEC_CONFIG_DATA_8
#include "Dem_MemMap.h"




/******************* Operation Cycle *************************/
/**
 * @brief Operation cycle runtime status, each bit represents an operation cycle.
 */
#define DEM_START_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
uint8 Dem_OperationCycleRestartFlag[DEM_SIZE_OPERATION_CYCLE_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"






/******************* DTC *************************/
#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
/**
 * @brief This container contains the configuration (parameters) for DemUdsDTC.
 */
const Dem_DTCType Dem_DTC[DEM_DTC_NUMBER] =
{
    /** DemDTC_TestFault */
    {
        TRUE, /** NvStorageStrategy */
        0u, /** DTCFunctionalUnit */
        0x0u, /** DTCSeverity */
        DEM_DTC_WWHOBD_CLASS_NOCLASS, /** WWHOBDDTCClass */
    },
};
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"


/******************* DTC Attributes *************************/
#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
/**
 * @brief This container contains the configuration (parameters) for DemDTCAttributes.
 */
const Dem_DTCAttributesType Dem_DTCAttributes[DEM_DTC_ATTRIBUTES_NUMBER] =
{
    /** DemDTCAttributes_TestFault */
    {
        TRUE, /** MemoryPrimarySelect */
        1u, /** DTCPriority */
        DEM_EVENT_SIGNIFICANCE_FAULT, /** DTCSignificance */
        DEM_FREEZE_FRAME_REC_NUM_CLASS_NUMBER, /** FreezeFrameRecNumClassRef */
        0u, /** MemoryDestinationRef */
    },
};
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

/******************* Debounce Class *************************/
/**
 * @brief DebounceFlag
 */
/**
 * @brief bit0: DemDebounceBehavior; 0: DEM_DEBOUNCE_FREEZE, 1: DEM_DEBOUNCE_RESET
 * bit1: DemDebounceCounterStorage; 0: FALSE, 1: TRUE
 * bit2: DemDebounceCounterJumpDown; 0: FALSE, 1: TRUE
 * bit3: DemDebounceCounterJumpUp; 0: FALSE, 1: TRUE
 * bit4-5: DemDebounceAlgorithmClass; 0: DEM_EVENT_MONOTOR_DEBOUNCCE, 1: DEM_EVENT_COUNTER_DEBOUNCCE, 2:
 * DEM_EVENT_TIME_DEBOUNCCE
 * bit6: Debounce low res timer enable Mask; 0: FALSE, 1: TRUE
 */

#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
/**
 * @brief This container contains the configuration of Debounce Based Class.
 */
const Dem_DebounceBasedClassType Dem_DebounceBasedClass[1] =
{
    /** DemDebounce_Counter_Test */
    {
        17u, /** DebounceFlag */
        1, /** DebounceFailedThreshold */
        -1, /** DebouncePassedThreshold */
        -1, /** DebounceCounterDecrementStepSize */
        1, /** DemDebounceCounterIncrementStepSize */
    },
};
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"


/******************* Event Parameter *************************/










#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
/**
 * @brief This container contains the configuration (parameters) for events.
 */
/**
 * @brief EventCfgFlag:
 * bit0: DemEventKind; 0: Dem_EVENT_KIND_BSW, 1: Dem_EVENT_KIND_SWC
 * bit1: DemEventReportingType; 0: STANDARD_REPORTING, 1: STANDARD_REPORTING_WITH_MONITOR_DATA
 * bit2: DemFFPrestorageInNvm; 0: FALSE, 1: TRUE
 * bit3: DemEventConfirmationThresholdCounterAdaptable; 0: FALSE, 1: TRUE
 * bit4: all DemIndicatorHealingCycleCounterThreshold are equal to 0, 0: FALSE, 1: TRUE
 * bit5: Event have Special Indicator; 0: FALSE, 1: TRUE
 */
const Dem_EventParameterType Dem_Event[DEM_EVENT_NUMBER] =
{
    /** event #0 invalid */
    {
        0u, /** EventCfgFlag */
        DEM_OPERATION_CYCLE_NUMBER, /** OperationCycleRef */
        DEM_DTC_NUMBER, /** DTCRef */
        0u, /** DebounceAlgorithmRef */
        DEM_DTC_ATTRIBUTES_NUMBER, /** DTCAttributesRef */
        0u, /** ClientStartRef */
        0u, /** ClientEndRef */
    },
    /** DemEventParameter_0 */
    {
        0x11u, /** EventCfgFlag */
        0u, /** OperationCycleRef */
        0u, /** DTCRef */
        0u, /** DebounceAlgorithmRef */
        0u, /** DTCAttributesRef */
        0u, /** ClientStartRef */
        1u, /** ClientEndRef */
    },
};
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"




/* PRQA S 1504, 1751 ++ */ /* VL_Dem_1504, VL_Dem_1751 */
#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
Dem_PartitionSatelliteInfoType Dem_PartitionSatelliteInfo;
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
/* PRQA S 1504, 1751 -- */


#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
const Dem_SatelliteCfgInfoType Dem_SatelliteCfgInfo[1] =
{
    {
        0u, /** EventSrartOfSatellite */
        1u, /** EventCountOfSatellite */
        &(Dem_GetPartitionSatelliteInfo().SatelliteStatus), /** SatelliteStatusOfSatelliteInfo */
        &(Dem_GetPartitionSatelliteInfo().SatelliteData[0]), /** SatelliteDataOfSatelliteInfo */
    },
};
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"


#define DEM_START_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
Dem_EventInternalStatusType Dem_EventInternalStatus[DEM_EVENT_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"



/* PRQA S 1531, 1533, 3120, 3132 -- */
/* PRQA S 6530 EOF  */ /* VL_MTR_Dem_STECT  */
 
