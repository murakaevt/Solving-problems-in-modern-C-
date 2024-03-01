cmake_minimum_required(VERSION 3.11)

project(Task9 CXX)
set(CMAKE_CXX_STANDARD 20)

set(PRIME_NUMBERS prime_factors_number.h prime_factors_number.cpp)
set(SIMPLE_NUMBERS simple_numbers.h simple_numbers.cpp)

add_executable(task9 main.cpp ${PRIME_NUMBERS} ${SIMPLE_NUMBERS})

target_link_libraries(task9 -lstdc++)