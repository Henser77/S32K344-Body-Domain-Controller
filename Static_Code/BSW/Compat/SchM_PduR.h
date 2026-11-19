/**
 * 临时兼容头 (bring-up shim)：PduR 的独占区。
 * 等接入 小满 OS 模块后，由 OS 生成 SchM_PduR.h，请删除本文件。
 */
#ifndef SCHM_PDUR_H
#define SCHM_PDUR_H

static inline void SchM_PduR_EnterCritical(void)
{
    __asm__ volatile ("cpsid i" ::: "memory");
}

static inline void SchM_PduR_ExitCritical(void)
{
    __asm__ volatile ("cpsie i" ::: "memory");
}

#define SchM_Enter_PduR_ExclusiveArea_Group() SchM_PduR_EnterCritical()
#define SchM_Exit_PduR_ExclusiveArea_Group()  SchM_PduR_ExitCritical()

#define SchM_Enter_PduR_ExclusiveArea_Init()  SchM_PduR_EnterCritical()
#define SchM_Exit_PduR_ExclusiveArea_Init()   SchM_PduR_ExitCritical()

#define SchM_Enter_PduR_ExclusiveArea_Route() SchM_PduR_EnterCritical()
#define SchM_Exit_PduR_ExclusiveArea_Route()  SchM_PduR_ExitCritical()

#endif /* SCHM_PDUR_H */
