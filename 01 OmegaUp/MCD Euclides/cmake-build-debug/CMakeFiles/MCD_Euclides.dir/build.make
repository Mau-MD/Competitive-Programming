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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/MCD Euclides"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/MCD Euclides/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/MCD_Euclides.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MCD_Euclides.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MCD_Euclides.dir/flags.make

CMakeFiles/MCD_Euclides.dir/main.cpp.o: CMakeFiles/MCD_Euclides.dir/flags.make
CMakeFiles/MCD_Euclides.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/MCD Euclides/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MCD_Euclides.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MCD_Euclides.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/MCD Euclides/main.cpp"

CMakeFiles/MCD_Euclides.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MCD_Euclides.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/MCD Euclides/main.cpp" > CMakeFiles/MCD_Euclides.dir/main.cpp.i

CMakeFiles/MCD_Euclides.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MCD_Euclides.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/MCD Euclides/main.cpp" -o CMakeFiles/MCD_Euclides.dir/main.cpp.s

# Object files for target MCD_Euclides
MCD_Euclides_OBJECTS = \
"CMakeFiles/MCD_Euclides.dir/main.cpp.o"

# External object files for target MCD_Euclides
MCD_Euclides_EXTERNAL_OBJECTS =

MCD_Euclides: CMakeFiles/MCD_Euclides.dir/main.cpp.o
MCD_Euclides: CMakeFiles/MCD_Euclides.dir/build.make
MCD_Euclides: CMakeFiles/MCD_Euclides.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/MCD Euclides/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MCD_Euclides"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MCD_Euclides.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MCD_Euclides.dir/build: MCD_Euclides

.PHONY : CMakeFiles/MCD_Euclides.dir/build

CMakeFiles/MCD_Euclides.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MCD_Euclides.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MCD_Euclides.dir/clean

CMakeFiles/MCD_Euclides.dir/depend:
	cd "/Users/maudieguez/Documents/C++/MCD Euclides/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/MCD Euclides" "/Users/maudieguez/Documents/C++/MCD Euclides" "/Users/maudieguez/Documents/C++/MCD Euclides/cmake-build-debug" "/Users/maudieguez/Documents/C++/MCD Euclides/cmake-build-debug" "/Users/maudieguez/Documents/C++/MCD Euclides/cmake-build-debug/CMakeFiles/MCD_Euclides.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/MCD_Euclides.dir/depend
