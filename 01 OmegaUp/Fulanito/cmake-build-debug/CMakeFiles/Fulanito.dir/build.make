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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/01 OmegaUp/Fulanito"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/01 OmegaUp/Fulanito/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Fulanito.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Fulanito.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Fulanito.dir/flags.make

CMakeFiles/Fulanito.dir/main.cpp.o: CMakeFiles/Fulanito.dir/flags.make
CMakeFiles/Fulanito.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/01 OmegaUp/Fulanito/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Fulanito.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Fulanito.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/01 OmegaUp/Fulanito/main.cpp"

CMakeFiles/Fulanito.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Fulanito.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/01 OmegaUp/Fulanito/main.cpp" > CMakeFiles/Fulanito.dir/main.cpp.i

CMakeFiles/Fulanito.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Fulanito.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/01 OmegaUp/Fulanito/main.cpp" -o CMakeFiles/Fulanito.dir/main.cpp.s

# Object files for target Fulanito
Fulanito_OBJECTS = \
"CMakeFiles/Fulanito.dir/main.cpp.o"

# External object files for target Fulanito
Fulanito_EXTERNAL_OBJECTS =

Fulanito: CMakeFiles/Fulanito.dir/main.cpp.o
Fulanito: CMakeFiles/Fulanito.dir/build.make
Fulanito: CMakeFiles/Fulanito.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/01 OmegaUp/Fulanito/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Fulanito"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fulanito.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Fulanito.dir/build: Fulanito

.PHONY : CMakeFiles/Fulanito.dir/build

CMakeFiles/Fulanito.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Fulanito.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Fulanito.dir/clean

CMakeFiles/Fulanito.dir/depend:
	cd "/Users/maudieguez/Documents/C++/01 OmegaUp/Fulanito/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/01 OmegaUp/Fulanito" "/Users/maudieguez/Documents/C++/01 OmegaUp/Fulanito" "/Users/maudieguez/Documents/C++/01 OmegaUp/Fulanito/cmake-build-debug" "/Users/maudieguez/Documents/C++/01 OmegaUp/Fulanito/cmake-build-debug" "/Users/maudieguez/Documents/C++/01 OmegaUp/Fulanito/cmake-build-debug/CMakeFiles/Fulanito.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Fulanito.dir/depend

