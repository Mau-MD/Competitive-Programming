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
CMAKE_SOURCE_DIR = /Users/maudieguez/Documents/C++/Colasquitar

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maudieguez/Documents/C++/Colasquitar/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Colasquitar.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Colasquitar.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Colasquitar.dir/flags.make

CMakeFiles/Colasquitar.dir/main.cpp.o: CMakeFiles/Colasquitar.dir/flags.make
CMakeFiles/Colasquitar.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maudieguez/Documents/C++/Colasquitar/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Colasquitar.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Colasquitar.dir/main.cpp.o -c /Users/maudieguez/Documents/C++/Colasquitar/main.cpp

CMakeFiles/Colasquitar.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Colasquitar.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maudieguez/Documents/C++/Colasquitar/main.cpp > CMakeFiles/Colasquitar.dir/main.cpp.i

CMakeFiles/Colasquitar.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Colasquitar.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maudieguez/Documents/C++/Colasquitar/main.cpp -o CMakeFiles/Colasquitar.dir/main.cpp.s

# Object files for target Colasquitar
Colasquitar_OBJECTS = \
"CMakeFiles/Colasquitar.dir/main.cpp.o"

# External object files for target Colasquitar
Colasquitar_EXTERNAL_OBJECTS =

Colasquitar: CMakeFiles/Colasquitar.dir/main.cpp.o
Colasquitar: CMakeFiles/Colasquitar.dir/build.make
Colasquitar: CMakeFiles/Colasquitar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maudieguez/Documents/C++/Colasquitar/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Colasquitar"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Colasquitar.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Colasquitar.dir/build: Colasquitar

.PHONY : CMakeFiles/Colasquitar.dir/build

CMakeFiles/Colasquitar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Colasquitar.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Colasquitar.dir/clean

CMakeFiles/Colasquitar.dir/depend:
	cd /Users/maudieguez/Documents/C++/Colasquitar/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maudieguez/Documents/C++/Colasquitar /Users/maudieguez/Documents/C++/Colasquitar /Users/maudieguez/Documents/C++/Colasquitar/cmake-build-debug /Users/maudieguez/Documents/C++/Colasquitar/cmake-build-debug /Users/maudieguez/Documents/C++/Colasquitar/cmake-build-debug/CMakeFiles/Colasquitar.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Colasquitar.dir/depend
