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
CMAKE_SOURCE_DIR = /Users/maudieguez/Documents/C++/SumaRango

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maudieguez/Documents/C++/SumaRango/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SumaRango.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SumaRango.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SumaRango.dir/flags.make

CMakeFiles/SumaRango.dir/main.cpp.o: CMakeFiles/SumaRango.dir/flags.make
CMakeFiles/SumaRango.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maudieguez/Documents/C++/SumaRango/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SumaRango.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SumaRango.dir/main.cpp.o -c /Users/maudieguez/Documents/C++/SumaRango/main.cpp

CMakeFiles/SumaRango.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SumaRango.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maudieguez/Documents/C++/SumaRango/main.cpp > CMakeFiles/SumaRango.dir/main.cpp.i

CMakeFiles/SumaRango.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SumaRango.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maudieguez/Documents/C++/SumaRango/main.cpp -o CMakeFiles/SumaRango.dir/main.cpp.s

# Object files for target SumaRango
SumaRango_OBJECTS = \
"CMakeFiles/SumaRango.dir/main.cpp.o"

# External object files for target SumaRango
SumaRango_EXTERNAL_OBJECTS =

SumaRango: CMakeFiles/SumaRango.dir/main.cpp.o
SumaRango: CMakeFiles/SumaRango.dir/build.make
SumaRango: CMakeFiles/SumaRango.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maudieguez/Documents/C++/SumaRango/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SumaRango"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SumaRango.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SumaRango.dir/build: SumaRango

.PHONY : CMakeFiles/SumaRango.dir/build

CMakeFiles/SumaRango.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SumaRango.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SumaRango.dir/clean

CMakeFiles/SumaRango.dir/depend:
	cd /Users/maudieguez/Documents/C++/SumaRango/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maudieguez/Documents/C++/SumaRango /Users/maudieguez/Documents/C++/SumaRango /Users/maudieguez/Documents/C++/SumaRango/cmake-build-debug /Users/maudieguez/Documents/C++/SumaRango/cmake-build-debug /Users/maudieguez/Documents/C++/SumaRango/cmake-build-debug/CMakeFiles/SumaRango.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SumaRango.dir/depend

