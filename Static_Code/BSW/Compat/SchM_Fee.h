/**
 * Compat: Fee 独占区（bring-up shim）
 * 上 OS 后由 OS 生成的 SchM_Fee.h 替代。
 */
#ifndef SCHM_FEE_H
#define SCHM_FEE_H

static inline void SchM_Fee_EnterCritical(void)
{
    __asm__ volatile ("cpsid i" ::: "memory");
}

static inline void SchM_Fee_ExitCritical(void)
{
    __asm__ volatile ("cpsie i" ::: "memory");
}

#endif /* SCHM_FEE_H */
