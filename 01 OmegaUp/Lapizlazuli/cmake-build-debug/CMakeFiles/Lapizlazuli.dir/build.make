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
CMAKE_SOURCE_DIR = /Users/maudieguez/Documents/C++/Lapizlazuli

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maudieguez/Documents/C++/Lapizlazuli/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lapizlazuli.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lapizlazuli.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lapizlazuli.dir/flags.make

CMakeFiles/Lapizlazuli.dir/main.cpp.o: CMakeFiles/Lapizlazuli.dir/flags.make
CMakeFiles/Lapizlazuli.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maudieguez/Documents/C++/Lapizlazuli/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lapizlazuli.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lapizlazuli.dir/main.cpp.o -c /Users/maudieguez/Documents/C++/Lapizlazuli/main.cpp

CMakeFiles/Lapizlazuli.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lapizlazuli.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maudieguez/Documents/C++/Lapizlazuli/main.cpp > CMakeFiles/Lapizlazuli.dir/main.cpp.i

CMakeFiles/Lapizlazuli.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lapizlazuli.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maudieguez/Documents/C++/Lapizlazuli/main.cpp -o CMakeFiles/Lapizlazuli.dir/main.cpp.s

# Object files for target Lapizlazuli
Lapizlazuli_OBJECTS = \
"CMakeFiles/Lapizlazuli.dir/main.cpp.o"

# External object files for target Lapizlazuli
Lapizlazuli_EXTERNAL_OBJECTS =

Lapizlazuli: CMakeFiles/Lapizlazuli.dir/main.cpp.o
Lapizlazuli: CMakeFiles/Lapizlazuli.dir/build.make
Lapizlazuli: CMakeFiles/Lapizlazuli.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maudieguez/Documents/C++/Lapizlazuli/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lapizlazuli"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lapizlazuli.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lapizlazuli.dir/build: Lapizlazuli

.PHONY : CMakeFiles/Lapizlazuli.dir/build

CMakeFiles/Lapizlazuli.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lapizlazuli.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lapizlazuli.dir/clean

CMakeFiles/Lapizlazuli.dir/depend:
	cd /Users/maudieguez/Documents/C++/Lapizlazuli/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maudieguez/Documents/C++/Lapizlazuli /Users/maudieguez/Documents/C++/Lapizlazuli /Users/maudieguez/Documents/C++/Lapizlazuli/cmake-build-debug /Users/maudieguez/Documents/C++/Lapizlazuli/cmake-build-debug /Users/maudieguez/Documents/C++/Lapizlazuli/cmake-build-debug/CMakeFiles/Lapizlazuli.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lapizlazuli.dir/depend
