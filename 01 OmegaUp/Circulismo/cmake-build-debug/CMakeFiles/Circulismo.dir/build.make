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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/01 OmegaUp/Circulismo"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/01 OmegaUp/Circulismo/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Circulismo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Circulismo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Circulismo.dir/flags.make

CMakeFiles/Circulismo.dir/main.cpp.o: CMakeFiles/Circulismo.dir/flags.make
CMakeFiles/Circulismo.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/01 OmegaUp/Circulismo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Circulismo.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Circulismo.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/01 OmegaUp/Circulismo/main.cpp"

CMakeFiles/Circulismo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Circulismo.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/01 OmegaUp/Circulismo/main.cpp" > CMakeFiles/Circulismo.dir/main.cpp.i

CMakeFiles/Circulismo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Circulismo.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/01 OmegaUp/Circulismo/main.cpp" -o CMakeFiles/Circulismo.dir/main.cpp.s

# Object files for target Circulismo
Circulismo_OBJECTS = \
"CMakeFiles/Circulismo.dir/main.cpp.o"

# External object files for target Circulismo
Circulismo_EXTERNAL_OBJECTS =

Circulismo: CMakeFiles/Circulismo.dir/main.cpp.o
Circulismo: CMakeFiles/Circulismo.dir/build.make
Circulismo: CMakeFiles/Circulismo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/01 OmegaUp/Circulismo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Circulismo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Circulismo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Circulismo.dir/build: Circulismo

.PHONY : CMakeFiles/Circulismo.dir/build

CMakeFiles/Circulismo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Circulismo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Circulismo.dir/clean

CMakeFiles/Circulismo.dir/depend:
	cd "/Users/maudieguez/Documents/C++/01 OmegaUp/Circulismo/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/01 OmegaUp/Circulismo" "/Users/maudieguez/Documents/C++/01 OmegaUp/Circulismo" "/Users/maudieguez/Documents/C++/01 OmegaUp/Circulismo/cmake-build-debug" "/Users/maudieguez/Documents/C++/01 OmegaUp/Circulismo/cmake-build-debug" "/Users/maudieguez/Documents/C++/01 OmegaUp/Circulismo/cmake-build-debug/CMakeFiles/Circulismo.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Circulismo.dir/depend

