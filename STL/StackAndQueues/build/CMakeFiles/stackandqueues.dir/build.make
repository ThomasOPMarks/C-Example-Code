# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tmarks/projects/StackAndQueues

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tmarks/projects/StackAndQueues/build

# Include any dependencies generated for this target.
include CMakeFiles/stackandqueues.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stackandqueues.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stackandqueues.dir/flags.make

CMakeFiles/stackandqueues.dir/main.cpp.o: CMakeFiles/stackandqueues.dir/flags.make
CMakeFiles/stackandqueues.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tmarks/projects/StackAndQueues/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/stackandqueues.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/stackandqueues.dir/main.cpp.o -c /home/tmarks/projects/StackAndQueues/main.cpp

CMakeFiles/stackandqueues.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stackandqueues.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tmarks/projects/StackAndQueues/main.cpp > CMakeFiles/stackandqueues.dir/main.cpp.i

CMakeFiles/stackandqueues.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stackandqueues.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tmarks/projects/StackAndQueues/main.cpp -o CMakeFiles/stackandqueues.dir/main.cpp.s

CMakeFiles/stackandqueues.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/stackandqueues.dir/main.cpp.o.requires

CMakeFiles/stackandqueues.dir/main.cpp.o.provides: CMakeFiles/stackandqueues.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/stackandqueues.dir/build.make CMakeFiles/stackandqueues.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/stackandqueues.dir/main.cpp.o.provides

CMakeFiles/stackandqueues.dir/main.cpp.o.provides.build: CMakeFiles/stackandqueues.dir/main.cpp.o

# Object files for target stackandqueues
stackandqueues_OBJECTS = \
"CMakeFiles/stackandqueues.dir/main.cpp.o"

# External object files for target stackandqueues
stackandqueues_EXTERNAL_OBJECTS =

stackandqueues: CMakeFiles/stackandqueues.dir/main.cpp.o
stackandqueues: CMakeFiles/stackandqueues.dir/build.make
stackandqueues: CMakeFiles/stackandqueues.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable stackandqueues"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stackandqueues.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stackandqueues.dir/build: stackandqueues
.PHONY : CMakeFiles/stackandqueues.dir/build

CMakeFiles/stackandqueues.dir/requires: CMakeFiles/stackandqueues.dir/main.cpp.o.requires
.PHONY : CMakeFiles/stackandqueues.dir/requires

CMakeFiles/stackandqueues.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stackandqueues.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stackandqueues.dir/clean

CMakeFiles/stackandqueues.dir/depend:
	cd /home/tmarks/projects/StackAndQueues/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tmarks/projects/StackAndQueues /home/tmarks/projects/StackAndQueues /home/tmarks/projects/StackAndQueues/build /home/tmarks/projects/StackAndQueues/build /home/tmarks/projects/StackAndQueues/build/CMakeFiles/stackandqueues.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stackandqueues.dir/depend

