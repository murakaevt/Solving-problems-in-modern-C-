cmake_minimum_required(VERSION 3.11)

project(Task5 CXX)
set(CMAKE_CXX_STANDARD 20)

add_executable(task5 Task5.cpp)

target_link_libraries(task5 -lstdc++)