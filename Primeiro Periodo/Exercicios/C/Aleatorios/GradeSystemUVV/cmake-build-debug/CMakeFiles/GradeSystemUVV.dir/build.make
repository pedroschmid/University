# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\pedro\Documents\GitHub\C\Data\Exercises\GradeSystemUVV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\pedro\Documents\GitHub\C\Data\Exercises\GradeSystemUVV\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GradeSystemUVV.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GradeSystemUVV.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GradeSystemUVV.dir/flags.make

CMakeFiles/GradeSystemUVV.dir/main.c.obj: CMakeFiles/GradeSystemUVV.dir/flags.make
CMakeFiles/GradeSystemUVV.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\pedro\Documents\GitHub\C\Data\Exercises\GradeSystemUVV\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/GradeSystemUVV.dir/main.c.obj"
	C:\PROGRA~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\GradeSystemUVV.dir\main.c.obj   -c C:\Users\pedro\Documents\GitHub\C\Data\Exercises\GradeSystemUVV\main.c

CMakeFiles/GradeSystemUVV.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GradeSystemUVV.dir/main.c.i"
	C:\PROGRA~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\pedro\Documents\GitHub\C\Data\Exercises\GradeSystemUVV\main.c > CMakeFiles\GradeSystemUVV.dir\main.c.i

CMakeFiles/GradeSystemUVV.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GradeSystemUVV.dir/main.c.s"
	C:\PROGRA~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\pedro\Documents\GitHub\C\Data\Exercises\GradeSystemUVV\main.c -o CMakeFiles\GradeSystemUVV.dir\main.c.s

# Object files for target GradeSystemUVV
GradeSystemUVV_OBJECTS = \
"CMakeFiles/GradeSystemUVV.dir/main.c.obj"

# External object files for target GradeSystemUVV
GradeSystemUVV_EXTERNAL_OBJECTS =

GradeSystemUVV.exe: CMakeFiles/GradeSystemUVV.dir/main.c.obj
GradeSystemUVV.exe: CMakeFiles/GradeSystemUVV.dir/build.make
GradeSystemUVV.exe: CMakeFiles/GradeSystemUVV.dir/linklibs.rsp
GradeSystemUVV.exe: CMakeFiles/GradeSystemUVV.dir/objects1.rsp
GradeSystemUVV.exe: CMakeFiles/GradeSystemUVV.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\pedro\Documents\GitHub\C\Data\Exercises\GradeSystemUVV\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable GradeSystemUVV.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GradeSystemUVV.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GradeSystemUVV.dir/build: GradeSystemUVV.exe

.PHONY : CMakeFiles/GradeSystemUVV.dir/build

CMakeFiles/GradeSystemUVV.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GradeSystemUVV.dir\cmake_clean.cmake
.PHONY : CMakeFiles/GradeSystemUVV.dir/clean

CMakeFiles/GradeSystemUVV.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\pedro\Documents\GitHub\C\Data\Exercises\GradeSystemUVV C:\Users\pedro\Documents\GitHub\C\Data\Exercises\GradeSystemUVV C:\Users\pedro\Documents\GitHub\C\Data\Exercises\GradeSystemUVV\cmake-build-debug C:\Users\pedro\Documents\GitHub\C\Data\Exercises\GradeSystemUVV\cmake-build-debug C:\Users\pedro\Documents\GitHub\C\Data\Exercises\GradeSystemUVV\cmake-build-debug\CMakeFiles\GradeSystemUVV.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GradeSystemUVV.dir/depend
