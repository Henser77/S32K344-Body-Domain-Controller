<#
  check_layout.ps1 —— 链接结果自检
  目的：拦住 "本该在 RAM 的函数被放进 Flash" 这类静默失效。
  用法：powershell -ExecutionPolicy Bypass -File check_layout.ps1 -Elf S32K344_CanStack.elf
#>
param(
    [Parameter(Mandatory = $true)][string]$Elf,
    [string]$Toolchain = "D:\S32DS\S32DS\build_tools\gcc_v10.2\bin"
)

$ErrorActionPreference = "Stop"
$nm = Join-Path $Toolchain "arm-none-eabi-nm.exe"

if (-not (Test-Path $Elf)) { Write-Host "[FAIL] 找不到 ELF: $Elf"; exit 2 }
if (-not (Test-Path $nm))  { Write-Host "[FAIL] 找不到 nm: $nm"; exit 2 }

# 收集符号表
$sym = @{}
& $nm $Elf | ForEach-Object {
    if ($_ -match '^([0-9a-fA-F]{8})\s+\S\s+(\S+)$') {
        $sym[$Matches[2]] = [Convert]::ToUInt32($Matches[1], 16)
    }
}

$fail = 0
Write-Host ""
Write-Host "===== 内存布局自检: $(Split-Path $Elf -Leaf) ====="

function Check-InRange([string]$Name, [uint32]$Lo, [uint32]$Hi, [string]$Desc, [switch]$Optional) {
    if (-not $script:sym.ContainsKey($Name)) {
        if ($Optional) { Write-Host ("  [SKIP] {0,-42} 未使用" -f $Name) -ForegroundColor DarkGray; return }
        Write-Host ("  [FAIL] 符号不存在: {0}" -f $Name) -ForegroundColor Red
        $script:fail++
        return
    }
    $a = $script:sym[$Name]
    if ($a -lt $Lo -or $a -gt $Hi) {
        Write-Host ("  [FAIL] {0,-42} 0x{1:X8} 应在 {2} 区" -f $Name, $a, $Desc) -ForegroundColor Red
        $script:fail++
    } else {
        Write-Host ("  [ OK ] {0,-42} 0x{1:X8}  ({2})" -f $Name, $a, $Desc)
    }
}

function Check-NotEmpty([string]$StartSym, [string]$EndSym, [string]$Desc) {
    if (-not $script:sym.ContainsKey($StartSym) -or -not $script:sym.ContainsKey($EndSym)) {
        Write-Host ("  [FAIL] 缺少边界符号: {0} / {1}" -f $StartSym, $EndSym) -ForegroundColor Red
        $script:fail++
        return
    }
    $size = $script:sym[$EndSym] - $script:sym[$StartSym]
    if ($size -le 0) {
        Write-Host ("  [FAIL] {0} 大小为 0（段没被收集进来）" -f $Desc) -ForegroundColor Red
        $script:fail++
    } else {
        Write-Host ("  [ OK ] {0,-42} {1} 字节" -f $Desc, $size)
    }
}

# ---- 1. 必须跑在 RAM 的代码 ----
Check-InRange "Clock_Ip_CodeInRamSetFlashWaitStates" 0x20000000 0x2044FFFF "SRAM"
Check-InRange "Fls_ACEraseRamStart"                  0x20000000 0x2044FFFF "SRAM" -Optional

# ---- 2. 必须跑在 Flash 的代码 ----
Check-InRange "Reset_Handler" 0x00400000 0x007FFFFF "PFLASH"
Check-InRange "main"          0x00400000 0x007FFFFF "PFLASH"

# ---- 3. 数据段不能是空的 ----
Check-NotEmpty "__sram_bss_start"   "__sram_bss_end"   ".bss"
Check-NotEmpty "__sram_data_begin__" "__sram_data_end__" ".data"

Write-Host "======================================="
if ($fail -gt 0) {
    Write-Host ("[FAIL] 共 {0} 项检查未通过，请检查编译选项 -ffunction-sections / -fdata-sections" -f $fail) -ForegroundColor Red
    exit 1
}
Write-Host "[PASS] 布局检查全部通过" -ForegroundColor Green
exit 0

