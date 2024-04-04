cmake_minimum_required(VERSION 3.11)

project(Array2d CXX)
set(CMAKE_CXX_STANDARD 20)

add_executable(Array2d array.h main.cpp)

if(CMAKE_SYSTEM_NAME MATCHES "^MINGW")
set(SYSTEM_LIBS -lstdc++)
else()
set(SYSTEM_LIBS)
endif()

target_link_libraries(Array2d ${SYSTEM_LIBS})