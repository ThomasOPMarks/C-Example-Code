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
CMAKE_SOURCE_DIR = /home/tmarks/projects/ObjectInitializationDefaultAndDelete

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tmarks/projects/ObjectInitializationDefaultAndDelete/build

# Include any dependencies generated for this target.
include CMakeFiles/objectinitializationdefaultanddelete.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/objectinitializationdefaultanddelete.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/objectinitializationdefaultanddelete.dir/flags.make

CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o: CMakeFiles/objectinitializationdefaultanddelete.dir/flags.make
CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tmarks/projects/ObjectInitializationDefaultAndDelete/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o -c /home/tmarks/projects/ObjectInitializationDefaultAndDelete/main.cpp

CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tmarks/projects/ObjectInitializationDefaultAndDelete/main.cpp > CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.i

CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tmarks/projects/ObjectInitializationDefaultAndDelete/main.cpp -o CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.s

CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o.requires

CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o.provides: CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/objectinitializationdefaultanddelete.dir/build.make CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o.provides

CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o.provides.build: CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o

# Object files for target objectinitializationdefaultanddelete
objectinitializationdefaultanddelete_OBJECTS = \
"CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o"

# External object files for target objectinitializationdefaultanddelete
objectinitializationdefaultanddelete_EXTERNAL_OBJECTS =

objectinitializationdefaultanddelete: CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o
objectinitializationdefaultanddelete: CMakeFiles/objectinitializationdefaultanddelete.dir/build.make
objectinitializationdefaultanddelete: CMakeFiles/objectinitializationdefaultanddelete.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable objectinitializationdefaultanddelete"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/objectinitializationdefaultanddelete.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/objectinitializationdefaultanddelete.dir/build: objectinitializationdefaultanddelete
.PHONY : CMakeFiles/objectinitializationdefaultanddelete.dir/build

CMakeFiles/objectinitializationdefaultanddelete.dir/requires: CMakeFiles/objectinitializationdefaultanddelete.dir/main.cpp.o.requires
.PHONY : CMakeFiles/objectinitializationdefaultanddelete.dir/requires

CMakeFiles/objectinitializationdefaultanddelete.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/objectinitializationdefaultanddelete.dir/cmake_clean.cmake
.PHONY : CMakeFiles/objectinitializationdefaultanddelete.dir/clean

CMakeFiles/objectinitializationdefaultanddelete.dir/depend:
	cd /home/tmarks/projects/ObjectInitializationDefaultAndDelete/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tmarks/projects/ObjectInitializationDefaultAndDelete /home/tmarks/projects/ObjectInitializationDefaultAndDelete /home/tmarks/projects/ObjectInitializationDefaultAndDelete/build /home/tmarks/projects/ObjectInitializationDefaultAndDelete/build /home/tmarks/projects/ObjectInitializationDefaultAndDelete/build/CMakeFiles/objectinitializationdefaultanddelete.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/objectinitializationdefaultanddelete.dir/depend
