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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/descomposicion de primos"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/descomposicion de primos/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/descomposicion_de_primos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/descomposicion_de_primos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/descomposicion_de_primos.dir/flags.make

CMakeFiles/descomposicion_de_primos.dir/main.cpp.o: CMakeFiles/descomposicion_de_primos.dir/flags.make
CMakeFiles/descomposicion_de_primos.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/descomposicion de primos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/descomposicion_de_primos.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/descomposicion_de_primos.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/descomposicion de primos/main.cpp"

CMakeFiles/descomposicion_de_primos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/descomposicion_de_primos.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/descomposicion de primos/main.cpp" > CMakeFiles/descomposicion_de_primos.dir/main.cpp.i

CMakeFiles/descomposicion_de_primos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/descomposicion_de_primos.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/descomposicion de primos/main.cpp" -o CMakeFiles/descomposicion_de_primos.dir/main.cpp.s

# Object files for target descomposicion_de_primos
descomposicion_de_primos_OBJECTS = \
"CMakeFiles/descomposicion_de_primos.dir/main.cpp.o"

# External object files for target descomposicion_de_primos
descomposicion_de_primos_EXTERNAL_OBJECTS =

descomposicion_de_primos: CMakeFiles/descomposicion_de_primos.dir/main.cpp.o
descomposicion_de_primos: CMakeFiles/descomposicion_de_primos.dir/build.make
descomposicion_de_primos: CMakeFiles/descomposicion_de_primos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/descomposicion de primos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable descomposicion_de_primos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/descomposicion_de_primos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/descomposicion_de_primos.dir/build: descomposicion_de_primos

.PHONY : CMakeFiles/descomposicion_de_primos.dir/build

CMakeFiles/descomposicion_de_primos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/descomposicion_de_primos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/descomposicion_de_primos.dir/clean

CMakeFiles/descomposicion_de_primos.dir/depend:
	cd "/Users/maudieguez/Documents/C++/descomposicion de primos/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/descomposicion de primos" "/Users/maudieguez/Documents/C++/descomposicion de primos" "/Users/maudieguez/Documents/C++/descomposicion de primos/cmake-build-debug" "/Users/maudieguez/Documents/C++/descomposicion de primos/cmake-build-debug" "/Users/maudieguez/Documents/C++/descomposicion de primos/cmake-build-debug/CMakeFiles/descomposicion_de_primos.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/descomposicion_de_primos.dir/depend
