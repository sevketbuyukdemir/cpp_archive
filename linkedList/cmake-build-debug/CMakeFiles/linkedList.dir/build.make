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
CMAKE_SOURCE_DIR = /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/linkedList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/linkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linkedList.dir/flags.make

CMakeFiles/linkedList.dir/main.cpp.o: CMakeFiles/linkedList.dir/flags.make
CMakeFiles/linkedList.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/linkedList.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linkedList.dir/main.cpp.o -c /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/main.cpp

CMakeFiles/linkedList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linkedList.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/main.cpp > CMakeFiles/linkedList.dir/main.cpp.i

CMakeFiles/linkedList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linkedList.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/main.cpp -o CMakeFiles/linkedList.dir/main.cpp.s

CMakeFiles/linkedList.dir/unorderedLinkedList.cpp.o: CMakeFiles/linkedList.dir/flags.make
CMakeFiles/linkedList.dir/unorderedLinkedList.cpp.o: ../unorderedLinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/linkedList.dir/unorderedLinkedList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linkedList.dir/unorderedLinkedList.cpp.o -c /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/unorderedLinkedList.cpp

CMakeFiles/linkedList.dir/unorderedLinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linkedList.dir/unorderedLinkedList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/unorderedLinkedList.cpp > CMakeFiles/linkedList.dir/unorderedLinkedList.cpp.i

CMakeFiles/linkedList.dir/unorderedLinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linkedList.dir/unorderedLinkedList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/unorderedLinkedList.cpp -o CMakeFiles/linkedList.dir/unorderedLinkedList.cpp.s

CMakeFiles/linkedList.dir/orderedLinkedList.cpp.o: CMakeFiles/linkedList.dir/flags.make
CMakeFiles/linkedList.dir/orderedLinkedList.cpp.o: ../orderedLinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/linkedList.dir/orderedLinkedList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linkedList.dir/orderedLinkedList.cpp.o -c /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/orderedLinkedList.cpp

CMakeFiles/linkedList.dir/orderedLinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linkedList.dir/orderedLinkedList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/orderedLinkedList.cpp > CMakeFiles/linkedList.dir/orderedLinkedList.cpp.i

CMakeFiles/linkedList.dir/orderedLinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linkedList.dir/orderedLinkedList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/orderedLinkedList.cpp -o CMakeFiles/linkedList.dir/orderedLinkedList.cpp.s

CMakeFiles/linkedList.dir/doublyLinkedList.cpp.o: CMakeFiles/linkedList.dir/flags.make
CMakeFiles/linkedList.dir/doublyLinkedList.cpp.o: ../doublyLinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/linkedList.dir/doublyLinkedList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linkedList.dir/doublyLinkedList.cpp.o -c /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/doublyLinkedList.cpp

CMakeFiles/linkedList.dir/doublyLinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linkedList.dir/doublyLinkedList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/doublyLinkedList.cpp > CMakeFiles/linkedList.dir/doublyLinkedList.cpp.i

CMakeFiles/linkedList.dir/doublyLinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linkedList.dir/doublyLinkedList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/doublyLinkedList.cpp -o CMakeFiles/linkedList.dir/doublyLinkedList.cpp.s

# Object files for target linkedList
linkedList_OBJECTS = \
"CMakeFiles/linkedList.dir/main.cpp.o" \
"CMakeFiles/linkedList.dir/unorderedLinkedList.cpp.o" \
"CMakeFiles/linkedList.dir/orderedLinkedList.cpp.o" \
"CMakeFiles/linkedList.dir/doublyLinkedList.cpp.o"

# External object files for target linkedList
linkedList_EXTERNAL_OBJECTS =

linkedList: CMakeFiles/linkedList.dir/main.cpp.o
linkedList: CMakeFiles/linkedList.dir/unorderedLinkedList.cpp.o
linkedList: CMakeFiles/linkedList.dir/orderedLinkedList.cpp.o
linkedList: CMakeFiles/linkedList.dir/doublyLinkedList.cpp.o
linkedList: CMakeFiles/linkedList.dir/build.make
linkedList: CMakeFiles/linkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable linkedList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/linkedList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linkedList.dir/build: linkedList

.PHONY : CMakeFiles/linkedList.dir/build

CMakeFiles/linkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/linkedList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/linkedList.dir/clean

CMakeFiles/linkedList.dir/depend:
	cd /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/cmake-build-debug /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/cmake-build-debug /home/sevket/Masaüstü/MyProjects/ClionProjects/linkedList/cmake-build-debug/CMakeFiles/linkedList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linkedList.dir/depend
