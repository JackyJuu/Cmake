#cmake_minimum_required(VERSION 3.5) #设置CMake最小版本
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/../../out)

project (main_main) #设置工程名
 add_executable(main main.cpp) #生成可执行文件


# Link the static library from subproject1 using it's alias sub::lib1
# Link the header only library from subproject2 using it's alias sub::lib2
# This will cause the include directories for that target to be added to this project
#使用别名sub :: lib1从subproject1链接静态库
#使用别名sub :: lib2从subproject2链接仅标头的库
#这将导致该目标的包含目录添加到该项目中
target_link_libraries(main
    test::lib1
)
