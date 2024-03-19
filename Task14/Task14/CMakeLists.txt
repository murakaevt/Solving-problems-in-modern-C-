cmake_minimum_required(VERSION 3.11)

project(ISBN10 CXX)
set(CMAKE_CXX_STANDARD 20)

set(INSPECTOR inspectorISBN.h inspectorISBN.cpp)

add_executable(inspectorISBN ${INSPECTOR} main.cpp)

target_link_libraries(inspectorISBN -lstdc++)