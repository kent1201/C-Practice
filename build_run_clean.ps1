$ErrorActionPreference = "Stop"

$BUILD_DIR = $env:BUILD_DIR; if (-not $BUILD_DIR) { $BUILD_DIR = "build" }
$BIN_DIR   = $env:BIN_DIR;   if (-not $BIN_DIR)   { $BIN_DIR   = "bin" }
$CONFIG    = $env:CONFIG;    if (-not $CONFIG)    { $CONFIG    = "Release" }
$GEN       = $env:GENERATOR  # 例如 -G "Ninja" 或 -G "NMake Makefiles"

# 建議裝 Ninja；若用 NMake，請從「x64 Native Tools Command Prompt for VS」啟動或先設好環境變數
Write-Host "==> Configure"
cmake -S . -B $BUILD_DIR $GEN -DCMAKE_BUILD_TYPE=$CONFIG -DCMAKE_RUNTIME_OUTPUT_DIRECTORY="$PWD\$BIN_DIR"

Write-Host "==> Build"
cmake --build $BUILD_DIR --config $CONFIG -j

# 推斷可執行檔位置
$App = Join-Path $PWD "$BIN_DIR/main.exe"
if (-not (Test-Path $App)) { $App = Join-Path $PWD "$BUILD_DIR/$CONFIG/main.exe" }
if (-not (Test-Path $App)) { $App = Join-Path $PWD "$BUILD_DIR/main.exe" }

Write-Host "==> Run: $App"
& $App

Write-Host "==> Clean (build & bin)"
Remove-Item -Recurse -Force $BUILD_DIR,$BIN_DIR -ErrorAction SilentlyContinue
Write-Host "Done."
