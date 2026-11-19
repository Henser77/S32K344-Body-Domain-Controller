# Regenerate Eclipse-style subdir.mk for a source folder.
# Usage: powershell -File gen_subdir_mk.ps1 <projectRoot> <sourceRelPath> <buildRelPath> <argsTemplate>
param(
    [string]$Root,
    [string]$SrcRel,
    [string]$BuildRel,
    [string]$ArgsTemplate = 'CanIf_Cfg'
)

$srcDir = Join-Path $Root ($SrcRel -replace '/', '\')
$outDir = Join-Path $Root ('Debug_FLASH\' + ($BuildRel -replace '/', '\'))
if (-not (Test-Path $outDir)) { New-Item -ItemType Directory -Force -Path $outDir | Out-Null }

$names = Get-ChildItem -LiteralPath $srcDir -File -Filter *.c | ForEach-Object { $_.BaseName } | Sort-Object
foreach ($n in $names) {
    $ap = Join-Path $outDir ($n + '.args')
    if (-not (Test-Path $ap)) {
        Copy-Item (Join-Path $outDir ($ArgsTemplate + '.args')) $ap -Force -ErrorAction SilentlyContinue
    }
}

$nl = "`r`n"
$sb = New-Object System.Text.StringBuilder
[void]$sb.Append('C_SRCS += \' + $nl)
foreach ($n in $names) { [void]$sb.Append('../' + $SrcRel + '/' + $n + '.c \' + $nl) }
[void]$sb.Append($nl + 'OBJS += \' + $nl)
foreach ($n in $names) { [void]$sb.Append('./' + $SrcRel + '/' + $n + '.o \' + $nl) }
[void]$sb.Append($nl + 'C_DEPS += \' + $nl)
foreach ($n in $names) { [void]$sb.Append('./' + $SrcRel + '/' + $n + '.d \' + $nl) }
[void]$sb.Append($nl)
foreach ($n in $names) {
    [void]$sb.Append($SrcRel + '/' + $n + '.o: ../' + $SrcRel + '/' + $n + '.c' + $nl)
    [void]$sb.Append("`tarm-none-eabi-gcc `"@" + $SrcRel + '/' + $n + ".args`" -MMD -MP -MF`"`$(@:%.o=%.d)`" -MT`"`$@`" -o `"`$@`" `"`$<`"" + $nl + $nl)
}

[System.IO.File]::WriteAllText((Join-Path $outDir 'subdir.mk'), $sb.ToString(), (New-Object System.Text.UTF8Encoding($false)))
Write-Host ("[ok] " + $SrcRel + " : " + $names.Count + " sources")
