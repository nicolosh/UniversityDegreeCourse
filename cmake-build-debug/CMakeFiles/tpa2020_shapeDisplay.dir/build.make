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
CMAKE_COMMAND = /cygdrive/c/Users/nicol/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/nicol/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/tpa2020_shapeDisplay.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tpa2020_shapeDisplay.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tpa2020_shapeDisplay.dir/flags.make

CMakeFiles/tpa2020_shapeDisplay.dir/main.cpp.o: CMakeFiles/tpa2020_shapeDisplay.dir/flags.make
CMakeFiles/tpa2020_shapeDisplay.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tpa2020_shapeDisplay.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tpa2020_shapeDisplay.dir/main.cpp.o -c /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/main.cpp

CMakeFiles/tpa2020_shapeDisplay.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tpa2020_shapeDisplay.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/main.cpp > CMakeFiles/tpa2020_shapeDisplay.dir/main.cpp.i

CMakeFiles/tpa2020_shapeDisplay.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tpa2020_shapeDisplay.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/main.cpp -o CMakeFiles/tpa2020_shapeDisplay.dir/main.cpp.s

CMakeFiles/tpa2020_shapeDisplay.dir/src/display.cpp.o: CMakeFiles/tpa2020_shapeDisplay.dir/flags.make
CMakeFiles/tpa2020_shapeDisplay.dir/src/display.cpp.o: ../src/display.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tpa2020_shapeDisplay.dir/src/display.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tpa2020_shapeDisplay.dir/src/display.cpp.o -c /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/src/display.cpp

CMakeFiles/tpa2020_shapeDisplay.dir/src/display.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tpa2020_shapeDisplay.dir/src/display.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/src/display.cpp > CMakeFiles/tpa2020_shapeDisplay.dir/src/display.cpp.i

CMakeFiles/tpa2020_shapeDisplay.dir/src/display.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tpa2020_shapeDisplay.dir/src/display.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/src/display.cpp -o CMakeFiles/tpa2020_shapeDisplay.dir/src/display.cpp.s

CMakeFiles/tpa2020_shapeDisplay.dir/src/point.cpp.o: CMakeFiles/tpa2020_shapeDisplay.dir/flags.make
CMakeFiles/tpa2020_shapeDisplay.dir/src/point.cpp.o: ../src/point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/tpa2020_shapeDisplay.dir/src/point.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tpa2020_shapeDisplay.dir/src/point.cpp.o -c /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/src/point.cpp

CMakeFiles/tpa2020_shapeDisplay.dir/src/point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tpa2020_shapeDisplay.dir/src/point.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/src/point.cpp > CMakeFiles/tpa2020_shapeDisplay.dir/src/point.cpp.i

CMakeFiles/tpa2020_shapeDisplay.dir/src/point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tpa2020_shapeDisplay.dir/src/point.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/src/point.cpp -o CMakeFiles/tpa2020_shapeDisplay.dir/src/point.cpp.s

CMakeFiles/tpa2020_shapeDisplay.dir/src/shape.cpp.o: CMakeFiles/tpa2020_shapeDisplay.dir/flags.make
CMakeFiles/tpa2020_shapeDisplay.dir/src/shape.cpp.o: ../src/shape.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/tpa2020_shapeDisplay.dir/src/shape.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tpa2020_shapeDisplay.dir/src/shape.cpp.o -c /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/src/shape.cpp

CMakeFiles/tpa2020_shapeDisplay.dir/src/shape.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tpa2020_shapeDisplay.dir/src/shape.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/src/shape.cpp > CMakeFiles/tpa2020_shapeDisplay.dir/src/shape.cpp.i

CMakeFiles/tpa2020_shapeDisplay.dir/src/shape.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tpa2020_shapeDisplay.dir/src/shape.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/src/shape.cpp -o CMakeFiles/tpa2020_shapeDisplay.dir/src/shape.cpp.s

# Object files for target tpa2020_shapeDisplay
tpa2020_shapeDisplay_OBJECTS = \
"CMakeFiles/tpa2020_shapeDisplay.dir/main.cpp.o" \
"CMakeFiles/tpa2020_shapeDisplay.dir/src/display.cpp.o" \
"CMakeFiles/tpa2020_shapeDisplay.dir/src/point.cpp.o" \
"CMakeFiles/tpa2020_shapeDisplay.dir/src/shape.cpp.o"

# External object files for target tpa2020_shapeDisplay
tpa2020_shapeDisplay_EXTERNAL_OBJECTS =

tpa2020_shapeDisplay.exe: CMakeFiles/tpa2020_shapeDisplay.dir/main.cpp.o
tpa2020_shapeDisplay.exe: CMakeFiles/tpa2020_shapeDisplay.dir/src/display.cpp.o
tpa2020_shapeDisplay.exe: CMakeFiles/tpa2020_shapeDisplay.dir/src/point.cpp.o
tpa2020_shapeDisplay.exe: CMakeFiles/tpa2020_shapeDisplay.dir/src/shape.cpp.o
tpa2020_shapeDisplay.exe: CMakeFiles/tpa2020_shapeDisplay.dir/build.make
tpa2020_shapeDisplay.exe: CMakeFiles/tpa2020_shapeDisplay.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable tpa2020_shapeDisplay.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tpa2020_shapeDisplay.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tpa2020_shapeDisplay.dir/build: tpa2020_shapeDisplay.exe

.PHONY : CMakeFiles/tpa2020_shapeDisplay.dir/build

CMakeFiles/tpa2020_shapeDisplay.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tpa2020_shapeDisplay.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tpa2020_shapeDisplay.dir/clean

CMakeFiles/tpa2020_shapeDisplay.dir/depend:
	cd /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/cmake-build-debug /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/cmake-build-debug /cygdrive/c/Users/nicol/OneDrive/Desktop/C++/tpa2020_shapeDisplay/cmake-build-debug/CMakeFiles/tpa2020_shapeDisplay.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tpa2020_shapeDisplay.dir/depend
