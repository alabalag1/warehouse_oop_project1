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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/krastev/c++/warehouse_oop_project1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/krastev/c++/warehouse_oop_project1/build

# Include any dependencies generated for this target.
include CMakeFiles/warehouse_oop_project1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/warehouse_oop_project1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/warehouse_oop_project1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/warehouse_oop_project1.dir/flags.make

CMakeFiles/warehouse_oop_project1.dir/main.cpp.o: CMakeFiles/warehouse_oop_project1.dir/flags.make
CMakeFiles/warehouse_oop_project1.dir/main.cpp.o: ../main.cpp
CMakeFiles/warehouse_oop_project1.dir/main.cpp.o: CMakeFiles/warehouse_oop_project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/krastev/c++/warehouse_oop_project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/warehouse_oop_project1.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/warehouse_oop_project1.dir/main.cpp.o -MF CMakeFiles/warehouse_oop_project1.dir/main.cpp.o.d -o CMakeFiles/warehouse_oop_project1.dir/main.cpp.o -c /home/krastev/c++/warehouse_oop_project1/main.cpp

CMakeFiles/warehouse_oop_project1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/warehouse_oop_project1.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krastev/c++/warehouse_oop_project1/main.cpp > CMakeFiles/warehouse_oop_project1.dir/main.cpp.i

CMakeFiles/warehouse_oop_project1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/warehouse_oop_project1.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krastev/c++/warehouse_oop_project1/main.cpp -o CMakeFiles/warehouse_oop_project1.dir/main.cpp.s

CMakeFiles/warehouse_oop_project1.dir/date.cpp.o: CMakeFiles/warehouse_oop_project1.dir/flags.make
CMakeFiles/warehouse_oop_project1.dir/date.cpp.o: ../date.cpp
CMakeFiles/warehouse_oop_project1.dir/date.cpp.o: CMakeFiles/warehouse_oop_project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/krastev/c++/warehouse_oop_project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/warehouse_oop_project1.dir/date.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/warehouse_oop_project1.dir/date.cpp.o -MF CMakeFiles/warehouse_oop_project1.dir/date.cpp.o.d -o CMakeFiles/warehouse_oop_project1.dir/date.cpp.o -c /home/krastev/c++/warehouse_oop_project1/date.cpp

CMakeFiles/warehouse_oop_project1.dir/date.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/warehouse_oop_project1.dir/date.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krastev/c++/warehouse_oop_project1/date.cpp > CMakeFiles/warehouse_oop_project1.dir/date.cpp.i

CMakeFiles/warehouse_oop_project1.dir/date.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/warehouse_oop_project1.dir/date.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krastev/c++/warehouse_oop_project1/date.cpp -o CMakeFiles/warehouse_oop_project1.dir/date.cpp.s

CMakeFiles/warehouse_oop_project1.dir/place.cpp.o: CMakeFiles/warehouse_oop_project1.dir/flags.make
CMakeFiles/warehouse_oop_project1.dir/place.cpp.o: ../place.cpp
CMakeFiles/warehouse_oop_project1.dir/place.cpp.o: CMakeFiles/warehouse_oop_project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/krastev/c++/warehouse_oop_project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/warehouse_oop_project1.dir/place.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/warehouse_oop_project1.dir/place.cpp.o -MF CMakeFiles/warehouse_oop_project1.dir/place.cpp.o.d -o CMakeFiles/warehouse_oop_project1.dir/place.cpp.o -c /home/krastev/c++/warehouse_oop_project1/place.cpp

CMakeFiles/warehouse_oop_project1.dir/place.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/warehouse_oop_project1.dir/place.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krastev/c++/warehouse_oop_project1/place.cpp > CMakeFiles/warehouse_oop_project1.dir/place.cpp.i

CMakeFiles/warehouse_oop_project1.dir/place.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/warehouse_oop_project1.dir/place.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krastev/c++/warehouse_oop_project1/place.cpp -o CMakeFiles/warehouse_oop_project1.dir/place.cpp.s

CMakeFiles/warehouse_oop_project1.dir/product.cpp.o: CMakeFiles/warehouse_oop_project1.dir/flags.make
CMakeFiles/warehouse_oop_project1.dir/product.cpp.o: ../product.cpp
CMakeFiles/warehouse_oop_project1.dir/product.cpp.o: CMakeFiles/warehouse_oop_project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/krastev/c++/warehouse_oop_project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/warehouse_oop_project1.dir/product.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/warehouse_oop_project1.dir/product.cpp.o -MF CMakeFiles/warehouse_oop_project1.dir/product.cpp.o.d -o CMakeFiles/warehouse_oop_project1.dir/product.cpp.o -c /home/krastev/c++/warehouse_oop_project1/product.cpp

CMakeFiles/warehouse_oop_project1.dir/product.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/warehouse_oop_project1.dir/product.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krastev/c++/warehouse_oop_project1/product.cpp > CMakeFiles/warehouse_oop_project1.dir/product.cpp.i

CMakeFiles/warehouse_oop_project1.dir/product.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/warehouse_oop_project1.dir/product.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krastev/c++/warehouse_oop_project1/product.cpp -o CMakeFiles/warehouse_oop_project1.dir/product.cpp.s

CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.o: CMakeFiles/warehouse_oop_project1.dir/flags.make
CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.o: ../warehouse.cpp
CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.o: CMakeFiles/warehouse_oop_project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/krastev/c++/warehouse_oop_project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.o -MF CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.o.d -o CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.o -c /home/krastev/c++/warehouse_oop_project1/warehouse.cpp

CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krastev/c++/warehouse_oop_project1/warehouse.cpp > CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.i

CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krastev/c++/warehouse_oop_project1/warehouse.cpp -o CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.s

# Object files for target warehouse_oop_project1
warehouse_oop_project1_OBJECTS = \
"CMakeFiles/warehouse_oop_project1.dir/main.cpp.o" \
"CMakeFiles/warehouse_oop_project1.dir/date.cpp.o" \
"CMakeFiles/warehouse_oop_project1.dir/place.cpp.o" \
"CMakeFiles/warehouse_oop_project1.dir/product.cpp.o" \
"CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.o"

# External object files for target warehouse_oop_project1
warehouse_oop_project1_EXTERNAL_OBJECTS =

warehouse_oop_project1: CMakeFiles/warehouse_oop_project1.dir/main.cpp.o
warehouse_oop_project1: CMakeFiles/warehouse_oop_project1.dir/date.cpp.o
warehouse_oop_project1: CMakeFiles/warehouse_oop_project1.dir/place.cpp.o
warehouse_oop_project1: CMakeFiles/warehouse_oop_project1.dir/product.cpp.o
warehouse_oop_project1: CMakeFiles/warehouse_oop_project1.dir/warehouse.cpp.o
warehouse_oop_project1: CMakeFiles/warehouse_oop_project1.dir/build.make
warehouse_oop_project1: CMakeFiles/warehouse_oop_project1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/krastev/c++/warehouse_oop_project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable warehouse_oop_project1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/warehouse_oop_project1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/warehouse_oop_project1.dir/build: warehouse_oop_project1
.PHONY : CMakeFiles/warehouse_oop_project1.dir/build

CMakeFiles/warehouse_oop_project1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/warehouse_oop_project1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/warehouse_oop_project1.dir/clean

CMakeFiles/warehouse_oop_project1.dir/depend:
	cd /home/krastev/c++/warehouse_oop_project1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krastev/c++/warehouse_oop_project1 /home/krastev/c++/warehouse_oop_project1 /home/krastev/c++/warehouse_oop_project1/build /home/krastev/c++/warehouse_oop_project1/build /home/krastev/c++/warehouse_oop_project1/build/CMakeFiles/warehouse_oop_project1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/warehouse_oop_project1.dir/depend

