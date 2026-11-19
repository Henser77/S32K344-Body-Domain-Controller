/**
 * 临时兼容头 (bring-up shim)：CanIf 的独占区。
 * 等接入 小满 OS 模块后，由 OS 生成 SchM_CanIf.h，请删除本文件。
 */
#ifndef SCHM_CANIF_H
#define SCHM_CANIF_H

/* 单核裸机：直接开关中断。
 * 若后续要支持嵌套，改成保存/恢复 PRIMASK。 */
static inline void SchM_CanIf_EnterCritical(void)
{
    __asm__ volatile ("cpsid i" ::: "memory");
}

static inline void SchM_CanIf_ExitCritical(void)
{
    __asm__ volatile ("cpsie i" ::: "memory");
}

#define SchM_Enter_CanIf_ExclusiveArea_Channel() SchM_CanIf_EnterCritical()
#define SchM_Exit_CanIf_ExclusiveArea_Channel()  SchM_CanIf_ExitCritical()

#endif /* SCHM_CANIF_H */
