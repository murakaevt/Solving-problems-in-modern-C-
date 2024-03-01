cmake_minimum_required(VERSION 3.11)

project(Tast12 CXX)
set(CMAKE_CXX_STANDARD 20)

add_executable(task12_serial_version main.cpp)
add_executable(task12_parallel_version main_parallel_version.cpp)

target_link_libraries(task12_serial_version -lstdc++)
target_link_libraries(task12_parallel_version -lstdc++)