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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/13 CSES"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/13 CSES/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/13_CSES.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/13_CSES.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/13_CSES.dir/flags.make

CMakeFiles/13_CSES.dir/main.cpp.o: CMakeFiles/13_CSES.dir/flags.make
CMakeFiles/13_CSES.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/13 CSES/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/13_CSES.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/13_CSES.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/13 CSES/main.cpp"

CMakeFiles/13_CSES.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/13_CSES.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/13 CSES/main.cpp" > CMakeFiles/13_CSES.dir/main.cpp.i

CMakeFiles/13_CSES.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/13_CSES.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/13 CSES/main.cpp" -o CMakeFiles/13_CSES.dir/main.cpp.s

# Object files for target 13_CSES
13_CSES_OBJECTS = \
"CMakeFiles/13_CSES.dir/main.cpp.o"

# External object files for target 13_CSES
13_CSES_EXTERNAL_OBJECTS =

13_CSES: CMakeFiles/13_CSES.dir/main.cpp.o
13_CSES: CMakeFiles/13_CSES.dir/build.make
13_CSES: CMakeFiles/13_CSES.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/13 CSES/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 13_CSES"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/13_CSES.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/13_CSES.dir/build: 13_CSES

.PHONY : CMakeFiles/13_CSES.dir/build

CMakeFiles/13_CSES.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/13_CSES.dir/cmake_clean.cmake
.PHONY : CMakeFiles/13_CSES.dir/clean

CMakeFiles/13_CSES.dir/depend:
	cd "/Users/maudieguez/Documents/C++/13 CSES/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/13 CSES" "/Users/maudieguez/Documents/C++/13 CSES" "/Users/maudieguez/Documents/C++/13 CSES/cmake-build-debug" "/Users/maudieguez/Documents/C++/13 CSES/cmake-build-debug" "/Users/maudieguez/Documents/C++/13 CSES/cmake-build-debug/CMakeFiles/13_CSES.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/13_CSES.dir/depend

