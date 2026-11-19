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
 * @file        : Det_Externals.c
 * @licence     : 
 * @date        : 2026-11-19 22:11:06
 * @customer    : EasyXMen
 * @description : config definitions for DET module
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/


/* =================================================== inclusions =================================================== */
#include "Det_Externals.h"

/** DO NOT CHANGE THIS COMMENT!
 * <USERBLOCK HeadFile>
 */
 /** DO NOT CHANGE THIS COMMENT!
 * </USERBLOCK>
 */

 /* ===================================================== macros ===================================================== */

/** DO NOT CHANGE THIS COMMENT!
 * <USERBLOCK macros>
 */
 /** DO NOT CHANGE THIS COMMENT!
 * </USERBLOCK>
 */

 /* ================================================ type definitions ================================================ */

 /* ========================================== internal function declarations ======================================== */

 /* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */

/* ========================================== external function definitions ========================================= */

#define DET_START_SEC_CODE
#include "Det_MemMap.h"

/* The API is used to enter endless loop */
/* limit condition: If the source of the DET error is generated internally by the interrupt,
   the user needs to edit the code himself and send the error log message by asynchronous operation. */
/* Specification condition: If the source of the DET error is generated internally by the task scheduler,
   the following code can be used to send the error log message. */
/* Interrupt mode: When a CAN message is received, the CAN frame data is read from the CAN buffer by the response of the interrupt service function. */
/* Polling mode: After receiving the CAN message, the CAN frame data is read from the CAN buffer through the periodic scheduling of
   the polling main function(The following reference code was not written)
(Can_17_McmCan_MainFunction_Write,Can_17_McmCan_MainFunction_Read) */
/* CAN Communication stack: Since the error log message of DLT is sent in multi-frame mode, the CanTp module is needed,
   so it is necessary to call CanTp_MainFunction in the next week frame to implement multi-frame message passing. */
/* Ethernet Communication stack: Since the error log message of DLT is sent in multi-frame mode, the EthIf/TcpIp/SoAd module is needed,
   so it is necessary to call EthIf_MainFunctionState /TcpIp_MainFunction/ SoAd_MainFunction in the next week frame to implement multi-frame message passing. */
/* DLT: Since DLT error log messages are sent in multi-frame mode, it is necessary to call Dlt_TxFunction in the next frame to implement error log message sending. */
/* HALT Triggered: The AUTOSAR software architecture explicitly stipulates that as long as any module causes an DET error,
   the system is required to eventually enter HALT mode, which is the "crash" phenomenon. */
/* Specification condition: The 1ms timing in the following code needs to be implemented by the user during the integration process. */
/* Specification condition: The delay after error log messages are sent is determined by the user (change the value of the corresponding macro DET_DLT_LOG_TX_DEFER_TIME). */
void Det_EndlessLoop(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK ToDltOFF>
    */
    #ifdef DET_ENDLESSLOOP_EXAMPLE
    static boolean periodExpired = TRUE;
#endif
    while (TRUE) /* PRQA S 2740 */ /* VL_Det_2740 */
    {
#ifdef DET_ENDLESSLOOP_EXAMPLE
        /* Check if the expired status of the period counter is set to TRUE */
        if (TRUE == periodExpired)
        {
            /* The expired status of the period counter is set to FALSE */
            periodExpired = FALSE;
            /* Suspend all interrupts */
            SuspendAllInterrupts();
        }
#endif /* DET_ENDLESSLOOP_EXAMPLE */
    }
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define DET_STOP_SEC_CODE
#include "Det_MemMap.h"





/* ========================================== internal function definitions ========================================= */
