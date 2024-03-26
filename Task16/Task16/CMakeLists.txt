cmake_minimum_required(VERSION 3.11)

project(IPv4 CXX)
set(CMAKE_CXX_STANDARD 20)

find_package(Protobuf REQUIRED)
find_package(Threads REQUIRED)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ipv4.proto)

set(IPV4 ipv4.h ipv4.cpp)
set(SERIALIZATION serialization.h serialization.cpp)

add_executable(IPv4 ${IPV4} ${SERIALIZATION} ${PROTO_SRCS} ${PROTO_HDRS} main.cpp)

target_include_directories(IPv4 PUBLIC ${Protobuf_INCLUDE_DIRS})
target_include_directories(IPv4 PUBLIC ${CMAKE_CURRENT_BINARY_DIR})

string(REPLACE "protobuf.lib" "protobufd.lib" "Protobuf_LIBRARY_DEBUG" "${Protobuf_LIBRARY_DEBUG}")
string(REPLACE "protobuf.a" "protobufd.a" "Protobuf_LIBRARY_DEBUG" "${Protobuf_LIBRARY_DEBUG}")

if(CMAKE_SYSTEM_NAME MATCHES "^MINGW")
    set(SYSTEM_LIBS -lstdc++)
else()
    set(SYSTEM_LIBS)
endif()

target_link_libraries(IPv4 $<IF:$<CONFIG:Debug>,${Protobuf_LIBRARY_DEBUG},${Protobuf_LIBRARY}> Threads::Threads)
target_link_libraries(IPv4 ${SYSTEM_LIBS})