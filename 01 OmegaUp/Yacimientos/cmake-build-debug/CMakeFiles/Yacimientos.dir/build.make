# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = /Users/maudieguez/Documents/C++/Yacimientos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maudieguez/Documents/C++/Yacimientos/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Yacimientos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Yacimientos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Yacimientos.dir/flags.make

CMakeFiles/Yacimientos.dir/main.cpp.o: CMakeFiles/Yacimientos.dir/flags.make
CMakeFiles/Yacimientos.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maudieguez/Documents/C++/Yacimientos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Yacimientos.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Yacimientos.dir/main.cpp.o -c /Users/maudieguez/Documents/C++/Yacimientos/main.cpp

CMakeFiles/Yacimientos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Yacimientos.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maudieguez/Documents/C++/Yacimientos/main.cpp > CMakeFiles/Yacimientos.dir/main.cpp.i

CMakeFiles/Yacimientos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Yacimientos.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maudieguez/Documents/C++/Yacimientos/main.cpp -o CMakeFiles/Yacimientos.dir/main.cpp.s

# Object files for target Yacimientos
Yacimientos_OBJECTS = \
"CMakeFiles/Yacimientos.dir/main.cpp.o"

# External object files for target Yacimientos
Yacimientos_EXTERNAL_OBJECTS =

Yacimientos: CMakeFiles/Yacimientos.dir/main.cpp.o
Yacimientos: CMakeFiles/Yacimientos.dir/build.make
Yacimientos: CMakeFiles/Yacimientos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maudieguez/Documents/C++/Yacimientos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Yacimientos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Yacimientos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Yacimientos.dir/build: Yacimientos

.PHONY : CMakeFiles/Yacimientos.dir/build

CMakeFiles/Yacimientos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Yacimientos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Yacimientos.dir/clean

CMakeFiles/Yacimientos.dir/depend:
	cd /Users/maudieguez/Documents/C++/Yacimientos/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maudieguez/Documents/C++/Yacimientos /Users/maudieguez/Documents/C++/Yacimientos /Users/maudieguez/Documents/C++/Yacimientos/cmake-build-debug /Users/maudieguez/Documents/C++/Yacimientos/cmake-build-debug /Users/maudieguez/Documents/C++/Yacimientos/cmake-build-debug/CMakeFiles/Yacimientos.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Yacimientos.dir/depend
