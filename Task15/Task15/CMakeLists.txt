cmake_minimum_required(VERSION 3.11)

project(IPv4 CXX)
set(CMAKE_CXX_STANDARD 20)

set(IPV4 ipv4.h ipv4.cpp)

add_executable(IPv4 ${IPV4} main.cpp)

if(CMAKE_SYSTEM_NAME MATCHES "^MINGW")
    set(SYSTEM_LIBS -lstdc++)
else()
    set(SYSTEM_LIBS)
endif()

target_link_libraries(IPv4 ${SYSTEM_LIBS})