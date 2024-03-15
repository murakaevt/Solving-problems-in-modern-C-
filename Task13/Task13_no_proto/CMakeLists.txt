cmake_minimum_required(VERSION 3.11)

project(Pi_Nilakantha CXX)
set(CMAKE_CXX_STANDARD 20)

set(NO_PROTO pi_no_proto.cpp pi_searcher.h pi_searcher.cpp input_reader.h input_reader.cpp)

add_executable(Pi_no_proto ${NO_PROTO})

target_link_libraries(Pi_no_proto -lstdc++)