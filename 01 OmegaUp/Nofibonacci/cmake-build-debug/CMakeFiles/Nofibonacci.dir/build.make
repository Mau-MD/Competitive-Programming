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
CMAKE_SOURCE_DIR = /Users/maudieguez/Documents/C++/Nofibonacci

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maudieguez/Documents/C++/Nofibonacci/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Nofibonacci.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Nofibonacci.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Nofibonacci.dir/flags.make

CMakeFiles/Nofibonacci.dir/main.cpp.o: CMakeFiles/Nofibonacci.dir/flags.make
CMakeFiles/Nofibonacci.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maudieguez/Documents/C++/Nofibonacci/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Nofibonacci.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Nofibonacci.dir/main.cpp.o -c /Users/maudieguez/Documents/C++/Nofibonacci/main.cpp

CMakeFiles/Nofibonacci.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Nofibonacci.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maudieguez/Documents/C++/Nofibonacci/main.cpp > CMakeFiles/Nofibonacci.dir/main.cpp.i

CMakeFiles/Nofibonacci.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Nofibonacci.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maudieguez/Documents/C++/Nofibonacci/main.cpp -o CMakeFiles/Nofibonacci.dir/main.cpp.s

# Object files for target Nofibonacci
Nofibonacci_OBJECTS = \
"CMakeFiles/Nofibonacci.dir/main.cpp.o"

# External object files for target Nofibonacci
Nofibonacci_EXTERNAL_OBJECTS =

Nofibonacci: CMakeFiles/Nofibonacci.dir/main.cpp.o
Nofibonacci: CMakeFiles/Nofibonacci.dir/build.make
Nofibonacci: CMakeFiles/Nofibonacci.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maudieguez/Documents/C++/Nofibonacci/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Nofibonacci"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Nofibonacci.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Nofibonacci.dir/build: Nofibonacci

.PHONY : CMakeFiles/Nofibonacci.dir/build

CMakeFiles/Nofibonacci.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Nofibonacci.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Nofibonacci.dir/clean

CMakeFiles/Nofibonacci.dir/depend:
	cd /Users/maudieguez/Documents/C++/Nofibonacci/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maudieguez/Documents/C++/Nofibonacci /Users/maudieguez/Documents/C++/Nofibonacci /Users/maudieguez/Documents/C++/Nofibonacci/cmake-build-debug /Users/maudieguez/Documents/C++/Nofibonacci/cmake-build-debug /Users/maudieguez/Documents/C++/Nofibonacci/cmake-build-debug/CMakeFiles/Nofibonacci.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Nofibonacci.dir/depend

