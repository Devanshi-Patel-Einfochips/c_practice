# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp/build

# Include any dependencies generated for this target.
include sharedlib/CMakeFiles/sharedlib.dir/depend.make

# Include the progress variables for this target.
include sharedlib/CMakeFiles/sharedlib.dir/progress.make

# Include the compile flags for this target's objects.
include sharedlib/CMakeFiles/sharedlib.dir/flags.make

sharedlib/CMakeFiles/sharedlib.dir/src/SharedHello.cpp.o: sharedlib/CMakeFiles/sharedlib.dir/flags.make
sharedlib/CMakeFiles/sharedlib.dir/src/SharedHello.cpp.o: /home/devanshi/Downloads/C++_Code/cmake_assignement/SharedLib/src/SharedHello.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object sharedlib/CMakeFiles/sharedlib.dir/src/SharedHello.cpp.o"
	cd /home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp/build/sharedlib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sharedlib.dir/src/SharedHello.cpp.o -c /home/devanshi/Downloads/C++_Code/cmake_assignement/SharedLib/src/SharedHello.cpp

sharedlib/CMakeFiles/sharedlib.dir/src/SharedHello.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sharedlib.dir/src/SharedHello.cpp.i"
	cd /home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp/build/sharedlib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/devanshi/Downloads/C++_Code/cmake_assignement/SharedLib/src/SharedHello.cpp > CMakeFiles/sharedlib.dir/src/SharedHello.cpp.i

sharedlib/CMakeFiles/sharedlib.dir/src/SharedHello.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sharedlib.dir/src/SharedHello.cpp.s"
	cd /home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp/build/sharedlib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/devanshi/Downloads/C++_Code/cmake_assignement/SharedLib/src/SharedHello.cpp -o CMakeFiles/sharedlib.dir/src/SharedHello.cpp.s

# Object files for target sharedlib
sharedlib_OBJECTS = \
"CMakeFiles/sharedlib.dir/src/SharedHello.cpp.o"

# External object files for target sharedlib
sharedlib_EXTERNAL_OBJECTS =

sharedlib/libsharedlib.so: sharedlib/CMakeFiles/sharedlib.dir/src/SharedHello.cpp.o
sharedlib/libsharedlib.so: sharedlib/CMakeFiles/sharedlib.dir/build.make
sharedlib/libsharedlib.so: sharedlib/CMakeFiles/sharedlib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libsharedlib.so"
	cd /home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp/build/sharedlib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sharedlib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sharedlib/CMakeFiles/sharedlib.dir/build: sharedlib/libsharedlib.so

.PHONY : sharedlib/CMakeFiles/sharedlib.dir/build

sharedlib/CMakeFiles/sharedlib.dir/clean:
	cd /home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp/build/sharedlib && $(CMAKE_COMMAND) -P CMakeFiles/sharedlib.dir/cmake_clean.cmake
.PHONY : sharedlib/CMakeFiles/sharedlib.dir/clean

sharedlib/CMakeFiles/sharedlib.dir/depend:
	cd /home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp /home/devanshi/Downloads/C++_Code/cmake_assignement/SharedLib /home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp/build /home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp/build/sharedlib /home/devanshi/Downloads/C++_Code/cmake_assignement/MyApp/build/sharedlib/CMakeFiles/sharedlib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sharedlib/CMakeFiles/sharedlib.dir/depend

