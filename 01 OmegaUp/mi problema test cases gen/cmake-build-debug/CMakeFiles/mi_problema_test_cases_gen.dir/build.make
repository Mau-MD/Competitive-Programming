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
CMAKE_SOURCE_DIR = "/Users/maudieguez/Documents/C++/mi problema test cases gen"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maudieguez/Documents/C++/mi problema test cases gen/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/mi_problema_test_cases_gen.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mi_problema_test_cases_gen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mi_problema_test_cases_gen.dir/flags.make

CMakeFiles/mi_problema_test_cases_gen.dir/main.cpp.o: CMakeFiles/mi_problema_test_cases_gen.dir/flags.make
CMakeFiles/mi_problema_test_cases_gen.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maudieguez/Documents/C++/mi problema test cases gen/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mi_problema_test_cases_gen.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mi_problema_test_cases_gen.dir/main.cpp.o -c "/Users/maudieguez/Documents/C++/mi problema test cases gen/main.cpp"

CMakeFiles/mi_problema_test_cases_gen.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mi_problema_test_cases_gen.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maudieguez/Documents/C++/mi problema test cases gen/main.cpp" > CMakeFiles/mi_problema_test_cases_gen.dir/main.cpp.i

CMakeFiles/mi_problema_test_cases_gen.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mi_problema_test_cases_gen.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maudieguez/Documents/C++/mi problema test cases gen/main.cpp" -o CMakeFiles/mi_problema_test_cases_gen.dir/main.cpp.s

# Object files for target mi_problema_test_cases_gen
mi_problema_test_cases_gen_OBJECTS = \
"CMakeFiles/mi_problema_test_cases_gen.dir/main.cpp.o"

# External object files for target mi_problema_test_cases_gen
mi_problema_test_cases_gen_EXTERNAL_OBJECTS =

mi_problema_test_cases_gen: CMakeFiles/mi_problema_test_cases_gen.dir/main.cpp.o
mi_problema_test_cases_gen: CMakeFiles/mi_problema_test_cases_gen.dir/build.make
mi_problema_test_cases_gen: CMakeFiles/mi_problema_test_cases_gen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maudieguez/Documents/C++/mi problema test cases gen/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mi_problema_test_cases_gen"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mi_problema_test_cases_gen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mi_problema_test_cases_gen.dir/build: mi_problema_test_cases_gen

.PHONY : CMakeFiles/mi_problema_test_cases_gen.dir/build

CMakeFiles/mi_problema_test_cases_gen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mi_problema_test_cases_gen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mi_problema_test_cases_gen.dir/clean

CMakeFiles/mi_problema_test_cases_gen.dir/depend:
	cd "/Users/maudieguez/Documents/C++/mi problema test cases gen/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maudieguez/Documents/C++/mi problema test cases gen" "/Users/maudieguez/Documents/C++/mi problema test cases gen" "/Users/maudieguez/Documents/C++/mi problema test cases gen/cmake-build-debug" "/Users/maudieguez/Documents/C++/mi problema test cases gen/cmake-build-debug" "/Users/maudieguez/Documents/C++/mi problema test cases gen/cmake-build-debug/CMakeFiles/mi_problema_test_cases_gen.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/mi_problema_test_cases_gen.dir/depend

