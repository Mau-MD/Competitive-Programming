# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /Users/maudieguez/Documents/C++/sumacuad

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maudieguez/Documents/C++/sumacuad/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sumacuad.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sumacuad.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sumacuad.dir/flags.make

CMakeFiles/sumacuad.dir/main.cpp.o: CMakeFiles/sumacuad.dir/flags.make
CMakeFiles/sumacuad.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maudieguez/Documents/C++/sumacuad/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sumacuad.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sumacuad.dir/main.cpp.o -c /Users/maudieguez/Documents/C++/sumacuad/main.cpp

CMakeFiles/sumacuad.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sumacuad.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maudieguez/Documents/C++/sumacuad/main.cpp > CMakeFiles/sumacuad.dir/main.cpp.i

CMakeFiles/sumacuad.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sumacuad.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maudieguez/Documents/C++/sumacuad/main.cpp -o CMakeFiles/sumacuad.dir/main.cpp.s

# Object files for target sumacuad
sumacuad_OBJECTS = \
"CMakeFiles/sumacuad.dir/main.cpp.o"

# External object files for target sumacuad
sumacuad_EXTERNAL_OBJECTS =

sumacuad: CMakeFiles/sumacuad.dir/main.cpp.o
sumacuad: CMakeFiles/sumacuad.dir/build.make
sumacuad: CMakeFiles/sumacuad.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maudieguez/Documents/C++/sumacuad/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sumacuad"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sumacuad.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sumacuad.dir/build: sumacuad

.PHONY : CMakeFiles/sumacuad.dir/build

CMakeFiles/sumacuad.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sumacuad.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sumacuad.dir/clean

CMakeFiles/sumacuad.dir/depend:
	cd /Users/maudieguez/Documents/C++/sumacuad/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maudieguez/Documents/C++/sumacuad /Users/maudieguez/Documents/C++/sumacuad /Users/maudieguez/Documents/C++/sumacuad/cmake-build-debug /Users/maudieguez/Documents/C++/sumacuad/cmake-build-debug /Users/maudieguez/Documents/C++/sumacuad/cmake-build-debug/CMakeFiles/sumacuad.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sumacuad.dir/depend

