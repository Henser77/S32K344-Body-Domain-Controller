/**
 * Compat: Dem extended-data client stubs
 *
 * 小满 Dem 的 Dem_Client.h 把
 *   Dem_ClientGetSizeOfExtendedDataRecordSelection()
 *   Dem_ClientGetNextExtendedDataRecord()
 * 放在 `#if (DEM_EXTENDED_DATA_CLASS_NUMBER > 0u)` 里面定义，
 * 但 Dem_APIImplementation.h 会无条件调用它们。
 *
 * 我们没配置扩展数据（NUMBER = 0），链接就会报 undefined reference。
 * 这里在 NUMBER == 0 时提供外部定义，返回 DEM_NO_SUCH_ELEMENT。
 * 将来若配置了扩展数据类，本文件自动失效（不参与编译逻辑）。
 */
#include "Std_Types.h"
#include "Dem_Types.h"
#include "Dem_Lcfg.h"

#if (DEM_EXTENDED_DATA_CLASS_NUMBER == 0u)

Std_ReturnType Dem_ClientGetSizeOfExtendedDataRecordSelection(uint8 ClientId,
                                                              uint32* SizeOfExtendedDataRecord)
{
    (void)ClientId;
    if (NULL_PTR != SizeOfExtendedDataRecord)
    {
        *SizeOfExtendedDataRecord = 0u;
    }
    return (Std_ReturnType)DEM_NO_SUCH_ELEMENT;
}

Std_ReturnType Dem_ClientGetNextExtendedDataRecord(uint8 ClientId,
                                                   uint8* DestBuffer,
                                                   uint16* BufSize)
{
    (void)ClientId;
    (void)DestBuffer;
    if (NULL_PTR != BufSize)
    {
        *BufSize = 0u;
    }
    return (Std_ReturnType)DEM_NO_SUCH_ELEMENT;
}

#endif /* DEM_EXTENDED_DATA_CLASS_NUMBER == 0u */
