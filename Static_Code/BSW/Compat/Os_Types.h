/**
 * 临时兼容头（bring-up shim）
 *
 * 作用：提供 小满 CanIf / PduR 需要、但当前工程没有 OS 模块的少数符号。
 * 说明：等以后接入 小满 OS 模块并由其生成 Os_Types.h / Os.h 时，删除本文件。
 *
 * 注意：新版生成的 CanIf_CfgTypes.h 已改用 Std_ReturnType / Can_ControllerStateType，
 *      不再需要 Can_ReturnType / Can_StateTransitionType 兼容定义。
 */
#ifndef OS_TYPES_SHIM_H
#define OS_TYPES_SHIM_H

/* ApplicationType、基础类型等（来自 MCAL Os 模块） */
#include "Os.h"

/* 小满 BSW 需要、MCAL Os 模块未提供的 API。
 * CanIf / PduR 只用到这一个，且只用于分区索引；单核固定返回 0。 */
#ifndef GetApplicationID
#define GetApplicationID() ((ApplicationType)0U)
#endif

#endif /* OS_TYPES_SHIM_H */
