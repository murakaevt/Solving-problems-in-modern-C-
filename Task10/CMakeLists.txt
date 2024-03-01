cmake_minimum_required(VERSION 3.11)

project(Task10 CXX)
set(CMAKE_CXX_STANDARD 20)

set(NUMBER number.h)
set(NUMBERS numbers.h numbers.cpp)

add_executable(task10 ${NUMBER} ${NUMBERS} main.cpp)

target_link_libraries(task10 -lstdc++)