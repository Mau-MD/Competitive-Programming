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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/04 OMI/2011 La Guardia Negra"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/04 OMI/2011 La Guardia Negra/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/2011_La_Guardia_Negra.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2011_La_Guardia_Negra.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2011_La_Guardia_Negra.dir/flags.make

CMakeFiles/2011_La_Guardia_Negra.dir/main.cpp.o: CMakeFiles/2011_La_Guardia_Negra.dir/flags.make
CMakeFiles/2011_La_Guardia_Negra.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/04 OMI/2011 La Guardia Negra/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2011_La_Guardia_Negra.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/2011_La_Guardia_Negra.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/04 OMI/2011 La Guardia Negra/main.cpp"

CMakeFiles/2011_La_Guardia_Negra.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2011_La_Guardia_Negra.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/04 OMI/2011 La Guardia Negra/main.cpp" > CMakeFiles/2011_La_Guardia_Negra.dir/main.cpp.i

CMakeFiles/2011_La_Guardia_Negra.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2011_La_Guardia_Negra.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/04 OMI/2011 La Guardia Negra/main.cpp" -o CMakeFiles/2011_La_Guardia_Negra.dir/main.cpp.s

# Object files for target 2011_La_Guardia_Negra
2011_La_Guardia_Negra_OBJECTS = \
"CMakeFiles/2011_La_Guardia_Negra.dir/main.cpp.o"

# External object files for target 2011_La_Guardia_Negra
2011_La_Guardia_Negra_EXTERNAL_OBJECTS =

2011_La_Guardia_Negra: CMakeFiles/2011_La_Guardia_Negra.dir/main.cpp.o
2011_La_Guardia_Negra: CMakeFiles/2011_La_Guardia_Negra.dir/build.make
2011_La_Guardia_Negra: CMakeFiles/2011_La_Guardia_Negra.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/04 OMI/2011 La Guardia Negra/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 2011_La_Guardia_Negra"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/2011_La_Guardia_Negra.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2011_La_Guardia_Negra.dir/build: 2011_La_Guardia_Negra

.PHONY : CMakeFiles/2011_La_Guardia_Negra.dir/build

CMakeFiles/2011_La_Guardia_Negra.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/2011_La_Guardia_Negra.dir/cmake_clean.cmake
.PHONY : CMakeFiles/2011_La_Guardia_Negra.dir/clean

CMakeFiles/2011_La_Guardia_Negra.dir/depend:
	cd "/Users/maudieguez/Documents/C++/04 OMI/2011 La Guardia Negra/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/04 OMI/2011 La Guardia Negra" "/Users/maudieguez/Documents/C++/04 OMI/2011 La Guardia Negra" "/Users/maudieguez/Documents/C++/04 OMI/2011 La Guardia Negra/cmake-build-debug" "/Users/maudieguez/Documents/C++/04 OMI/2011 La Guardia Negra/cmake-build-debug" "/Users/maudieguez/Documents/C++/04 OMI/2011 La Guardia Negra/cmake-build-debug/CMakeFiles/2011_La_Guardia_Negra.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/2011_La_Guardia_Negra.dir/depend
