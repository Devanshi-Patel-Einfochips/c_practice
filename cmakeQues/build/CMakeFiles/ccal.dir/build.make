# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/einfochips/cpractice/c_practice/cmakeQues

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/einfochips/cpractice/c_practice/cmakeQues/build

# Include any dependencies generated for this target.
include CMakeFiles/ccal.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ccal.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ccal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ccal.dir/flags.make

CMakeFiles/ccal.dir/main.cpp.o: CMakeFiles/ccal.dir/flags.make
CMakeFiles/ccal.dir/main.cpp.o: /home/einfochips/cpractice/c_practice/cmakeQues/main.cpp
CMakeFiles/ccal.dir/main.cpp.o: CMakeFiles/ccal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/einfochips/cpractice/c_practice/cmakeQues/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ccal.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ccal.dir/main.cpp.o -MF CMakeFiles/ccal.dir/main.cpp.o.d -o CMakeFiles/ccal.dir/main.cpp.o -c /home/einfochips/cpractice/c_practice/cmakeQues/main.cpp

CMakeFiles/ccal.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ccal.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/einfochips/cpractice/c_practice/cmakeQues/main.cpp > CMakeFiles/ccal.dir/main.cpp.i

CMakeFiles/ccal.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ccal.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/einfochips/cpractice/c_practice/cmakeQues/main.cpp -o CMakeFiles/ccal.dir/main.cpp.s

# Object files for target ccal
ccal_OBJECTS = \
"CMakeFiles/ccal.dir/main.cpp.o"

# External object files for target ccal
ccal_EXTERNAL_OBJECTS =

ccal: CMakeFiles/ccal.dir/main.cpp.o
ccal: CMakeFiles/ccal.dir/build.make
ccal: libcalc.so
ccal: CMakeFiles/ccal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/einfochips/cpractice/c_practice/cmakeQues/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ccal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ccal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ccal.dir/build: ccal
.PHONY : CMakeFiles/ccal.dir/build

CMakeFiles/ccal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ccal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ccal.dir/clean

CMakeFiles/ccal.dir/depend:
	cd /home/einfochips/cpractice/c_practice/cmakeQues/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/einfochips/cpractice/c_practice/cmakeQues /home/einfochips/cpractice/c_practice/cmakeQues /home/einfochips/cpractice/c_practice/cmakeQues/build /home/einfochips/cpractice/c_practice/cmakeQues/build /home/einfochips/cpractice/c_practice/cmakeQues/build/CMakeFiles/ccal.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ccal.dir/depend

