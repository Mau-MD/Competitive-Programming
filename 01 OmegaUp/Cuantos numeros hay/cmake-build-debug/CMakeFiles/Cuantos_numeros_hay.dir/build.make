# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/Cuantos numeros hay"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/Cuantos numeros hay/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Cuantos_numeros_hay.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Cuantos_numeros_hay.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cuantos_numeros_hay.dir/flags.make

CMakeFiles/Cuantos_numeros_hay.dir/main.cpp.o: CMakeFiles/Cuantos_numeros_hay.dir/flags.make
CMakeFiles/Cuantos_numeros_hay.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/Cuantos numeros hay/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Cuantos_numeros_hay.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cuantos_numeros_hay.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/Cuantos numeros hay/main.cpp"

CMakeFiles/Cuantos_numeros_hay.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cuantos_numeros_hay.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/Cuantos numeros hay/main.cpp" > CMakeFiles/Cuantos_numeros_hay.dir/main.cpp.i

CMakeFiles/Cuantos_numeros_hay.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cuantos_numeros_hay.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/Cuantos numeros hay/main.cpp" -o CMakeFiles/Cuantos_numeros_hay.dir/main.cpp.s

# Object files for target Cuantos_numeros_hay
Cuantos_numeros_hay_OBJECTS = \
"CMakeFiles/Cuantos_numeros_hay.dir/main.cpp.o"

# External object files for target Cuantos_numeros_hay
Cuantos_numeros_hay_EXTERNAL_OBJECTS =

Cuantos_numeros_hay: CMakeFiles/Cuantos_numeros_hay.dir/main.cpp.o
Cuantos_numeros_hay: CMakeFiles/Cuantos_numeros_hay.dir/build.make
Cuantos_numeros_hay: CMakeFiles/Cuantos_numeros_hay.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/Cuantos numeros hay/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Cuantos_numeros_hay"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Cuantos_numeros_hay.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cuantos_numeros_hay.dir/build: Cuantos_numeros_hay

.PHONY : CMakeFiles/Cuantos_numeros_hay.dir/build

CMakeFiles/Cuantos_numeros_hay.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Cuantos_numeros_hay.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Cuantos_numeros_hay.dir/clean

CMakeFiles/Cuantos_numeros_hay.dir/depend:
	cd "/Users/maudieguez/Documents/C++/Cuantos numeros hay/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/Cuantos numeros hay" "/Users/maudieguez/Documents/C++/Cuantos numeros hay" "/Users/maudieguez/Documents/C++/Cuantos numeros hay/cmake-build-debug" "/Users/maudieguez/Documents/C++/Cuantos numeros hay/cmake-build-debug" "/Users/maudieguez/Documents/C++/Cuantos numeros hay/cmake-build-debug/CMakeFiles/Cuantos_numeros_hay.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Cuantos_numeros_hay.dir/depend

