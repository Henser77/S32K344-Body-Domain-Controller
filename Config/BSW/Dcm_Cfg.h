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
 * @file        : Dcm_Cfg.h
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Dcm Cfg Macros
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
#ifndef DCM_CFG_H_
#define DCM_CFG_H_
/* =================================================== inclusions =================================================== */
#include "Std_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */
/* DcmDDDIDStorage */
#define DCM_DDDID_STORAGE STD_OFF
/* DcmDevErrorDetect */
#define DCM_DEV_ERROR_DETECT STD_ON
/* DcmRespondAllRequest */
#define DCM_RESPOND_ALL_REQUEST STD_OFF
/* DcmTaskTime */
#define DCM_MAINFUNCTION_PERIOD 5uL
/* DcmVersionInfoApi */
#define DCM_VERSION_INFO_API STD_OFF
/* DcmDspReadDTCInformationSupportedObdUdsDtcSeparation */
#define DEM_DTC_FORMAT DEM_DTC_FORMAT_UDS/* the number of DcmDslProtocolRows */
#define DCM_PROTOCOLROW_NUM 1u
/* enabled when Dcm requires NvM functionalities */
#define DCM_USE_NVM STD_OFF
/* enabled when BswM exists and BswMDcmEnabled is TRUE */
#define DCM_USE_BSWM STD_ON
/* enabled when Dcm requires BndM functionalities */
#define DCM_USE_BNDM STD_OFF
/* the number of DcmDslMainConnection */
#define DCM_MAINCONNECTION_NUM 1u
/* the sum of all used rx and tx buffer size */
#define DCM_TOTAL_BUFFER_SIZE 128u
/* Enabled when any protocolRow has its protocolRowType set to OBD */
#define DCM_OBD STD_OFF
/* The number of protocolRows with genericConnection */
#define DCM_METADATA_NUM 0uL
/* number of DcmDspSessionRow */
#define DCM_SESSION_NUM 3u
/* number of DcmDspSecurityRow */
#define DCM_SECURITY_NUM 1u
/* Enabled when any securityRow is configured to support get/set attemptCounter */
#define DCM_SECURITY_READOUT STD_OFF
/* number of DcmDspEcuResetRow */
#define DCM_RESET_NUM 2u
/* number of DcmDspDid */
#define DCM_DID_NUM 1u
/* number of DcmDspDidSignal */
#define DCM_DID_SIGNAL_NUM 1u
/* number of DcmDspDidRange */
#define DCM_RANGE_DID_NUM 0u
/* number of DcmDslProtocolRx */
#define DCM_PROTOCOLRX_NUM 1u
/* number of DcmDslProtocolRx */
#define DCM_RXPDU_NUM 1u
/* DcmPageBufferEnabled */
#define DCM_PAGEDBUFFER_ENABLED STD_OFF
/* enabled when any DcmDslProtocolRow/DcmDslProtocolRequestQueued == TRUE */
#define DCM_REQUEST_QUEUED_ENABLED STD_OFF
/* enabled when any DcmDsdService/DcmDsdSidTabAddressingFormat or DcmDsdSubService/DcmDsdSubServiceAddressingFormat set to value different then DCM_PHYANDFUNC */
#define DCM_ADDRESS_FORMAT STD_OFF
/* enabled when any DcmDspRoutine/DcmDsdService/DcmDsdSuppressPosRsp is configured */
#define DCM_SUPPRESS_POS_RSP STD_OFF

/* enabled when any DcmDspRoutine/DcmDsdService/P4ServerMax is configured */
#define DCM_P4_SERVER STD_OFF

/* enabled when any referenced DcmDspDidInfo/(DcmDspDidRead/DcmDspDidWrite) configured modeRuleRef */
#define DCM_DIDREADWRITEMODE STD_OFF
/* enabled when any DcmDspDid's last DcmDspDidSignal/DcmDspDidDataRef/DcmDspDataType == UINT8_DYN */
#define DCM_DYN_DATA STD_OFF
/* enabled when any DcmDspDid/DcmDspDidInfoRef/DcmDspDidDynamicallyDefined == TRUE */
#define DCM_DYN_DID STD_OFF
/* enabled when any DcmDspDidSignal/DcmDspDidDataRef/DcmDspDataUsePort == USE_BLOCK_ID */
#define DCM_USE_BLOCK_ID_ENABLED STD_OFF
/* enabled when any DcmDspDidSignal/DcmDspDidDataRef/DcmDspDataUsePort == USE_ECU_SIGNAL */
#define DCM_USE_ECU_SIGNAL_ENABLED STD_OFF
/* DcmDspDDDIDcheckPerSourceDID */
#define DCM_DDDID_CHECK_SOURCE STD_OFF
/* enabled when configured any DcmDspDidRange */
#define DCM_DID_RANGE_ENABLED STD_OFF
/* enabled when DcmDspEnableObdMirror==TRUE and at least one Did is in the range of an OBD Did. */
#define DCM_OBD_DID_MIRROR STD_OFF
/* DcmS3ServerTimeoutOverwrite */
#define DCM_S3_TIMEOUT 5000u
/* enabled when any DcmDslMainConnection/DcmDslProtocolComMChannelRefs belong to differnt OsApplication */
#define DCM_MULTICORE_ENABLED STD_OFF
/* number of DcmDsdServiceRequestManufacturerNotification */
#define DCM_MANUFACTURER_NOTIFICATION_NUM 0u
/* number of DcmDsdServiceRequestSupplierNotification */
#define DCM_SUPPLIER_NOTIFICATION_NUM  0u
/* number of DcmDslCallbackDCMRequestService */
#define DCM_CALLBACK_DCM_REQUEST_SERVICE 0u
/* DcmDslDiagRespOnSecondDeclinedRequest */
#define DCM_DIAG_RESP_ON_SECOND_DECLINED_REQUEST STD_OFF
/* DcmDspSecurityResetAttemptCounterOnTimeout */
#define DCM_SECURITY_ATTEMPT_COUNTER_ON_TIMEOUT STD_OFF
/* enabled when DcmDspClearDTC is configured */
#define DCM_DSP_CLEAR_DTC STD_OFF
/* DcmEnableSecurityEventReporting */
#define DCM_ENABLE_SECURITY_EVENT_REPORTING STD_OFF
/* Shared buffer between DcmDslProtocolRxBufferRef and DcmDslProtocolTxBufferRef */
#define DCM_DSL_RX_TX_SHARED_BUGGER STD_OFF

/* The followings are enabled when related(based on id) DcmDsdServices and DcmDsdSubServices are configured */
/* UDS services availability */
#define DCM_UDS_0X11 STD_ON
#define DCM_UDS_0X14 STD_ON
#define DCM_UDS_0X19 STD_ON
#define DCM_UDS_0X22 STD_ON
#define DCM_UDS_0X23 STD_OFF
#define DCM_UDS_0X24 STD_OFF
#define DCM_UDS_0X27 STD_ON
#define DCM_UDS_0X28 STD_OFF
#define DCM_UDS_0X29 STD_OFF
#define DCM_UDS_0X2A STD_OFF
#define DCM_UDS_0X2C STD_OFF
#define DCM_UDS_0X2E STD_ON
#define DCM_UDS_0X2F STD_OFF
#define DCM_UDS_0X31 STD_OFF
#define DCM_UDS_0X34 STD_OFF
#define DCM_UDS_0X35 STD_OFF
#define DCM_UDS_0X36 STD_OFF
#define DCM_UDS_0X37 STD_OFF
#define DCM_UDS_0X38 STD_OFF
#define DCM_UDS_0X3E STD_ON
#define DCM_UDS_0X3D STD_OFF
#define DCM_UDS_0X85 STD_OFF
#define DCM_UDS_0X86 STD_OFF

/* UDS subServices availability */
#define DCM_UDS_0X10_0X1 STD_ON
#define DCM_UDS_0X10_0X2 STD_ON
#define DCM_UDS_0X10_0X3 STD_ON
#define DCM_UDS_0X3E_0X0 STD_ON
#define DCM_UDS_0X27_0X1 STD_ON
#define DCM_UDS_0X27_0X2 STD_ON
#define DCM_UDS_0X19_0X1 STD_ON
#define DCM_UDS_0X19_0X2 STD_ON
#define DCM_UDS_0X19_0X4 STD_ON
#define DCM_UDS_0X19_0X6 STD_ON
#define DCM_UDS_0X19_0XA STD_ON
#define DCM_UDS_0X11_0X1 STD_ON
#define DCM_UDS_0X11_0X3 STD_ON

/* OBD services availability */
#define DCM_OBD_0X1 STD_OFF
#define DCM_OBD_0X2 STD_OFF
#define DCM_OBD_0X3 STD_OFF
#define DCM_OBD_0X4 STD_OFF
#define DCM_OBD_0X6 STD_OFF
#define DCM_OBD_0X7 STD_OFF
#define DCM_OBD_0X8 STD_OFF
#define DCM_OBD_0X9 STD_OFF
#define DCM_OBD_0XA STD_OFF

/* enabled when DcmDsdService with DcmDsdSidTabServiceId == 0x85 and DcmDsdSidTabModeRuleRef is configured */
#define DCM_UDS_0X85_MODERULE STD_OFF


/* DcmDslProtocolRxPduId */
#define DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0 0u

/* DcmDslTxConfirmationPduId */
#define DcmConf_DcmDslProtocolTx_DcmDslProtocolTx_0 0u



#ifdef __cplusplus
}
#endif
#endif

