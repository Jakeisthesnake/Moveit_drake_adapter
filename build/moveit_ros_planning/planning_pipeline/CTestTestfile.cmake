# CMake generated Testfile for 
# Source directory: /home/jake/moveit2_ws_main/src/moveit2/moveit_ros/planning/planning_pipeline
# Build directory: /home/jake/moveit2_ws_main/build/moveit_ros_planning/planning_pipeline
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[moveit_planning_pipeline_test]=] "/usr/bin/python3.10" "-u" "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/home/jake/moveit2_ws_main/build/moveit_ros_planning/test_results/moveit_ros_planning/moveit_planning_pipeline_test.gtest.xml" "--package-name" "moveit_ros_planning" "--output-file" "/home/jake/moveit2_ws_main/build/moveit_ros_planning/ament_cmake_gtest/moveit_planning_pipeline_test.txt" "--command" "/home/jake/moveit2_ws_main/build/moveit_ros_planning/planning_pipeline/moveit_planning_pipeline_test" "--gtest_output=xml:/home/jake/moveit2_ws_main/build/moveit_ros_planning/test_results/moveit_ros_planning/moveit_planning_pipeline_test.gtest.xml")
set_tests_properties([=[moveit_planning_pipeline_test]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/jake/moveit2_ws_main/build/moveit_ros_planning/planning_pipeline/moveit_planning_pipeline_test" TIMEOUT "60" WORKING_DIRECTORY "/home/jake/moveit2_ws_main/build/moveit_ros_planning/planning_pipeline" _BACKTRACE_TRIPLES "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/jake/ros2_iron/install/ament_cmake_gtest/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/jake/ros2_iron/install/ament_cmake_gtest/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/jake/moveit2_ws_main/src/moveit2/moveit_ros/planning/planning_pipeline/CMakeLists.txt;30;ament_add_gtest;/home/jake/moveit2_ws_main/src/moveit2/moveit_ros/planning/planning_pipeline/CMakeLists.txt;0;")
subdirs("../gtest")