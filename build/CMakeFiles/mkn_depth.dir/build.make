# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kaca/ros/slam_makin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kaca/ros/slam_makin/build

# Include any dependencies generated for this target.
include CMakeFiles/mkn_depth.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mkn_depth.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mkn_depth.dir/flags.make

CMakeFiles/mkn_depth.dir/src/depth.o: CMakeFiles/mkn_depth.dir/flags.make
CMakeFiles/mkn_depth.dir/src/depth.o: ../src/depth.cpp
CMakeFiles/mkn_depth.dir/src/depth.o: ../manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/ros/tools/rospack/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/ros/core/roslib/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/messages/std_msgs/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/messages/rosgraph_msgs/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/ros/core/rosbuild/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/ros/core/roslang/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/clients/rospy/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/utilities/cpp_common/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp_traits/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/utilities/rostime/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp_serialization/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/utilities/xmlrpcpp/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/tools/rosconsole/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp/manifest.xml
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/messages/std_msgs/msg_gen/generated
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/messages/rosgraph_msgs/msg_gen/generated
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp/msg_gen/generated
CMakeFiles/mkn_depth.dir/src/depth.o: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp/srv_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kaca/ros/slam_makin/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/mkn_depth.dir/src/depth.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/mkn_depth.dir/src/depth.o -c /home/kaca/ros/slam_makin/src/depth.cpp

CMakeFiles/mkn_depth.dir/src/depth.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mkn_depth.dir/src/depth.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/kaca/ros/slam_makin/src/depth.cpp > CMakeFiles/mkn_depth.dir/src/depth.i

CMakeFiles/mkn_depth.dir/src/depth.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mkn_depth.dir/src/depth.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/kaca/ros/slam_makin/src/depth.cpp -o CMakeFiles/mkn_depth.dir/src/depth.s

CMakeFiles/mkn_depth.dir/src/depth.o.requires:
.PHONY : CMakeFiles/mkn_depth.dir/src/depth.o.requires

CMakeFiles/mkn_depth.dir/src/depth.o.provides: CMakeFiles/mkn_depth.dir/src/depth.o.requires
	$(MAKE) -f CMakeFiles/mkn_depth.dir/build.make CMakeFiles/mkn_depth.dir/src/depth.o.provides.build
.PHONY : CMakeFiles/mkn_depth.dir/src/depth.o.provides

CMakeFiles/mkn_depth.dir/src/depth.o.provides.build: CMakeFiles/mkn_depth.dir/src/depth.o

# Object files for target mkn_depth
mkn_depth_OBJECTS = \
"CMakeFiles/mkn_depth.dir/src/depth.o"

# External object files for target mkn_depth
mkn_depth_EXTERNAL_OBJECTS =

../bin/mkn_depth: CMakeFiles/mkn_depth.dir/src/depth.o
../bin/mkn_depth: CMakeFiles/mkn_depth.dir/build.make
../bin/mkn_depth: CMakeFiles/mkn_depth.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/mkn_depth"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mkn_depth.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mkn_depth.dir/build: ../bin/mkn_depth
.PHONY : CMakeFiles/mkn_depth.dir/build

CMakeFiles/mkn_depth.dir/requires: CMakeFiles/mkn_depth.dir/src/depth.o.requires
.PHONY : CMakeFiles/mkn_depth.dir/requires

CMakeFiles/mkn_depth.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mkn_depth.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mkn_depth.dir/clean

CMakeFiles/mkn_depth.dir/depend:
	cd /home/kaca/ros/slam_makin/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kaca/ros/slam_makin /home/kaca/ros/slam_makin /home/kaca/ros/slam_makin/build /home/kaca/ros/slam_makin/build /home/kaca/ros/slam_makin/build/CMakeFiles/mkn_depth.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mkn_depth.dir/depend

