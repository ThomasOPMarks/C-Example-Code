# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mmmtastymmm/projects/PerfectForwarding

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mmmtastymmm/projects/PerfectForwarding/build

# Include any dependencies generated for this target.
include CMakeFiles/perfectforwarding.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/perfectforwarding.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/perfectforwarding.dir/flags.make

CMakeFiles/perfectforwarding.dir/main.cpp.o: CMakeFiles/perfectforwarding.dir/flags.make
CMakeFiles/perfectforwarding.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mmmtastymmm/projects/PerfectForwarding/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/perfectforwarding.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/perfectforwarding.dir/main.cpp.o -c /home/mmmtastymmm/projects/PerfectForwarding/main.cpp

CMakeFiles/perfectforwarding.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/perfectforwarding.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mmmtastymmm/projects/PerfectForwarding/main.cpp > CMakeFiles/perfectforwarding.dir/main.cpp.i

CMakeFiles/perfectforwarding.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/perfectforwarding.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mmmtastymmm/projects/PerfectForwarding/main.cpp -o CMakeFiles/perfectforwarding.dir/main.cpp.s

CMakeFiles/perfectforwarding.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/perfectforwarding.dir/main.cpp.o.requires

CMakeFiles/perfectforwarding.dir/main.cpp.o.provides: CMakeFiles/perfectforwarding.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/perfectforwarding.dir/build.make CMakeFiles/perfectforwarding.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/perfectforwarding.dir/main.cpp.o.provides

CMakeFiles/perfectforwarding.dir/main.cpp.o.provides.build: CMakeFiles/perfectforwarding.dir/main.cpp.o


# Object files for target perfectforwarding
perfectforwarding_OBJECTS = \
"CMakeFiles/perfectforwarding.dir/main.cpp.o"

# External object files for target perfectforwarding
perfectforwarding_EXTERNAL_OBJECTS =

perfectforwarding: CMakeFiles/perfectforwarding.dir/main.cpp.o
perfectforwarding: CMakeFiles/perfectforwarding.dir/build.make
perfectforwarding: CMakeFiles/perfectforwarding.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mmmtastymmm/projects/PerfectForwarding/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable perfectforwarding"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/perfectforwarding.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/perfectforwarding.dir/build: perfectforwarding

.PHONY : CMakeFiles/perfectforwarding.dir/build

CMakeFiles/perfectforwarding.dir/requires: CMakeFiles/perfectforwarding.dir/main.cpp.o.requires

.PHONY : CMakeFiles/perfectforwarding.dir/requires

CMakeFiles/perfectforwarding.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/perfectforwarding.dir/cmake_clean.cmake
.PHONY : CMakeFiles/perfectforwarding.dir/clean

CMakeFiles/perfectforwarding.dir/depend:
	cd /home/mmmtastymmm/projects/PerfectForwarding/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mmmtastymmm/projects/PerfectForwarding /home/mmmtastymmm/projects/PerfectForwarding /home/mmmtastymmm/projects/PerfectForwarding/build /home/mmmtastymmm/projects/PerfectForwarding/build /home/mmmtastymmm/projects/PerfectForwarding/build/CMakeFiles/perfectforwarding.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/perfectforwarding.dir/depend

