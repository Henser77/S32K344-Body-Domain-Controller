/**
 * Compat: MemAcc 独占区（bring-up shim）
 * 上 OS 后由 OS 生成的 SchM_MemAcc.h 替代。
 */
#ifndef SCHM_MEMACC_H
#define SCHM_MEMACC_H

static inline void SchM_MemAcc_EnterCritical(void)
{
    __asm__ volatile ("cpsid i" ::: "memory");
}

static inline void SchM_MemAcc_ExitCritical(void)
{
    __asm__ volatile ("cpsie i" ::: "memory");
}

#define SchM_Enter_MemAcc_Queue() SchM_MemAcc_EnterCritical()
#define SchM_Exit_MemAcc_Queue()  SchM_MemAcc_ExitCritical()

#endif /* SCHM_MEMACC_H */
