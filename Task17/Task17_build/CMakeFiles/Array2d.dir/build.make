# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Programs\mingw64\bin\cmake.exe

# The command to remove a file.
RM = D:\Programs\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\source\repos\VSCode\Book tasks C++\Task17\Task17"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\source\repos\VSCode\Book tasks C++\Task17\Task17_build"

# Include any dependencies generated for this target.
include CMakeFiles/Array2d.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Array2d.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Array2d.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Array2d.dir/flags.make

CMakeFiles/Array2d.dir/main.cpp.obj: CMakeFiles/Array2d.dir/flags.make
CMakeFiles/Array2d.dir/main.cpp.obj: E:/source/repos/VSCode/Book\ tasks\ C++/Task17/Task17/main.cpp
CMakeFiles/Array2d.dir/main.cpp.obj: CMakeFiles/Array2d.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="E:\source\repos\VSCode\Book tasks C++\Task17\Task17_build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Array2d.dir/main.cpp.obj"
	D:\Programs\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Array2d.dir/main.cpp.obj -MF CMakeFiles\Array2d.dir\main.cpp.obj.d -o CMakeFiles\Array2d.dir\main.cpp.obj -c "E:\source\repos\VSCode\Book tasks C++\Task17\Task17\main.cpp"

CMakeFiles/Array2d.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Array2d.dir/main.cpp.i"
	D:\Programs\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\source\repos\VSCode\Book tasks C++\Task17\Task17\main.cpp" > CMakeFiles\Array2d.dir\main.cpp.i

CMakeFiles/Array2d.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Array2d.dir/main.cpp.s"
	D:\Programs\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\source\repos\VSCode\Book tasks C++\Task17\Task17\main.cpp" -o CMakeFiles\Array2d.dir\main.cpp.s

# Object files for target Array2d
Array2d_OBJECTS = \
"CMakeFiles/Array2d.dir/main.cpp.obj"

# External object files for target Array2d
Array2d_EXTERNAL_OBJECTS =

Array2d.exe: CMakeFiles/Array2d.dir/main.cpp.obj
Array2d.exe: CMakeFiles/Array2d.dir/build.make
Array2d.exe: CMakeFiles/Array2d.dir/linkLibs.rsp
Array2d.exe: CMakeFiles/Array2d.dir/objects1.rsp
Array2d.exe: CMakeFiles/Array2d.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="E:\source\repos\VSCode\Book tasks C++\Task17\Task17_build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Array2d.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Array2d.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Array2d.dir/build: Array2d.exe
.PHONY : CMakeFiles/Array2d.dir/build

CMakeFiles/Array2d.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Array2d.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Array2d.dir/clean

CMakeFiles/Array2d.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\source\repos\VSCode\Book tasks C++\Task17\Task17" "E:\source\repos\VSCode\Book tasks C++\Task17\Task17" "E:\source\repos\VSCode\Book tasks C++\Task17\Task17_build" "E:\source\repos\VSCode\Book tasks C++\Task17\Task17_build" "E:\source\repos\VSCode\Book tasks C++\Task17\Task17_build\CMakeFiles\Array2d.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Array2d.dir/depend
