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
CMAKE_SOURCE_DIR = /home/tmarks/projects/StaticCasts

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tmarks/projects/StaticCasts/build

# Include any dependencies generated for this target.
include CMakeFiles/staticcasts.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/staticcasts.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/staticcasts.dir/flags.make

CMakeFiles/staticcasts.dir/main.cpp.o: CMakeFiles/staticcasts.dir/flags.make
CMakeFiles/staticcasts.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tmarks/projects/StaticCasts/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/staticcasts.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/staticcasts.dir/main.cpp.o -c /home/tmarks/projects/StaticCasts/main.cpp

CMakeFiles/staticcasts.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/staticcasts.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tmarks/projects/StaticCasts/main.cpp > CMakeFiles/staticcasts.dir/main.cpp.i

CMakeFiles/staticcasts.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/staticcasts.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tmarks/projects/StaticCasts/main.cpp -o CMakeFiles/staticcasts.dir/main.cpp.s

CMakeFiles/staticcasts.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/staticcasts.dir/main.cpp.o.requires

CMakeFiles/staticcasts.dir/main.cpp.o.provides: CMakeFiles/staticcasts.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/staticcasts.dir/build.make CMakeFiles/staticcasts.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/staticcasts.dir/main.cpp.o.provides

CMakeFiles/staticcasts.dir/main.cpp.o.provides.build: CMakeFiles/staticcasts.dir/main.cpp.o

# Object files for target staticcasts
staticcasts_OBJECTS = \
"CMakeFiles/staticcasts.dir/main.cpp.o"

# External object files for target staticcasts
staticcasts_EXTERNAL_OBJECTS =

staticcasts: CMakeFiles/staticcasts.dir/main.cpp.o
staticcasts: CMakeFiles/staticcasts.dir/build.make
staticcasts: CMakeFiles/staticcasts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable staticcasts"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/staticcasts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/staticcasts.dir/build: staticcasts
.PHONY : CMakeFiles/staticcasts.dir/build

CMakeFiles/staticcasts.dir/requires: CMakeFiles/staticcasts.dir/main.cpp.o.requires
.PHONY : CMakeFiles/staticcasts.dir/requires

CMakeFiles/staticcasts.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/staticcasts.dir/cmake_clean.cmake
.PHONY : CMakeFiles/staticcasts.dir/clean

CMakeFiles/staticcasts.dir/depend:
	cd /home/tmarks/projects/StaticCasts/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tmarks/projects/StaticCasts /home/tmarks/projects/StaticCasts /home/tmarks/projects/StaticCasts/build /home/tmarks/projects/StaticCasts/build /home/tmarks/projects/StaticCasts/build/CMakeFiles/staticcasts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/staticcasts.dir/depend
