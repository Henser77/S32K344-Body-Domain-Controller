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
 * @file        : Rte_Type.h
 * @licence     : 
 * @date        : 2026-11-05 21:06:05
 * @customer    : EasyXMen
 * @description : Header file containing user defined AUTOSAR types
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef RTE_TYPE_H
#define RTE_TYPE_H
/* PRQA S 1336 EOF */ /* VL_Rte_NoFuncParaIdentifier */
/* PRQA S 0631, 1508, 1506, 4602 EOF */ /* VL_Rte_Mutitypedef */
/* PRQA S 1710, 4152 EOF */ /* VL_Rte_SimilarIdentifier */
/* PRQA S 0750, 3629 EOF */ /* VL_Rte_UnionDefined */
/* PRQA S 1271 EOF */ /* VL_Rte_EnumDefine */
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Rte.h"
/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
typedef uint8 Rte_MetaData_IOCData_Type_1byte[1];
typedef uint8 Rte_MetaData_IOCData_Type_2byte[2];
typedef uint8 Rte_MetaData_IOCData_Type_4byte[4];
typedef uint8 Rte_MetaData_IOCData_Type_8byte[8];
typedef struct
{
    uint16 clientId;
    uint16 sequenceCounter;
} Rte_Cs_TransactionHandleType;
typedef uint8 * uint8_ptr;
typedef uint8 uint8_Cs;
typedef uint16 uint16_Cs;

typedef uint16 Rte_Uint16_Mode;

typedef float64 Float64;
typedef uint8 BswM_ClientModeRequestEnum;
typedef uint8 BswM_OfferModeEnum;
typedef uint8 ComM_ModeType;
typedef uint8 ComM_InhibitionStatusType;
typedef uint16 ComM_UserHandleType;
typedef uint8 NetWorkHandleType;
typedef uint8 IOOperationResponse;
typedef uint8 inputOutputControlParameterType;
typedef uint8 Dcm_OpStatusType;
typedef uint8 Dcm_SesCtrlType;
typedef uint8 Dcm_ConfirmationStatusType;
typedef uint8 Dcm_DidSupportedType;
typedef uint8 Dcm_NegativeResponseCodeType;
typedef uint8 Dcm_ProtocolType;
typedef uint8 Dcm_SecLevelType;
typedef uint8 Dem_OperationCycleStateType;
typedef uint8 Dem_UdsStatusByteType;
typedef uint8 Dem_IndicatorStatusType;
typedef uint8 Dem_IumprDenomCondStatusType;
typedef uint8 Dem_IumprDenomCondIdType;
typedef uint8 Dem_InitMonitorReasonType;
typedef uint8 Dem_DTCFormatType;
typedef uint8 Dem_EventStatusType;
typedef uint8 Dem_MonitorStatusType;
typedef uint8 Dem_DebounceResetStatusType;
typedef uint8 Dem_DebouncingStateType;
typedef uint8 Dem_DTRControlType;
typedef uint16 Dem_DTCOriginType;
typedef uint32 Dem_MonitorDataType;
typedef uint16 Dem_EventIdType;
typedef uint8 Dem_RatioIdType;
typedef uint8 NvM_RequestResultType;
typedef uint8 EcuM_UserType;
typedef uint32 EcuM_TimeType;
typedef uint8 EcuM_BootTargetType;
typedef uint16 EcuM_ShutdownModeType;
typedef uint8 EcuM_ShutdownTargetType;
typedef uint8 EcuM_ShutdownCauseType;
typedef uint16 NvM_BlockIdType;
typedef void VOID;
typedef uint8 NvM_InitBlockRequestType;
typedef uint8 NvM_BlockRequestType;
typedef uint16 StbM_TimeBaseStatusType;
typedef uint32 StbM_TimeBaseNotificationType;
typedef uint8 StbM_MasterConfigType;
typedef uint8 StbM_TimeSyncType;
typedef uint8 StbM_CloneConfigType;
typedef uint16 StbM_SynchronizedTimeBaseType;
typedef uint16 StbM_CustomerIdType;
typedef sint16 StbM_RateDeviationType;
typedef sint32 StbM_TimeDiffType;
typedef uint8 WdgM_GlobalStatusType;
typedef uint16 WdgM_SupervisedEntityIdType;
typedef uint16 WdgM_CheckpointIdType;
typedef uint8 WdgM_ModeType;
typedef uint8 WdgM_LocalStatusType;
typedef uint32 StbM_TimeStampType; /* Compat: StbM 未集成，用 uint32 代替 */
struct Rte_struct_StbM_UserDataType
{
    uint8 userDataLength;
    uint8 userByte0;
    uint8 userByte1;
    uint8 userByte2;
};
typedef struct Rte_struct_StbM_UserDataType StbM_UserDataType;
struct Rte_struct_StbM_SyncRecordTableHeadType
{
    uint8 SynchronizedTimeDomain;
    uint32 HWfrequency;
    uint32 HWprescaler;
};
typedef struct Rte_struct_StbM_SyncRecordTableHeadType StbM_SyncRecordTableHeadType;
struct Rte_struct_StbM_SyncRecordTableBlockType
{
    uint32 GlbSeconds;
    uint32 GlbNanoSeconds;
    StbM_TimeBaseStatusType TimeBaseStatus;
    uint32 VirtualLocalTimeLow;
    StbM_RateDeviationType RateDeviation;
    uint32 LocSeconds;
    uint32 LocNanoSeconds;
    uint32 PathDelay;
    uint32 FallbackVirtualTimeLow;
};
typedef struct Rte_struct_StbM_SyncRecordTableBlockType StbM_SyncRecordTableBlockType;
struct Rte_struct_StbM_OffsetRecordTableBlockType
{
    uint32 GlbSeconds;
    uint32 GlbNanoSeconds;
    StbM_TimeBaseStatusType TimeBaseStatus;
};
typedef struct Rte_struct_StbM_OffsetRecordTableBlockType StbM_OffsetRecordTableBlockType;
struct Rte_struct_StbM_VirtualLocalTimeType
{
    uint32 nanosecondsLo;
    uint32 nanosecondsHi;
};
typedef struct Rte_struct_StbM_VirtualLocalTimeType StbM_VirtualLocalTimeType;
struct Rte_struct_StbM_TimeTupleType
{
    StbM_VirtualLocalTimeType virtualLocalTime;
    StbM_TimeStampType globalTime;
    StbM_TimeBaseStatusType timeBaseStatus;
};
typedef struct Rte_struct_StbM_TimeTupleType StbM_TimeTupleType;
struct Rte_struct_StbM_TimeTripleType
{
    StbM_VirtualLocalTimeType virtualLocalTime;
    StbM_VirtualLocalTimeType fallbackVirtualLocalTime;
    StbM_TimeStampType globalTime;
    StbM_TimeBaseStatusType timeBaseStatus;
};
typedef struct Rte_struct_StbM_TimeTripleType StbM_TimeTripleType;
struct Rte_struct_StbM_ProtocolParamType
{
    StbM_TimeSyncType protocolType;
    sint32 cumulativeScaledRateOffset;
    uint16 gmTimeBaseIndicator;
    sint32 lastGmPhaseChange;
    uint32 scaledLastGmFreqChange;
};
typedef struct Rte_struct_StbM_ProtocolParamType StbM_ProtocolParamType;
struct Rte_struct_StbM_TimeStampShortType
{
    uint32 nanoseconds;
    uint32 seconds;
};
typedef struct Rte_struct_StbM_TimeStampShortType StbM_TimeStampShortType;
typedef uint8 Dcm_KeyArray_Level_2Type[4];
typedef uint8 Dcm_SeedArray_Level_2Type[4];
typedef uint8 Dcm_KeyArray_Level_3Type[4];
typedef uint8 Dcm_SeedArray_Level_3Type[4];
typedef uint8 Dcm_DataElement_Data_0xF186_DID_0xF186_ArrayType[1];
typedef uint8 Dcm_DataElement_Data_0xF121_DID_0xF121_ArrayType[16];
typedef uint8 Dcm_DataElement_Data_0xF181_DID_0xF181_ArrayType[4];
typedef uint8 Dcm_DataElement_Data_0x0110_DID_0x0110_ArrayType[1];
typedef uint8 Dcm_DataElement_Data_0x0111_DID_0x0111_ArrayType[3];
typedef uint8 Dcm_DataElement_Data_0x0120_DID_0x0120_ArrayType[1];
typedef uint8 Dcm_DataArrayTypeUint8_Data_0x0120_DID_0x0120Type[1];
typedef uint8 Dcm_DataElement_Data_0x0121_DID_0x0121_ArrayType[1];
typedef uint8 Dcm_DataArrayTypeUint8_Data_0x0121_DID_0x0121Type[1];
typedef uint8 Dcm_RangeArray_DcmDspDidRange_0x5101_0x51FFType[255];
typedef uint8 Dcm_StartDataOut_Routine_0x0203_StartRoutineOutSignal_0x0203_RID_0x0203_DataArrayType[1];
typedef uint8 Dcm_StartDataIn_Routine_0x0200_StartRoutineInSignal_0x0200_RID_0x0200_Control_DataArrayType[1];
typedef uint8 Dcm_StartDataOut_Routine_0x0200_StartRoutineOutSignal_0x0200_RID_0x0200_Status_DataArrayType[1];
typedef uint8 Dcm_StartDataIn_Routine_0x0201_StartRoutineInSignal_0x0201_RID_0x0201_Control_DataArrayType[1];
typedef uint8 Dcm_StartDataOut_Routine_0x0201_StartRoutineOutSignal_0x0201_RID_0x0200_Status_DataArrayType[1];
typedef uint8 Dem_MaxDataValueType[8];
typedef uint8 Dem_PID21valueType[2];
typedef uint8 Dem_PID31valueType[2];
typedef uint8 Dem_DataArrayType_DemDataElementClass_0x0110[1];
typedef uint8 Dem_DataArrayType_DemDataElementClass_0x0111[3];

/* User defined Data Type */
#ifndef RTE_TRANSITION_DcmDiagnosticSessionControl
#define RTE_TRANSITION_DcmDiagnosticSessionControl 255U 
#endif    

#ifndef RTE_MODE_DcmDiagnosticSessionControl_DCM_DEFAULT_SESSION
#define RTE_MODE_DcmDiagnosticSessionControl_DCM_DEFAULT_SESSION 1U
#endif
#ifndef RTE_MODE_DcmDiagnosticSessionControl_DCM_EXTENDED_DIAGNOSTIC_SESSION
#define RTE_MODE_DcmDiagnosticSessionControl_DCM_EXTENDED_DIAGNOSTIC_SESSION 3U
#endif
#ifndef RTE_MODE_DcmDiagnosticSessionControl_DCM_PROGRAMMING_SESSION
#define RTE_MODE_DcmDiagnosticSessionControl_DCM_PROGRAMMING_SESSION 2U
#endif
#ifndef RTE_MODE_DcmDiagnosticSessionControl_DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION
#define RTE_MODE_DcmDiagnosticSessionControl_DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION 4U
#endif

#ifndef RTE_TRANSITION_DcmEcuReset
#define RTE_TRANSITION_DcmEcuReset 255U 
#endif    

#ifndef RTE_MODE_DcmEcuReset_DCM_EXECUTE
#define RTE_MODE_DcmEcuReset_DCM_EXECUTE 6U
#endif
#ifndef RTE_MODE_DcmEcuReset_DCM_HARD
#define RTE_MODE_DcmEcuReset_DCM_HARD 1U
#endif
#ifndef RTE_MODE_DcmEcuReset_DCM_JUMPTOBOOTLOADER
#define RTE_MODE_DcmEcuReset_DCM_JUMPTOBOOTLOADER 4U
#endif
#ifndef RTE_MODE_DcmEcuReset_DCM_JUMPTOSYSSUPPLIERBOOTLOADER
#define RTE_MODE_DcmEcuReset_DCM_JUMPTOSYSSUPPLIERBOOTLOADER 5U
#endif
#ifndef RTE_MODE_DcmEcuReset_DCM_KEYONOFF
#define RTE_MODE_DcmEcuReset_DCM_KEYONOFF 2U
#endif
#ifndef RTE_MODE_DcmEcuReset_DCM_NONE
#define RTE_MODE_DcmEcuReset_DCM_NONE 0U
#endif
#ifndef RTE_MODE_DcmEcuReset_DCM_SOFT
#define RTE_MODE_DcmEcuReset_DCM_SOFT 3U
#endif

#ifndef RTE_TRANSITION_DcmModeRapidPowerShutDown
#define RTE_TRANSITION_DcmModeRapidPowerShutDown 255U 
#endif    

#ifndef RTE_MODE_DcmModeRapidPowerShutDown_DCM_DISABLE_RAPIDPOWERSHUTDOWN
#define RTE_MODE_DcmModeRapidPowerShutDown_DCM_DISABLE_RAPIDPOWERSHUTDOWN 1U
#endif
#ifndef RTE_MODE_DcmModeRapidPowerShutDown_DCM_ENABLE_RAPIDPOWERSHUTDOWN
#define RTE_MODE_DcmModeRapidPowerShutDown_DCM_ENABLE_RAPIDPOWERSHUTDOWN 0U
#endif

#ifndef RTE_TRANSITION_DcmCommunicationControl
#define RTE_TRANSITION_DcmCommunicationControl 255U 
#endif    

#ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM
#define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM 6U
#endif
#ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM
#define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM 2U
#endif
#ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM
#define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM 10U
#endif
#ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM
#define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM 7U
#endif
#ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORMAL
#define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORMAL 3U
#endif
#ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM
#define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM 11U
#endif
#ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM
#define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM 5U
#endif
#ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM
#define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM 1U
#endif
#ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM
#define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM 9U
#endif
#ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM
#define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM 4U
#endif
#ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM
#define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM 0U
#endif
#ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM
#define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM 8U
#endif

#ifndef RTE_TRANSITION_DcmControlDTCSetting
#define RTE_TRANSITION_DcmControlDTCSetting 255U 
#endif    

#ifndef RTE_MODE_DcmControlDTCSetting_DCM_DISABLEDTCSETTING
#define RTE_MODE_DcmControlDTCSetting_DCM_DISABLEDTCSETTING 1U
#endif
#ifndef RTE_MODE_DcmControlDTCSetting_DCM_ENABLEDTCSETTING
#define RTE_MODE_DcmControlDTCSetting_DCM_ENABLEDTCSETTING 0U
#endif

#ifndef RTE_TRANSITION_DcmSecurityAccess
#define RTE_TRANSITION_DcmSecurityAccess 255U 
#endif    

#ifndef RTE_MODE_DcmSecurityAccess_DCM_SEC_LEV_LOCKED
#define RTE_MODE_DcmSecurityAccess_DCM_SEC_LEV_LOCKED 0U
#endif
#ifndef RTE_MODE_DcmSecurityAccess_Level_2
#define RTE_MODE_DcmSecurityAccess_Level_2 2U
#endif
#ifndef RTE_MODE_DcmSecurityAccess_Level_3
#define RTE_MODE_DcmSecurityAccess_Level_3 3U
#endif

#ifndef RTE_TRANSITION_EcuM_Mode
#define RTE_TRANSITION_EcuM_Mode 5U
#endif
    
#ifndef RTE_MODE_EcuM_Mode_POST_RUN
#define RTE_MODE_EcuM_Mode_POST_RUN 0U
#endif
#ifndef RTE_MODE_EcuM_Mode_RUN
#define RTE_MODE_EcuM_Mode_RUN 1U
#endif
#ifndef RTE_MODE_EcuM_Mode_SHUTDOWN
#define RTE_MODE_EcuM_Mode_SHUTDOWN 2U
#endif
#ifndef RTE_MODE_EcuM_Mode_SLEEP
#define RTE_MODE_EcuM_Mode_SLEEP 3U
#endif
#ifndef RTE_MODE_EcuM_Mode_STARTUP
#define RTE_MODE_EcuM_Mode_STARTUP 4U
#endif

#ifndef RTE_TRANSITION_WdgM_Mode
#define RTE_TRANSITION_WdgM_Mode 255U 
#endif    

#ifndef RTE_MODE_WdgM_Mode_SUPERVISION_DEACTIVATED
#define RTE_MODE_WdgM_Mode_SUPERVISION_DEACTIVATED 4U
#endif
#ifndef RTE_MODE_WdgM_Mode_SUPERVISION_EXPIRED
#define RTE_MODE_WdgM_Mode_SUPERVISION_EXPIRED 2U
#endif
#ifndef RTE_MODE_WdgM_Mode_SUPERVISION_FAILED
#define RTE_MODE_WdgM_Mode_SUPERVISION_FAILED 1U
#endif
#ifndef RTE_MODE_WdgM_Mode_SUPERVISION_OK
#define RTE_MODE_WdgM_Mode_SUPERVISION_OK 0U
#endif
#ifndef RTE_MODE_WdgM_Mode_SUPERVISION_STOPPED
#define RTE_MODE_WdgM_Mode_SUPERVISION_STOPPED 3U
#endif



typedef Rte_Uint16_Mode Rte_ModeType_MDG_ClientServiceSubscriptionState;
typedef Rte_Uint16_Mode Rte_ModeType_MDG_ServerServiceSubscriptionState;
typedef ComM_ModeType Rte_ModeType_ComMMode;
typedef uint8 Rte_ModeType_DcmDiagnosticSessionControl;
typedef uint8 Rte_ModeType_DcmEcuReset;
typedef uint8 Rte_ModeType_DcmModeRapidPowerShutDown;
typedef uint8 Rte_ModeType_DcmCommunicationControl;
typedef uint8 Rte_ModeType_DcmControlDTCSetting;
typedef uint8 Rte_ModeType_DcmSecurityAccess;
typedef uint8 Rte_ModeType_EcuM_Mode;
typedef WdgM_ModeType Rte_ModeType_WdgM_Mode;


typedef struct
{
    void* currentMode;
    void* nextMode;
    void* fromMode;
    uint8 qRear;
    uint8 qFront;
    boolean inTransition;
    Std_ReturnType fbVar;
} Rte_ModeMachine_Type;





typedef enum
{
    RTE_STATE_RTE_UNINIT = 1U,
    RTE_STATE_SCHM_START = 2U,
    RTE_STATE_SCHM_INIT = 3U,
    RTE_STATE_RTE_INIT = 4U
} Rte_StateType;












/*******************************************************************************
**                      Global Data Declaration                               **
*******************************************************************************/

/*******************************************************************************
**                      Global Functions                                      **
*******************************************************************************/

#endif /*RTE_TYPE_H*/
