# cmake_minimum_required(VERSION 3.5) #设置CMake最小版本
project (main_test) #设置工程名
#add_executable(main_test main.cpp) #生成可执行文件

#添加一个library
add_library(main_test test.cpp)
add_library(test::lib1 ALIAS main_test)

target_include_directories(main_test
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)
