# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_SOURCE_DIR = /home/ac/Downloads/cad

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ac/Downloads/cad/build

# Include any dependencies generated for this target.
include bin/CMakeFiles/euler_opt.dir/depend.make

# Include the progress variables for this target.
include bin/CMakeFiles/euler_opt.dir/progress.make

# Include the compile flags for this target's objects.
include bin/CMakeFiles/euler_opt.dir/flags.make

bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.o: ../src/SolidSet.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/SolidSet.cpp.o -c /home/ac/Downloads/cad/src/SolidSet.cpp

bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/SolidSet.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/SolidSet.cpp > CMakeFiles/euler_opt.dir/SolidSet.cpp.i

bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/SolidSet.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/SolidSet.cpp -o CMakeFiles/euler_opt.dir/SolidSet.cpp.s

bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.o

bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.o: ../src/EulerOperator.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/EulerOperator.cpp.o -c /home/ac/Downloads/cad/src/EulerOperator.cpp

bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/EulerOperator.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/EulerOperator.cpp > CMakeFiles/euler_opt.dir/EulerOperator.cpp.i

bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/EulerOperator.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/EulerOperator.cpp -o CMakeFiles/euler_opt.dir/EulerOperator.cpp.s

bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.o

bin/CMakeFiles/euler_opt.dir/Root.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/Root.cpp.o: ../src/Root.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/Root.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/Root.cpp.o -c /home/ac/Downloads/cad/src/Root.cpp

bin/CMakeFiles/euler_opt.dir/Root.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/Root.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/Root.cpp > CMakeFiles/euler_opt.dir/Root.cpp.i

bin/CMakeFiles/euler_opt.dir/Root.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/Root.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/Root.cpp -o CMakeFiles/euler_opt.dir/Root.cpp.s

bin/CMakeFiles/euler_opt.dir/Root.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/Root.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/Root.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/Root.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/Root.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/Root.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/Root.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/Root.cpp.o

bin/CMakeFiles/euler_opt.dir/main.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/main.cpp.o: ../src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/main.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/main.cpp.o -c /home/ac/Downloads/cad/src/main.cpp

bin/CMakeFiles/euler_opt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/main.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/main.cpp > CMakeFiles/euler_opt.dir/main.cpp.i

bin/CMakeFiles/euler_opt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/main.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/main.cpp -o CMakeFiles/euler_opt.dir/main.cpp.s

bin/CMakeFiles/euler_opt.dir/main.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/main.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/main.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/main.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/main.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/main.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/main.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/main.cpp.o

bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o: ../src/topolog/Solid.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o -c /home/ac/Downloads/cad/src/topolog/Solid.cpp

bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/topolog/Solid.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/topolog/Solid.cpp > CMakeFiles/euler_opt.dir/topolog/Solid.cpp.i

bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/topolog/Solid.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/topolog/Solid.cpp -o CMakeFiles/euler_opt.dir/topolog/Solid.cpp.s

bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o

bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.o: ../src/topolog/Face.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/topolog/Face.cpp.o -c /home/ac/Downloads/cad/src/topolog/Face.cpp

bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/topolog/Face.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/topolog/Face.cpp > CMakeFiles/euler_opt.dir/topolog/Face.cpp.i

bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/topolog/Face.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/topolog/Face.cpp -o CMakeFiles/euler_opt.dir/topolog/Face.cpp.s

bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.o

bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o: ../src/topolog/Vertex.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o -c /home/ac/Downloads/cad/src/topolog/Vertex.cpp

bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/topolog/Vertex.cpp > CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.i

bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/topolog/Vertex.cpp -o CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.s

bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o

bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o: ../src/topolog/Edge.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o -c /home/ac/Downloads/cad/src/topolog/Edge.cpp

bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/topolog/Edge.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/topolog/Edge.cpp > CMakeFiles/euler_opt.dir/topolog/Edge.cpp.i

bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/topolog/Edge.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/topolog/Edge.cpp -o CMakeFiles/euler_opt.dir/topolog/Edge.cpp.s

bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o

bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o: ../src/topolog/Loop.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o -c /home/ac/Downloads/cad/src/topolog/Loop.cpp

bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/topolog/Loop.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/topolog/Loop.cpp > CMakeFiles/euler_opt.dir/topolog/Loop.cpp.i

bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/topolog/Loop.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/topolog/Loop.cpp -o CMakeFiles/euler_opt.dir/topolog/Loop.cpp.s

bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o

bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o: ../src/topolog/HalfEdge.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o -c /home/ac/Downloads/cad/src/topolog/HalfEdge.cpp

bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/topolog/HalfEdge.cpp > CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.i

bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/topolog/HalfEdge.cpp -o CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.s

bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o

bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o: ../src/topolog/TopologyBase.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o -c /home/ac/Downloads/cad/src/topolog/TopologyBase.cpp

bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/topolog/TopologyBase.cpp > CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.i

bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/topolog/TopologyBase.cpp -o CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.s

bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o

bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o: ../src/geometry/Surface.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_12)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o -c /home/ac/Downloads/cad/src/geometry/Surface.cpp

bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/geometry/Surface.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/geometry/Surface.cpp > CMakeFiles/euler_opt.dir/geometry/Surface.cpp.i

bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/geometry/Surface.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/geometry/Surface.cpp -o CMakeFiles/euler_opt.dir/geometry/Surface.cpp.s

bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o

bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o: ../src/geometry/Curve.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_13)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o -c /home/ac/Downloads/cad/src/geometry/Curve.cpp

bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/geometry/Curve.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/geometry/Curve.cpp > CMakeFiles/euler_opt.dir/geometry/Curve.cpp.i

bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/geometry/Curve.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/geometry/Curve.cpp -o CMakeFiles/euler_opt.dir/geometry/Curve.cpp.s

bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o

bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o: ../src/geometry/GeometryBase.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_14)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o -c /home/ac/Downloads/cad/src/geometry/GeometryBase.cpp

bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/geometry/GeometryBase.cpp > CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.i

bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/geometry/GeometryBase.cpp -o CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.s

bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o

bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.o: bin/CMakeFiles/euler_opt.dir/flags.make
bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.o: ../src/geometry/Point.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ac/Downloads/cad/build/CMakeFiles $(CMAKE_PROGRESS_15)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.o"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler_opt.dir/geometry/Point.cpp.o -c /home/ac/Downloads/cad/src/geometry/Point.cpp

bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler_opt.dir/geometry/Point.cpp.i"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ac/Downloads/cad/src/geometry/Point.cpp > CMakeFiles/euler_opt.dir/geometry/Point.cpp.i

bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler_opt.dir/geometry/Point.cpp.s"
	cd /home/ac/Downloads/cad/build/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ac/Downloads/cad/src/geometry/Point.cpp -o CMakeFiles/euler_opt.dir/geometry/Point.cpp.s

bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.o.requires:
.PHONY : bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.o.requires

bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.o.provides: bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.o.requires
	$(MAKE) -f bin/CMakeFiles/euler_opt.dir/build.make bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.o.provides.build
.PHONY : bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.o.provides

bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.o.provides.build: bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.o

# Object files for target euler_opt
euler_opt_OBJECTS = \
"CMakeFiles/euler_opt.dir/SolidSet.cpp.o" \
"CMakeFiles/euler_opt.dir/EulerOperator.cpp.o" \
"CMakeFiles/euler_opt.dir/Root.cpp.o" \
"CMakeFiles/euler_opt.dir/main.cpp.o" \
"CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o" \
"CMakeFiles/euler_opt.dir/topolog/Face.cpp.o" \
"CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o" \
"CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o" \
"CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o" \
"CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o" \
"CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o" \
"CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o" \
"CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o" \
"CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o" \
"CMakeFiles/euler_opt.dir/geometry/Point.cpp.o"

# External object files for target euler_opt
euler_opt_EXTERNAL_OBJECTS =

bin/euler_opt: bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/Root.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/main.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.o
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/build.make
bin/euler_opt: bin/CMakeFiles/euler_opt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable euler_opt"
	cd /home/ac/Downloads/cad/build/bin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/euler_opt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bin/CMakeFiles/euler_opt.dir/build: bin/euler_opt
.PHONY : bin/CMakeFiles/euler_opt.dir/build

bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/SolidSet.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/EulerOperator.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/Root.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/main.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/topolog/Solid.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/topolog/Face.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/topolog/Vertex.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/topolog/Edge.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/topolog/Loop.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/topolog/HalfEdge.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/topolog/TopologyBase.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/geometry/Surface.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/geometry/Curve.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/geometry/GeometryBase.cpp.o.requires
bin/CMakeFiles/euler_opt.dir/requires: bin/CMakeFiles/euler_opt.dir/geometry/Point.cpp.o.requires
.PHONY : bin/CMakeFiles/euler_opt.dir/requires

bin/CMakeFiles/euler_opt.dir/clean:
	cd /home/ac/Downloads/cad/build/bin && $(CMAKE_COMMAND) -P CMakeFiles/euler_opt.dir/cmake_clean.cmake
.PHONY : bin/CMakeFiles/euler_opt.dir/clean

bin/CMakeFiles/euler_opt.dir/depend:
	cd /home/ac/Downloads/cad/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ac/Downloads/cad /home/ac/Downloads/cad/src /home/ac/Downloads/cad/build /home/ac/Downloads/cad/build/bin /home/ac/Downloads/cad/build/bin/CMakeFiles/euler_opt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bin/CMakeFiles/euler_opt.dir/depend

