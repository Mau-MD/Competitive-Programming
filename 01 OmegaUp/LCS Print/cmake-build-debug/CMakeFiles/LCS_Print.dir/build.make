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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/LCS Print"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/LCS Print/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/LCS_Print.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LCS_Print.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LCS_Print.dir/flags.make

CMakeFiles/LCS_Print.dir/main.cpp.o: CMakeFiles/LCS_Print.dir/flags.make
CMakeFiles/LCS_Print.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/LCS Print/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LCS_Print.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LCS_Print.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/LCS Print/main.cpp"

CMakeFiles/LCS_Print.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LCS_Print.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/LCS Print/main.cpp" > CMakeFiles/LCS_Print.dir/main.cpp.i

CMakeFiles/LCS_Print.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LCS_Print.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/LCS Print/main.cpp" -o CMakeFiles/LCS_Print.dir/main.cpp.s

# Object files for target LCS_Print
LCS_Print_OBJECTS = \
"CMakeFiles/LCS_Print.dir/main.cpp.o"

# External object files for target LCS_Print
LCS_Print_EXTERNAL_OBJECTS =

LCS_Print: CMakeFiles/LCS_Print.dir/main.cpp.o
LCS_Print: CMakeFiles/LCS_Print.dir/build.make
LCS_Print: CMakeFiles/LCS_Print.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/LCS Print/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LCS_Print"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LCS_Print.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LCS_Print.dir/build: LCS_Print

.PHONY : CMakeFiles/LCS_Print.dir/build

CMakeFiles/LCS_Print.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LCS_Print.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LCS_Print.dir/clean

CMakeFiles/LCS_Print.dir/depend:
	cd "/Users/maudieguez/Documents/C++/LCS Print/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/LCS Print" "/Users/maudieguez/Documents/C++/LCS Print" "/Users/maudieguez/Documents/C++/LCS Print/cmake-build-debug" "/Users/maudieguez/Documents/C++/LCS Print/cmake-build-debug" "/Users/maudieguez/Documents/C++/LCS Print/cmake-build-debug/CMakeFiles/LCS_Print.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/LCS_Print.dir/depend

