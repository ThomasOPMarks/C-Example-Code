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
CMAKE_SOURCE_DIR = /home/tmarks/projects/Multimaps

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tmarks/projects/Multimaps/build

# Include any dependencies generated for this target.
include CMakeFiles/multimaps.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/multimaps.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/multimaps.dir/flags.make

CMakeFiles/multimaps.dir/main.cpp.o: CMakeFiles/multimaps.dir/flags.make
CMakeFiles/multimaps.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tmarks/projects/Multimaps/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/multimaps.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/multimaps.dir/main.cpp.o -c /home/tmarks/projects/Multimaps/main.cpp

CMakeFiles/multimaps.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/multimaps.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tmarks/projects/Multimaps/main.cpp > CMakeFiles/multimaps.dir/main.cpp.i

CMakeFiles/multimaps.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/multimaps.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tmarks/projects/Multimaps/main.cpp -o CMakeFiles/multimaps.dir/main.cpp.s

CMakeFiles/multimaps.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/multimaps.dir/main.cpp.o.requires

CMakeFiles/multimaps.dir/main.cpp.o.provides: CMakeFiles/multimaps.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/multimaps.dir/build.make CMakeFiles/multimaps.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/multimaps.dir/main.cpp.o.provides

CMakeFiles/multimaps.dir/main.cpp.o.provides.build: CMakeFiles/multimaps.dir/main.cpp.o

# Object files for target multimaps
multimaps_OBJECTS = \
"CMakeFiles/multimaps.dir/main.cpp.o"

# External object files for target multimaps
multimaps_EXTERNAL_OBJECTS =

multimaps: CMakeFiles/multimaps.dir/main.cpp.o
multimaps: CMakeFiles/multimaps.dir/build.make
multimaps: CMakeFiles/multimaps.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable multimaps"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/multimaps.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/multimaps.dir/build: multimaps
.PHONY : CMakeFiles/multimaps.dir/build

CMakeFiles/multimaps.dir/requires: CMakeFiles/multimaps.dir/main.cpp.o.requires
.PHONY : CMakeFiles/multimaps.dir/requires

CMakeFiles/multimaps.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/multimaps.dir/cmake_clean.cmake
.PHONY : CMakeFiles/multimaps.dir/clean

CMakeFiles/multimaps.dir/depend:
	cd /home/tmarks/projects/Multimaps/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tmarks/projects/Multimaps /home/tmarks/projects/Multimaps /home/tmarks/projects/Multimaps/build /home/tmarks/projects/Multimaps/build /home/tmarks/projects/Multimaps/build/CMakeFiles/multimaps.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/multimaps.dir/depend

