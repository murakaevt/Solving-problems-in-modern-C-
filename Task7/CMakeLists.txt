cmake_minimum_required(VERSION 3.11)

project(Task7 CXX)
set(CMAKE_CXX_STANDARD 20)

add_executable(task7 Task7.cpp)
add_executable(task7paral task7paral.cpp)

target_link_libraries(task7 -lstdc++)
target_link_libraries(task7paral -lstdc++)