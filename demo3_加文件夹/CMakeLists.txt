#最低Cmake版本
cmake_minimum_required(VERSION 3.5)

#设置Project工程名字
project(main)

#创建一个变量，名叫SOURCE，包含所有的cpp文件
set(SOURCE
    src/main.cpp
    src/test.cpp
)

#生成可执行文件
#第一个是项目名称，第二个是要编译的执行文件
add_executable(main ${SOURCE})

#设置这个可执行文件hello_test需要包含的库的路径
target_include_directories(main
PRIVATE
${PROJECT_SOURCE_DIR})

#PROJECT_SOURCE_DIR指工程顶层目录
#PROJECT_Binary_DIR指编译目录
#PRIVATE指定了库的范围，下一节讲


