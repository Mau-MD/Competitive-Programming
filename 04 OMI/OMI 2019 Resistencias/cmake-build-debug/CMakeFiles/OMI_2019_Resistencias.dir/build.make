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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/OMI 2019 Resistencias"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/OMI 2019 Resistencias/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/OMI_2019_Resistencias.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OMI_2019_Resistencias.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OMI_2019_Resistencias.dir/flags.make

CMakeFiles/OMI_2019_Resistencias.dir/main.cpp.o: CMakeFiles/OMI_2019_Resistencias.dir/flags.make
CMakeFiles/OMI_2019_Resistencias.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/OMI 2019 Resistencias/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OMI_2019_Resistencias.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OMI_2019_Resistencias.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/OMI 2019 Resistencias/main.cpp"

CMakeFiles/OMI_2019_Resistencias.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OMI_2019_Resistencias.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/OMI 2019 Resistencias/main.cpp" > CMakeFiles/OMI_2019_Resistencias.dir/main.cpp.i

CMakeFiles/OMI_2019_Resistencias.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OMI_2019_Resistencias.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/OMI 2019 Resistencias/main.cpp" -o CMakeFiles/OMI_2019_Resistencias.dir/main.cpp.s

# Object files for target OMI_2019_Resistencias
OMI_2019_Resistencias_OBJECTS = \
"CMakeFiles/OMI_2019_Resistencias.dir/main.cpp.o"

# External object files for target OMI_2019_Resistencias
OMI_2019_Resistencias_EXTERNAL_OBJECTS =

OMI_2019_Resistencias: CMakeFiles/OMI_2019_Resistencias.dir/main.cpp.o
OMI_2019_Resistencias: CMakeFiles/OMI_2019_Resistencias.dir/build.make
OMI_2019_Resistencias: CMakeFiles/OMI_2019_Resistencias.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/OMI 2019 Resistencias/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable OMI_2019_Resistencias"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OMI_2019_Resistencias.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OMI_2019_Resistencias.dir/build: OMI_2019_Resistencias

.PHONY : CMakeFiles/OMI_2019_Resistencias.dir/build

CMakeFiles/OMI_2019_Resistencias.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OMI_2019_Resistencias.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OMI_2019_Resistencias.dir/clean

CMakeFiles/OMI_2019_Resistencias.dir/depend:
	cd "/Users/maudieguez/Documents/C++/OMI 2019 Resistencias/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/OMI 2019 Resistencias" "/Users/maudieguez/Documents/C++/OMI 2019 Resistencias" "/Users/maudieguez/Documents/C++/OMI 2019 Resistencias/cmake-build-debug" "/Users/maudieguez/Documents/C++/OMI 2019 Resistencias/cmake-build-debug" "/Users/maudieguez/Documents/C++/OMI 2019 Resistencias/cmake-build-debug/CMakeFiles/OMI_2019_Resistencias.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/OMI_2019_Resistencias.dir/depend

