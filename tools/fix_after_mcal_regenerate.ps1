# Remove stale EB MCAL MemAcc outputs after EB regeneration.
# We use the MemAcc module provided by the BSW package (MemAcc_62, Config\BSW\MemAcc_*),
# so the EB-generated MCAL MemAcc files must not be compiled.
# Run this script after every EB generation, before building in S32DS.

$root = Split-Path -Parent $PSScriptRoot
$targets = @(
    "$root\Config\Mcal\src\MemAcc_Cfg.c",
    "$root\Config\Mcal\src\MemAcc_PBcfg.c",
    "$root\Config\Mcal\include\MemAcc_Cfg.h",
    "$root\Config\Mcal\include\MemAcc_CfgDefines.h",
    "$root\Config\Mcal\include\MemAcc_PBcfg.h"
)

foreach ($f in $targets) {
    if (Test-Path -LiteralPath $f) {
        Rename-Item -LiteralPath $f -NewName ((Split-Path $f -Leaf) + '.bak') -Force
        Write-Host "[renamed] $f"
    }
}

Write-Host 'Done. Now regenerate the build (Clean) in S32DS.'
