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
CMAKE_SOURCE_DIR = "C:\Users\pedro\Desktop\whoami\Development\C Data\CLion Workspace\CompleteIMC"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\pedro\Desktop\whoami\Development\C Data\CLion Workspace\CompleteIMC\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CompleteIMC.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CompleteIMC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CompleteIMC.dir/flags.make

CMakeFiles/CompleteIMC.dir/main.c.obj: CMakeFiles/CompleteIMC.dir/flags.make
CMakeFiles/CompleteIMC.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\pedro\Desktop\whoami\Development\C Data\CLion Workspace\CompleteIMC\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CompleteIMC.dir/main.c.obj"
	C:\PROGRA~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\CompleteIMC.dir\main.c.obj   -c "C:\Users\pedro\Desktop\whoami\Development\C Data\CLion Workspace\CompleteIMC\main.c"

CMakeFiles/CompleteIMC.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CompleteIMC.dir/main.c.i"
	C:\PROGRA~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\pedro\Desktop\whoami\Development\C Data\CLion Workspace\CompleteIMC\main.c" > CMakeFiles\CompleteIMC.dir\main.c.i

CMakeFiles/CompleteIMC.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CompleteIMC.dir/main.c.s"
	C:\PROGRA~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\pedro\Desktop\whoami\Development\C Data\CLion Workspace\CompleteIMC\main.c" -o CMakeFiles\CompleteIMC.dir\main.c.s

# Object files for target CompleteIMC
CompleteIMC_OBJECTS = \
"CMakeFiles/CompleteIMC.dir/main.c.obj"

# External object files for target CompleteIMC
CompleteIMC_EXTERNAL_OBJECTS =

CompleteIMC.exe: CMakeFiles/CompleteIMC.dir/main.c.obj
CompleteIMC.exe: CMakeFiles/CompleteIMC.dir/build.make
CompleteIMC.exe: CMakeFiles/CompleteIMC.dir/linklibs.rsp
CompleteIMC.exe: CMakeFiles/CompleteIMC.dir/objects1.rsp
CompleteIMC.exe: CMakeFiles/CompleteIMC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\pedro\Desktop\whoami\Development\C Data\CLion Workspace\CompleteIMC\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CompleteIMC.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CompleteIMC.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CompleteIMC.dir/build: CompleteIMC.exe

.PHONY : CMakeFiles/CompleteIMC.dir/build

CMakeFiles/CompleteIMC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CompleteIMC.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CompleteIMC.dir/clean

CMakeFiles/CompleteIMC.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\pedro\Desktop\whoami\Development\C Data\CLion Workspace\CompleteIMC" "C:\Users\pedro\Desktop\whoami\Development\C Data\CLion Workspace\CompleteIMC" "C:\Users\pedro\Desktop\whoami\Development\C Data\CLion Workspace\CompleteIMC\cmake-build-debug" "C:\Users\pedro\Desktop\whoami\Development\C Data\CLion Workspace\CompleteIMC\cmake-build-debug" "C:\Users\pedro\Desktop\whoami\Development\C Data\CLion Workspace\CompleteIMC\cmake-build-debug\CMakeFiles\CompleteIMC.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CompleteIMC.dir/depend

