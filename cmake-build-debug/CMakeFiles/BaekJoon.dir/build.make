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
CMAKE_SOURCE_DIR = /Users/somang/CLionProjects/BaekJoon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/somang/CLionProjects/BaekJoon/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BaekJoon.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BaekJoon.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BaekJoon.dir/flags.make

CMakeFiles/BaekJoon.dir/probs/5525_solving.cpp.o: CMakeFiles/BaekJoon.dir/flags.make
CMakeFiles/BaekJoon.dir/probs/5525_solving.cpp.o: ../probs/5525_solving.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/somang/CLionProjects/BaekJoon/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BaekJoon.dir/probs/5525_solving.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BaekJoon.dir/probs/5525_solving.cpp.o -c /Users/somang/CLionProjects/BaekJoon/probs/5525_solving.cpp

CMakeFiles/BaekJoon.dir/probs/5525_solving.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BaekJoon.dir/probs/5525_solving.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/somang/CLionProjects/BaekJoon/probs/5525_solving.cpp > CMakeFiles/BaekJoon.dir/probs/5525_solving.cpp.i

CMakeFiles/BaekJoon.dir/probs/5525_solving.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BaekJoon.dir/probs/5525_solving.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/somang/CLionProjects/BaekJoon/probs/5525_solving.cpp -o CMakeFiles/BaekJoon.dir/probs/5525_solving.cpp.s

# Object files for target BaekJoon
BaekJoon_OBJECTS = \
"CMakeFiles/BaekJoon.dir/probs/5525_solving.cpp.o"

# External object files for target BaekJoon
BaekJoon_EXTERNAL_OBJECTS =

BaekJoon: CMakeFiles/BaekJoon.dir/probs/5525_solving.cpp.o
BaekJoon: CMakeFiles/BaekJoon.dir/build.make
BaekJoon: CMakeFiles/BaekJoon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/somang/CLionProjects/BaekJoon/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BaekJoon"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BaekJoon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BaekJoon.dir/build: BaekJoon

.PHONY : CMakeFiles/BaekJoon.dir/build

CMakeFiles/BaekJoon.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BaekJoon.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BaekJoon.dir/clean

CMakeFiles/BaekJoon.dir/depend:
	cd /Users/somang/CLionProjects/BaekJoon/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/somang/CLionProjects/BaekJoon /Users/somang/CLionProjects/BaekJoon /Users/somang/CLionProjects/BaekJoon/cmake-build-debug /Users/somang/CLionProjects/BaekJoon/cmake-build-debug /Users/somang/CLionProjects/BaekJoon/cmake-build-debug/CMakeFiles/BaekJoon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BaekJoon.dir/depend
