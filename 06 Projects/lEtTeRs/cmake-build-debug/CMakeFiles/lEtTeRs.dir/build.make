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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/06 Projects/lEtTeRs"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/06 Projects/lEtTeRs/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/lEtTeRs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lEtTeRs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lEtTeRs.dir/flags.make

CMakeFiles/lEtTeRs.dir/main.cpp.o: CMakeFiles/lEtTeRs.dir/flags.make
CMakeFiles/lEtTeRs.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/06 Projects/lEtTeRs/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lEtTeRs.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lEtTeRs.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/06 Projects/lEtTeRs/main.cpp"

CMakeFiles/lEtTeRs.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lEtTeRs.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/06 Projects/lEtTeRs/main.cpp" > CMakeFiles/lEtTeRs.dir/main.cpp.i

CMakeFiles/lEtTeRs.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lEtTeRs.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/06 Projects/lEtTeRs/main.cpp" -o CMakeFiles/lEtTeRs.dir/main.cpp.s

# Object files for target lEtTeRs
lEtTeRs_OBJECTS = \
"CMakeFiles/lEtTeRs.dir/main.cpp.o"

# External object files for target lEtTeRs
lEtTeRs_EXTERNAL_OBJECTS =

lEtTeRs: CMakeFiles/lEtTeRs.dir/main.cpp.o
lEtTeRs: CMakeFiles/lEtTeRs.dir/build.make
lEtTeRs: CMakeFiles/lEtTeRs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/06 Projects/lEtTeRs/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lEtTeRs"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lEtTeRs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lEtTeRs.dir/build: lEtTeRs

.PHONY : CMakeFiles/lEtTeRs.dir/build

CMakeFiles/lEtTeRs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lEtTeRs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lEtTeRs.dir/clean

CMakeFiles/lEtTeRs.dir/depend:
	cd "/Users/maudieguez/Documents/C++/06 Projects/lEtTeRs/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/06 Projects/lEtTeRs" "/Users/maudieguez/Documents/C++/06 Projects/lEtTeRs" "/Users/maudieguez/Documents/C++/06 Projects/lEtTeRs/cmake-build-debug" "/Users/maudieguez/Documents/C++/06 Projects/lEtTeRs/cmake-build-debug" "/Users/maudieguez/Documents/C++/06 Projects/lEtTeRs/cmake-build-debug/CMakeFiles/lEtTeRs.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lEtTeRs.dir/depend

