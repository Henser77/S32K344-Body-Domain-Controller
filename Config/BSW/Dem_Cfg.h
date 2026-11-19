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
 * @file        : Dem_Cfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Pre-compile time definitions of Dem
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/

#ifndef DEM_CFG_H
#define DEM_CFG_H

/* ===================================================== macros ===================================================== */
/** Defines if the aging cycle counter is processed in operation cycles with test failed report or not.
 * True: Aging cycle counter is processed only in operation cycles without test failed.
 * False (Default): No effect on aging cycle counter processing. */
/** Dem/DemGeneral/DemAgingRequiresNotFailedCycle */
#define DEM_AGING_REQUIRES_NOT_FAILED_CYCLE STD_OFF

/** Defines if the aging cycle counter is processed every aging cycles or if only tested aging cycle are considered.
 * true: only tested aging cycle are considered for aging cycle counter
 * false: aging cycle counter is processed every aging cycle */
/** Dem/DemGeneral/DemAgingRequiresTestedCycle */
#define DEM_AGING_REQUIRES_TESTED_CYCLE STD_OFF

/** This configuration switch defines, whether support for availability is enabled or not. */
/** Support availability by Event */
#define DEM_EVENT_AVAILABILITY 0u
/** Availability is not supported */
#define DEM_NO_AVAILABILITY 1u
/** Dem/DemGeneral/DemAvailabilitySupport */
#define DEM_AVAILABILITY_SUPPORT DEM_NO_AVAILABILITY

/** Defines the clearing process of diagnostic information for volatile and non-volatile memory and the positive response
 * handling for the Dcm module.*/
/** Return DEM_CLEAR_OK after volatile and non-volatile event memory data cleared. */
#define DEM_CLRRESP_NONVOLATILE_FINISH 0u
/** Return DEM_CLEAR_OK after volatile event memory data cleared and non-volatile event memory clearing is triggered */
#define DEM_CLRRESP_NONVOLATILE_TRIGGER 1u
/** Return DEM_CLEAR_OK after volatile event memory data cleared */
#define DEM_CLRRESP_VOLATILE 2u
/** Dem/DemGeneral/DemClearDTCBehavior */
#define DEM_CLEAR_DTC_BEHAVIOR DEM_CLRRESP_VOLATILE

/** Defines the supported Dem_<...>ClearDTC API scope. */
/** Dem_<...>ClearDTC accepts all supported DTC values, as well as all DTC values which are configured in DemGroupDTCs
 * and DEM_DTC_GROUP_ALL_DTCS.*/
#define DEM_ALL_SUPPORTED_DTCS 0u
/** Availability is not supported */
#define DEM_ONLY_CLEAR_ALL_DTCS 1u
/** Dem/DemGeneral/DemClearDTCLimitation */
#define DEM_CLEAR_DTC_LIMITATION DEM_ALL_SUPPORTED_DTCS

/** This configuration switch defines, whether support for counter based debouncing is enabled or not.
 * true: counter based debouncing support is enabled
 * false: counter based debouncing support is disabled */
/** Dem/DemGeneral/DemDebounceCounterBasedSupport */
#define DEM_DEBOUNCE_COUNTER_BASED_SUPPORT STD_ON

/** This configuration switch defines, whether support for time based debouncing is enabled or not.
 * true: time based debouncing support is enabled
 * false: time based debouncing support is disabled */
/** Dem/DemGeneral/DemDebounceTimeBasedSupport */
#define DEM_DEBOUNCE_TIME_BASED_SUPPORT STD_OFF

/** Switches the development error detection and notification on or off.
 * true: detection and notification is enabled.
 * false: detection and notification is disabled. */
/** Dem/DemGeneral/DemDevErrorDetect */
#define DEM_DEV_ERROR_DETECT STD_ON

/** This parameter defines the type of event combination supported by the Dem. */
/** No event combination supported */
#define DEM_EVCOMB_DISABLED 0u
/** Event combination on retrieval */
#define DEM_EVCOMB_ONRETRIEVAL 1u
/** Event combination on storage */
#define DEM_EVCOMB_ONSTORAGE 2u
/** Dem/DemGeneral/DemEventCombinationSupport */
#define DEM_EVENT_COMBINATION_SUPPORT DEM_EVCOMB_DISABLED

/** The interfaces GeneralEvtInfo, GeneralCallbackEventDataChanged, GeneralCallback MonitorStatusChanged and
 * GeneralCallbackEventUdsStatusChange are provided if DemGeneralInterfaceSupport is equal to true. */
/** Dem/DemGeneral/DemGeneralInterfaceSupport */
#define DEM_GENERAL_INTERFACE_SUPPORT STD_OFF

/** This configuration switch defines OBD support and kind of OBD ECU. */
/** Kind of OBD ECU: OBD Dependend / Secondary ECU */
#define DEM_OBD_DEP_SEC_ECU 0u
/** Kind of OBD ECU: Master ECU */
#define DEM_OBD_MASTER_ECU 1u
/** OBD is not supported within this ECU */
#define DEM_OBD_NO_OBD_SUPPORT 2u
/** Kind of OBD ECU: Pimary ECU */
#define DEM_OBD_PRIMARY_ECU 3u
/** Dem/DemGeneral/DemOBDSupport */
#define DEM_OBD_SUPPORT DEM_OBD_NO_OBD_SUPPORT

/** This configuration switch defines, whether PTO support (and therefore PID $1E support) is enabled or not. */
/** Dem/DemGeneral/DemPTOSupport */
#define DEM_PTO_SUPPORT STD_OFF

/** This configuration switch defines, whether the confirmed bit is reset or not while an event memory entry will be
 * displaced. */
/** Dem/DemGeneral/DemResetConfirmedBitOnOverflow */
#define DEM_RESET_CONFIRMED_BIT_ON_OVERFLOW STD_ON

/** This configuration switch defines, whether the pending bit is reset or not while an event memory entry will be
 * displaced. */
/** Dem/DemGeneral/DemResetPendingBitOnOverflow */
#define DEM_RESET_PENDING_BIT_ON_OVERFLOW STD_ON

/** This configuration switch defines, whether the aging and displacement mechanism shall be applied to the
 * "TestFailedSinceLastClear" status bits. */
/** the "TestFailedSinceLastClear" status bits are reset to 0, if aging or displacement applies (like done for the
 * "ConfirmedDTC" status bits) */
#define DEM_STATUS_BIT_AGING_AND_DISPLACEMENT 0u
/** aging and displacement has no impact on the "TestFailedSinceLastClear" status bits */
#define DEM_STATUS_BIT_NORMAL 1u
/** Dem/DemGeneral/DemStatusBitHandlingTestFailedSinceLastClear 
 * STD_ON: select DEM_STATUS_BIT_AGING_AND_DISPLACEMENT
 * STD_OFF: select DEM_STATUS_BIT_NORMAL */
#define DEM_STATUS_BIT_HANDLING_TEST_FAILED_SINCE_LAST_CLEAR STD_OFF

/** Activate/Deactivate the permanent storage of the "TestFailed" status bits.
 * true: storage activated
 * false: storage deactivated */
/** Dem/DemGeneral/DemStatusBitStorageTestFailed */
#define DEM_STATUS_BIT_STORAGE_TEST_FAILED STD_OFF

/** This configuration switch defines, whether support for suppression is enabled or not. */
/** Support suppression by DTC */
#define DEM_DTC_SUPPRESSION 0u
/** Suppression is not supported */
#define DEM_NO_SUPPRESSION 1u
/** Dem/DemGeneral/DemSuppressionSupport */
#define DEM_SUPPRESSION_SUPPORT DEM_NO_SUPPRESSION

/** Allow to configure the time for the periodic cyclic task. Please note: This configuration value shall be equal to the
 * value in the Basic Software Scheduler configuration of the RTE module.*/
/** Dem/DemGeneral/DemTaskTime */
#define DEM_TASK_TIME 10u /* ms */

/** Activate/Deactivate the notification to the Function Inhibition Manager.
 * true: FiM notification activated
 * false: FiM notification deactivated */
/** Dem/DemGeneral/DemTriggerFiMReports */
#define DEM_TRIGGER_FIM_REPORTS STD_OFF

/** Defines if the monitor re-initialization has to be triggered before or after the Dem module returns DEM_CLEAR_OK.
 * true: trigger re-initialization before DEM_CLEAR_OK
 * false: trigger re-initialization after DEM_CLEAR_OK */
/** Dem/DemGeneral/DemTriggerMonitorInitBeforeClearOk */
#define DEM_TRIGGER_MONITOR_INIT_BEFORE_CLEAR_OK STD_ON

/** Activate/Deactivate the version information API.
 * true: version information activated
 * false: version information deactivated */
/** Dem/DemGeneral/DemVersionInfoApi */
#define DEM_VERSION_INFO_API STD_OFF

/** Dem/DemGeneral/DemClient/DemClientId */
/**  Client IDs [symbolic name value]  */
#define DemConf_DemClient_DemClient_Dcm 0u



/** Dem/DemGeneral/DemEventMemorySet/DemIndicator */
/**  IndicatorID IDs [symbolic name value]  */



/** Dem/DemOperationCycle/DemOperationCycleId */
/**  OperationCycleId IDs [symbolic name value]  */
#define DemConf_DemOperationCycle_DemOperationCycle 0u




/** Dem/DemConfigSet/DemEventParameter/ */
/**  Event IDs [symbolic name value]  */
#define DemConf_DemEventParameter_DemEventParameter_0 1u

#endif



