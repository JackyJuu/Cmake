#最低Cmake版本
cmake_minimum_required(VERSION 3.5)

#设置Project工程名字
project(main)

# Add sub directories
add_subdirectory(main)
add_subdirectory(test)

# #如果没有指定则设置默认的编译方式
# if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
# #在命令行中输出message里的信息
#     message("Fuck Your Ma Why Don't Set CMAKE BUILD TYPE!!!")
#     message("Setting build type to 'Release ' as none was specified.")
# #不管哟没有设置过CMAKE_BUILD_TYPE,都强制复制为RelWithDebInfo
#     set(CMAKE_BUILD_TYPE Release  CACHE STRING "Choose the type of build," FORCE)
    
#     #当使用cmake
# endif()


#设置Project工程名字
#project(main)

# ###############################
# #创建静态库
# ###############################

# add_library(TEST_LIBRARY STATIC
#     src/test.cpp
# )
# #设置为一个目标，添加头文件路径
# target_include_directories(TEST_LIBRARY
#     PUBLIC 
#     ${PROJECT_SOURCE_DIR}/include
# )

# #创建一个变量，名叫SOURCE，包含所有的cpp文件
# set(SOURCE
#     src/main.cpp
# #    src/test.cpp
# )

# # 生成可执行文件
# # 第一个是项目名称，第二个是要编译的执行文件
# add_executable(main ${SOURCE})

# #为可执行文件添加的私有编译定义，宏定义
# target_compile_definitions(main
#     PRIVATE HappyFirst
# )

# target_link_libraries(main
#     PRIVATE 
#     TEST_LIBRARY
# )

# #设置这个可执行文件hello_test需要包含的库的路径
# #target_include_directories(main
# #PRIVATE
# #${PROJECT_SOURCE_DIR})

# #PROJECT_SOURCE_DIR指工程顶层目录
# #PROJECT_Binary_DIR指编译目录
# #PRIVATE指定了库的范围，下一节讲


