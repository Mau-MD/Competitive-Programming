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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/alfabetic prder"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/alfabetic prder/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/alfabetic_prder.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/alfabetic_prder.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/alfabetic_prder.dir/flags.make

CMakeFiles/alfabetic_prder.dir/main.cpp.o: CMakeFiles/alfabetic_prder.dir/flags.make
CMakeFiles/alfabetic_prder.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/alfabetic prder/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/alfabetic_prder.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/alfabetic_prder.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/alfabetic prder/main.cpp"

CMakeFiles/alfabetic_prder.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alfabetic_prder.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/alfabetic prder/main.cpp" > CMakeFiles/alfabetic_prder.dir/main.cpp.i

CMakeFiles/alfabetic_prder.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alfabetic_prder.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/alfabetic prder/main.cpp" -o CMakeFiles/alfabetic_prder.dir/main.cpp.s

# Object files for target alfabetic_prder
alfabetic_prder_OBJECTS = \
"CMakeFiles/alfabetic_prder.dir/main.cpp.o"

# External object files for target alfabetic_prder
alfabetic_prder_EXTERNAL_OBJECTS =

alfabetic_prder: CMakeFiles/alfabetic_prder.dir/main.cpp.o
alfabetic_prder: CMakeFiles/alfabetic_prder.dir/build.make
alfabetic_prder: CMakeFiles/alfabetic_prder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/alfabetic prder/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable alfabetic_prder"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/alfabetic_prder.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/alfabetic_prder.dir/build: alfabetic_prder

.PHONY : CMakeFiles/alfabetic_prder.dir/build

CMakeFiles/alfabetic_prder.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/alfabetic_prder.dir/cmake_clean.cmake
.PHONY : CMakeFiles/alfabetic_prder.dir/clean

CMakeFiles/alfabetic_prder.dir/depend:
	cd "/Users/maudieguez/Documents/C++/alfabetic prder/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/alfabetic prder" "/Users/maudieguez/Documents/C++/alfabetic prder" "/Users/maudieguez/Documents/C++/alfabetic prder/cmake-build-debug" "/Users/maudieguez/Documents/C++/alfabetic prder/cmake-build-debug" "/Users/maudieguez/Documents/C++/alfabetic prder/cmake-build-debug/CMakeFiles/alfabetic_prder.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/alfabetic_prder.dir/depend
