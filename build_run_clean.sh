#!/usr/bin/env bash
set -euo pipefail

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
cmake -S . -B "$BUILD_DIR" $GEN -DCMAKE_BUILD_TYPE="$CONFIG" \
  -DCMAKE_RUNTIME_OUTPUT_DIRECTORY="$PWD/$BIN_DIR"

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
