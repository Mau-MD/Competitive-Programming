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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/13 CSES/Sorting Searching/Stick Length"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/13 CSES/Sorting Searching/Stick Length/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Stick_Length.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Stick_Length.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Stick_Length.dir/flags.make

CMakeFiles/Stick_Length.dir/main.cpp.o: CMakeFiles/Stick_Length.dir/flags.make
CMakeFiles/Stick_Length.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/13 CSES/Sorting Searching/Stick Length/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Stick_Length.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Stick_Length.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/13 CSES/Sorting Searching/Stick Length/main.cpp"

CMakeFiles/Stick_Length.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Stick_Length.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/13 CSES/Sorting Searching/Stick Length/main.cpp" > CMakeFiles/Stick_Length.dir/main.cpp.i

CMakeFiles/Stick_Length.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Stick_Length.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/13 CSES/Sorting Searching/Stick Length/main.cpp" -o CMakeFiles/Stick_Length.dir/main.cpp.s

# Object files for target Stick_Length
Stick_Length_OBJECTS = \
"CMakeFiles/Stick_Length.dir/main.cpp.o"

# External object files for target Stick_Length
Stick_Length_EXTERNAL_OBJECTS =

Stick_Length: CMakeFiles/Stick_Length.dir/main.cpp.o
Stick_Length: CMakeFiles/Stick_Length.dir/build.make
Stick_Length: CMakeFiles/Stick_Length.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/13 CSES/Sorting Searching/Stick Length/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Stick_Length"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Stick_Length.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Stick_Length.dir/build: Stick_Length

.PHONY : CMakeFiles/Stick_Length.dir/build

CMakeFiles/Stick_Length.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Stick_Length.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Stick_Length.dir/clean

CMakeFiles/Stick_Length.dir/depend:
	cd "/Users/maudieguez/Documents/C++/13 CSES/Sorting Searching/Stick Length/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/13 CSES/Sorting Searching/Stick Length" "/Users/maudieguez/Documents/C++/13 CSES/Sorting Searching/Stick Length" "/Users/maudieguez/Documents/C++/13 CSES/Sorting Searching/Stick Length/cmake-build-debug" "/Users/maudieguez/Documents/C++/13 CSES/Sorting Searching/Stick Length/cmake-build-debug" "/Users/maudieguez/Documents/C++/13 CSES/Sorting Searching/Stick Length/cmake-build-debug/CMakeFiles/Stick_Length.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Stick_Length.dir/depend
