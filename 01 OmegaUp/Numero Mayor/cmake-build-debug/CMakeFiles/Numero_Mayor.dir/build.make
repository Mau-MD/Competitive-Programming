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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/Numero Mayor"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/Numero Mayor/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Numero_Mayor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Numero_Mayor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Numero_Mayor.dir/flags.make

CMakeFiles/Numero_Mayor.dir/main.cpp.o: CMakeFiles/Numero_Mayor.dir/flags.make
CMakeFiles/Numero_Mayor.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/Numero Mayor/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Numero_Mayor.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Numero_Mayor.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/Numero Mayor/main.cpp"

CMakeFiles/Numero_Mayor.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Numero_Mayor.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/Numero Mayor/main.cpp" > CMakeFiles/Numero_Mayor.dir/main.cpp.i

CMakeFiles/Numero_Mayor.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Numero_Mayor.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/Numero Mayor/main.cpp" -o CMakeFiles/Numero_Mayor.dir/main.cpp.s

# Object files for target Numero_Mayor
Numero_Mayor_OBJECTS = \
"CMakeFiles/Numero_Mayor.dir/main.cpp.o"

# External object files for target Numero_Mayor
Numero_Mayor_EXTERNAL_OBJECTS =

Numero_Mayor: CMakeFiles/Numero_Mayor.dir/main.cpp.o
Numero_Mayor: CMakeFiles/Numero_Mayor.dir/build.make
Numero_Mayor: CMakeFiles/Numero_Mayor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/Numero Mayor/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Numero_Mayor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Numero_Mayor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Numero_Mayor.dir/build: Numero_Mayor

.PHONY : CMakeFiles/Numero_Mayor.dir/build

CMakeFiles/Numero_Mayor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Numero_Mayor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Numero_Mayor.dir/clean

CMakeFiles/Numero_Mayor.dir/depend:
	cd "/Users/maudieguez/Documents/C++/Numero Mayor/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/Numero Mayor" "/Users/maudieguez/Documents/C++/Numero Mayor" "/Users/maudieguez/Documents/C++/Numero Mayor/cmake-build-debug" "/Users/maudieguez/Documents/C++/Numero Mayor/cmake-build-debug" "/Users/maudieguez/Documents/C++/Numero Mayor/cmake-build-debug/CMakeFiles/Numero_Mayor.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Numero_Mayor.dir/depend

