cmake_minimum_required(VERSION 3.11)

project(TASK1 CXX)
set(CMAKE_CXX_STANDARD 17)

# добавляем цель "имя исполняемого файла" для сборки исполняемого файла
# hello.exe под Windows, hello под Linux и macOS
add_executable("task1" "task1.cpp") 

target_link_libraries(task1 -lstdc++)