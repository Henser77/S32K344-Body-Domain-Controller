/**
 * 临时兼容头 (bring-up shim)：CanSM 的独占区。
 * 等接入 小满 OS 模块后，由 OS 生成 SchM_CanSM.h，请删除本文件。
 */
#ifndef SCHM_CANSM_H
#define SCHM_CANSM_H

static inline void SchM_CanSM_EnterCritical(void)
{
    __asm__ volatile ("cpsid i" ::: "memory");
}

static inline void SchM_CanSM_ExitCritical(void)
{
    __asm__ volatile ("cpsie i" ::: "memory");
}

#define SchM_Enter_CanSM_Context() SchM_CanSM_EnterCritical()
#define SchM_Exit_CanSM_Context()  SchM_CanSM_ExitCritical()

#endif /* SCHM_CANSM_H */
