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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/Ordenamiento Alfabetico"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/Ordenamiento Alfabetico/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Ordenamiento_Alfabetico.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ordenamiento_Alfabetico.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ordenamiento_Alfabetico.dir/flags.make

CMakeFiles/Ordenamiento_Alfabetico.dir/main.cpp.o: CMakeFiles/Ordenamiento_Alfabetico.dir/flags.make
CMakeFiles/Ordenamiento_Alfabetico.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/Ordenamiento Alfabetico/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ordenamiento_Alfabetico.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ordenamiento_Alfabetico.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/Ordenamiento Alfabetico/main.cpp"

CMakeFiles/Ordenamiento_Alfabetico.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ordenamiento_Alfabetico.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/Ordenamiento Alfabetico/main.cpp" > CMakeFiles/Ordenamiento_Alfabetico.dir/main.cpp.i

CMakeFiles/Ordenamiento_Alfabetico.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ordenamiento_Alfabetico.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/Ordenamiento Alfabetico/main.cpp" -o CMakeFiles/Ordenamiento_Alfabetico.dir/main.cpp.s

# Object files for target Ordenamiento_Alfabetico
Ordenamiento_Alfabetico_OBJECTS = \
"CMakeFiles/Ordenamiento_Alfabetico.dir/main.cpp.o"

# External object files for target Ordenamiento_Alfabetico
Ordenamiento_Alfabetico_EXTERNAL_OBJECTS =

Ordenamiento_Alfabetico: CMakeFiles/Ordenamiento_Alfabetico.dir/main.cpp.o
Ordenamiento_Alfabetico: CMakeFiles/Ordenamiento_Alfabetico.dir/build.make
Ordenamiento_Alfabetico: CMakeFiles/Ordenamiento_Alfabetico.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/Ordenamiento Alfabetico/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Ordenamiento_Alfabetico"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ordenamiento_Alfabetico.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ordenamiento_Alfabetico.dir/build: Ordenamiento_Alfabetico

.PHONY : CMakeFiles/Ordenamiento_Alfabetico.dir/build

CMakeFiles/Ordenamiento_Alfabetico.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ordenamiento_Alfabetico.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ordenamiento_Alfabetico.dir/clean

CMakeFiles/Ordenamiento_Alfabetico.dir/depend:
	cd "/Users/maudieguez/Documents/C++/Ordenamiento Alfabetico/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/Ordenamiento Alfabetico" "/Users/maudieguez/Documents/C++/Ordenamiento Alfabetico" "/Users/maudieguez/Documents/C++/Ordenamiento Alfabetico/cmake-build-debug" "/Users/maudieguez/Documents/C++/Ordenamiento Alfabetico/cmake-build-debug" "/Users/maudieguez/Documents/C++/Ordenamiento Alfabetico/cmake-build-debug/CMakeFiles/Ordenamiento_Alfabetico.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Ordenamiento_Alfabetico.dir/depend

