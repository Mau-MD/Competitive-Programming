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
CMAKE_SOURCE_DIR = /Users/maudieguez/Documents/C++/Callejuelas

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maudieguez/Documents/C++/Callejuelas/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Callejuelas.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Callejuelas.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Callejuelas.dir/flags.make

CMakeFiles/Callejuelas.dir/main.cpp.o: CMakeFiles/Callejuelas.dir/flags.make
CMakeFiles/Callejuelas.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maudieguez/Documents/C++/Callejuelas/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Callejuelas.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Callejuelas.dir/main.cpp.o -c /Users/maudieguez/Documents/C++/Callejuelas/main.cpp

CMakeFiles/Callejuelas.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Callejuelas.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maudieguez/Documents/C++/Callejuelas/main.cpp > CMakeFiles/Callejuelas.dir/main.cpp.i

CMakeFiles/Callejuelas.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Callejuelas.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maudieguez/Documents/C++/Callejuelas/main.cpp -o CMakeFiles/Callejuelas.dir/main.cpp.s

# Object files for target Callejuelas
Callejuelas_OBJECTS = \
"CMakeFiles/Callejuelas.dir/main.cpp.o"

# External object files for target Callejuelas
Callejuelas_EXTERNAL_OBJECTS =

Callejuelas: CMakeFiles/Callejuelas.dir/main.cpp.o
Callejuelas: CMakeFiles/Callejuelas.dir/build.make
Callejuelas: CMakeFiles/Callejuelas.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maudieguez/Documents/C++/Callejuelas/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Callejuelas"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Callejuelas.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Callejuelas.dir/build: Callejuelas

.PHONY : CMakeFiles/Callejuelas.dir/build

CMakeFiles/Callejuelas.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Callejuelas.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Callejuelas.dir/clean

CMakeFiles/Callejuelas.dir/depend:
	cd /Users/maudieguez/Documents/C++/Callejuelas/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maudieguez/Documents/C++/Callejuelas /Users/maudieguez/Documents/C++/Callejuelas /Users/maudieguez/Documents/C++/Callejuelas/cmake-build-debug /Users/maudieguez/Documents/C++/Callejuelas/cmake-build-debug /Users/maudieguez/Documents/C++/Callejuelas/cmake-build-debug/CMakeFiles/Callejuelas.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Callejuelas.dir/depend
