#!/usr/bin/env bash
set -euo pipefail

# 用法示例：
#   ./run.sh                 # 使用 CMakeLists.txt 裡的預設 ENTRY_CODE（ch06/01.cpp）
#   ./run.sh ch07/02.cpp     # 改成編譯 ch07/02.cpp

# 第 1 個參數：要編譯的程式碼檔案（相對於專案根目錄）
ENTRY_CODE_ARG=""
if [[ $# -ge 1 ]]; then
  ENTRY_CODE="$1"
  ENTRY_CODE_ARG="-DENTRY_CODE=$ENTRY_CODE"
  echo "Using ENTRY_CODE = $ENTRY_CODE"
else
  echo "Using default ENTRY_CODE from CMakeLists.txt"
fi

# 可調整參數
BUILD_DIR="${BUILD_DIR:-build}"
BIN_DIR="${BIN_DIR:-bin}"
CONFIG="${CONFIG:-Release}"   # 單組態生成器可忽略，VS/NMake/Ninja Multi-Config 需要
GEN="${GENERATOR:-}"          # 例如：-G Ninja 或 -G "Unix Makefiles"

# 若已安裝 ninja，預設使用 Ninja（較穩、較快）
if command -v ninja >/dev/null 2>&1 && [[ -z "${GEN}" ]]; then
  GEN='-G Ninja'
fi

echo "==> Configure"
cmake -S . -B "$BUILD_DIR" $GEN \
  -DCMAKE_BUILD_TYPE="$CONFIG" \
  -DCMAKE_RUNTIME_OUTPUT_DIRECTORY="$PWD/$BIN_DIR" \
  $ENTRY_CODE_ARG

echo "==> Build"
cmake --build "$BUILD_DIR" --config "$CONFIG" -j

# 執行路徑說明：
# 若你有 set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)，就會在 ./bin/main
# 否則多組態生成器（VS/NMake Multi-Config）路徑常是 build/Release/main(.exe)
APP="./$BIN_DIR/main"
[[ -x "$APP" ]] || APP="$BUILD_DIR/$CONFIG/main"
[[ -x "$APP" ]] || APP="$BUILD_DIR/main"

echo "==> Run: $APP"
"$APP"

echo "==> Clean (build & bin)"
rm -rf "$BUILD_DIR" "$BIN_DIR"
echo "Done."
