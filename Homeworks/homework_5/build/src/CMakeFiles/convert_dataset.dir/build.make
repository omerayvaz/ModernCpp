# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/omerayvaz/Homeworks/homework_5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/omerayvaz/Homeworks/homework_5/build

# Include any dependencies generated for this target.
include src/CMakeFiles/convert_dataset.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/convert_dataset.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/convert_dataset.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/convert_dataset.dir/flags.make

src/CMakeFiles/convert_dataset.dir/convert_dataset.cpp.o: src/CMakeFiles/convert_dataset.dir/flags.make
src/CMakeFiles/convert_dataset.dir/convert_dataset.cpp.o: ../src/convert_dataset.cpp
src/CMakeFiles/convert_dataset.dir/convert_dataset.cpp.o: src/CMakeFiles/convert_dataset.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omerayvaz/Homeworks/homework_5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/convert_dataset.dir/convert_dataset.cpp.o"
	cd /home/omerayvaz/Homeworks/homework_5/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/convert_dataset.dir/convert_dataset.cpp.o -MF CMakeFiles/convert_dataset.dir/convert_dataset.cpp.o.d -o CMakeFiles/convert_dataset.dir/convert_dataset.cpp.o -c /home/omerayvaz/Homeworks/homework_5/src/convert_dataset.cpp

src/CMakeFiles/convert_dataset.dir/convert_dataset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/convert_dataset.dir/convert_dataset.cpp.i"
	cd /home/omerayvaz/Homeworks/homework_5/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omerayvaz/Homeworks/homework_5/src/convert_dataset.cpp > CMakeFiles/convert_dataset.dir/convert_dataset.cpp.i

src/CMakeFiles/convert_dataset.dir/convert_dataset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/convert_dataset.dir/convert_dataset.cpp.s"
	cd /home/omerayvaz/Homeworks/homework_5/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omerayvaz/Homeworks/homework_5/src/convert_dataset.cpp -o CMakeFiles/convert_dataset.dir/convert_dataset.cpp.s

# Object files for target convert_dataset
convert_dataset_OBJECTS = \
"CMakeFiles/convert_dataset.dir/convert_dataset.cpp.o"

# External object files for target convert_dataset
convert_dataset_EXTERNAL_OBJECTS =

../lib/libconvert_dataset.a: src/CMakeFiles/convert_dataset.dir/convert_dataset.cpp.o
../lib/libconvert_dataset.a: src/CMakeFiles/convert_dataset.dir/build.make
../lib/libconvert_dataset.a: src/CMakeFiles/convert_dataset.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/omerayvaz/Homeworks/homework_5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libconvert_dataset.a"
	cd /home/omerayvaz/Homeworks/homework_5/build/src && $(CMAKE_COMMAND) -P CMakeFiles/convert_dataset.dir/cmake_clean_target.cmake
	cd /home/omerayvaz/Homeworks/homework_5/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/convert_dataset.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/convert_dataset.dir/build: ../lib/libconvert_dataset.a
.PHONY : src/CMakeFiles/convert_dataset.dir/build

src/CMakeFiles/convert_dataset.dir/clean:
	cd /home/omerayvaz/Homeworks/homework_5/build/src && $(CMAKE_COMMAND) -P CMakeFiles/convert_dataset.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/convert_dataset.dir/clean

src/CMakeFiles/convert_dataset.dir/depend:
	cd /home/omerayvaz/Homeworks/homework_5/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/omerayvaz/Homeworks/homework_5 /home/omerayvaz/Homeworks/homework_5/src /home/omerayvaz/Homeworks/homework_5/build /home/omerayvaz/Homeworks/homework_5/build/src /home/omerayvaz/Homeworks/homework_5/build/src/CMakeFiles/convert_dataset.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/convert_dataset.dir/depend

