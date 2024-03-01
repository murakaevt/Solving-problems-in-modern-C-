cmake_minimum_required(VERSION 3.11)

project(Task2 CXX)
set(CMAKE_CXX_STANDARD 17)

add_executable(task2 Task2.cpp)

target_link_libraries(task2 -lstdc++)