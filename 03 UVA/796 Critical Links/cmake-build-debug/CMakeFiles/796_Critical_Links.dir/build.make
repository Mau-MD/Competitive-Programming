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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/03 UVA/796 Critical Links"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/03 UVA/796 Critical Links/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/796_Critical_Links.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/796_Critical_Links.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/796_Critical_Links.dir/flags.make

CMakeFiles/796_Critical_Links.dir/main.cpp.o: CMakeFiles/796_Critical_Links.dir/flags.make
CMakeFiles/796_Critical_Links.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/03 UVA/796 Critical Links/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/796_Critical_Links.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/796_Critical_Links.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/03 UVA/796 Critical Links/main.cpp"

CMakeFiles/796_Critical_Links.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/796_Critical_Links.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/03 UVA/796 Critical Links/main.cpp" > CMakeFiles/796_Critical_Links.dir/main.cpp.i

CMakeFiles/796_Critical_Links.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/796_Critical_Links.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/03 UVA/796 Critical Links/main.cpp" -o CMakeFiles/796_Critical_Links.dir/main.cpp.s

# Object files for target 796_Critical_Links
796_Critical_Links_OBJECTS = \
"CMakeFiles/796_Critical_Links.dir/main.cpp.o"

# External object files for target 796_Critical_Links
796_Critical_Links_EXTERNAL_OBJECTS =

796_Critical_Links: CMakeFiles/796_Critical_Links.dir/main.cpp.o
796_Critical_Links: CMakeFiles/796_Critical_Links.dir/build.make
796_Critical_Links: CMakeFiles/796_Critical_Links.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/03 UVA/796 Critical Links/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 796_Critical_Links"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/796_Critical_Links.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/796_Critical_Links.dir/build: 796_Critical_Links

.PHONY : CMakeFiles/796_Critical_Links.dir/build

CMakeFiles/796_Critical_Links.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/796_Critical_Links.dir/cmake_clean.cmake
.PHONY : CMakeFiles/796_Critical_Links.dir/clean

CMakeFiles/796_Critical_Links.dir/depend:
	cd "/Users/maudieguez/Documents/C++/03 UVA/796 Critical Links/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/03 UVA/796 Critical Links" "/Users/maudieguez/Documents/C++/03 UVA/796 Critical Links" "/Users/maudieguez/Documents/C++/03 UVA/796 Critical Links/cmake-build-debug" "/Users/maudieguez/Documents/C++/03 UVA/796 Critical Links/cmake-build-debug" "/Users/maudieguez/Documents/C++/03 UVA/796 Critical Links/cmake-build-debug/CMakeFiles/796_Critical_Links.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/796_Critical_Links.dir/depend

