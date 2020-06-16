# CMakeList.txt: lsn_2_example 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

#设置头文件的查找目录
include_directories("D:/develop/Java/jdk1.8.0_77/include")
include_directories("D:/develop/Java/jdk1.8.0_77/include/win32")

add_library(lsn2 SHARED lsn_2_example.cpp)

# 将源代码添加到此项目的可执行文件。
#add_executable (lsn2example "lsn_2_example.cpp" "lsn_2_example.h")

# TODO: 如有需要，请添加测试并安装目标。
