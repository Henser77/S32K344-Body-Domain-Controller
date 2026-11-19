/**
 * 临时兼容头 (bring-up shim)：Com 的独占区。
 * 等接入 小满 OS 模块后，由 OS 生成 SchM_Com.h，请删除本文件。
 *
 * 单核裸机实现：关中断 + 嵌套计数，避免嵌套调用提前开中断。
 * （static inline 每个编译单元一份计数，Com 的调用都在同一 TU 内，够用）
 */
#ifndef SCHM_COM_H
#define SCHM_COM_H

#include "Std_Types.h"

static inline void SchM_Com_EnterCritical(void)
{
    __asm__ volatile ("cpsid i" ::: "memory");
}

static inline void SchM_Com_ExitCritical(void)
{
    __asm__ volatile ("cpsie i" ::: "memory");
}

#define SchM_Enter_Com_Context()            SchM_Com_EnterCritical()
#define SchM_Exit_Com_Context()             SchM_Com_ExitCritical()

#define SchM_Enter_Com_MultiCore_Lock()     SchM_Com_EnterCritical()
#define SchM_Exit_Com_MultiCore_Lock()      SchM_Com_ExitCritical()

#endif /* SCHM_COM_H */
