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
CMAKE_SOURCE_DIR = "E:\source\repos\VSCode\Book tasks C++\Task14\Task14"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\source\repos\VSCode\Book tasks C++\Task14\Task14_build"

# Include any dependencies generated for this target.
include CMakeFiles/inspectorISBN.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/inspectorISBN.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/inspectorISBN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/inspectorISBN.dir/flags.make

CMakeFiles/inspectorISBN.dir/inspectorISBN.cpp.obj: CMakeFiles/inspectorISBN.dir/flags.make
CMakeFiles/inspectorISBN.dir/inspectorISBN.cpp.obj: E:/source/repos/VSCode/Book\ tasks\ C++/Task14/Task14/inspectorISBN.cpp
CMakeFiles/inspectorISBN.dir/inspectorISBN.cpp.obj: CMakeFiles/inspectorISBN.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="E:\source\repos\VSCode\Book tasks C++\Task14\Task14_build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/inspectorISBN.dir/inspectorISBN.cpp.obj"
	D:\Programs\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/inspectorISBN.dir/inspectorISBN.cpp.obj -MF CMakeFiles\inspectorISBN.dir\inspectorISBN.cpp.obj.d -o CMakeFiles\inspectorISBN.dir\inspectorISBN.cpp.obj -c "E:\source\repos\VSCode\Book tasks C++\Task14\Task14\inspectorISBN.cpp"

CMakeFiles/inspectorISBN.dir/inspectorISBN.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/inspectorISBN.dir/inspectorISBN.cpp.i"
	D:\Programs\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\source\repos\VSCode\Book tasks C++\Task14\Task14\inspectorISBN.cpp" > CMakeFiles\inspectorISBN.dir\inspectorISBN.cpp.i

CMakeFiles/inspectorISBN.dir/inspectorISBN.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/inspectorISBN.dir/inspectorISBN.cpp.s"
	D:\Programs\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\source\repos\VSCode\Book tasks C++\Task14\Task14\inspectorISBN.cpp" -o CMakeFiles\inspectorISBN.dir\inspectorISBN.cpp.s

CMakeFiles/inspectorISBN.dir/main.cpp.obj: CMakeFiles/inspectorISBN.dir/flags.make
CMakeFiles/inspectorISBN.dir/main.cpp.obj: E:/source/repos/VSCode/Book\ tasks\ C++/Task14/Task14/main.cpp
CMakeFiles/inspectorISBN.dir/main.cpp.obj: CMakeFiles/inspectorISBN.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="E:\source\repos\VSCode\Book tasks C++\Task14\Task14_build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/inspectorISBN.dir/main.cpp.obj"
	D:\Programs\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/inspectorISBN.dir/main.cpp.obj -MF CMakeFiles\inspectorISBN.dir\main.cpp.obj.d -o CMakeFiles\inspectorISBN.dir\main.cpp.obj -c "E:\source\repos\VSCode\Book tasks C++\Task14\Task14\main.cpp"

CMakeFiles/inspectorISBN.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/inspectorISBN.dir/main.cpp.i"
	D:\Programs\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\source\repos\VSCode\Book tasks C++\Task14\Task14\main.cpp" > CMakeFiles\inspectorISBN.dir\main.cpp.i

CMakeFiles/inspectorISBN.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/inspectorISBN.dir/main.cpp.s"
	D:\Programs\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\source\repos\VSCode\Book tasks C++\Task14\Task14\main.cpp" -o CMakeFiles\inspectorISBN.dir\main.cpp.s

# Object files for target inspectorISBN
inspectorISBN_OBJECTS = \
"CMakeFiles/inspectorISBN.dir/inspectorISBN.cpp.obj" \
"CMakeFiles/inspectorISBN.dir/main.cpp.obj"

# External object files for target inspectorISBN
inspectorISBN_EXTERNAL_OBJECTS =

inspectorISBN.exe: CMakeFiles/inspectorISBN.dir/inspectorISBN.cpp.obj
inspectorISBN.exe: CMakeFiles/inspectorISBN.dir/main.cpp.obj
inspectorISBN.exe: CMakeFiles/inspectorISBN.dir/build.make
inspectorISBN.exe: CMakeFiles/inspectorISBN.dir/linkLibs.rsp
inspectorISBN.exe: CMakeFiles/inspectorISBN.dir/objects1.rsp
inspectorISBN.exe: CMakeFiles/inspectorISBN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="E:\source\repos\VSCode\Book tasks C++\Task14\Task14_build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable inspectorISBN.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\inspectorISBN.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/inspectorISBN.dir/build: inspectorISBN.exe
.PHONY : CMakeFiles/inspectorISBN.dir/build

CMakeFiles/inspectorISBN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\inspectorISBN.dir\cmake_clean.cmake
.PHONY : CMakeFiles/inspectorISBN.dir/clean

CMakeFiles/inspectorISBN.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\source\repos\VSCode\Book tasks C++\Task14\Task14" "E:\source\repos\VSCode\Book tasks C++\Task14\Task14" "E:\source\repos\VSCode\Book tasks C++\Task14\Task14_build" "E:\source\repos\VSCode\Book tasks C++\Task14\Task14_build" "E:\source\repos\VSCode\Book tasks C++\Task14\Task14_build\CMakeFiles\inspectorISBN.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/inspectorISBN.dir/depend
