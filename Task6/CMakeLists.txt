cmake_minimum_required(VERSION 3.11)

project(Task6 CXX)
set(CMAKE_CXX_STANDARD 20)

add_executable(task6 Task6.cpp)

target_link_libraries(task6 -lstdc++)