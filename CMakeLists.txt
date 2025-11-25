cmake_minimum_required(VERSION 3.16)
project(CppPrimerPlusPractice CXX)

## 0) 決定要編譯哪個程式碼檔案（可用變數或其他方式）
set(ENTRY_CODE "ch06/01.cpp" CACHE STRING "Entry source file")

# 1) 語言標準（專案級）
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 2) 產生 compile_commands.json（IDE/工具友好）
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 3) 統一可執行檔輸出到 <repo>/bin
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

# 4) 定義 target（可執行檔/函式庫）
add_executable(main "${ENTRY_CODE}")

# 5) target 的編譯選項/定義/包含路徑（目標導向）
target_compile_options(main PRIVATE -Wall -Wextra -Wpedantic)
target_compile_definitions(main PRIVATE APP_VERSION="0.1.0")
target_include_directories(main PRIVATE "${CMAKE_SOURCE_DIR}/include")