# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/100/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/100/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sevket/Masaüstü/MyProjects/ClionProjects/stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack.dir/flags.make

CMakeFiles/stack.dir/main.cpp.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sevket/Masaüstü/MyProjects/ClionProjects/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stack.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stack.dir/main.cpp.o -c /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/main.cpp

CMakeFiles/stack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/main.cpp > CMakeFiles/stack.dir/main.cpp.i

CMakeFiles/stack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/main.cpp -o CMakeFiles/stack.dir/main.cpp.s

CMakeFiles/stack.dir/stack_with_array.cpp.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/stack_with_array.cpp.o: ../stack_with_array.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sevket/Masaüstü/MyProjects/ClionProjects/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/stack.dir/stack_with_array.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stack.dir/stack_with_array.cpp.o -c /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/stack_with_array.cpp

CMakeFiles/stack.dir/stack_with_array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack.dir/stack_with_array.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/stack_with_array.cpp > CMakeFiles/stack.dir/stack_with_array.cpp.i

CMakeFiles/stack.dir/stack_with_array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack.dir/stack_with_array.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/stack_with_array.cpp -o CMakeFiles/stack.dir/stack_with_array.cpp.s

CMakeFiles/stack.dir/stack_with_linkedlist.cpp.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/stack_with_linkedlist.cpp.o: ../stack_with_linkedlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sevket/Masaüstü/MyProjects/ClionProjects/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/stack.dir/stack_with_linkedlist.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stack.dir/stack_with_linkedlist.cpp.o -c /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/stack_with_linkedlist.cpp

CMakeFiles/stack.dir/stack_with_linkedlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack.dir/stack_with_linkedlist.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/stack_with_linkedlist.cpp > CMakeFiles/stack.dir/stack_with_linkedlist.cpp.i

CMakeFiles/stack.dir/stack_with_linkedlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack.dir/stack_with_linkedlist.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/stack_with_linkedlist.cpp -o CMakeFiles/stack.dir/stack_with_linkedlist.cpp.s

# Object files for target stack
stack_OBJECTS = \
"CMakeFiles/stack.dir/main.cpp.o" \
"CMakeFiles/stack.dir/stack_with_array.cpp.o" \
"CMakeFiles/stack.dir/stack_with_linkedlist.cpp.o"

# External object files for target stack
stack_EXTERNAL_OBJECTS =

stack: CMakeFiles/stack.dir/main.cpp.o
stack: CMakeFiles/stack.dir/stack_with_array.cpp.o
stack: CMakeFiles/stack.dir/stack_with_linkedlist.cpp.o
stack: CMakeFiles/stack.dir/build.make
stack: CMakeFiles/stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sevket/Masaüstü/MyProjects/ClionProjects/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable stack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack.dir/build: stack

.PHONY : CMakeFiles/stack.dir/build

CMakeFiles/stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stack.dir/clean

CMakeFiles/stack.dir/depend:
	cd /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sevket/Masaüstü/MyProjects/ClionProjects/stack /home/sevket/Masaüstü/MyProjects/ClionProjects/stack /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/cmake-build-debug /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/cmake-build-debug /home/sevket/Masaüstü/MyProjects/ClionProjects/stack/cmake-build-debug/CMakeFiles/stack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stack.dir/depend
