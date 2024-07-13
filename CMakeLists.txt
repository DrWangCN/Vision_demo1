cmake_minimum_required(VERSION 3.12)

project(demo3)

# 查找OpenCV库
find_package(OpenCV REQUIRED)

# 包含OpenCV头文件目录
include_directories(${OpenCV_INCLUDE_DIRS})

# 添加可执行文件
add_executable(demo3 display_video.cpp)

# 将OpenCV库链接到你的可执行文件
target_link_libraries(demo3 ${OpenCV_LIBS})

