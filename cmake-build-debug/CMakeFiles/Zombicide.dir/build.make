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
CMAKE_SOURCE_DIR = /home/gabriele/Documenti/GitHub/Zombicide

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Zombicide.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Zombicide.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Zombicide.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Zombicide.dir/flags.make

CMakeFiles/Zombicide.dir/main.cpp.o: CMakeFiles/Zombicide.dir/flags.make
CMakeFiles/Zombicide.dir/main.cpp.o: ../main.cpp
CMakeFiles/Zombicide.dir/main.cpp.o: CMakeFiles/Zombicide.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Zombicide.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Zombicide.dir/main.cpp.o -MF CMakeFiles/Zombicide.dir/main.cpp.o.d -o CMakeFiles/Zombicide.dir/main.cpp.o -c /home/gabriele/Documenti/GitHub/Zombicide/main.cpp

CMakeFiles/Zombicide.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombicide.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Documenti/GitHub/Zombicide/main.cpp > CMakeFiles/Zombicide.dir/main.cpp.i

CMakeFiles/Zombicide.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombicide.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Documenti/GitHub/Zombicide/main.cpp -o CMakeFiles/Zombicide.dir/main.cpp.s

CMakeFiles/Zombicide.dir/GUI/Game.cpp.o: CMakeFiles/Zombicide.dir/flags.make
CMakeFiles/Zombicide.dir/GUI/Game.cpp.o: ../GUI/Game.cpp
CMakeFiles/Zombicide.dir/GUI/Game.cpp.o: CMakeFiles/Zombicide.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Zombicide.dir/GUI/Game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Zombicide.dir/GUI/Game.cpp.o -MF CMakeFiles/Zombicide.dir/GUI/Game.cpp.o.d -o CMakeFiles/Zombicide.dir/GUI/Game.cpp.o -c /home/gabriele/Documenti/GitHub/Zombicide/GUI/Game.cpp

CMakeFiles/Zombicide.dir/GUI/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombicide.dir/GUI/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Documenti/GitHub/Zombicide/GUI/Game.cpp > CMakeFiles/Zombicide.dir/GUI/Game.cpp.i

CMakeFiles/Zombicide.dir/GUI/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombicide.dir/GUI/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Documenti/GitHub/Zombicide/GUI/Game.cpp -o CMakeFiles/Zombicide.dir/GUI/Game.cpp.s

CMakeFiles/Zombicide.dir/GUI/Menu.cpp.o: CMakeFiles/Zombicide.dir/flags.make
CMakeFiles/Zombicide.dir/GUI/Menu.cpp.o: ../GUI/Menu.cpp
CMakeFiles/Zombicide.dir/GUI/Menu.cpp.o: CMakeFiles/Zombicide.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Zombicide.dir/GUI/Menu.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Zombicide.dir/GUI/Menu.cpp.o -MF CMakeFiles/Zombicide.dir/GUI/Menu.cpp.o.d -o CMakeFiles/Zombicide.dir/GUI/Menu.cpp.o -c /home/gabriele/Documenti/GitHub/Zombicide/GUI/Menu.cpp

CMakeFiles/Zombicide.dir/GUI/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombicide.dir/GUI/Menu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Documenti/GitHub/Zombicide/GUI/Menu.cpp > CMakeFiles/Zombicide.dir/GUI/Menu.cpp.i

CMakeFiles/Zombicide.dir/GUI/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombicide.dir/GUI/Menu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Documenti/GitHub/Zombicide/GUI/Menu.cpp -o CMakeFiles/Zombicide.dir/GUI/Menu.cpp.s

CMakeFiles/Zombicide.dir/Classes/Character.cpp.o: CMakeFiles/Zombicide.dir/flags.make
CMakeFiles/Zombicide.dir/Classes/Character.cpp.o: ../Classes/Character.cpp
CMakeFiles/Zombicide.dir/Classes/Character.cpp.o: CMakeFiles/Zombicide.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Zombicide.dir/Classes/Character.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Zombicide.dir/Classes/Character.cpp.o -MF CMakeFiles/Zombicide.dir/Classes/Character.cpp.o.d -o CMakeFiles/Zombicide.dir/Classes/Character.cpp.o -c /home/gabriele/Documenti/GitHub/Zombicide/Classes/Character.cpp

CMakeFiles/Zombicide.dir/Classes/Character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombicide.dir/Classes/Character.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Documenti/GitHub/Zombicide/Classes/Character.cpp > CMakeFiles/Zombicide.dir/Classes/Character.cpp.i

CMakeFiles/Zombicide.dir/Classes/Character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombicide.dir/Classes/Character.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Documenti/GitHub/Zombicide/Classes/Character.cpp -o CMakeFiles/Zombicide.dir/Classes/Character.cpp.s

CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.o: CMakeFiles/Zombicide.dir/flags.make
CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.o: ../Classes/Zombie.cpp
CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.o: CMakeFiles/Zombicide.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.o -MF CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.o.d -o CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.o -c /home/gabriele/Documenti/GitHub/Zombicide/Classes/Zombie.cpp

CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Documenti/GitHub/Zombicide/Classes/Zombie.cpp > CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.i

CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Documenti/GitHub/Zombicide/Classes/Zombie.cpp -o CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.s

CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.o: CMakeFiles/Zombicide.dir/flags.make
CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.o: ../Classes/Survivor.cpp
CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.o: CMakeFiles/Zombicide.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.o -MF CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.o.d -o CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.o -c /home/gabriele/Documenti/GitHub/Zombicide/Classes/Survivor.cpp

CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Documenti/GitHub/Zombicide/Classes/Survivor.cpp > CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.i

CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Documenti/GitHub/Zombicide/Classes/Survivor.cpp -o CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.s

CMakeFiles/Zombicide.dir/Classes/Deck.cpp.o: CMakeFiles/Zombicide.dir/flags.make
CMakeFiles/Zombicide.dir/Classes/Deck.cpp.o: ../Classes/Deck.cpp
CMakeFiles/Zombicide.dir/Classes/Deck.cpp.o: CMakeFiles/Zombicide.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Zombicide.dir/Classes/Deck.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Zombicide.dir/Classes/Deck.cpp.o -MF CMakeFiles/Zombicide.dir/Classes/Deck.cpp.o.d -o CMakeFiles/Zombicide.dir/Classes/Deck.cpp.o -c /home/gabriele/Documenti/GitHub/Zombicide/Classes/Deck.cpp

CMakeFiles/Zombicide.dir/Classes/Deck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombicide.dir/Classes/Deck.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Documenti/GitHub/Zombicide/Classes/Deck.cpp > CMakeFiles/Zombicide.dir/Classes/Deck.cpp.i

CMakeFiles/Zombicide.dir/Classes/Deck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombicide.dir/Classes/Deck.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Documenti/GitHub/Zombicide/Classes/Deck.cpp -o CMakeFiles/Zombicide.dir/Classes/Deck.cpp.s

CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.o: CMakeFiles/Zombicide.dir/flags.make
CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.o: ../Classes/Inventory.cpp
CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.o: CMakeFiles/Zombicide.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.o -MF CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.o.d -o CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.o -c /home/gabriele/Documenti/GitHub/Zombicide/Classes/Inventory.cpp

CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Documenti/GitHub/Zombicide/Classes/Inventory.cpp > CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.i

CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Documenti/GitHub/Zombicide/Classes/Inventory.cpp -o CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.s

CMakeFiles/Zombicide.dir/Classes/Card.cpp.o: CMakeFiles/Zombicide.dir/flags.make
CMakeFiles/Zombicide.dir/Classes/Card.cpp.o: ../Classes/Card.cpp
CMakeFiles/Zombicide.dir/Classes/Card.cpp.o: CMakeFiles/Zombicide.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Zombicide.dir/Classes/Card.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Zombicide.dir/Classes/Card.cpp.o -MF CMakeFiles/Zombicide.dir/Classes/Card.cpp.o.d -o CMakeFiles/Zombicide.dir/Classes/Card.cpp.o -c /home/gabriele/Documenti/GitHub/Zombicide/Classes/Card.cpp

CMakeFiles/Zombicide.dir/Classes/Card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombicide.dir/Classes/Card.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Documenti/GitHub/Zombicide/Classes/Card.cpp > CMakeFiles/Zombicide.dir/Classes/Card.cpp.i

CMakeFiles/Zombicide.dir/Classes/Card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombicide.dir/Classes/Card.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Documenti/GitHub/Zombicide/Classes/Card.cpp -o CMakeFiles/Zombicide.dir/Classes/Card.cpp.s

CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.o: CMakeFiles/Zombicide.dir/flags.make
CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.o: ../Classes/Weapon.cpp
CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.o: CMakeFiles/Zombicide.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.o -MF CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.o.d -o CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.o -c /home/gabriele/Documenti/GitHub/Zombicide/Classes/Weapon.cpp

CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Documenti/GitHub/Zombicide/Classes/Weapon.cpp > CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.i

CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Documenti/GitHub/Zombicide/Classes/Weapon.cpp -o CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.s

CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.o: CMakeFiles/Zombicide.dir/flags.make
CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.o: ../Classes/SpawnZombie.cpp
CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.o: CMakeFiles/Zombicide.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.o -MF CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.o.d -o CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.o -c /home/gabriele/Documenti/GitHub/Zombicide/Classes/SpawnZombie.cpp

CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Documenti/GitHub/Zombicide/Classes/SpawnZombie.cpp > CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.i

CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Documenti/GitHub/Zombicide/Classes/SpawnZombie.cpp -o CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.s

CMakeFiles/Zombicide.dir/Classes/Map.cpp.o: CMakeFiles/Zombicide.dir/flags.make
CMakeFiles/Zombicide.dir/Classes/Map.cpp.o: ../Classes/Map.cpp
CMakeFiles/Zombicide.dir/Classes/Map.cpp.o: CMakeFiles/Zombicide.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Zombicide.dir/Classes/Map.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Zombicide.dir/Classes/Map.cpp.o -MF CMakeFiles/Zombicide.dir/Classes/Map.cpp.o.d -o CMakeFiles/Zombicide.dir/Classes/Map.cpp.o -c /home/gabriele/Documenti/GitHub/Zombicide/Classes/Map.cpp

CMakeFiles/Zombicide.dir/Classes/Map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zombicide.dir/Classes/Map.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Documenti/GitHub/Zombicide/Classes/Map.cpp > CMakeFiles/Zombicide.dir/Classes/Map.cpp.i

CMakeFiles/Zombicide.dir/Classes/Map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zombicide.dir/Classes/Map.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Documenti/GitHub/Zombicide/Classes/Map.cpp -o CMakeFiles/Zombicide.dir/Classes/Map.cpp.s

# Object files for target Zombicide
Zombicide_OBJECTS = \
"CMakeFiles/Zombicide.dir/main.cpp.o" \
"CMakeFiles/Zombicide.dir/GUI/Game.cpp.o" \
"CMakeFiles/Zombicide.dir/GUI/Menu.cpp.o" \
"CMakeFiles/Zombicide.dir/Classes/Character.cpp.o" \
"CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.o" \
"CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.o" \
"CMakeFiles/Zombicide.dir/Classes/Deck.cpp.o" \
"CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.o" \
"CMakeFiles/Zombicide.dir/Classes/Card.cpp.o" \
"CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.o" \
"CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.o" \
"CMakeFiles/Zombicide.dir/Classes/Map.cpp.o"

# External object files for target Zombicide
Zombicide_EXTERNAL_OBJECTS =

Zombicide: CMakeFiles/Zombicide.dir/main.cpp.o
Zombicide: CMakeFiles/Zombicide.dir/GUI/Game.cpp.o
Zombicide: CMakeFiles/Zombicide.dir/GUI/Menu.cpp.o
Zombicide: CMakeFiles/Zombicide.dir/Classes/Character.cpp.o
Zombicide: CMakeFiles/Zombicide.dir/Classes/Zombie.cpp.o
Zombicide: CMakeFiles/Zombicide.dir/Classes/Survivor.cpp.o
Zombicide: CMakeFiles/Zombicide.dir/Classes/Deck.cpp.o
Zombicide: CMakeFiles/Zombicide.dir/Classes/Inventory.cpp.o
Zombicide: CMakeFiles/Zombicide.dir/Classes/Card.cpp.o
Zombicide: CMakeFiles/Zombicide.dir/Classes/Weapon.cpp.o
Zombicide: CMakeFiles/Zombicide.dir/Classes/SpawnZombie.cpp.o
Zombicide: CMakeFiles/Zombicide.dir/Classes/Map.cpp.o
Zombicide: CMakeFiles/Zombicide.dir/build.make
Zombicide: libcore.a
Zombicide: /usr/lib/x86_64-linux-gnu/libsfml-network.so
Zombicide: /usr/lib/x86_64-linux-gnu/libsfml-audio.so
Zombicide: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so
Zombicide: /usr/lib/x86_64-linux-gnu/libsfml-window.so
Zombicide: /usr/lib/x86_64-linux-gnu/libsfml-system.so
Zombicide: CMakeFiles/Zombicide.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable Zombicide"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Zombicide.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Zombicide.dir/build: Zombicide
.PHONY : CMakeFiles/Zombicide.dir/build

CMakeFiles/Zombicide.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Zombicide.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Zombicide.dir/clean

CMakeFiles/Zombicide.dir/depend:
	cd /home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabriele/Documenti/GitHub/Zombicide /home/gabriele/Documenti/GitHub/Zombicide /home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug /home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug /home/gabriele/Documenti/GitHub/Zombicide/cmake-build-debug/CMakeFiles/Zombicide.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Zombicide.dir/depend

