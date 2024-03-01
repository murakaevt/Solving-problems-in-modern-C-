cmake_minimum_required(VERSION 3.11)

project(Task3 CXX)
set(CMAKE_CXX_STANDARD 20)

add_executable(task3 task3.cpp)

target_link_libraries(task3 -lstdc++)
