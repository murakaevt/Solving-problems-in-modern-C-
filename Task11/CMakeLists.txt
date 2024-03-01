cmake_minimum_required(VERSION 3.11)

project(Task11 CXX)
set(CMAKE_CXX_STANDARD 20)

set(READER reader.h reader.cpp)

add_executable(task11 ${READER} main.cpp)

target_link_libraries(task11 -lstdc++)