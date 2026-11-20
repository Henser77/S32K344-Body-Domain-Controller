# Post-regeneration fixes for S32K344_CanStack
# Run after copying generated config from ORIENTAIS:
#   powershell -ExecutionPolicy Bypass -File tools\fix_after_regenerate.ps1
#
# 1) Config/BSW/ComStack_Cfg.h redefines PduLengthType (uint16) which conflicts
#    with MCAL ComStackTypes.h (uint32) -> rename it out of the build.
# 2) Config/BSW/Dcm_Cfg.c may contain a stray "u," for DemClientRef when no
#    Dem client is configured (generator bug) -> replace with NULL_PTR.

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$cfg  = Join-Path $root 'Config\BSW'

$cs = Join-Path $cfg 'ComStack_Cfg.h'
if (Test-Path $cs) {
    $bak = Join-Path $cfg 'ComStack_Cfg.h.bak'
    if (Test-Path $bak) { Remove-Item -LiteralPath $bak -Force }
    Rename-Item -LiteralPath $cs -NewName 'ComStack_Cfg.h.bak'
    Write-Host '[OK] ComStack_Cfg.h renamed to .bak'
} else {
    Write-Host '[SKIP] ComStack_Cfg.h not present'
}

$dc = Join-Path $cfg 'Dcm_Cfg.c'
if (Test-Path $dc) {
    $t = [System.IO.File]::ReadAllText($dc)
    if ($t -match '(?m)^\s*u,\s*/\* DemClientRef \*/') {
        $t = [regex]::Replace($t, '(?m)^(\s*)u,(\s*/\* DemClientRef \*/)', '$1NULL_PTR,$2')
        [System.IO.File]::WriteAllText($dc, $t, (New-Object System.Text.UTF8Encoding($false)))
        Write-Host '[OK] Dcm_Cfg.c: u -> NULL_PTR'
    } else {
        Write-Host '[SKIP] Dcm_Cfg.c needs no change'
    }
} else {
    Write-Host '[SKIP] Dcm_Cfg.c not present'
}

Write-Host 'Done. Rebuild now.'

# ---------------------------------------------------------------------------
# 3) Re-apply Dcm_Callout.c USERBLOCK bodies (regeneration overwrites them).
#    Logic lives in Static_Code\BSW\Compat\Dcm_CompatData.c
# ---------------------------------------------------------------------------
$callout = Join-Path $cfg 'Dcm_Callout.c'
if (Test-Path $callout) {
    $t = [System.IO.File]::ReadAllText($callout)
    $bodies = @{
        'Dcm_GetSeed_Level1' = @"
    extern void DcmCompat_GetSeed(uint8* Seed);
    DCM_UNUSED(OpStatus);
    DCM_UNUSED(ErrorCode);
    DcmCompat_GetSeed(Seed);
    return E_OK;

"@
        'Dcm_CompareKey_Level1' = @"
    extern boolean DcmCompat_CheckKey(const uint8* Key);
    DCM_UNUSED(OpStatus);
    if (TRUE == DcmCompat_CheckKey(Key))
    {
        return E_OK;
    }
    if (NULL_PTR != ErrorCode)
    {
        *ErrorCode = (Dcm_NegativeResponseCodeType)0x35U;
    }
    return E_NOT_OK;

"@
        'Dcm_ReadData_Vin' = @"
    extern Std_ReturnType NvMVin_Read(uint8* Data, uint8 OpStatus);
    return NvMVin_Read(Data, (uint8)OpStatus);

"@
        'Dcm_WriteData_Vin' = @"
    extern Std_ReturnType NvMVin_Write(const uint8* Data, uint8 OpStatus);
    DCM_UNUSED(ErrorCode);
    return NvMVin_Write(Data, (uint8)OpStatus);

"@
    }
    $count = 0
    foreach ($k in $bodies.Keys) {
        $pat = '(?s)(<USERBLOCK ' + [regex]::Escape($k) + '>\s*\r?\n\s*\*/\s*\r?\n)(.*?)(\s*/\*\* DO NOT CHANGE THIS COMMENT!)'
        if ([regex]::IsMatch($t, $pat)) {
            $body = $bodies[$k]
            $t = [regex]::Replace($t, $pat, { param($m) $m.Groups[1].Value + $body + $m.Groups[3].Value })
            $count++
        }
    }
    if ($count -gt 0) {
        [System.IO.File]::WriteAllText($callout, $t, (New-Object System.Text.UTF8Encoding($false)))
        Write-Host "[OK] Dcm_Callout.c USERBLOCKs re-applied ($count)"
    }
}

# ---------------------------------------------------------------------------
# 4) NvM_Cfg.h must see the application RAM block buffers (g_NvMVinBuffer ...)
#    because the blocks use explicit NvMRamBlockDataAddress.
# ---------------------------------------------------------------------------
$nvmcfg = Join-Path $cfg 'NvM_Cfg.h'
if (Test-Path $nvmcfg) {
    $t = [System.IO.File]::ReadAllText($nvmcfg)
    if ($t -notmatch 'NvM_UserBuffer\.h') {
        $idx = $t.LastIndexOf('#endif')
        if ($idx -lt 0) {
            $t = $t + "`r`n" + '#include "NvM_UserBuffer.h"' + "`r`n"
        } else {
            $t = $t.Substring(0, $idx) + '#include "NvM_UserBuffer.h"' + "`r`n" + $t.Substring($idx)
        }
        [System.IO.File]::WriteAllText($nvmcfg, $t, (New-Object System.Text.UTF8Encoding($false)))
        Write-Host '[OK] NvM_Cfg.h includes NvM_UserBuffer.h'
    } else {
        Write-Host '[SKIP] NvM_Cfg.h already includes NvM_UserBuffer.h'
    }
}
# --- EcuM: force driver init lists ON (callouts are user code) ---
$ecumCfg = Join-Path $PSScriptRoot "..\Config\BSW\EcuM_Cfg.h"
if (Test-Path $ecumCfg) {
    $c = Get-Content $ecumCfg -Raw
    $c = $c -replace '#define ECUM_DRIVER_INIT_LIST_ZERO STD_OFF', '#define ECUM_DRIVER_INIT_LIST_ZERO STD_ON'
    $c = $c -replace '#define ECUM_DRIVER_INIT_LIST_ONE STD_OFF',  '#define ECUM_DRIVER_INIT_LIST_ONE STD_ON'
    Set-Content -Path $ecumCfg -Value $c -NoNewline
    Write-Host "[OK] EcuM driver init lists enabled"
}
# --- Disable 小满 Det source (DET is provided by Compat/Det_Stub.c) ---
$detSrc = Join-Path $PSScriptRoot "..\Static_Code\BSW\Det\src\Det.c"
if (Test-Path $detSrc) { Rename-Item $detSrc "Det.c.disabled" -Force; Write-Host "[OK] Det.c disabled" }

# --- Com: generator omits IpduGroupRefPtr initializer when a group exists ---
$comPb = Join-Path $cfg 'Com_PBcfg.c'
if (Test-Path $comPb) {
    $c = [System.IO.File]::ReadAllText($comPb)
    if (($c -match 'Com_MainFunctionTxRange\[0\],') -and ($c -notmatch 'IpduGroupRefPtr')) {
        $c = $c -replace '(Com_MainFunctionTxRange\[0\],\s*/\* MainFunctionTxRangePtr \*/\r?\n)', "`$1    &Com_IPduGroup,               /* IpduGroupRefPtr */`r`n"
        [System.IO.File]::WriteAllText($comPb, $c, (New-Object System.Text.UTF8Encoding($false)))
        Write-Host '[OK] Com_PBcfg.c: IpduGroupRefPtr inserted'
    }
}

# --- Dcm: generator emits ComMChannel_Can0, Rte stub uses CAN0 ---
$dcmCfg = Join-Path $cfg 'Dcm_Cfg.c'
if (Test-Path $dcmCfg) {
    $c = [System.IO.File]::ReadAllText($dcmCfg)
    if ($c -match 'ComMChannel_Can0_communicationControl') {
        $c = $c.Replace('ComMChannel_Can0_communicationControl','ComMChannel_CAN0_communicationControl')
        [System.IO.File]::WriteAllText($dcmCfg, $c, (New-Object System.Text.UTF8Encoding($false)))
        Write-Host '[OK] Dcm_Cfg.c: ComMChannel_Can0 -> CAN0'
    }
}

# --- EcuM_PBcfg.c needs ComM/Tm declarations ---
$ecumPb = Join-Path $cfg 'EcuM_PBcfg.c'
if (Test-Path $ecumPb) {
    $c = [System.IO.File]::ReadAllText($ecumPb)
    if ($c -notmatch 'ComM\.h') {
        $c = $c.Replace('#include "Rte_Main.h"', "#include `"Rte_Main.h`"`r`n#include `"ComM.h`"`r`n#include `"Tm_Cfg.h`"")
        [System.IO.File]::WriteAllText($ecumPb, $c, (New-Object System.Text.UTF8Encoding($false)))
        Write-Host '[OK] EcuM_PBcfg.c: ComM.h/Tm_Cfg.h included'
    }
}

# --- EcuM_Callout_Stubs.c: remove duplicated section stop after DriverInitOne ---
$stub = Join-Path $cfg 'EcuM_Callout_Stubs.c'
if (Test-Path $stub) {
    $c = [System.IO.File]::ReadAllText($stub)
    $dup = "#endif /* ECUM_DRIVER_INIT_LIST_ONE == STD_ON */`r`n`r`n#define ECUM_STOP_SEC_CALLOUT_CODE`r`n#include `"EcuM_MemMap.h`"`r`n"
    if ($c.Contains($dup)) {
        $c = $c.Replace($dup, "#endif /* ECUM_DRIVER_INIT_LIST_ONE == STD_ON */`r`n")
        [System.IO.File]::WriteAllText($stub, $c, (New-Object System.Text.UTF8Encoding($false)))
        Write-Host '[OK] EcuM_Callout_Stubs.c: duplicate STOP removed'
    }
}
# --- Com: ensure first-reception timeout for business Rx IPdus ---
$comPb = Join-Path $cfg 'Com_PBcfg.c'
if (Test-Path $comPb) {
    $c = [System.IO.File]::ReadAllText($comPb)
    foreach ($name in @('ComIPdu_Rx_PT_Status_Can1_0x200','ComIPdu_Rx_PT_Torque_Can1_0x210','ComIPdu_Rx_Body_Status_Can2_0x100','ComIPdu_Rx_Light_Cmd_Can2_0x110')) {
        $pat = '(?s)(/\* \d+ ' + [regex]::Escape($name) + ' \*/.*?)0u,(\s*/\* RxIPduDMFirstTimeout \*/)'
        $c = [regex]::Replace($c, $pat, '${1}50u,${2}', 1)
    }
    [System.IO.File]::WriteAllText($comPb, $c, (New-Object System.Text.UTF8Encoding($false)))
    Write-Host '[OK] Com_PBcfg.c: Rx first timeout ensured (50 ticks)'
}