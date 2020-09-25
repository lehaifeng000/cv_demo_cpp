#CMakeLists.txt
cmake_minimum_required(VERSION 2.8.0)
project(t1)
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) 

add_executable(hello main.cpp)

target_link_libraries( hello ${OpenCV_LIBS} )