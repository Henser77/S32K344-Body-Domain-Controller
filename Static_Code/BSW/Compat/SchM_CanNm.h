/**
 * 临时兼容头 (bring-up shim)：CanNm 的独占区。
 * 等接入 小满 OS 模块后，由 OS 生成 SchM_CanNm.h，请删除本文件。
 */
#ifndef SCHM_CANNM_H
#define SCHM_CANNM_H

static inline void SchM_CanNm_EnterCritical(void)
{
    __asm__ volatile ("cpsid i" ::: "memory");
}

static inline void SchM_CanNm_ExitCritical(void)
{
    __asm__ volatile ("cpsie i" ::: "memory");
}

#define SchM_Enter_CanNm_Context() SchM_CanNm_EnterCritical()
#define SchM_Exit_CanNm_Context()  SchM_CanNm_ExitCritical()

#endif /* SCHM_CANNM_H */
