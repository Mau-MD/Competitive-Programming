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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/Analizar Palabra"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/Analizar Palabra/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Analizar_Palabra.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Analizar_Palabra.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Analizar_Palabra.dir/flags.make

CMakeFiles/Analizar_Palabra.dir/main.cpp.o: CMakeFiles/Analizar_Palabra.dir/flags.make
CMakeFiles/Analizar_Palabra.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/Analizar Palabra/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Analizar_Palabra.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Analizar_Palabra.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/Analizar Palabra/main.cpp"

CMakeFiles/Analizar_Palabra.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Analizar_Palabra.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/Analizar Palabra/main.cpp" > CMakeFiles/Analizar_Palabra.dir/main.cpp.i

CMakeFiles/Analizar_Palabra.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Analizar_Palabra.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/Analizar Palabra/main.cpp" -o CMakeFiles/Analizar_Palabra.dir/main.cpp.s

# Object files for target Analizar_Palabra
Analizar_Palabra_OBJECTS = \
"CMakeFiles/Analizar_Palabra.dir/main.cpp.o"

# External object files for target Analizar_Palabra
Analizar_Palabra_EXTERNAL_OBJECTS =

Analizar_Palabra: CMakeFiles/Analizar_Palabra.dir/main.cpp.o
Analizar_Palabra: CMakeFiles/Analizar_Palabra.dir/build.make
Analizar_Palabra: CMakeFiles/Analizar_Palabra.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/Analizar Palabra/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Analizar_Palabra"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Analizar_Palabra.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Analizar_Palabra.dir/build: Analizar_Palabra

.PHONY : CMakeFiles/Analizar_Palabra.dir/build

CMakeFiles/Analizar_Palabra.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Analizar_Palabra.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Analizar_Palabra.dir/clean

CMakeFiles/Analizar_Palabra.dir/depend:
	cd "/Users/maudieguez/Documents/C++/Analizar Palabra/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/Analizar Palabra" "/Users/maudieguez/Documents/C++/Analizar Palabra" "/Users/maudieguez/Documents/C++/Analizar Palabra/cmake-build-debug" "/Users/maudieguez/Documents/C++/Analizar Palabra/cmake-build-debug" "/Users/maudieguez/Documents/C++/Analizar Palabra/cmake-build-debug/CMakeFiles/Analizar_Palabra.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Analizar_Palabra.dir/depend
