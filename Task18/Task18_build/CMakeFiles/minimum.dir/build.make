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
CMAKE_SOURCE_DIR = "E:\source\repos\VSCode\Book tasks C++\Task18\Task18"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\source\repos\VSCode\Book tasks C++\Task18\Task18_build"

# Include any dependencies generated for this target.
include CMakeFiles/minimum.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/minimum.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/minimum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/minimum.dir/flags.make

CMakeFiles/minimum.dir/main.cpp.obj: CMakeFiles/minimum.dir/flags.make
CMakeFiles/minimum.dir/main.cpp.obj: E:/source/repos/VSCode/Book\ tasks\ C++/Task18/Task18/main.cpp
CMakeFiles/minimum.dir/main.cpp.obj: CMakeFiles/minimum.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="E:\source\repos\VSCode\Book tasks C++\Task18\Task18_build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/minimum.dir/main.cpp.obj"
	D:\Programs\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/minimum.dir/main.cpp.obj -MF CMakeFiles\minimum.dir\main.cpp.obj.d -o CMakeFiles\minimum.dir\main.cpp.obj -c "E:\source\repos\VSCode\Book tasks C++\Task18\Task18\main.cpp"

CMakeFiles/minimum.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/minimum.dir/main.cpp.i"
	D:\Programs\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\source\repos\VSCode\Book tasks C++\Task18\Task18\main.cpp" > CMakeFiles\minimum.dir\main.cpp.i

CMakeFiles/minimum.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/minimum.dir/main.cpp.s"
	D:\Programs\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\source\repos\VSCode\Book tasks C++\Task18\Task18\main.cpp" -o CMakeFiles\minimum.dir\main.cpp.s

# Object files for target minimum
minimum_OBJECTS = \
"CMakeFiles/minimum.dir/main.cpp.obj"

# External object files for target minimum
minimum_EXTERNAL_OBJECTS =

minimum.exe: CMakeFiles/minimum.dir/main.cpp.obj
minimum.exe: CMakeFiles/minimum.dir/build.make
minimum.exe: CMakeFiles/minimum.dir/linkLibs.rsp
minimum.exe: CMakeFiles/minimum.dir/objects1.rsp
minimum.exe: CMakeFiles/minimum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="E:\source\repos\VSCode\Book tasks C++\Task18\Task18_build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable minimum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\minimum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/minimum.dir/build: minimum.exe
.PHONY : CMakeFiles/minimum.dir/build

CMakeFiles/minimum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\minimum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/minimum.dir/clean

CMakeFiles/minimum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\source\repos\VSCode\Book tasks C++\Task18\Task18" "E:\source\repos\VSCode\Book tasks C++\Task18\Task18" "E:\source\repos\VSCode\Book tasks C++\Task18\Task18_build" "E:\source\repos\VSCode\Book tasks C++\Task18\Task18_build" "E:\source\repos\VSCode\Book tasks C++\Task18\Task18_build\CMakeFiles\minimum.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/minimum.dir/depend

