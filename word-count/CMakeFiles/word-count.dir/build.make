# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_SOURCE_DIR = /home/john/exercism/cpp/word-count

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/john/exercism/cpp/word-count

# Include any dependencies generated for this target.
include CMakeFiles/word-count.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/word-count.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/word-count.dir/flags.make

CMakeFiles/word-count.dir/word_count_test.cpp.o: CMakeFiles/word-count.dir/flags.make
CMakeFiles/word-count.dir/word_count_test.cpp.o: word_count_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/john/exercism/cpp/word-count/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/word-count.dir/word_count_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/word-count.dir/word_count_test.cpp.o -c /home/john/exercism/cpp/word-count/word_count_test.cpp

CMakeFiles/word-count.dir/word_count_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/word-count.dir/word_count_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/john/exercism/cpp/word-count/word_count_test.cpp > CMakeFiles/word-count.dir/word_count_test.cpp.i

CMakeFiles/word-count.dir/word_count_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/word-count.dir/word_count_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/john/exercism/cpp/word-count/word_count_test.cpp -o CMakeFiles/word-count.dir/word_count_test.cpp.s

CMakeFiles/word-count.dir/word_count_test.cpp.o.requires:

.PHONY : CMakeFiles/word-count.dir/word_count_test.cpp.o.requires

CMakeFiles/word-count.dir/word_count_test.cpp.o.provides: CMakeFiles/word-count.dir/word_count_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/word-count.dir/build.make CMakeFiles/word-count.dir/word_count_test.cpp.o.provides.build
.PHONY : CMakeFiles/word-count.dir/word_count_test.cpp.o.provides

CMakeFiles/word-count.dir/word_count_test.cpp.o.provides.build: CMakeFiles/word-count.dir/word_count_test.cpp.o


CMakeFiles/word-count.dir/word_count.cpp.o: CMakeFiles/word-count.dir/flags.make
CMakeFiles/word-count.dir/word_count.cpp.o: word_count.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/john/exercism/cpp/word-count/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/word-count.dir/word_count.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/word-count.dir/word_count.cpp.o -c /home/john/exercism/cpp/word-count/word_count.cpp

CMakeFiles/word-count.dir/word_count.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/word-count.dir/word_count.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/john/exercism/cpp/word-count/word_count.cpp > CMakeFiles/word-count.dir/word_count.cpp.i

CMakeFiles/word-count.dir/word_count.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/word-count.dir/word_count.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/john/exercism/cpp/word-count/word_count.cpp -o CMakeFiles/word-count.dir/word_count.cpp.s

CMakeFiles/word-count.dir/word_count.cpp.o.requires:

.PHONY : CMakeFiles/word-count.dir/word_count.cpp.o.requires

CMakeFiles/word-count.dir/word_count.cpp.o.provides: CMakeFiles/word-count.dir/word_count.cpp.o.requires
	$(MAKE) -f CMakeFiles/word-count.dir/build.make CMakeFiles/word-count.dir/word_count.cpp.o.provides.build
.PHONY : CMakeFiles/word-count.dir/word_count.cpp.o.provides

CMakeFiles/word-count.dir/word_count.cpp.o.provides.build: CMakeFiles/word-count.dir/word_count.cpp.o


# Object files for target word-count
word__count_OBJECTS = \
"CMakeFiles/word-count.dir/word_count_test.cpp.o" \
"CMakeFiles/word-count.dir/word_count.cpp.o"

# External object files for target word-count
word__count_EXTERNAL_OBJECTS =

word-count: CMakeFiles/word-count.dir/word_count_test.cpp.o
word-count: CMakeFiles/word-count.dir/word_count.cpp.o
word-count: CMakeFiles/word-count.dir/build.make
word-count: /usr/local/lib/libboost_unit_test_framework.a
word-count: /usr/local/lib/libboost_date_time.a
word-count: /usr/local/lib/libboost_regex.a
word-count: CMakeFiles/word-count.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/john/exercism/cpp/word-count/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable word-count"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/word-count.dir/link.txt --verbose=$(VERBOSE)
	./word-count

# Rule to build all files generated by this target.
CMakeFiles/word-count.dir/build: word-count

.PHONY : CMakeFiles/word-count.dir/build

CMakeFiles/word-count.dir/requires: CMakeFiles/word-count.dir/word_count_test.cpp.o.requires
CMakeFiles/word-count.dir/requires: CMakeFiles/word-count.dir/word_count.cpp.o.requires

.PHONY : CMakeFiles/word-count.dir/requires

CMakeFiles/word-count.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/word-count.dir/cmake_clean.cmake
.PHONY : CMakeFiles/word-count.dir/clean

CMakeFiles/word-count.dir/depend:
	cd /home/john/exercism/cpp/word-count && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/john/exercism/cpp/word-count /home/john/exercism/cpp/word-count /home/john/exercism/cpp/word-count /home/john/exercism/cpp/word-count /home/john/exercism/cpp/word-count/CMakeFiles/word-count.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/word-count.dir/depend

