# CMakeList.txt: function 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 如果支持，请为 MSVC 编译器启用热重载。
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("function")

# 将源代码添加到此项目的可执行文件。
add_executable (function "function1.cpp" "header.h" "T1.cpp" "utils.cpp" "T2.cpp" "T3.cpp" "T4.cpp"
        T5.cpp
        main.cpp
        function2.cpp
        T1a.cpp
        T2a.cpp
        T3a.cpp
        T4a.cpp
        T5a.cpp
        T6a.cpp
        T7a.cpp)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET function PROPERTY CXX_STANDARD 20)
endif()
