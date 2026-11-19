/**
 * 临时兼容头 (bring-up shim)：用 FreeRTOS 充当 AUTOSAR OS。
 * 提供 MCAL / BSW 需要的 OS 类型与启动接口；真正接入 AUTOSAR OS 后删除本文件。
 */
#ifndef OS_H
#define OS_H

#include "Std_Types.h"

typedef uint8  AppModeType;
typedef uint8  ApplicationType;
typedef uint8  ResourceType;
typedef uint32 CoreIdType;

#define OSDEFAULTAPPMODE     ((AppModeType)0U)
#define RES_SCHEDULER        ((ResourceType)0U)
#define RES_SCHEDULER_CORE0  ((ResourceType)0U)

/* 启动/关闭 OS */
extern void StartOS(AppModeType Mode);
extern void ShutdownOS(StatusType Error);

/* 临界区 */
extern void DisableAllInterrupts(void);
extern void EnableAllInterrupts(void);

/* 单核：返回 0 */
extern CoreIdType GetCoreID(void);

/* 中断服务程序声明（MCAL 的 ISR 宏约定） */
#ifndef ISR
#define ISR(IsrName)  void IsrName(void)
#endif

#define SuspendAllInterrupts()  DisableAllInterrupts()
#define ResumeAllInterrupts()   EnableAllInterrupts()

#endif /* OS_H */
