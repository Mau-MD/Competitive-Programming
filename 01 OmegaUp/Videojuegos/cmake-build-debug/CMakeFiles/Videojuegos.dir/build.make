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
CMAKE_SOURCE_DIR = /Users/maudieguez/Documents/C++/Videojuegos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maudieguez/Documents/C++/Videojuegos/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Videojuegos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Videojuegos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Videojuegos.dir/flags.make

CMakeFiles/Videojuegos.dir/main.cpp.o: CMakeFiles/Videojuegos.dir/flags.make
CMakeFiles/Videojuegos.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maudieguez/Documents/C++/Videojuegos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Videojuegos.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Videojuegos.dir/main.cpp.o -c /Users/maudieguez/Documents/C++/Videojuegos/main.cpp

CMakeFiles/Videojuegos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Videojuegos.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maudieguez/Documents/C++/Videojuegos/main.cpp > CMakeFiles/Videojuegos.dir/main.cpp.i

CMakeFiles/Videojuegos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Videojuegos.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maudieguez/Documents/C++/Videojuegos/main.cpp -o CMakeFiles/Videojuegos.dir/main.cpp.s

# Object files for target Videojuegos
Videojuegos_OBJECTS = \
"CMakeFiles/Videojuegos.dir/main.cpp.o"

# External object files for target Videojuegos
Videojuegos_EXTERNAL_OBJECTS =

Videojuegos: CMakeFiles/Videojuegos.dir/main.cpp.o
Videojuegos: CMakeFiles/Videojuegos.dir/build.make
Videojuegos: CMakeFiles/Videojuegos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maudieguez/Documents/C++/Videojuegos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Videojuegos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Videojuegos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Videojuegos.dir/build: Videojuegos

.PHONY : CMakeFiles/Videojuegos.dir/build

CMakeFiles/Videojuegos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Videojuegos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Videojuegos.dir/clean

CMakeFiles/Videojuegos.dir/depend:
	cd /Users/maudieguez/Documents/C++/Videojuegos/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maudieguez/Documents/C++/Videojuegos /Users/maudieguez/Documents/C++/Videojuegos /Users/maudieguez/Documents/C++/Videojuegos/cmake-build-debug /Users/maudieguez/Documents/C++/Videojuegos/cmake-build-debug /Users/maudieguez/Documents/C++/Videojuegos/cmake-build-debug/CMakeFiles/Videojuegos.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Videojuegos.dir/depend

