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
CMAKE_SOURCE_DIR = "E:\source\repos\VSCode\Book tasks C++\Task13\Task13"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\source\repos\VSCode\Book tasks C++\Task13\Task13\build"

# Include any dependencies generated for this target.
include CMakeFiles/Pi_no_proto.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Pi_no_proto.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Pi_no_proto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pi_no_proto.dir/flags.make

CMakeFiles/Pi_no_proto.dir/pi_no_proto.cpp.obj: CMakeFiles/Pi_no_proto.dir/flags.make
CMakeFiles/Pi_no_proto.dir/pi_no_proto.cpp.obj: E:/source/repos/VSCode/Book\ tasks\ C++/Task13/Task13/pi_no_proto.cpp
CMakeFiles/Pi_no_proto.dir/pi_no_proto.cpp.obj: CMakeFiles/Pi_no_proto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="E:\source\repos\VSCode\Book tasks C++\Task13\Task13\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pi_no_proto.dir/pi_no_proto.cpp.obj"
	D:\Programs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Pi_no_proto.dir/pi_no_proto.cpp.obj -MF CMakeFiles\Pi_no_proto.dir\pi_no_proto.cpp.obj.d -o CMakeFiles\Pi_no_proto.dir\pi_no_proto.cpp.obj -c "E:\source\repos\VSCode\Book tasks C++\Task13\Task13\pi_no_proto.cpp"

CMakeFiles/Pi_no_proto.dir/pi_no_proto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Pi_no_proto.dir/pi_no_proto.cpp.i"
	D:\Programs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\source\repos\VSCode\Book tasks C++\Task13\Task13\pi_no_proto.cpp" > CMakeFiles\Pi_no_proto.dir\pi_no_proto.cpp.i

CMakeFiles/Pi_no_proto.dir/pi_no_proto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Pi_no_proto.dir/pi_no_proto.cpp.s"
	D:\Programs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\source\repos\VSCode\Book tasks C++\Task13\Task13\pi_no_proto.cpp" -o CMakeFiles\Pi_no_proto.dir\pi_no_proto.cpp.s

CMakeFiles/Pi_no_proto.dir/pi_searcher.cpp.obj: CMakeFiles/Pi_no_proto.dir/flags.make
CMakeFiles/Pi_no_proto.dir/pi_searcher.cpp.obj: E:/source/repos/VSCode/Book\ tasks\ C++/Task13/Task13/pi_searcher.cpp
CMakeFiles/Pi_no_proto.dir/pi_searcher.cpp.obj: CMakeFiles/Pi_no_proto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="E:\source\repos\VSCode\Book tasks C++\Task13\Task13\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Pi_no_proto.dir/pi_searcher.cpp.obj"
	D:\Programs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Pi_no_proto.dir/pi_searcher.cpp.obj -MF CMakeFiles\Pi_no_proto.dir\pi_searcher.cpp.obj.d -o CMakeFiles\Pi_no_proto.dir\pi_searcher.cpp.obj -c "E:\source\repos\VSCode\Book tasks C++\Task13\Task13\pi_searcher.cpp"

CMakeFiles/Pi_no_proto.dir/pi_searcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Pi_no_proto.dir/pi_searcher.cpp.i"
	D:\Programs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\source\repos\VSCode\Book tasks C++\Task13\Task13\pi_searcher.cpp" > CMakeFiles\Pi_no_proto.dir\pi_searcher.cpp.i

CMakeFiles/Pi_no_proto.dir/pi_searcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Pi_no_proto.dir/pi_searcher.cpp.s"
	D:\Programs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\source\repos\VSCode\Book tasks C++\Task13\Task13\pi_searcher.cpp" -o CMakeFiles\Pi_no_proto.dir\pi_searcher.cpp.s

CMakeFiles/Pi_no_proto.dir/input_reader.cpp.obj: CMakeFiles/Pi_no_proto.dir/flags.make
CMakeFiles/Pi_no_proto.dir/input_reader.cpp.obj: E:/source/repos/VSCode/Book\ tasks\ C++/Task13/Task13/input_reader.cpp
CMakeFiles/Pi_no_proto.dir/input_reader.cpp.obj: CMakeFiles/Pi_no_proto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="E:\source\repos\VSCode\Book tasks C++\Task13\Task13\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Pi_no_proto.dir/input_reader.cpp.obj"
	D:\Programs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Pi_no_proto.dir/input_reader.cpp.obj -MF CMakeFiles\Pi_no_proto.dir\input_reader.cpp.obj.d -o CMakeFiles\Pi_no_proto.dir\input_reader.cpp.obj -c "E:\source\repos\VSCode\Book tasks C++\Task13\Task13\input_reader.cpp"

CMakeFiles/Pi_no_proto.dir/input_reader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Pi_no_proto.dir/input_reader.cpp.i"
	D:\Programs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\source\repos\VSCode\Book tasks C++\Task13\Task13\input_reader.cpp" > CMakeFiles\Pi_no_proto.dir\input_reader.cpp.i

CMakeFiles/Pi_no_proto.dir/input_reader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Pi_no_proto.dir/input_reader.cpp.s"
	D:\Programs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\source\repos\VSCode\Book tasks C++\Task13\Task13\input_reader.cpp" -o CMakeFiles\Pi_no_proto.dir\input_reader.cpp.s

# Object files for target Pi_no_proto
Pi_no_proto_OBJECTS = \
"CMakeFiles/Pi_no_proto.dir/pi_no_proto.cpp.obj" \
"CMakeFiles/Pi_no_proto.dir/pi_searcher.cpp.obj" \
"CMakeFiles/Pi_no_proto.dir/input_reader.cpp.obj"

# External object files for target Pi_no_proto
Pi_no_proto_EXTERNAL_OBJECTS =

Pi_no_proto.exe: CMakeFiles/Pi_no_proto.dir/pi_no_proto.cpp.obj
Pi_no_proto.exe: CMakeFiles/Pi_no_proto.dir/pi_searcher.cpp.obj
Pi_no_proto.exe: CMakeFiles/Pi_no_proto.dir/input_reader.cpp.obj
Pi_no_proto.exe: CMakeFiles/Pi_no_proto.dir/build.make
Pi_no_proto.exe: CMakeFiles/Pi_no_proto.dir/linkLibs.rsp
Pi_no_proto.exe: CMakeFiles/Pi_no_proto.dir/objects1.rsp
Pi_no_proto.exe: CMakeFiles/Pi_no_proto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="E:\source\repos\VSCode\Book tasks C++\Task13\Task13\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Pi_no_proto.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Pi_no_proto.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pi_no_proto.dir/build: Pi_no_proto.exe
.PHONY : CMakeFiles/Pi_no_proto.dir/build

CMakeFiles/Pi_no_proto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Pi_no_proto.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Pi_no_proto.dir/clean

CMakeFiles/Pi_no_proto.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\source\repos\VSCode\Book tasks C++\Task13\Task13" "E:\source\repos\VSCode\Book tasks C++\Task13\Task13" "E:\source\repos\VSCode\Book tasks C++\Task13\Task13\build" "E:\source\repos\VSCode\Book tasks C++\Task13\Task13\build" "E:\source\repos\VSCode\Book tasks C++\Task13\Task13\build\CMakeFiles\Pi_no_proto.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Pi_no_proto.dir/depend

