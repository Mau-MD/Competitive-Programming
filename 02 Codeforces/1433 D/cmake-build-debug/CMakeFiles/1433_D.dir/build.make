# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/02 Codeforces/1433 D"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/02 Codeforces/1433 D/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/1433_D.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1433_D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1433_D.dir/flags.make

CMakeFiles/1433_D.dir/main.cpp.o: CMakeFiles/1433_D.dir/flags.make
CMakeFiles/1433_D.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/02 Codeforces/1433 D/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1433_D.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1433_D.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/02 Codeforces/1433 D/main.cpp"

CMakeFiles/1433_D.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1433_D.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/02 Codeforces/1433 D/main.cpp" > CMakeFiles/1433_D.dir/main.cpp.i

CMakeFiles/1433_D.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1433_D.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/02 Codeforces/1433 D/main.cpp" -o CMakeFiles/1433_D.dir/main.cpp.s

# Object files for target 1433_D
1433_D_OBJECTS = \
"CMakeFiles/1433_D.dir/main.cpp.o"

# External object files for target 1433_D
1433_D_EXTERNAL_OBJECTS =

1433_D: CMakeFiles/1433_D.dir/main.cpp.o
1433_D: CMakeFiles/1433_D.dir/build.make
1433_D: CMakeFiles/1433_D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/02 Codeforces/1433 D/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1433_D"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/1433_D.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1433_D.dir/build: 1433_D

.PHONY : CMakeFiles/1433_D.dir/build

CMakeFiles/1433_D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/1433_D.dir/cmake_clean.cmake
.PHONY : CMakeFiles/1433_D.dir/clean

CMakeFiles/1433_D.dir/depend:
	cd "/Users/maudieguez/Documents/C++/02 Codeforces/1433 D/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/02 Codeforces/1433 D" "/Users/maudieguez/Documents/C++/02 Codeforces/1433 D" "/Users/maudieguez/Documents/C++/02 Codeforces/1433 D/cmake-build-debug" "/Users/maudieguez/Documents/C++/02 Codeforces/1433 D/cmake-build-debug" "/Users/maudieguez/Documents/C++/02 Codeforces/1433 D/cmake-build-debug/CMakeFiles/1433_D.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/1433_D.dir/depend

