/**
 * Compat: MemIf configuration (single device = Fee)
 *
 * 小满 没有配置 MemIf 模块（NvM 校验不需要它），但 NvM 源码会
 * #include "MemIf.h" -> "MemIf_Cfg.h" 并把 MemIf_xxx 调用映射到下层。
 *
 * 这里按 小满 Demo 的做法，直接用宏把 MemIf API 映射到 Fee API，
 * 只支持一个设备（DeviceIndex 被忽略）。这样不需要 MemIf.c，
 * 也不需要 MemIf 的生成配置。
 *
 * 以后如果需要多设备（Fee + Ea），再换成真正的 MemIf 模块。
 */
#ifndef MEMIF_CFG_H
#define MEMIF_CFG_H

#include "MemIf_Types.h"

#define MEMIF_DEV_ERROR_DETECT      STD_OFF
#define MEMIF_NUMBER_OF_DEVICES     1u
#define MEMIF_VERSION_INFO_API      STD_OFF

/* 下层是 Fee */
extern Std_ReturnType      Fee_Read(uint16 BlockNumber, uint16 BlockOffset, uint8* DataBufferPtr, uint16 Length);
extern Std_ReturnType      Fee_Write(uint16 BlockNumber, const uint8* DataBufferPtr);
extern Std_ReturnType      Fee_EraseImmediateBlock(uint16 BlockNumber);
extern Std_ReturnType      Fee_InvalidateBlock(uint16 BlockNumber);
extern void                Fee_Cancel(void);
extern MemIf_StatusType    Fee_GetStatus(void);
extern MemIf_JobResultType Fee_GetJobResult(void);

#define MemIf_Read(DeviceIndex, BlockNumber, BlockOffset, DataBufferPtr, Length) \
        Fee_Read(BlockNumber, BlockOffset, DataBufferPtr, Length)

#define MemIf_Write(DeviceIndex, BlockNumber, DataBufferPtr) \
        Fee_Write(BlockNumber, DataBufferPtr)

#define MemIf_EraseImmediateBlock(DeviceIndex, BlockNumber) \
        Fee_EraseImmediateBlock(BlockNumber)

#define MemIf_InvalidateBlock(DeviceIndex, BlockNumber) \
        Fee_InvalidateBlock(BlockNumber)

#define MemIf_Cancel(DeviceIndex)       Fee_Cancel()
#define MemIf_GetStatus(DeviceIndex)    Fee_GetStatus()
#define MemIf_GetJobResult(DeviceIndex) Fee_GetJobResult()

#endif /* MEMIF_CFG_H */
