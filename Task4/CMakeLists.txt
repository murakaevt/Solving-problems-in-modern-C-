cmake_minimum_required(VERSION 3.11)

project(Task4 CXX)
set(CMAKE_CXX_STANDARD 20)

add_executable(task4 Task4.cpp)

target_link_libraries(task4 -lstdc++)