# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/198/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/198/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/cmake-build-debug

# Include any dependencies generated for this target.
include test/CMakeFiles/runGameCharacterTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/runGameCharacterTests.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/runGameCharacterTests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/runGameCharacterTests.dir/flags.make

test/CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.o: test/CMakeFiles/runGameCharacterTests.dir/flags.make
test/CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.o: ../test/runAllTests.cpp
test/CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.o: test/CMakeFiles/runGameCharacterTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.o"
	cd /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.o -MF CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.o.d -o CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.o -c /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/test/runAllTests.cpp

test/CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.i"
	cd /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/test/runAllTests.cpp > CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.i

test/CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.s"
	cd /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/test/runAllTests.cpp -o CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.s

# Object files for target runGameCharacterTests
runGameCharacterTests_OBJECTS = \
"CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.o"

# External object files for target runGameCharacterTests
runGameCharacterTests_EXTERNAL_OBJECTS =

test/runGameCharacterTests: test/CMakeFiles/runGameCharacterTests.dir/runAllTests.cpp.o
test/runGameCharacterTests: test/CMakeFiles/runGameCharacterTests.dir/build.make
test/runGameCharacterTests: test/lib/googletest/libgtestd.a
test/runGameCharacterTests: test/lib/googletest/libgtest_maind.a
test/runGameCharacterTests: test/lib/googletest/libgtestd.a
test/runGameCharacterTests: test/CMakeFiles/runGameCharacterTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable runGameCharacterTests"
	cd /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/cmake-build-debug/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runGameCharacterTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/runGameCharacterTests.dir/build: test/runGameCharacterTests
.PHONY : test/CMakeFiles/runGameCharacterTests.dir/build

test/CMakeFiles/runGameCharacterTests.dir/clean:
	cd /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/runGameCharacterTests.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/runGameCharacterTests.dir/clean

test/CMakeFiles/runGameCharacterTests.dir/depend:
	cd /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/test /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/cmake-build-debug /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/cmake-build-debug/test /home/gabriele/Documents/Università/Programmazione/Progettone/Zombicide/cmake-build-debug/test/CMakeFiles/runGameCharacterTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/runGameCharacterTests.dir/depend
