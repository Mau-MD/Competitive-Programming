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
CMAKE_SOURCE_DIR = /Users/maudieguez/Documents/C++/TransformacionesString

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maudieguez/Documents/C++/TransformacionesString/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TransformacionesString.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TransformacionesString.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TransformacionesString.dir/flags.make

CMakeFiles/TransformacionesString.dir/main.cpp.o: CMakeFiles/TransformacionesString.dir/flags.make
CMakeFiles/TransformacionesString.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maudieguez/Documents/C++/TransformacionesString/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TransformacionesString.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TransformacionesString.dir/main.cpp.o -c /Users/maudieguez/Documents/C++/TransformacionesString/main.cpp

CMakeFiles/TransformacionesString.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TransformacionesString.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maudieguez/Documents/C++/TransformacionesString/main.cpp > CMakeFiles/TransformacionesString.dir/main.cpp.i

CMakeFiles/TransformacionesString.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TransformacionesString.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maudieguez/Documents/C++/TransformacionesString/main.cpp -o CMakeFiles/TransformacionesString.dir/main.cpp.s

# Object files for target TransformacionesString
TransformacionesString_OBJECTS = \
"CMakeFiles/TransformacionesString.dir/main.cpp.o"

# External object files for target TransformacionesString
TransformacionesString_EXTERNAL_OBJECTS =

TransformacionesString: CMakeFiles/TransformacionesString.dir/main.cpp.o
TransformacionesString: CMakeFiles/TransformacionesString.dir/build.make
TransformacionesString: CMakeFiles/TransformacionesString.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maudieguez/Documents/C++/TransformacionesString/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TransformacionesString"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TransformacionesString.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TransformacionesString.dir/build: TransformacionesString

.PHONY : CMakeFiles/TransformacionesString.dir/build

CMakeFiles/TransformacionesString.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TransformacionesString.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TransformacionesString.dir/clean

CMakeFiles/TransformacionesString.dir/depend:
	cd /Users/maudieguez/Documents/C++/TransformacionesString/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maudieguez/Documents/C++/TransformacionesString /Users/maudieguez/Documents/C++/TransformacionesString /Users/maudieguez/Documents/C++/TransformacionesString/cmake-build-debug /Users/maudieguez/Documents/C++/TransformacionesString/cmake-build-debug /Users/maudieguez/Documents/C++/TransformacionesString/cmake-build-debug/CMakeFiles/TransformacionesString.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TransformacionesString.dir/depend
