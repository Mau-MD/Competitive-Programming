# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/maudieguez/Documents/C++/Hexaleaf.h

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maudieguez/Documents/C++/Hexaleaf.h/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Hexaleaf_h.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Hexaleaf_h.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Hexaleaf_h.dir/flags.make

CMakeFiles/Hexaleaf_h.dir/main.cpp.o: CMakeFiles/Hexaleaf_h.dir/flags.make
CMakeFiles/Hexaleaf_h.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maudieguez/Documents/C++/Hexaleaf.h/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Hexaleaf_h.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Hexaleaf_h.dir/main.cpp.o -c /Users/maudieguez/Documents/C++/Hexaleaf.h/main.cpp

CMakeFiles/Hexaleaf_h.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Hexaleaf_h.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maudieguez/Documents/C++/Hexaleaf.h/main.cpp > CMakeFiles/Hexaleaf_h.dir/main.cpp.i

CMakeFiles/Hexaleaf_h.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Hexaleaf_h.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maudieguez/Documents/C++/Hexaleaf.h/main.cpp -o CMakeFiles/Hexaleaf_h.dir/main.cpp.s

# Object files for target Hexaleaf_h
Hexaleaf_h_OBJECTS = \
"CMakeFiles/Hexaleaf_h.dir/main.cpp.o"

# External object files for target Hexaleaf_h
Hexaleaf_h_EXTERNAL_OBJECTS =

Hexaleaf_h: CMakeFiles/Hexaleaf_h.dir/main.cpp.o
Hexaleaf_h: CMakeFiles/Hexaleaf_h.dir/build.make
Hexaleaf_h: CMakeFiles/Hexaleaf_h.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maudieguez/Documents/C++/Hexaleaf.h/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Hexaleaf_h"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Hexaleaf_h.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Hexaleaf_h.dir/build: Hexaleaf_h

.PHONY : CMakeFiles/Hexaleaf_h.dir/build

CMakeFiles/Hexaleaf_h.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Hexaleaf_h.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Hexaleaf_h.dir/clean

CMakeFiles/Hexaleaf_h.dir/depend:
	cd /Users/maudieguez/Documents/C++/Hexaleaf.h/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maudieguez/Documents/C++/Hexaleaf.h /Users/maudieguez/Documents/C++/Hexaleaf.h /Users/maudieguez/Documents/C++/Hexaleaf.h/cmake-build-debug /Users/maudieguez/Documents/C++/Hexaleaf.h/cmake-build-debug /Users/maudieguez/Documents/C++/Hexaleaf.h/cmake-build-debug/CMakeFiles/Hexaleaf_h.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Hexaleaf_h.dir/depend

