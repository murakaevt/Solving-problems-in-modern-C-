cmake_minimum_required(VERSION 3.11)

project(Pi_Nilakantha CXX)
set(CMAKE_CXX_STANDARD 20)

# Эта команда найдёт собранный нами пакет Protobuf.
# REQUIRED означает, что библиотека обязательна.
# Путь для поиска укажем в параметрах команды cmake.
find_package(Protobuf REQUIRED)
find_package(Threads REQUIRED)

# Команда вызова protoc. 
# Ей переданы названиия переменных, в которые будут сохранены 
# списки сгенерированных файлов, а также сам proto-файл.
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS pi_number.proto nilakantha.proto)

set(PROTO pi_proto.cpp pi_searcher.h pi_searcher.cpp input_reader.h input_reader.cpp serialization.h serialization.cpp)

add_executable(Pi_proto ${PROTO} ${PROTO_SRCS} ${PROTO_HDRS})

# find_package определила переменную Protobuf_INCLUDE_DIRS,
# которую нужно использовать как include-путь.
# Также нужно добавить как include-путь директорию, куда
# protoc положит сгенерированные файлы.
target_include_directories(Pi_proto PUBLIC ${Protobuf_INCLUDE_DIRS})
target_include_directories(Pi_proto PUBLIC ${CMAKE_CURRENT_BINARY_DIR})

# Также find_package определила Protobuf_LIBRARY и Protobuf_LIBRARY_DEBUG.
# Исправим некорректное значение Protobuf_LIBRARY_DEBUG операцией замены:
string(REPLACE "protobuf.lib" "protobufd.lib" "Protobuf_LIBRARY_DEBUG" "${Protobuf_LIBRARY_DEBUG}")
string(REPLACE "protobuf.a" "protobufd.a" "Protobuf_LIBRARY_DEBUG" "${Protobuf_LIBRARY_DEBUG}")

target_link_libraries(Pi_proto $<IF:$<CONFIG:Debug>,${Protobuf_LIBRARY_DEBUG},${Protobuf_LIBRARY}> Threads::Threads)
target_link_libraries(Pi_proto -lstdc++)