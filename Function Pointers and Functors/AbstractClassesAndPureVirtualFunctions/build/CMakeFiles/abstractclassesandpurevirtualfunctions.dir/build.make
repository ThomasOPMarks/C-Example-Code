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
CMAKE_SOURCE_DIR = /home/tmarks/projects/AbstractClassesAndPureVirtualFunctions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tmarks/projects/AbstractClassesAndPureVirtualFunctions/build

# Include any dependencies generated for this target.
include CMakeFiles/abstractclassesandpurevirtualfunctions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/abstractclassesandpurevirtualfunctions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/abstractclassesandpurevirtualfunctions.dir/flags.make

CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o: CMakeFiles/abstractclassesandpurevirtualfunctions.dir/flags.make
CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tmarks/projects/AbstractClassesAndPureVirtualFunctions/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o -c /home/tmarks/projects/AbstractClassesAndPureVirtualFunctions/main.cpp

CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tmarks/projects/AbstractClassesAndPureVirtualFunctions/main.cpp > CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.i

CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tmarks/projects/AbstractClassesAndPureVirtualFunctions/main.cpp -o CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.s

CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o.requires

CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o.provides: CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/abstractclassesandpurevirtualfunctions.dir/build.make CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o.provides

CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o.provides.build: CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o

# Object files for target abstractclassesandpurevirtualfunctions
abstractclassesandpurevirtualfunctions_OBJECTS = \
"CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o"

# External object files for target abstractclassesandpurevirtualfunctions
abstractclassesandpurevirtualfunctions_EXTERNAL_OBJECTS =

abstractclassesandpurevirtualfunctions: CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o
abstractclassesandpurevirtualfunctions: CMakeFiles/abstractclassesandpurevirtualfunctions.dir/build.make
abstractclassesandpurevirtualfunctions: CMakeFiles/abstractclassesandpurevirtualfunctions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable abstractclassesandpurevirtualfunctions"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/abstractclassesandpurevirtualfunctions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/abstractclassesandpurevirtualfunctions.dir/build: abstractclassesandpurevirtualfunctions
.PHONY : CMakeFiles/abstractclassesandpurevirtualfunctions.dir/build

CMakeFiles/abstractclassesandpurevirtualfunctions.dir/requires: CMakeFiles/abstractclassesandpurevirtualfunctions.dir/main.cpp.o.requires
.PHONY : CMakeFiles/abstractclassesandpurevirtualfunctions.dir/requires

CMakeFiles/abstractclassesandpurevirtualfunctions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/abstractclassesandpurevirtualfunctions.dir/cmake_clean.cmake
.PHONY : CMakeFiles/abstractclassesandpurevirtualfunctions.dir/clean

CMakeFiles/abstractclassesandpurevirtualfunctions.dir/depend:
	cd /home/tmarks/projects/AbstractClassesAndPureVirtualFunctions/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tmarks/projects/AbstractClassesAndPureVirtualFunctions /home/tmarks/projects/AbstractClassesAndPureVirtualFunctions /home/tmarks/projects/AbstractClassesAndPureVirtualFunctions/build /home/tmarks/projects/AbstractClassesAndPureVirtualFunctions/build /home/tmarks/projects/AbstractClassesAndPureVirtualFunctions/build/CMakeFiles/abstractclassesandpurevirtualfunctions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/abstractclassesandpurevirtualfunctions.dir/depend

