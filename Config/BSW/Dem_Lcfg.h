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
 * @file        : Dem_Lcfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Link time declaration of Dem
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

#ifndef DEM_LCFG_H
#define DEM_LCFG_H

/* =================================================== inclusions =================================================== */
#include "Dem_Int.h"
#include "Dem_Cfg.h"
#include "NvM.h"

/* PRQA S 1039, 3120, 3132, 3471, 3472, 5004 ++ */ /* VL_Dem_1039, VL_Dem_3132, VL_Dem_3120, VL_Dem_3471, VL_Dem_3472, VL_QAC_FuncPtr */
/* ===================================================== macros ===================================================== */
/** Defines the maximum number for prestored freeze frames. If set to 0, then freeze frame prestorage is not supported by
 * the ECU. */
/** Dem/DemGeneral/DemMaxNumberPrestoredFF */
#define DEM_MAX_NUMBER_PRESTORED_FF 0u

#define DEM_PRESTORED_EVENT_NUM 0u

/** references to partitions, the DEM Master is running at. */
/*< Dem/DemGeneral/DemMasterOsApplicationRef >*/
#define DEM_MASTER_APPLICATION_ID 0u

/******************* Client *************************/
/** count(Dem/DemGeneral/DemClient) Range: 1~255 */
#define DEM_CLIENT_NUMBER 1u

/** count(Dem/DemGeneral/DemClient for dcm ) Range: 1~255 */
#define DEM_DCM_CLIENT_NUMBER 1u

/** count(Dem/DemGeneral/DemClient for J1939dcm ) Range: 1~255 */
#define DEM_J1939DCM_CLIENT_NUMBER 0u

#define DEM_CLIENT_REPORT_EVENT_SIZE 1u /**< enent count for this client */

/** STD_ON: have one Dem/DemGeneral/DemClient/DemClientFunctionality select DEM_CLIENT_ONLY_USES_EVENTOVERFLOW_INTERFACE,
 * STD_OFF: else */
#define DEM_CLIENT_FUNCTIONALITY_CHECK STD_OFF

/** STD_ON: have one Dem/DemGeneral/DemClient/DemCallbackDTCStatusChanged, STD_OFF: else */
#define DEM_CLIENT_CALLBACK_DTC_STATUS_CHANGED STD_OFF

/******************* Data elements *************************/
/** count(Dem/DemGeneral/DemDataElementClass) Range: 0~65535  */
#define DEM_DATA_ELEMENT_CLASS_NUMBER 0u

/*Provide the implementation data type of this C/S data element.This parameter defines the Dem-internal data value,
which is mapped to the data element.*/

#define DEM_DATA_SINT8_MAX_SIZE 0u /**< sint8 data max size */
#define DEM_DATA_UINT16_MAX_SIZE 0u /**< uint16 data max size */
#define DEM_DATA_SINT16_MAX_SIZE 0u /**< sint16 data max size */
#define DEM_DATA_UINT32_MAX_SIZE 0u /**< uint32 data max size */
#define DEM_DATA_SINT32_MAX_SIZE 0u /**< sint32 data max size */
#define DEM_DATA_FLOAT_MAX_SIZE 0u /**< float data max size */

/******************* Did Class *************************/
/** count(Dem/DemGeneral/DemDidClass) Range: 0~65535  */
#define DEM_DID_CLASS_NUMBER  0u /**< DemDidClass count */

/******************* Enable Condition *************************/
/** count(Dem/DemGeneral/DemEnableConditionGroup) Range: 0~255  */
#define DEM_ENABLE_CONDITION_GROUP_NUMBER 0u /**< DemEnableConditionGroup count */
#define DEM_ENABLE_CONDITION_GROUP_BYTE   0u /**< DemEnableConditionGroup count */

#define DEM_ENABLE_CONDITION_ID_NUMBER    0u /**< DemEnableCondition count */
#define DEM_ENABLE_CONDITION_ID_BYTE      0u /**< DemEnableCondition count */

/******************* Storage Condition *************************/
/** count(Dem/DemGeneral/DemStorageConditionGroup) Range: 0~255  */
#define DEM_STORAGE_CONDITION_GROUP_NUMBER 0u /**< DemStorageConditionGroup count */
#define DEM_STORAGE_CONDITION_GROUP_BYTE   0u /**< DemStorageConditionGroup count */

/** STD_ON: have one Dem/DemGeneral/DemStorageCondition/DemStorageConditionReplacementEventRef, STD_OFF: else */
#define DEM_STORAGE_CONDITION_REPLACEMENT_SUPPORT 

#define DEM_STORAGE_CONDITION_ID_NUMBER           0u /**< DemStorageCondition count */
#define DEM_STORAGE_CONDITION_ID_BYTE             0u /**< DemStorageCondition count */

/******************* Event Memory Set *************************/
/** count(Dem/DemEventMemorySet/DemClearDTCNotification/DemClearDtcNotificationTime == START) Range: 0~65535 */
#define DEM_CLEAR_DTC_START_NOTIFICATION_NUMBER 0u

/** count(Dem/DemEventMemorySet/DemClearDTCNotification/DemClearDtcNotificationTime == FINISH) Range: 0~65535 */
#define DEM_CLEAR_DTC_END_NOTIFICATION_NUMBER 0u

/** count(Dem/DemEventMemorySet/DemIndicator) Range: 0~65535 */
#define DEM_INDICATOR_NUMBER 0u

/** STD_ON: have one Dem/DemEventMemorySet/DemMILIndicatorRef, STD_OFF: else */
#define DEM_INDICATOR_MIL_ENABLE STD_OFF

/** STD_ON: have one Dem/DemEventMemorySet/DemRedStopLampIndicatorRef, STD_OFF: else */
#define DEM_INDICATOR_RSL_ENABLE STD_OFF

/** STD_ON: have one Dem/DemEventMemorySet/DemAmberWarningLampIndicatorRef, STD_OFF: else */
#define DEM_INDICATOR_AWL_ENABLE STD_OFF

/** STD_ON: have one Dem/DemEventMemorySet/DemProtectLampIndicatorRef, STD_OFF: else */
#define DEM_INDICATOR_PL_ENABLE STD_OFF

/** STD_ON: have one Dem/DemConfigSet/DemEventParameter/DemIndicatorAttribute/DemIndicatorBehaviour selsct
 * DEM_INDICATOR_BLINKING or DEM_INDICATOR_BLINK_CONT, STD_OFF: else */
#define DEM_INDICATOR_BLINKING_ENABLE STD_OFF

/** STD_ON: have one Dem/DemConfigSet/DemEventParameter/DemIndicatorAttribute/DemIndicatorBehaviour selsct
 * DEM_INDICATOR_CONTINUOUS or DEM_INDICATOR_BLINK_CONT, STD_OFF: else */
#define DEM_INDICATOR_CONTINUOUS_ENABLE STD_OFF

/** STD_ON: have one Dem/DemConfigSet/DemEventParameter/DemIndicatorAttribute/DemIndicatorBehaviour selsct
 * DEM_INDICATOR_FAST_FLASH, STD_OFF: else */
#define DEM_INDICATOR_FAST_FLASH_ENABLE STD_OFF

/** STD_ON: have one Dem/DemConfigSet/DemEventParameter/DemIndicatorAttribute/DemIndicatorBehaviour selsct
 * DEM_INDICATOR_SLOW_FLASH, STD_OFF: else */
#define DEM_INDICATOR_SLOW_FLASH_ENABLE STD_OFF

/** count(Dem/DemEventMemorySet) Range: 0~255 */
#define DEM_EVENT_MEMORY_SET_NUMBER 1u

/** Indicating the event memory used as trigger to clear events without assigned DTCs. */
/** Dem/DemGeneral/DemClearEventsWithoutDTCEventMemoryRef */
#define DEM_CLEAR_EVENTS_WITHOUT_DTC_EVENT_MEMORY_RET DEM_EVENT_MEMORY_SET_NUMBER

/** References the DemEventMemorySet used for OBD ECU. */
/** Dem/DemGeneral/DemOBDEventMemorySetRef */
#define DEM_OBD_EVENT_MEMORY_SET_REF DEM_EVENT_MEMORY_SET_NUMBER

/** count(Dem/DemGeneral/DemEventMemorySet/DemUserDefinedMemory) */
#define DEM_USER_DEFINED_MEMORY_ENABLE STD_OFF

/** count(Dem/DemGeneral/DemEventMemorySet/DemMaxNumberEventEntryPermanent) */
#define DEM_PERMANENT_MEMORY_NUMBER 0u

/** the total size of User Defined Memory and Primary Memory */
#define DEM_TOTAL_MEMORY_NUMBER 1u

/** STD_ON: have one Dem/DemGeneral/DemEventMemorySet/DemPrimaryMemory/DemEventDisplacementStrategy or
 * Dem/DemGeneral/DemEventMemorySet/DemUserDefinedMemory/DemEventDisplacementStrategy select DEM_DISPLACEMENT_FULL,
 * STD_OFF: else */
#define DEM_GENERAL_DISPLACEMENT_FULL STD_OFF

/** STD_OFF: have Dem/DemGeneral/DemEventMemorySet/DemPrimaryMemory/DemEventDisplacementStrategy or
 * Dem/DemGeneral/DemEventMemorySet/DemUserDefinedMemory/DemEventDisplacementStrategy select DEM_DISPLACEMENT_PRIO_OCC
 * or DEM_DISPLACEMENT_FULL, STD_ON: else */
#define DEM_GENERAL_DISPLACEMENT_NONE STD_ON

/** STD_OFF: have Dem/DemGeneral/DemEventMemorySet/DemPrimaryMemory/DemEventDisplacementStrategy or
 * Dem/DemGeneral/DemEventMemorySet/DemUserDefinedMemory/DemEventDisplacementStrategy select DEM_DISPLACEMENT_NONE,
 * STD_ON: else */
#define DEM_GENERAL_DISPLACEMENT_HAVE_NONE STD_ON

/** STD_ON: have one Dem/DemGeneral/DemEventMemorySet/DemPrimaryMemory/DemEventMemoryEntryStorageTrigger or
 * Dem/DemGeneral/DemEventMemorySet/DemUserDefinedMemory/DemEventMemoryEntryStorageTrigger DEM_TRIGGER_ON_CONFIRMED,
 * STD_OFF: else */
#define DEM_ENTRY_TRIGGER_ON_CONFIRMED STD_OFF

/** STD_ON: have one Dem/DemGeneral/DemEventMemorySet/DemPrimaryMemory/DemEventMemoryEntryStorageTrigger or
 * Dem/DemGeneral/DemEventMemorySet/DemUserDefinedMemory/DemEventMemoryEntryStorageTrigger DEM_TRIGGER_ON_FDC_THRESHOLD,
 * STD_OFF: else */
#define DEM_ENTRY_TRIGGER_ON_FDC_THRESHOLD STD_OFF

/** STD_OFF: have no Dem/DemGeneral/DemEventMemorySet/DemPrimaryMemory/DemEventMemoryEntryStorageTrigger or
 * Dem/DemGeneral/DemEventMemorySet/DemUserDefinedMemory/DemEventMemoryEntryStorageTrigger DEM_TRIGGER_ON_TEST_FAILED,
 * STD_ON: else */
#define DEM_ENTRY_TRIGGER_ON_TEST_FAILED STD_ON

/** STD_ON: have one Dem/DemGeneral/DemEventMemorySet/DemPrimaryMemory/DemOccurrenceCounterProcessing or
 * Dem/DemGeneral/DemEventMemorySet/DemUserDefinedMemory/DemOccurrenceCounterProcessing DEM_PROCESS_OCCCTR_CDTC,
 * STD_OFF: else */
#define DEM_GENERAL_PROCESS_OCCCTR_CDTC STD_OFF

/** STD_OFF: have no Dem/DemGeneral/DemEventMemorySet/DemPrimaryMemory/DemOccurrenceCounterProcessing or
 * Dem/DemGeneral/DemEventMemorySet/DemUserDefinedMemory/DemOccurrenceCounterProcessing DEM_PROCESS_OCCCTR_TF,
 * STD_ON: else */
#define DEM_GENERAL_PROCESS_OCCCTR_TF STD_ON

/** STD_OFF: have no Dem/DemGeneral/DemEventMemorySet/DemPrimaryMemory/DemOccurrenceCounterProcessing or
 * Dem/DemGeneral/DemEventMemorySet/DemUserDefinedMemory/DemOccurrenceCounterProcessing DEM_PROCESS_OCCCTR_TFTOC,
 * STD_ON: else */
#define DEM_GENERAL_PROCESS_OCCCTR_TFTOC STD_OFF

/** STD_ON: have one Dem/DemGeneral/DemEventMemorySet/DemPrimaryMemory/DemTypeOfFreezeFrameRecordNumeration or
 * Dem/DemGeneral/DemEventMemorySet/DemUserDefinedMemory/DemTypeOfFreezeFrameRecordNumeration DEM_FF_RECNUM_CALCULATED,
 * STD_OFF: else */
#define DEM_GENERAL_FF_RECNUM_CALCULATED STD_OFF

/** STD_OFF: have no Dem/DemGeneral/DemEventMemorySet/DemPrimaryMemory/DemTypeOfFreezeFrameRecordNumeration or
 * Dem/DemGeneral/DemEventMemorySet/DemUserDefinedMemory/DemTypeOfFreezeFrameRecordNumeration DEM_FF_RECNUM_CONFIGURED,
 * STD_ON: else */
#define DEM_GENERAL_FF_RECNUM_CONFIGURED STD_ON

/** count(Dem/DemEventMemorySet/DemPrimaryMemory/DemGroupOfDTC and
 * Dem/DemEventMemorySet/DemUserDefinedMemory/DemGroupOfDTC) */
#define DEM_DTC_GROUP_NUMBER 0u
 
/******************* Extended Data Class *************************/
/** count(Dem/DemExtendedDataClass) Range: 0~65535*/
#define DEM_EXTENDED_DATA_CLASS_NUMBER 0u

/** STD_OFF: have no Dem/DemGeneral/DemExtendedDataRecordClass/DemExtendedDataRecordTrigger select
 * DEM_TRIGGER_ON_CONFIRMED, STD_ON: else */
#define DEM_GENERAL_ED_TRIGGER_ON_CONFIRMED STD_OFF

/** STD_OFF: have no Dem/DemGeneral/DemExtendedDataRecordClass/DemExtendedDataRecordTrigger select
 * DEM_TRIGGER_ON_FDC_THRESHOLD, STD_ON: else */
#define DEM_GENERAL_ED_TRIGGER_ON_FDC_THRESHOLD STD_OFF

/** STD_OFF: have no Dem/DemGeneral/DemExtendedDataRecordClass/DemExtendedDataRecordTrigger select
 * DEM_TRIGGER_ON_PASSED, STD_ON: else */
#define DEM_GENERAL_ED_TRIGGER_ON_PASSED STD_OFF

/** STD_OFF: have no Dem/DemGeneral/DemExtendedDataRecordClass/DemExtendedDataRecordTrigger select
 * DEM_TRIGGER_ON_PENDING, STD_ON: else */
#define DEM_GENERAL_ED_TRIGGER_ON_PENDING STD_OFF

/** STD_OFF: have no Dem/DemGeneral/DemExtendedDataRecordClass/DemExtendedDataRecordTrigger select
 * DEM_TRIGGER_ON_TEST_FAILED, STD_ON: else */
#define DEM_GENERAL_ED_TRIGGER_ON_TEST_FAILED STD_OFF

/** Data size of the largest Extended data record */
#define DEM_MAX_SIZE_EXTENDED_DATA 0u

/** Maximum number of Extended data record per DTC */
#define DEM_MAX_NUMBER_EXTENDED_DATA 0u

#define DEM_MAX_NUMBER_EXTENDED_DATA_RECORD 0u /**< 8 bytes per record */

/******************* Freeze Frame Class *************************/
/** count(Dem/DemFreezeFrameClass) Range: 0~65535*/
#define DEM_FREEZE_FRAME_CLASS_NUMBER 0u

/******************* Freeze Frame Rec Num Class *************************/
/** count(Dem/DemFreezeFrameRecNumClass) Range: 0~65535*/
#define DEM_FREEZE_FRAME_REC_NUM_CLASS_NUMBER 0u

/** STD_OFF: have no Dem/DemGeneral/DemFreezeFrameRecordClass/DemFreezeFrameRecordTrigger select
 * DEM_TRIGGER_ON_CONFIRMED, STD_ON: else */
#define DEM_GENERAL_FF_TRIGGER_ON_CONFIRMED STD_OFF

/** STD_OFF: have no Dem/DemGeneral/DemFreezeFrameRecordClass/DemFreezeFrameRecordTrigger select
 * DEM_TRIGGER_ON_EVERY_TEST_FAILED, STD_ON: else */
#define DEM_GENERAL_FF_TRIGGER_ON_EVERY_TEST_FAILED STD_OFF

/** STD_OFF: have no Dem/DemGeneral/DemFreezeFrameRecordClass/DemFreezeFrameRecordTrigger select
 * DEM_TRIGGER_ON_FDC_THRESHOLD, STD_ON: else */
#define DEM_GENERAL_FF_TRIGGER_ON_FDC_THRESHOLD STD_OFF

/** STD_OFF: have no Dem/DemGeneral/DemFreezeFrameRecordClass/DemFreezeFrameRecordTrigger select
 * DEM_TRIGGER_ON_PENDING, STD_ON: else */
#define DEM_GENERAL_FF_TRIGGER_ON_PENDING STD_OFF

/** STD_OFF: have no Dem/DemGeneral/DemFreezeFrameRecordClass/DemFreezeFrameRecordTrigger select
 * DEM_TRIGGER_ON_TEST_FAILED, STD_ON: else */
#define DEM_GENERAL_FF_TRIGGER_ON_TEST_FAILED STD_OFF

/** STD_OFF: have no Dem/DemGeneral/DemFreezeFrameRecordClass/DemFreezeFrameRecordTrigger select
 * DEM_TRIGGER_ON_TEST_FAILED_THIS_OPERATION_CYCLE, STD_ON: else */
#define DEM_GENERAL_FF_TRIGGER_ON_TEST_FAILED_THIS_OPERATION_CYCLE STD_OFF

/** STD_OFF: have no DemUDSOBDFreezeFrameClassRef, STD_ON: else */
#define DEM_UDS_OBD_FREEZE_FRAME_ENABLE STD_OFF

/** Maximum number of freeze frames per DTC */
#define DEM_MAX_NUMBER_FREEZEFRAME 0u

#define DEM_MAX_NUMBER_FREEZEFRAMERECORD 0u /**< 8 bytes per record */

/** Data size of the largest FreezeFrame record */
#define DEM_MAX_SIZE_FREEZEFRAME 0u

/** Data size of the largest OBD FreezeFrame record */
#define DEM_MAX_SIZE_OBDFREEZEFRAME 0u

/** Data size of the largest J1939FreezeFrame record */
#define DEM_MAX_SIZE_J1939FREEZEFRAME 0u

/** Data size of the largest J1939EXFreezeFrame record */
#define DEM_MAX_SIZE_J1939EXFREEZEFRAME     0u

#define DEM_OBDFREEZEFRAME_RECORD_INDEX     0u /**< OBD */
#define DEM_J1939FREEZEFRAME_RECORD_INDEX   1u /**< J1939 */
#define DEM_J1939EXFREEZEFRAME_RECORD_INDEX 2u /**< J1939Ex */

/******************* Nv Ram Block Id *************************/
/** count(Dem/DemNvRamBlockId) Range: 0~* */
#define DEM_NV_RAM_BLOCK_NUMBER 3u

/** STD_ON: have Dem/DemConfigSet/DemDTC/DemNvStorageStrategy select IMMEDIATE_AT_FIRST_OCCURRENCE , STD_OFF: else */
#define DEM_IMMEDIATE_STORAGE STD_ON

/** Macros encoding NV immediate data commit state */
#define DEM_NVM_COMMIT_IDLE     (0x00u) /**< No data commit in progress */
#define DEM_NVM_COMMIT_WRITING  (0x01u) /**< Data commit in progress */
#define DEM_NVM_COMMIT_FINISHED (0x02u) /**< Data commit completed */
#define DEM_NVM_COMMIT_FAILED   (0x03u) /**< Data commit finished, but failed */

/** Macros encoding NV block state */
/** Take care with modifications: The implementation of Dem_Nvm requires DIRTYFLAG < IMMEDIATEFLAG < CLEARFLAG */
#define DEM_NVM_BLOCKSTATE_DIRTYFLAG     (0x01u) /**< Block status bit 'data modified' */
#define DEM_NVM_BLOCKSTATE_IMMEDIATEFLAG (0x02u) /**< Block status bit 'commit immediately' */
#define DEM_NVM_BLOCKSTATE_CLEARFLAG     (0x04u) /**< Block status bit 'date cleared' */

/** 0x01u: DEM_NVM_BLOCKSTATE_DIRTYFLAG
 * 0x03u: DEM_NVM_BLOCKSTATE_DIRTYFLAG | DEM_NVM_BLOCKSTATE_IMMEDIATEFLAG
 * 0x07u: DEM_NVM_BLOCKSTATE_DIRTYFLAG | DEM_NVM_BLOCKSTATE_IMMEDIATEFLAG | DEM_NVM_BLOCKSTATE_CLEARFLAG
 */
#define DEM_NVM_BLOCKSTATE_UNMODIFIED            (0x00u) /**< Data is unmodified */
#define DEM_NVM_BLOCKSTATE_DIRTY                 (0x01u) /**< Data modified, commit at shutdown */
#define DEM_NVM_BLOCKSTATE_DIRTYIMMEDIATE        (0x03u) /**< Data modified, commit immediately */
#define DEM_NVM_BLOCKSTATE_DIRTYCLEAREDIMMEDIATE (0x07u) /**< Data cleared, commit immediately */

#define DEM_NV_PRIMARYBLOCKINDEX   0u /**< Primary memory */
#define DEM_NV_USERDEFINEBLOCKINDEX  1u /**< User defined memory */
#define DEM_NV_ADMINBLOCKINDEX       1u /**< Admin memory */
#define DEM_NV_EVENTSTATUSBLOCKINDEX 2u /**< Event status memory */
#define DEM_NV_DEBOUNCEBLOCKINDEX    3u /**< Debounce memory */

/******************* Operation Cycle *************************/
/** count(Dem/DemOperationCycle) Range: 1~256 */
#define DEM_OPERATION_CYCLE_NUMBER 1u

/** size(Dem/DemOperationCycle) Range: 1~256 */
#define DEM_SIZE_OPERATION_CYCLE_NUMBER 1u

/** Macros encoding magic cycle counter values */
#define DEM_OPERATIONCYCLE_CYCLECOUNT_MAX     (0xEEEEu) /**< maximum cycle counter */
#define DEM_OPERATIONCYCLE_CYCLECOUNT_LATCHED (0xEEFFu) /**< latched cycle counter */
#define DEM_OPERATIONCYCLE_CYCLECOUNT_AGED    (0xFFEEu) /**< event is aged */
#define DEM_OPERATIONCYCLE_CYCLECOUNT_INVALID (0xFFFFu) /**< no cycle counter available */

/** STD_ON: have Dem/DemOperationCycle/DemLeadingCycleRef, STD_OFF: else */
#define DEM_LEADING_CYCLE_REF STD_OFF

/******************* General J1939 *************************/
/** STD_ON: have Dem/DemGeneralJ1939, STD_OFF: else */
#define DEM_J1939_SUPPORT STD_OFF

/** STD_ON: Dem/DemGeneralJ1939/DemJ1939ClearDtcSupport on, STD_OFF: else */
#define DEM_J1939_CLEAR_DTC_SUPPORT STD_OFF

/** STD_ON: Dem/DemGeneralJ1939/DemJ1939Dm31Support on, STD_OFF: else */
#define DEM_J1939_DM31_SUPPORT STD_OFF

/** STD_ON: Dem/DemGeneralJ1939/DemJ1939ExpandedFreezeFrameSupport on, STD_OFF: else */
#define DEM_J1939_EXPANDED_FREEZE_FRAME_SUPPORT STD_OFF

/** STD_ON: Dem/DemGeneralJ1939/DemJ1939FreezeFrameSupport on, STD_OFF: else */
#define DEM_J1939_FREEZE_FRAME_SUPPORT STD_OFF

/** STD_ON: Dem/DemGeneralJ1939/DemJ1939RatioSupport on, STD_OFF: else */
#define DEM_J1939_RATIO_SUPPORT STD_OFF

/** STD_ON: Dem/DemGeneralJ1939/DemJ1939Readiness1Support on, STD_OFF: else */
#define DEM_J1939_READINESS1_SUPPORT STD_OFF

/** STD_ON: Dem/DemGeneralJ1939/DemJ1939Readiness2Support on, STD_OFF: else */
#define DEM_J1939_READINESS2_SUPPORT STD_OFF

/** STD_ON: Dem/DemGeneralJ1939/DemJ1939Readiness3Support on, STD_OFF: else */
#define DEM_J1939_READINESS3_SUPPORT STD_OFF

/** STD_ON: Dem/DemGeneralJ1939/DemJ1939ReadingDtcSupport on, STD_OFF: else */
#define DEM_J1939_READING_DTC_SUPPORT STD_OFF

/** STD_ON: have one Dem/DemGeneralJ1939/DemCallbackJ1939DTCStatusChanged, STD_OFF: else */
#define DEM_J1939_CALLBACK_DTC_STATUS_CHANGED STD_OFF

/** count(Dem/DemJ1939FreezeFrameClass) Range: 1~256 */
#define DEM_J1939_FREEZE_FRAME_NUMBER 0u

/******************* General OBD *************************/
/** STD_ON: have Dem/DemGeneralOBD , STD_OFF: else */
#define DEM_OBDII_SUPPORT STD_OFF

/** STD_ON: Dem/DemGeneralOBD/DemOBDCentralizedPID21Handling on, STD_OFF: else */
#define DEM_OBD_CENTRALIZED_PID21_HANDING STD_OFF

/** STD_ON: Dem/DemGeneralOBD/DemOBDCentralizedPID31Handling on, STD_OFF: else */
#define DEM_OBD_CENTRALIZED_PID31_HANDING STD_OFF

/** STD_ON: Dem/DemGeneralOBD/DemOBDDelayedDCYConfirmedAndMIL on, STD_OFF: else */
#define DEM_OBD_DELAYED_DCY_CONFIRMED_AND_MIL STD_OFF

/** Switch to provide either Gasoline or Diesel parameters. */
#define DEM_IGNITION_COMPRESSION 0u /**< Diesel engine type */
#define DEM_IGNITION_SPARK       1u /**< Gasoline engine type */
#define DEM_NO_ENGINE_TYPE       2u /**< no DemOBDEngineType configuration */
/** Dem/DemGeneralOBD/DemOBDEngineType */
#define DEM_OBD_ENGINE_TYPE DEM_NO_ENGINE_TYPE

/** STD_ON: Dem/DemGeneralOBD/DemOBDEventDisplacement on, STD_OFF: else */
#define DEM_OBD_EVENT_DISPLACEMENT STD_OFF

/** STD_ON: Dem/DemGeneralOBD/DemSupportedObdUdsDtcSeparation on, STD_OFF: else */
#define DEM_SUPPORTED_OBD_UDS_DTC_SEPARATION STD_OFF

/** Input variable for the accelerator padal information, which is assigned to a specific data element used as
 * interface for the Dem-internal PID calculations. */
/** Dem/DemGeneralOBD/DemOBDInputAcceleratorPedalInformation*/
#define DEM_OBD_ACC_PEDAL_INFO DEM_DATA_ELEMENT_CLASS_NUMBER

/** Input variable for the ambient pressure, which is assigned to a specific data element used as interface for the
 * Dem-internal PID calculations. */
/** Dem/DemGeneralOBD/DemOBDInputAmbientPressure*/
#define DEM_OBD_AMBIENT_PRESSURE DEM_DATA_ELEMENT_CLASS_NUMBER

/** Input variable for the ambient temperature, which is assigned to a specific data element used as interface for the
 * Dem-internal PID calculations. */
/** Dem/DemGeneralOBD/DemOBDInputAmbientTemperature*/
#define DEM_OBD_AMBIENT_TEMPERATURE DEM_DATA_ELEMENT_CLASS_NUMBER

/** Input variable for the distance information, which is assigned to a specific data element used as interface for the
 * Dem-internal PID calculations. */
/** Dem/DemGeneralOBD/DemOBDInputDistanceInformation*/
#define DEM_OBD_DISTANCE_INFO DEM_DATA_ELEMENT_CLASS_NUMBER

/** Input variable for the engine speed, which is assigned to a specific data element used as interface for the
 * Dem-internal PID calculations. */
/** Dem/DemGeneralOBD/DemOBDInputEngineSpeed*/
#define DEM_OBD_ENGINE_SPEED DEM_DATA_ELEMENT_CLASS_NUMBER

/** Input variable for the engine temperature, which is assigned to a specific data element used as interface for the
 * Dem-internal PID calculations. */
/** Dem/DemGeneralOBD/DemOBDInputEngineTemperature*/
#define DEM_OBD_ENGINE_TEMPERATURE DEM_DATA_ELEMENT_CLASS_NUMBER

/** Input variable for the programming event, which is assigned to a specific data element used as interface for the
 * Dem-internal PID calculations. */
/** Dem/DemGeneralOBD/DemOBDInputProgrammingEvent*/
#define DEM_OBD_PROGRAMMING_EVENT DEM_DATA_ELEMENT_CLASS_NUMBER

/** Input variable for the vehicle speed, which is assigned to a specific data element used as interface for the
 * Dem-internal PID calculations. */
/** Dem/DemGeneralOBD/DemOBDInputVehicleSpeed*/
#define DEM_OBD_VEHICLE_SPEED DEM_DATA_ELEMENT_CLASS_NUMBER

/** Input variable for the Time Since Engine Start information, which is assigned to a specific data element. */
/** Dem/DemGeneralOBD/DemOBDTimeSinceEngineStart*/
#define DEM_OBD_TIME_SINCE_ENGINE_START DEM_DATA_ELEMENT_CLASS_NUMBER

/** STD_ON: have one Dem/DemGeneralOBD/DemCallbackOBDDTCStatusChanged, STD_OFF: else */
#define DEM_OBD_CALLBACK_DTC_STATUS_CHANGED STD_OFF

/******************* Ratio *************************/
/*<[SWS_Dem_CONSTR_06148] Dependency on container DemRation dThe container DemRatio shall only be available if
 * DemOBDSupport is set to DEM_OBD_MASTER_ECU.c()>*/
/** count(Dem/DemRatio) Range: 0~65535 */
#define DEM_RATIO_NUMBER 0u

/** count(Dem/DemRatio/DemFunctionIdRef) Range: 0~* */
#define DEM_FID_REF_NUMBER 0u

/******************* Component *************************/
/** count(Dem/DemConfigSet/DemComponent) Range: 0~* */
#define DEM_COMPONENT_NUMBER 0u

/** STD_ON: have Dem/DemConfigSet/DemComponent/DemComponentFailedCallbackFnc or have
 * Dem/DemConfigSet/DemComponent/DemComponentFailedCallbackUsePort on , STD_OFF: else */
#define DEM_COMPONENT_CALL_BACK STD_OFF

/** STD_ON: have Dem/DemConfigSet/DemComponent/DemComponentIgnoresPriority on , STD_OFF: else */
#define DEM_COMPONENT_IGNORES_PRIORITY STD_OFF

/** STD_ON: have Dem/DemConfigSet/DemComponent/DemImmediateChildComponentRef , STD_OFF: else */
#define DEM_COMPONENT_CHILD_COMPONENT STD_OFF

/******************* DTC *************************/
/** count(Dem/DemConfigSet/DemDTC) Range: 0~65535 */
#define DEM_DTC_NUMBER 1u

#define DEM_SEVERITY_MASK 0x0u

/** count(Event combination) Range: 1~65535 */
#define DEM_COMBINATION_NUMBER 0u

#define DEM_DTC_J1939_INVALID  ((uint32)0x000000u) /**< No J1939 DTC */
#define DEM_DTC_OBD_INVALID ((uint32)0x000000u)   /**< No OBD DTC */
#define DEM_DTC_UDS_INVALID ((uint32)0x00FFFFFFu) /**< No UDS DTC */

/******************* DTC Attributes *************************/
/** count(Dem/DemConfigSet/DemDTCAttributes) Range: 0~65535 */
#define DEM_DTC_ATTRIBUTES_NUMBER 1u

/** STD_ON: have Dem/DemConfigSet/DemDTCAttributes/DemAgingCycleCounterThreshold configuration , STD_OFF: else */
#define DEM_AGING_ENABLE STD_OFF

#define DEM_ATTRI_INVALID_EXTENDDATA         0xFFu /**< No extend data */
#define DEM_ATTRI_INVALID_FREEZEFRAME        0xFFu /**< No freeze frame */
#define DEM_ATTRI_INVALID_OBDFREEZEFRAME     0xFFu /**< No OBD freeze frame */
#define DEM_ATTRI_INVALID_J1939FREEZEFRAME   0xFFu /**< No J1939 freeze frame */
#define DEM_ATTRI_INVALID_J1939EXFREEZEFRAME 0xFFu /**< No J1939 extended freeze frame */

/******************* Debounce Counter Based Class *************************/
/** STD_ON: have Dem/DemConfigSet/DemDebounceCounterBasedClass/DemDebounceCounterJumpDown on , STD_OFF: else */
#define DEM_JUMP_DOWN_DEBOUNCE_COUNTER STD_OFF

/** STD_ON: have Dem/DemConfigSet/DemDebounceCounterBasedClass/DemDebounceCounterJumpUp on , STD_OFF: else */
#define DEM_JUMP_UP_DEBOUNCE_COUNTER STD_OFF

/** count(Dem/DemConfigSet/DemDebounceCounterBasedClass/DemDebounceCounterStorage on) */
#define DEM_DEBOUNCE_COUNTER_STORAGE_NUM 0u

/******************* Dtr *************************/
/** count(Dem/DemConfigSet/DemDtrs/DemDtr) Range: 0~65535 */
#define DEM_DTR_NUMBER 0u

/******************* Event Parameter *************************/
/** count(Dem/DemConfigSet/DemEventParameter/DemEventEcucPartitionRef) Range: 1~255 */
#define DEM_EVENT_PARTITION_NUMBER 1u

/** count(Dem/DemConfigSet/DemEventParameter) Range: 1~65535 */
/** include. event #0 */
#define DEM_EVENT_NUMBER 2u

/** count(have Dem/DemConfigSet/DemEventParameter/DemCallbackClearEventAllowed) Range: 0~65535 */
#define DEM_EVENT_CALLBACK_CLEAR_ALLOWED 0u

/** count(have Dem/DemConfigSet/DemEventParameter/DemCallbackEventDataChanged) Range: 0~65535 */
#define DEM_EVENT_CALLBACK_DATA_CHANGED 0u

/** count(Dem/DemConfigSet/DemEventParameter/DemCallbackEventUdsStatusChanged) Range: 0~65535 */
#define DEM_EVENT_CALLBACK_EVENT_UDS_STATUS_CHANGED 0u

/** count(Dem/DemConfigSet/DemEventParameter/DemCallbackInitMForE) Range: 0~65535 */
#define DEM_EVENT_CALLBACK_INIT_MFORE 0u

/** count(Dem/DemConfigSet/DemEventParameter/DemCallbackMonitorStatusChanged) Range: 0~65535 */
#define DEM_EVENT_CALLBACK_MONITOR_STATUS_CHANGED 0u

/** count(Dem/DemConfigSet/DemEventParameter/DemDebounceAlgorithmClass/DemDebounceMonitorInternal) Range: 0~65535 */
#define DEM_EVENT_CALLBACK_GET_FDC 0u

/** STD_ON: have Dem/DemConfigSet/DemEventParameter/DemCausalityDelayTime on , STD_OFF: else */
#define DEM_EVENT_CAUUSALITY_DELAY STD_OFF

/** STD_ON: have Dem/DemConfigSet/DemEventParameter/DemComponentPriority , STD_OFF: else */
#define DEM_EVENT_COMPONENT_PRIORITY STD_OFF

/** STD_ON: have Dem/DemConfigSet/DemEventParameter/DemEventConfirmationThresholdCounterAdaptable on, STD_OFF: else */
#define DEM_EVENT_CONFIRMATION_THRESHOLD_ADAPTABLE STD_OFF

/** STD_ON: have Dem/DemConfigSet/DemEventParameter/DemEventReportingType select STANDARD_REPORTING,
 * STD_OFF: else */
#define DEM_EVENT_REPORTING_STANDARD STD_ON

/** STD_ON: have Dem/DemConfigSet/DemEventParameter/DemEventReportingType select STANDARD_REPORTING_WITH_MONITOR_DATA,
 * STD_OFF: else */
#define DEM_EVENT_REPORTING_WITH_MONITOR STD_OFF

/** STD_ON: have Dem/DemConfigSet/DemEventParameter/DemIndicatorAttribute/DemIndicatorHealingCycleCounterThreshold > 0,
 * STD_OFF: else */
#define DEM_EVENT_HEALING_COUNTER STD_OFF

/** STD_ON: have Dem/DemConfigSet/DemEventParameter/DemIndicatorAttribute/DemIndicatorFailureCycleCounterThreshold > 1 or
 * have Dem/DemConfigSet/DemEventParameter/DemEventConfirmationThreshold > 1 or
 * have Dem/DemConfigSet/DemEventParameter/DemEventConfirmationThresholdCounterAdaptable select, STD_OFF: else */
#define DEM_EVENT_FAILURE_COUNTER STD_OFF

/******************* Multi Event Triggering *************************/
/** count(Dem/DemConfigSet/DemMultiEventTriggering) Range: 1~65535 */
#define DEM_MULTI_EVENT_NUMBER 0u

/******************* Obd DTC *************************/
/** count(Dem/DemConfigSet/DemObdDTC) Range: 0~65535 */
#define DEM_OBD_DTC_NUMBER 0u

#define DEM_OBD_DTC_INVALID_VALUE 0u /**< invalid value of obd dtc >*/

#define DEM_J1939_DTC_INVALID_VALUE 0u /**< invalid value of j1939 dtc >*/

/******************* Pid Class *************************/
/** count(Dem/DemConfigSet/DemObdDTC) Range: 1~255 */
#define DEM_PID_CLASS_NUMBER     0u

#define DEM_PID_CLASS_TOTAL_SIZE 0u /**< all PID data length >*/

/*******************************************************************************
**                      Dem Cfg Types                                         **
*******************************************************************************/


/******************* Client *************************/

/**
 * @brief This container contains possible clients that are using the Dem APIs.
 */
typedef struct
{
    uint8 EventMemorySetRef; /**< References to the client assigned event memory container that contains client specific settings and event
     * memories. @range 0..255u */
    uint8 DcmClientId; /**< Dcm ClientId @range 0..255u */
    Dem_EventIdType FirstEvent; /**< First event id belonging to the client @range 0..65535u */
    Dem_EventIdType LastEvent;  /**< Last event Id belonging to the client @range 0..65535u */
} Dem_ClientType;





/******************* Nv Ram Block Id *************************/
/**
 * @brief the total type size of DemNvRamBlockId
 */
typedef uint8 Dem_NvBlockNumType;

/******************* Event Memory Set *************************/




/**
 * @brief the total type size of DemMaxNumberEventEntryPrimary and DemMaxNumberEventEntryUserDefined
 */
typedef uint8 Dem_EventEntryNumType;

 
/**
 * @brief the total type size of DemDTCRef
 */
typedef uint8 Dem_DTCRefNumType;

/**
 * @brief the total type size of User Defined Memory and Primary Memory
 */
typedef uint8 Dem_MemoryNumType;
            
/**
 * @brief the total type size of block length
 */
typedef uint8 Dem_MemoryDataSizeType;

/**
 * @brief the Pointer type of block
 */
typedef uint8* Dem_MemoryDataPtrType;


/**
 * @brief This configuration switch defines, whether support for event displacement is enabled or not, and which
 * displacement strategy is followed.
 */
typedef enum
{
    DEM_DISPLACEMENT_FULL, /**< Event memory entry displacement is enabled, by consideration of priority active/passive
                            * status, and occurrence. @range 0u
                            */
    DEM_DISPLACEMENT_NONE, /**< Event memory entry displacement is disabled. @range 1u */
    DEM_DISPLACEMENT_PRIO_OCC, /**< Event memory entry displacement is enabled, by consideration of priority and
                                * occurrence (but without active/passive status). @range 2u */
} Dem_EventDisplacementStrategyType;

/** Enumeration labels defining storage triggers */
#define DEM_TRIGGER_NONE                (0u)  /**< No trigger */
#define DEM_TRIGGER_FDC                 (1u)  /**< Fault detection counter threshold */
#define DEM_TRIGGER_TESTFAILED          (2u)  /**< TestFailed 0->1 transition */
#define DEM_TRIGGER_TESTPASSED          (4u)  /**< TestFailed 1->0 transition */
#define DEM_TRIGGER_TESTFAILEDTHISCYCLE (8u)  /**< TestFailedthisOperatingCycle 0->1 transition */
#define DEM_TRIGGER_PENDING             (16u) /**< PendingDTC 0->1 transition */
#define DEM_TRIGGER_CONFIRMED           (32u) /**< ConfirmedDTC 0->1 transition */
#define DEM_TRIGGER_INDICATOR           (64u) /**< WarningIndicatorRequested 0->1 transition */
#define DEM_TRIGGER_EVERYTESTFAILED     (128u) /**< every time TestFailed */
 /** storage trigger */
#define DEM_STORAGE_TRIGGER             (DEM_ENTRY_TRIGGER_ON_TEST_FAILED | DEM_ENTRY_TRIGGER_ON_CONFIRMED)

/**
 * @brief This configuration switch defines the consideration of the fault confirmation process for the occurrence counter.
 * For OBD and mixed systems (OBD/non OBD, refer to Dem OBDSupport) configuration switch shall always set to
 * DEM_PROCESS_OCCCTR_TF.
 */
typedef enum
{
    DEM_PROCESS_OCCCTR_CDTC, /**< the occurrence counter is triggered by the Test Failed bit if the fault confirmation
                              * was successful (ConfirmedDTC bit is set) @range 0u */
    DEM_PROCESS_OCCCTR_TF,   /**< the occurrence counter is only triggered by the TestFailed bit (and the fault
                              * confirmation is not considered)   This parameter is mandatory in case of J1939. @range 1u */
    DEM_PROCESS_OCCCTR_TFTOC,   /**< the occurrence counter is triggered by the TestFailedThisOperationCycle bit if the
                                * fault TestFailedThisOperationCycle was successful (TestFailedThisOperationCycle bit is set) @range 2u */
} Dem_OccurrenceCounterProcessingType;

/**
 * @brief This parameter defines the type of assigning freeze frame record numbers for event-specific freeze frame records.
 */
typedef enum
{
    DEM_FF_RECNUM_CALCULATED, /**< freeze frame records will be numbered consecutive starting by 1 in their
                                 chronological order @range 0u */
    DEM_FF_RECNUM_CONFIGURED, /**< freeze frame records will be numbered based on the given configuration in their
                                 chronological order @range 1u */
} Dem_TypeOfFreezeFrameRecordNumerationType;

/**
 * @brief This container contains the primary event memory specific parameters of the Dem module.
 */
typedef struct
{
    uint8 DtcStatusAvailabilityMask; /**< Mask for the supported DTC status bits by the Dem. This mask is used in the positive response of UDS service
     * 0x19. @range 0..255 */
    Dem_EventDisplacementStrategyType EventDisplacementStrategy; /**< This configuration switch defines, whether support for event displacement is enabled or not, and which
     * displacement strategy is followed. @range 0u..2u */
    uint8 EventMemoryEntryStorageTrigger; /**< Configures the primary trigger to allocate an event memory entry @range 0..255 */
} Dem_PrimaryMemoryType;

/**
 * @brief Event Memory management data
 */
typedef struct
{
    uint8 MaxSize;                       /**< Maximum number of memory entries for the memory @range 0..255 */
    Dem_MemoryNumType MemIndex;          /**< Handle to index the event memory @range 0..255 */
    Dem_NvBlockNumType FirstMemoryIndex; /**< First memory block index belonging to the memory @range 0..255 */
    uint16 MemoryId;                     /**< Handle to identify the event memory @range 0..65535 */
    Dem_EventIdType FirstEvent;          /**< First event id belonging to the memory @range 0..65535 */
    Dem_EventIdType LastEvent;           /**< Last event Id belonging to the memory @range 0..65535 */
    Dem_NvBlockNumType* const ChronoPtr; /**< Pointer to the chronology list of the event memory @range NA */
    uint8* const SizePtr;                /**< Pointer to the current size variable @range NA */
} Dem_MemStateInfoType;

/**
 * @brief pointer type for Event Memory management data
 */
typedef Dem_MemStateInfoType* Dem_MemStateInfoPtrType;

/**
 * @brief pointer const type for Event Memory management data
 */
typedef Dem_MemStateInfoType const* const Dem_MemStateInfoConstPtrType;

/**
 * @brief This container is a collection of referenced event memories and related information for a Dem client.
 */
typedef struct
{
    uint8 TypeOfDTCSupported; /**< This parameter defines the format returned by Dem_GetTranslationType and does not relate to/influence the
     * supported Dem functionality. @range 0..255 */
    Dem_MemoryNumType PrimaryMemoryRef; /**< This container contains the primary event memory specific parameters of the Dem module. @range 0..255 */
} Dem_EventMemorySetType;


/******************* Extended Data Class *************************/
/**
 * @brief the total type size of Extended Data Record Class Ref
 */
typedef uint8 Dem_EDRecordRefNumType;









/******************* DTC *************************/
/**
 * @brief the total type size of DemDTCAttributesRef
 */
typedef uint8 Dem_DTCAttRefNumType;



/**
 * @brief DTC Class according to ISO 14229-1 [2013 version]. This parameter depends on the automotive manufacturer. If it is
 * not configured, the value is marked as unclassified. If this parameter is configured for no DTC, the Dem provides
 * no DTC WWHOBD class information.
 */
typedef enum
{
    DEM_DTC_WWHOBD_CLASS_A,       /**< Class A @range 0u */
    DEM_DTC_WWHOBD_CLASS_B1,      /**< Class B1 @range 1u */
    DEM_DTC_WWHOBD_CLASS_B2,      /**< Class B2 @range 2u */
    DEM_DTC_WWHOBD_CLASS_C,       /**< Class C @range 3u */
    DEM_DTC_WWHOBD_CLASS_NOCLASS, /**< No Class information @range 4u */
} Dem_WWHOBDDTCClassType;

/**
 * @brief This container contains the configuration (parameters) for DemUdsDTC.
 */
typedef struct
{
    boolean NvStorageStrategy; /**< Nv Storage Strategy @range 0..1 */
    uint8 DTCFunctionalUnit; /**< DTCFuncitonalUnit is a 1-byte value which identifies the corresponding basic vehicle / system function which
     * reports the DTC.
     * This parameter is necessary for the report of severity information. If this parameter is configured for no DTC,
     * the Dem provides no DTC functional unit information. @range 0..255 */
    Dem_DTCSeverityType DTCSeverity; /**< DTC severity according to ISO 14229-1. This parameter depends on the automotive manufacturer.
     * If it is not configured, the value is counted as no severity. If this parameter is configured for no DTC, the
     * Dem provides no DTC severity information. @range 0..255 */
    Dem_WWHOBDDTCClassType WWHOBDDTCClass; /**< WWH-OBD DTC Class @range 0..255 */
} Dem_DTCType;


/******************* DTC Attributes *************************/


/**
 * @brief the total type size of DemFreezeFrameRecNumClassRef
 */
typedef uint8 Dem_FFRNRefNumType;


/**
 * @brief Significance of the event, which indicates additional information concerning fault classification and
 * resolution. It can be mapped as Dem-internal data element. It shall be configured, if it is a part of event
 * related data.
 */
typedef enum
{
    DEM_EVENT_SIGNIFICANCE_FAULT,      /**< failure, which affects the component/ECU itself @range 0u */
    DEM_EVENT_SIGNIFICANCE_OCCURRENCE, /**< issue, which indicates additional information concerning insufficient system
                                          behavior @range 1u */
} Dem_DTCSignificanceType;

/**
 * @brief This container contains the configuration (parameters) for DemDTCAttributes.
 */
typedef struct
{
    boolean MemoryPrimarySelect; /**< These references define Memory Primary Select. @range 0..1 */
    uint8 DTCPriority; /**< Priority of the event/dtc, in view of full event memory. A lower value means higher priority. @range 0..255 */
    Dem_DTCSignificanceType DTCSignificance; /**< Significance of the event, which indicates additional information concerning fault classification and resolution.
     * It can be mapped as Dem-internal data element. It shall be configured, if it is a part of event related data. @range 0u..1u */
    Dem_FFRNRefNumType FreezeFrameRecNumClassRef; /**< This parameter defines the list of dedicated freeze frame record numbers associated with the diagnostic event.
     * These record numbers are assigned to the freeze frame records (instead of calculated record numbers).
     * This parameter is only required for configured record numeration (refer to DemTypeOf
     * FreezeFrameRecordNumeration). @range 0..255 */
    Dem_MemoryNumType MemoryDestinationRef; /**< These references define Memory Destination. @range 0..255 */
} Dem_DTCAttributesType;

/********************** Debounce Class*****************************/
/** have DemDebounceCounterBased */
#define DEM_EVENT_COUNTER_DEBOUNCCE 1u
/** have low res timer DemDebounceTimeBased */
#define DEM_LR_TIME_DEBOUNCCE    STD_OFF

#define DEM_DEBOUNCE_BEHAVIOR_MASK  0x1u /**< Debounce Behavior Mask */
#define DEM_DEBOUNCE_STORAGE_MASK   0x2u /**< Debounce Storage Mask */
#define DEM_DEBOUNCE_JUMPDOWN_MASK  0x4u /**< Debounce JumpDown Mask */
#define DEM_DEBOUNCE_JUMPUP_MASK    0x8u /**< Debounce JumpUp Mask */
#define DEM_DEBOUNCE_TYPE_MASK      0x30u /**< Debounce Type Mask */
#define DEM_DEBOUNCE_TIME_LR_MASK   0x40u /**< Debounce low res timer Mask */


/**
 * @brief This container contains the configuration of Debounce Class.
 */
typedef struct
{
    /** bit0: DemDebounceBehavior; 0: DEM_DEBOUNCE_FREEZE, 1: DEM_DEBOUNCE_RESET
     * bit1: DemDebounceCounterStorage; 0: FALSE, 1: TRUE
     * bit2: DemDebounceCounterJumpDown; 0: FALSE, 1: TRUE
     * bit3: DemDebounceCounterJumpUp; 0: FALSE, 1: TRUE
     * bit4-5: DemDebounceAlgorithmClass; 0: DEM_EVENT_MONOTOR_DEBOUNCCE, 1: DEM_EVENT_COUNTER_DEBOUNCCE, 2:
     * DEM_EVENT_TIME_DEBOUNCCE */
    uint8 DebounceFlag; /**< This parameter defines how the event debounce algorithm will behave, if a related enable condition is not
     * fulfilled or ControlDTCSetting of the related event is disabled. @range 0..255 */
    sint16 DebounceFailedThreshold; /**< Defines the value of the internal debounce, which indicates the failed status. @range 0..255 */
    sint16 DebouncePassedThreshold; /**< Defines the value of the internal debounce, which indicates the passed status. @range 0..255 */
    sint16 DebounceCounterDecrementStepSize; /**< Defines the step size for decrementation of the internal debounce counter (PREPASSED). @range 0..255 */
    sint16 DebounceCounterIncrementStepSize; /**< Defines the step size for incrementation of the internal debounce counter (PREFAILED). @range 0..255 */
} Dem_DebounceBasedClassType;


/******************* Event Parameter *************************/
#define Dem_EventKindPos              0x1u  /**< Event Kind Pos */
#define Dem_EventReportingTypePos     0x2u  /**< Event Reporting Type Pos */
#define Dem_EventFFPrestorageInNvmPos 0x4u  /**< Event FF Prestorage In Nvm Pos */
#define Dem_EventCDThrCounterAdaptPos 0x8u  /**< Event CD Thr Counter Adapt Pos */
#define Dem_EventAllHealingEqual0     0x10u /**< Event All Healing Equal 0 */
#define Dem_EventHaveSpecialIndicator 0x20u /**< Event Have Special Indicator */


/**
 * @brief the total type size of EventClientRef
 */
typedef uint8 Dem_EventClientRefType;







/**
 * @brief Gets the current fault detection counter value. There is one c-callback per event using monitor-internal
 * debouncing, if no port interface is provided by the Dem.
 */
typedef Std_ReturnType (*DemGetFaultDetectionCounterType)(sint8* FaultDetectionCounter);


/**
 * @brief the total type size of DemDebounceClass
 */
typedef uint8 Dem_DebounceAlgorithmNumType;



/**
 * @brief This container contains the configuration (parameters) for events.
 */
typedef struct
{
    uint8 EventCfgFlag;
    uint8 OperationCycleRef; /**< Kind of operation cycle for the event (e.g. power cycle, driving cycle, ...) @range 0..255 */
    Dem_DTCRefNumType DTCRef; /**< Reference to the DTC. @range 0..255 */
    Dem_DebounceAlgorithmNumType DebounceAlgorithmRef; /**< Debounce algorithm class: counter based, time based, or monitor internal. @range 0..255 */
    Dem_DTCAttRefNumType DTCAttributesRef; /**< DTC Attributes Ref @range 0..255 */
    Dem_EventClientRefType ClientStartRef; /**< Client Start Ref @range 0..255 */
    Dem_EventClientRefType ClientEndRef; /**< Client End Ref @range 0..255 */
} Dem_EventParameterType;




/* ============================================ external data definitions =========================================== */
/**
 * @brief Event status processing data type
 */
typedef struct
{
    boolean DataModified;                 /**< processing has modified enviromental data @range 0u..1u */
    uint8 Eventtriggers;                  /**< status change triggers resulting from event status changes @range 0u..255u */
    Dem_UdsStatusByteType OldEventStatus; /**< event status before processing @range 0u..255u */
    Dem_UdsStatusByteType NewEventStatus; /**< event status after processing @range 0u..255u */
    Dem_EventIdType EventId;              /**< Processed Event @range 0u..255u */
} Dem_EventContextType;

/**
 * @brief DTC status processing data type
 */
typedef struct
{
    uint8 Dtctriggers;                  /**< status change triggers resulting from DTC status changes @range 0u..255u */
    Dem_UdsStatusByteType OldDtcStatus; /**< DTC status before processing @range 0u..255u */
    Dem_UdsStatusByteType NewDtcStatus; /**< DTC status after processing @range 0u..255u */
    Dem_EventIdType EventId; /**< Handle of processed DTC @range 0u..255u */
} Dem_DTCContextType;

/* PRQA S 0635 ++ */ /* VL_Dem_0635 */
/**
 * @brief Structure used as argument type for Dem_CombinedEvent functions
 */
typedef struct
{
    /** Function arguments common to all functions */
    Dem_UdsStatusByteType OldDtcStatus : 8; /**< DtcStatus before the call @range 0u..255u */
    Dem_UdsStatusByteType NewDtcStatus : 8; /**< DtcStatus after the call @range 0u..255u */
} Dem_CombinedArgType;

/**
 * @brief Reference to argument struct for Dem_CombinedEvent functions
 */
typedef Dem_CombinedArgType* Dem_CombinedArgPtrType;

/**
 * @brief Function pointer type for Dem_DTC_ForEachCombinedEvent functions
 */
typedef void (*Dem_UtilCombinedFuncType)(Dem_EventIdType EventId, Dem_CombinedArgPtrType ArgPtr);

/**
 * @brief The Queue status.
 */
typedef uint8 Dem_EventQueueStatusType;

/**
 * @brief The debounce data of a monitor.
 */
typedef uint16 Dem_DebounceDataType;

/**
 * @brief The debounce Status of a monitor.
 */
typedef uint8 Dem_DebounceStatusType;

/**
 * @brief Type accessible atomically by the target platform
 */
typedef uint32 Dem_ComProcessorWordType;

/**
 * @brief Handle of Satellite instances. Valid range [0 .. Dem_GetNumOfSatellite().
 */
typedef uint8 Dem_SatelliteIdType;

/**
 * @brief Handle of Monitors instances. Valid range [0 .. Dem_GetEventCountOfSatellite(SatelliteId).
 */
typedef uint8 Dem_MonitorIdType;

/* PRQA S 0750++ */ /* VL_Dem_0750 */
/**
 * @brief The data of a satellite
 */
typedef struct
{
#if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
    uint8 InitStatus : 8;      /**< Initialization status @range 0u..255u */
    uint8 SatelliteStatus : 8; /**< Status flags @range 0u..255u */
    uint16 Reserved : 16;           /**< Reserved @range 0u..65535u */
#else
    uint16 Reserved : 16;           /**< Reserved @range 0u..65535u */
    uint8 SatelliteStatus : 8; /**< Status flags @range 0u..255u */
    uint8 InitStatus : 8;      /**< Initialization status @range 0u..255u */
#endif
} Dem_SatelliteInfoTypes;

/**
 * @brief Converts between a Dem_SatelliteInfo_Type and a raw data type.
 */
typedef union
{
    Dem_SatelliteInfoTypes Data;  /**< The detailed data type. @range 0u..255u */
    Dem_ComProcessorWordType Raw; /**< The raw data type intended for queue communication. @range 0u..255u */
} Dem_SatelliteInfoType;

/**
 * @brief The data of a single satellite element related to an event for synchronisation with Dem master.
 */
typedef struct
{
#if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
    Dem_EventQueueStatusType QueueStatus : 8; /**< The queue status of this element. @range 0u..255u */
    uint8 SharedStatus : 8;                   /**< packed DebounceStatus and MonitorStatus. @range 0u..255u */
    Dem_DebounceDataType DebounceData : 16;   /**< The debounce data. @range 0u..65535u */
#else
    Dem_DebounceDataType DebounceData : 16;   /**< The debounce data. @range 0u..65535u */
    uint8 SharedStatus : 8;                   /**< packed DebounceStatus and MonitorStatus. @range 0u..255u */
    Dem_EventQueueStatusType QueueStatus : 8; /**< The queue status of this element. @range 0u..255u */
#endif
} Dem_SatelliteData_Data;

/**
 * @brief Converts between a Dem_SatelliteData_DataType and a raw data type.
 */
typedef union
{
    Dem_SatelliteData_Data Data;  /**< The detailed data type. @range 0u..255u */
    Dem_ComProcessorWordType Raw; /**< The raw data type intended for queue communication. @range 0u..255u */
} Dem_SatelliteDataType;

/**
 * @brief Extended data for an event on satellite for synchronisation with Dem master.
 */
typedef struct
{
    uint32 SharedData : 32; /**< packed triggers related to event specific operations. @range 0u..4294967295u */
} Dem_SatelliteExtendedData;
/* PRQA S 0635 -- */


/**
 * @brief type used in Dem_SatelliteCfgInfo
 */
typedef struct
{
    Dem_EventIdType EventSrartOfSatellite; /**< the start index of the monitor/event in Satellite @range 0u..65535u */
    Dem_EventIdType EventCountOfSatellite; /**< Satellite number of the monitor/event @range 0u..65535u */
    Dem_ComProcessorWordType* SatelliteStatusOfSatelliteInfo; /**< Satellite individual RAM buffer for the monitor/event status @range 0u..65535u */
    Dem_SatelliteDataType* SatelliteDataOfSatelliteInfo; /**< Satellite individual RAM buffer 1 for the monitor/event data @range 0u..65535u */
} Dem_SatelliteCfgInfoType;


/**
 * @brief type used in Dem_SatelliteInfo
 */
typedef struct
{
    Dem_SatelliteDataType SatelliteData[1]; /**< Satellite Data @range 0u..4294967295u */
    Dem_ComProcessorWordType SatelliteStatus; /**< Satellite Status @range 0..4294967295u */
} Dem_PartitionSatelliteInfoType;

/**
 * @brief Operation Cycle Id Type
 */
typedef uint8 Dem_OperationCycleIdType;



/**
 * @brief memory Entry Type
 */
typedef struct
{
    uint16 AgingCounter; /**< Aging Counter @range 0..65535u */
    uint16 EventId; /**< EventId @range 0..65535u */
    uint32 Timestamp; /**< Time stamp @range 0..4294967295u */
} Dem_EntryType;

/**
 * @brief Admin Data Type
 */
typedef struct
{
    uint8 MemoryOverflow[1]; /**< Memory Over flow @range 0..255u */
    uint16 CycleCounter[DEM_OPERATION_CYCLE_NUMBER]; /**< Cycle Counter @range 0..65535u */
    uint16 ConfigurationId; /**< Configuration Id @range 0..65535u */
} Dem_AdminDataType;

/**
 * @brief Event Status Data Type
 */
typedef struct
{
    Dem_UdsStatusByteType EventStatus[DEM_EVENT_NUMBER]; /**< Event Status @range 0..255u */
    Dem_EventIdType FirstFailedEvent[DEM_CLIENT_NUMBER]; /**< First Failed Event @range 0..65535u */
    Dem_EventIdType FirstConfirmedEvent[DEM_CLIENT_NUMBER]; /**< First Confirmed Event @range 0..65535u */
    Dem_EventIdType MostRecentFailedEvent[DEM_CLIENT_NUMBER]; /**< Most Recent Failed Event @range 0..65535u */
    Dem_EventIdType MostRecentConfmdEvent[DEM_CLIENT_NUMBER]; /**< Most Recent Confmd Event @range 0..65535u */
} Dem_EventStatusDataType;


/**
 * @brief NV commit management data type
 */
typedef struct
{
    uint8 CommitState;               /**< State of current commit @range 0..255u */
    Dem_NvBlockNumType MemoryIndex;  /**< Currently processed memory block @range 0..255u */
    Dem_NvBlockNumType PendingCount; /**< Number of pending commits @range 0..255u */
} Dem_NvmCommitDataType;

/**
 * @brief Converts between Nvm Commit Buffer Type.
 */
typedef union Dem_NvmCommitBufferTag
{
    uint8 MRaw[1]; /**< M Raw @range 0..255u */
    Dem_AdminDataType MAdmin; /**< M Admin @range NA */
    Dem_EventStatusDataType MStatus; /**< M Status @range NA */
    Dem_EntryType Entry; /**< Entry @range NA */
} Dem_NvmCommitBufferType;
/* PRQA S 0750-- */

/**
 * @brief Type to store the internal status of an event
 */
typedef uint8 Dem_EventInternalStatusType;

/**
 * @brief Iterator for extended data record types.
 */
typedef struct
{
    boolean ExtendedRecordSelected;   /**< Specifies whether a record is selected or not @range 0..1u */
    uint8 ExtendedEntryIndex;         /**< Extended entry index @range 0..255u */
    uint8 ExtendedDataNumber;         /**< The selected extended data number @range 0..255u */
    Dem_EDRecordRefNumType EDRNStart; /**< Iterator for the extended entries @range 0..255u */
    Dem_EDRecordRefNumType EDRNEnd;   /**< Iterator for the extended entries @range 0..255u */
    Dem_NvBlockNumType MemoryIndex;   /**< Memory entry handle @range 0..255u */
    Dem_EventIdType EventId;          /**< Event Id @range 0..65535u */
} Dem_ReadoutBufferEDIteratorType;

/**
 * @brief Identifies a snapshot source
 */
typedef enum
{
    Dem_ReadoutBuffer_FF_Obd,    /**< OBD snapshot @range 0u */
    Dem_ReadoutBuffer_FF_Srec,   /**< Snapshot record source @range 1u */
    Dem_ReadoutBuffer_FF_Invalid /**< Not initialize or end of list identifier @range 2u */
} Dem_ReadoutBuffer_FFType;

/**
 * @brief Iterator for snapshot record entry types.
 */
typedef struct
{
    uint8 FFEntryIndex;             /**< snapshot entry index @range 0..255u */
    Dem_NvBlockNumType MemoryIndex; /**< memory entry handle @range 0..255u */
    Dem_FFRNRefNumType FFRNStart;   /**< Iterator for the different sources @range 0..255u */
    Dem_FFRNRefNumType FFRNEnd;     /**< Iterator for the different sources @range 0..255u */
    Dem_EventIdType EventId;        /**< event Id @range 0..65535u */
} Dem_FFEntryIterType;

/**
 * @brief Iterator for snapshot record types.
 */
typedef struct
{
    boolean SnapshotSelected;        /**< Specifies whether a snapshot is selected or not @range 0..1u */
    Dem_ReadoutBuffer_FFType Source; /**< The source of the snapshot @range NA */
    uint8 RecordNumber;              /**< The selected extended data number @range 0..255u */
    Dem_FFEntryIterType FFEntryIter; /**< Iterator for the snapshot entries @range NA */
} Dem_ReadoutBufferFFIteratorType;

/**
 * @brief Buffer for Event Data, used after calling Dem_DisableDTCRecordUpdate().
 */
typedef struct
{
    uint8 State;                                      /**< Internal state of this buffer @range 0..255u */
    Dem_MemoryNumType MemIndex;                       /**< MemoryIndex of this Data record @range 0..255u */
    Dem_ReadoutBufferEDIteratorType ExtendedIterator; /**< Internal state for reporting ExtendedData record(s) @range NA */
    Dem_ReadoutBufferFFIteratorType FFIterator;       /**< Internal state for reporting SnapshotData record(s) @range NA */
    Dem_EventIdType EventId;                          /**< EventId of this Data record @range 0..65535u */
    Dem_EntryType Data;                               /**< Backed event data @range NA */
} Dem_ReadoutBufferEntryType;

/* =========================================== external data declarations =========================================== */


/******************* Client *************************/
/**
 * @brief Dem/DemGeneral/DemClient
 * @range NA
 */
#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
extern const Dem_ClientType Dem_Client[DEM_CLIENT_NUMBER];
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

/**
 * @brief Client Setting status
 * @range NA
 */
#define DEM_START_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
extern uint8 Dem_ClientSetting[DEM_DCM_CLIENT_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"

/**
 * @brief Readout Buffer
 * @range NA
 */
#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
extern Dem_ReadoutBufferEntryType Dem_ReadoutBuffer[DEM_DCM_CLIENT_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"





/******************* Nv Ram Block Id *************************/
/**
 * @brief Nv Ram Block Id
 * @range NA
 */
#define DEM_START_SEC_CONFIG_DATA_16
#include "Dem_MemMap.h"
extern const NvM_BlockIdType Dem_NvRamBlockId[DEM_NV_RAM_BLOCK_NUMBER];
#define DEM_STOP_SEC_CONFIG_DATA_16
#include "Dem_MemMap.h"

/**
 * @brief Memory Status
 * @range NA
 */
#define DEM_START_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
extern uint8 Dem_MemoryStatus[DEM_NV_RAM_BLOCK_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
/**
 * @brief Management data needed for immediate NV updates
 * @range NA
 */
#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
extern Dem_NvmCommitDataType Dem_NvmCommitData;
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"

/**
 * @brief Buffer for immediate NV updates
 * @range NA
 */
#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
extern Dem_NvmCommitBufferType Dem_NvmCommitBuffer;/* PRQA S 0759 */ /* VL_Dem_0759 */
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"

/**
 * @brief Pointer to the memory data
 * @range NA
 */
#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
extern const Dem_MemoryDataPtrType Dem_MemoryDataPtr[DEM_NV_RAM_BLOCK_NUMBER];
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

/**
 * @brief Size of the memory data
 * @range NA
 */
#define DEM_START_SEC_CONFIG_DATA_8
#include "Dem_MemMap.h"
extern const Dem_MemoryDataSizeType Dem_MemoryDataSize[DEM_NV_RAM_BLOCK_NUMBER];
#define DEM_STOP_SEC_CONFIG_DATA_8
#include "Dem_MemMap.h"

/******************* Event Memory Set *************************/



/**
 * @brief Contains the event memory.
 * @range NA
 */
#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
extern Dem_EntryType Dem_MemoryEntry[1];
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"

/**
 * @brief Contains the event status data.
 * @range NA
 */
#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
extern Dem_EventStatusDataType Dem_EventStatusData;
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"

/**
 * @brief Contains the admin data.
 * @range NA
 */
#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
extern Dem_AdminDataType Dem_AdminData;
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"

/**
 * @brief Contains the memory status.
 * @range NA
 */
#define DEM_START_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
extern uint8 Dem_MemoryEntryStatus[DEM_NV_RAM_BLOCK_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"

/**
 * @brief Contains the memory counter and memory state information.
 * @range NA
 */
#define DEM_START_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
extern Dem_NvBlockNumType Dem_MemCounter[DEM_TOTAL_MEMORY_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"

/**
 * @brief Contains the memory state information.
 * @range NA
 */
#define DEM_START_SEC_VAR_INIT_UNSPECIFIED
#include "Dem_MemMap.h"
extern Dem_MemStateInfoType Dem_MemStateInfo[DEM_TOTAL_MEMORY_NUMBER];
#define DEM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Dem_MemMap.h"

/**
 * @brief Contains the primary memory.
 * @range NA
 */
#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
extern const Dem_PrimaryMemoryType Dem_Memory[DEM_TOTAL_MEMORY_NUMBER];
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

/**
 * @brief This container is a collection of referenced event memories and related information for a Dem client.
 * @range NA
 */
#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
extern const Dem_EventMemorySetType Dem_EventMemorySet[DEM_EVENT_MEMORY_SET_NUMBER];
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

 



/******************* Operation Cycle *************************/
/**
 * @brief Contains the restart flag of the operation cycle.
 * @range NA
 */
#define DEM_START_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
extern uint8 Dem_OperationCycleRestartFlag[DEM_SIZE_OPERATION_CYCLE_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"






/******************* DTC *************************/
/**
 * @brief This container contains the configuration (parameters) for DemUdsDTC.
 * @range NA
 */
#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
extern const Dem_DTCType Dem_DTC[DEM_DTC_NUMBER];
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"


/******************* DTC Attributes *************************/
/**
 * @brief This container contains the configuration (parameters) for DemDTCAttributes.
 * @range NA
 */
#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
extern const Dem_DTCAttributesType Dem_DTCAttributes[DEM_DTC_ATTRIBUTES_NUMBER];
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

/******************* Debounce Class *************************/

/**
 * @brief This container contains the configuration of Debounce Based Class.
 * @range NA
 */
/**
 * @brief This container contains the configuration of Debounce Based Class.
 * @range NA
 */
#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
extern const Dem_DebounceBasedClassType Dem_DebounceBasedClass[1];
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

/******************* Event Parameter *************************/







/**
 * @brief This container contains the configuration (parameters) for events.
 * @range NA
 */
#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
extern const Dem_EventParameterType Dem_Event[DEM_EVENT_NUMBER];
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"





/**
 * @brief This container contains the event specific configuration of Satellite Events.
 * @range NA
 */
#define DEM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"
extern const Dem_SatelliteCfgInfoType Dem_SatelliteCfgInfo[1];
#define DEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dem_MemMap.h"

/**
 * @brief This container contains the event specific configuration of Satellite Events.
 * @range NA
 */
#define DEM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"
extern Dem_PartitionSatelliteInfoType Dem_PartitionSatelliteInfo;
#define DEM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Dem_MemMap.h"



/**
 * @brief This container contains the event specific configuration of Event Internal Status.
 * @range NA
 */
#define DEM_START_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"
extern Dem_EventInternalStatusType Dem_EventInternalStatus[DEM_EVENT_NUMBER];
#define DEM_STOP_SEC_VAR_CLEARED_8
#include "Dem_MemMap.h"


/* ===================================================== macros ===================================================== */
/** Magic constant derived from the configuration parameters. Each value change is evidence to incompatible NV stored
 * data and triggers a re-initialization of the NV data. */
#define Dem_GetConfigurationId() 0x4231u


#define Dem_GetSizeOfClient()     DEM_CLIENT_NUMBER /**< number of DemClient */
#define Dem_GetClient()           Dem_Client        /**< pointer to Dem_Client */
#define Dem_GetClientSetting() Dem_ClientSetting /**< pointer to Dem_ClientSetting */
#define Dem_GetReadoutBuffer() Dem_ReadoutBuffer /**< pointer to Dem_ReadoutBuffer */






#define Dem_GetMemoryEntry()         Dem_MemoryEntry       /**< pointer to Dem_MemoryEntry */
#define Dem_GetEventStatusData()     Dem_EventStatusData /**< pointer to Dem_EventStatusData */
#define Dem_GetAdminData()           Dem_AdminData       /**< pointer to Dem_AdminData */

#define Dem_GetMemoryEntryStatus()   Dem_MemoryEntryStatus /**< pointer to Dem_MemoryEntryStatus */

#define Dem_GetMemCounter()          Dem_MemCounter   /**< pointer to Dem_MemCounter */
#define Dem_GetMemStateInfo()        Dem_MemStateInfo /**< pointer to Dem_MemStateInfo */
#define Dem_GetMemory()              Dem_Memory       /**< pointer to Dem_Memory */

#define Dem_GetNvRamBlockId() Dem_NvRamBlockId /**< pointer to Dem_NvRamBlockId */
#define Dem_GetMemoryStatus() Dem_MemoryStatus /**< pointer to Dem_MemoryStatus */
#define Dem_GetNvmCommitData()  Dem_NvmCommitData /**< pointer to Dem_NvmCommitData */

#define Dem_GetEventMemorySet() Dem_EventMemorySet /**< pointer to Dem_EventMemorySet */

 



#define Dem_GetOCRestartFlag()          Dem_OperationCycleRestartFlag /**< pointer to Dem_OperationCycleRestartFlag */





#define Dem_GetDTCPtr()    Dem_DTC       /**< pointer to Dem_DTC */

#define Dem_GetDTCAttributes() Dem_DTCAttributes /**< pointer to Dem_DTCAttributes */


#define Dem_GetDebounceBasedClass() Dem_DebounceBasedClass /**< pointer to Dem_DebounceBasedClass */


#define Dem_GetEvent()         Dem_Event              /**< pointer to Dem_Event */





#define Dem_GetSatelliteCfgInfo() Dem_SatelliteCfgInfo /**< pointer to Dem_SatelliteCfgInfo */

/** pointer to Dem_SatelliteInfo */
#define Dem_GetPartitionSatelliteInfo() Dem_PartitionSatelliteInfo



/************************************************/
#define Dem_GetDTCStatusFnc(Index) NULL_PTR /**< Get DTC Status Fnc */

#define Dem_GetFirstEventOfClient(Index) Dem_GetClient()[Index].FirstEvent /**< Get First Event Of Client */
#define Dem_GetLastEventOfClient(Index)  Dem_GetClient()[Index].LastEvent /**< Get Last Event Of Client */
#define Dem_GetMemorySetRefOfClient(Index)  Dem_GetClient()[Index].EventMemorySetRef /**< Get Memory Set Ref Of Client */
#define Dem_GetCallbackStartOfClient(Index) 0u /**< Get Callback Start Of Client */
#define Dem_GetCallbackEndOfClient(Index)   0u /**< Get Callback End Of Client */
#define Dem_GetDcmClientIdOfClient(Index) Dem_GetClient()[Index].DcmClientId /**< Get Dcm Client Id Of Client */
#define Dem_GetJ1939DcmClientIdOfClient(Index) DEM_CLIENT_NUMBER    /**< Get J1939 Dcm Client Id Of Client */






#define Dem_GetDtcStatusMaskOfMemory(Index)  Dem_GetMemory()[Index].DtcStatusAvailabilityMask /**< Get Dtc Status Mask Of Memory */
#define Dem_GetDisplacementOfMemory(Index)   Dem_GetMemory()[Index].EventDisplacementStrategy /**< Get Displacement Of Memory */
#define Dem_GetStorageTriggerOfMemory(Index) Dem_GetMemory()[Index].EventMemoryEntryStorageTrigger /**< Get Storage Trigger Of Memory */
#define Dem_GetFFRecordOfMemory(Index) DEM_FF_RECNUM_CONFIGURED /**< Get FF Record Of Memory */

#define Dem_GetNvBlockRef(Index) Dem_GetNvRamBlockId()[Index]   /**< Get Nv Block Ref */

#define Dem_GetPermanentNumOfMemSet(Index)   0u /**< Get Permanent Num Of Mem Set */
#define Dem_GetPermanentStartOfMemSet(Index) 0u /**< Get Permanent Start Of Mem Set */
#define Dem_GetDtcTypeOfMemSet(Index)        Dem_GetEventMemorySet()[Index].TypeOfDTCSupported /**< Get Dtc Type Of Mem Set */
#define Dem_GetPrimaryRefOfMemSet(Index) Dem_GetEventMemorySet()[Index].PrimaryMemoryRef /**< Get Primary Ref Of Mem Set */

 







#define Dem_GetFUOfDTC(Index)          Dem_GetDTCPtr()[Index].DTCFunctionalUnit /**< Get FU Of DTC */
#define Dem_GetCfgSeverityOfDTC(Index) Dem_GetDTCPtr()[Index].DTCSeverity /**< Get Cfg Severity Of DTC */
#define Dem_GetStorageOfDTC(Index)     Dem_GetDTCPtr()[Index].NvStorageStrategy /**< Get Storage Of DTC */
#define Dem_GetCLASSOfDTC(Index)       Dem_GetDTCPtr()[Index].WWHOBDDTCClass /**< Get CLASS Of DTC */


#define Dem_GetPriorityOfDTCAttr(Index)    Dem_GetDTCAttributes()[Index].DTCPriority /**< Get Priority Of DTCAttr */
#define Dem_GetSignificanceOfDTCAttr(Index) Dem_GetDTCAttributes()[Index].DTCSignificance /**< Get Significance Of DTCAttr */
#define Dem_GetFFRNRefOfDTCAttr(Index) Dem_GetDTCAttributes()[Index].FreezeFrameRecNumClassRef /**< Get FFRN Ref Of DTCAttr */
#define Dem_GetMemRefOfDTCAttr(Index)     Dem_GetDTCAttributes()[Index].MemoryDestinationRef /**< Get Mem Ref Of DTCAttr */
#define Dem_GetMemSelectOfDTCAttr(Index)  Dem_GetDTCAttributes()[Index].MemoryPrimarySelect     /**< Get Mem Select Of DTCAttr */

#define Dem_GetFdcThrOfDB(Index)    Dem_GetDebounceBasedClass()[Index].DebounceFailedThreshold /**< Get FDC Thr Of DB */
#define Dem_GetFailedThrOfDB(Index) Dem_GetDebounceBasedClass()[Index].DebounceFailedThreshold /**< Get Failed Thr Of DB */
#define Dem_GetPassedThrOfDB(Index) Dem_GetDebounceBasedClass()[Index].DebouncePassedThreshold /**< Get Passed Thr Of DB */
#define Dem_GetDecreOfDB(Index)   Dem_GetDebounceBasedClass()[Index].DebounceCounterDecrementStepSize /**< Get Decre Of DB */
#define Dem_GetIncreOfDB(Index)   Dem_GetDebounceBasedClass()[Index].DebounceCounterIncrementStepSize /**< Get Incre Of DB */
#define Dem_GetTypeOfDB(Index) ((Dem_GetDebounceBasedClass()[Index].DebounceFlag & DEM_DEBOUNCE_TYPE_MASK) >> 4u) /**< Get Type Of DB */
#define Dem_GetBehaviorResetOfDB(Index) \
    ((Dem_GetDebounceBasedClass()[Index].DebounceFlag & DEM_DEBOUNCE_BEHAVIOR_MASK) == DEM_DEBOUNCE_BEHAVIOR_MASK) /**< Get Behavior Reset Of DB */



#define Dem_GetEventId(Index) (Index) /**< Get Event Id */

#define Dem_GetCfgFlagOfEvent(Index) Dem_GetEvent()[Index].EventCfgFlag /**< Get Cfg Flag Of Event */
#define Dem_GetDTCRefOfEvent(Index) Dem_GetEvent()[Index].DTCRef /**< Get DTC Ref Of Event */
#define Dem_GetOCRefOfEvent(Index)     Dem_GetEvent()[Index].OperationCycleRef /**< Get OC Ref Of Event */
#define Dem_GetDebounceRefOfEvent(Index)  Dem_GetEvent()[Index].DebounceAlgorithmRef /**< Get Debounce Ref Of Event */
#define Dem_GetSatelliteIdxOfEvent(Index)      0u /**< Get Satellite Idx Of Event */
#define Dem_GetSatelliteEventIdxOfEvent(Index) ((Index) - 1u) /**< Get Satellite Event Idx Of Event */
#define Dem_GetAttrRefOfEvent(Index)    Dem_GetEvent()[Index].DTCAttributesRef /**< Get Attr Ref Of Event */
#define Dem_GetClientStartRefOfEvent(Index) Dem_GetEvent()[Index].ClientStartRef /**< Get Client Start Ref Of Event */
#define Dem_GetClientEndRefOfEvent(Index) Dem_GetEvent()[Index].ClientEndRef /**< Get Client End Ref Of Event */
#define Dem_GetClientOfEventRef(Index) 0u /**< Get Client Of Event Ref Of Event */




/**********************************************/
#define Dem_GetNumOfSatellite()             DEM_EVENT_PARTITION_NUMBER /**< Get Num Of Satellite */

#define Dem_GetEventStartOfSatellite(Index) Dem_GetSatelliteCfgInfo()[Index].EventSrartOfSatellite /**< Get Event Start Of Satellite */
#define Dem_GetEventCountOfSatellite(Index) Dem_GetSatelliteCfgInfo()[Index].EventCountOfSatellite /**< Get Event Count Of Satellite */
#define Dem_GetDataOfSatellite(Index)       Dem_GetSatelliteCfgInfo()[Index].SatelliteDataOfSatelliteInfo /**< Get Data Of Satellite */
#define Dem_GetStatusOfSatellite(Index)     Dem_GetSatelliteCfgInfo()[Index].SatelliteStatusOfSatelliteInfo     /**< Get Status Of Satellite */



#endif

/* PRQA S 1039, 3120, 3132, 3471, 3472, 5004 -- */


