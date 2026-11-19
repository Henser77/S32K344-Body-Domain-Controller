/**
 * 临时兼容头 (bring-up shim)：Nm 的独占区。
 * 等接入 小满 OS 模块后，由 OS 生成 SchM_Nm.h，请删除本文件。
 */
#ifndef SCHM_NM_H
#define SCHM_NM_H

static inline void SchM_Nm_EnterCritical(void)
{
    __asm__ volatile ("cpsid i" ::: "memory");
}

static inline void SchM_Nm_ExitCritical(void)
{
    __asm__ volatile ("cpsie i" ::: "memory");
}

#define SchM_Enter_Nm_Coordinator() SchM_Nm_EnterCritical()
#define SchM_Exit_Nm_Coordinator()  SchM_Nm_ExitCritical()
#define SchM_Enter_Nm_IRA()         SchM_Nm_EnterCritical()
#define SchM_Exit_Nm_IRA()          SchM_Nm_ExitCritical()

#endif /* SCHM_NM_H */
