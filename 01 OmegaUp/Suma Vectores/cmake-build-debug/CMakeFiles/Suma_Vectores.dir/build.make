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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/Suma Vectores"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/Suma Vectores/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Suma_Vectores.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Suma_Vectores.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Suma_Vectores.dir/flags.make

CMakeFiles/Suma_Vectores.dir/main.cpp.o: CMakeFiles/Suma_Vectores.dir/flags.make
CMakeFiles/Suma_Vectores.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/Suma Vectores/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Suma_Vectores.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Suma_Vectores.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/Suma Vectores/main.cpp"

CMakeFiles/Suma_Vectores.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Suma_Vectores.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/Suma Vectores/main.cpp" > CMakeFiles/Suma_Vectores.dir/main.cpp.i

CMakeFiles/Suma_Vectores.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Suma_Vectores.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/Suma Vectores/main.cpp" -o CMakeFiles/Suma_Vectores.dir/main.cpp.s

# Object files for target Suma_Vectores
Suma_Vectores_OBJECTS = \
"CMakeFiles/Suma_Vectores.dir/main.cpp.o"

# External object files for target Suma_Vectores
Suma_Vectores_EXTERNAL_OBJECTS =

Suma_Vectores: CMakeFiles/Suma_Vectores.dir/main.cpp.o
Suma_Vectores: CMakeFiles/Suma_Vectores.dir/build.make
Suma_Vectores: CMakeFiles/Suma_Vectores.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/Suma Vectores/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Suma_Vectores"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Suma_Vectores.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Suma_Vectores.dir/build: Suma_Vectores

.PHONY : CMakeFiles/Suma_Vectores.dir/build

CMakeFiles/Suma_Vectores.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Suma_Vectores.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Suma_Vectores.dir/clean

CMakeFiles/Suma_Vectores.dir/depend:
	cd "/Users/maudieguez/Documents/C++/Suma Vectores/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/Suma Vectores" "/Users/maudieguez/Documents/C++/Suma Vectores" "/Users/maudieguez/Documents/C++/Suma Vectores/cmake-build-debug" "/Users/maudieguez/Documents/C++/Suma Vectores/cmake-build-debug" "/Users/maudieguez/Documents/C++/Suma Vectores/cmake-build-debug/CMakeFiles/Suma_Vectores.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Suma_Vectores.dir/depend

