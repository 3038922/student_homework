# CMake 最低版本号要求

cmake_minimum_required (VERSION 2.8)
#指定编译方式
set (CMAKE_GENERATOR "Ninja")
#指定编译器
#SET(CMAKE_C_COMPILER "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/bin/Hostx86/x86/cl.exe")
#SET(CMAKE_CXX_COMPILER "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/bin/Hostx86/x86/cl.exe")
# 项目信息

project (Demo2)

# 查找当前目录下的所有源文件

# 并将名称保存到 DIR_SRCS 变量

aux_source_directory(./chenlaoshi/src DIR_SRCS)

# 指定生成目标

add_executable(Demo ${DIR_SRCS})