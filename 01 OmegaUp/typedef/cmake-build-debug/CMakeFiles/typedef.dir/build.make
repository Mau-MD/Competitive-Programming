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
CMAKE_SOURCE_DIR = /Users/maudieguez/Documents/C++/typedef

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maudieguez/Documents/C++/typedef/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/typedef.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/typedef.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/typedef.dir/flags.make

CMakeFiles/typedef.dir/main.cpp.o: CMakeFiles/typedef.dir/flags.make
CMakeFiles/typedef.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maudieguez/Documents/C++/typedef/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/typedef.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/typedef.dir/main.cpp.o -c /Users/maudieguez/Documents/C++/typedef/main.cpp

CMakeFiles/typedef.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/typedef.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maudieguez/Documents/C++/typedef/main.cpp > CMakeFiles/typedef.dir/main.cpp.i

CMakeFiles/typedef.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/typedef.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maudieguez/Documents/C++/typedef/main.cpp -o CMakeFiles/typedef.dir/main.cpp.s

# Object files for target typedef
typedef_OBJECTS = \
"CMakeFiles/typedef.dir/main.cpp.o"

# External object files for target typedef
typedef_EXTERNAL_OBJECTS =

typedef: CMakeFiles/typedef.dir/main.cpp.o
typedef: CMakeFiles/typedef.dir/build.make
typedef: CMakeFiles/typedef.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maudieguez/Documents/C++/typedef/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable typedef"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/typedef.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/typedef.dir/build: typedef

.PHONY : CMakeFiles/typedef.dir/build

CMakeFiles/typedef.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/typedef.dir/cmake_clean.cmake
.PHONY : CMakeFiles/typedef.dir/clean

CMakeFiles/typedef.dir/depend:
	cd /Users/maudieguez/Documents/C++/typedef/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maudieguez/Documents/C++/typedef /Users/maudieguez/Documents/C++/typedef /Users/maudieguez/Documents/C++/typedef/cmake-build-debug /Users/maudieguez/Documents/C++/typedef/cmake-build-debug /Users/maudieguez/Documents/C++/typedef/cmake-build-debug/CMakeFiles/typedef.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/typedef.dir/depend

