# CMake generated Testfile for 
# Source directory: /home/jake/moveit2_ws_main/src/moveit2/moveit_core/collision_distance_field
# Build directory: /home/jake/moveit2_ws_main/build/moveit_core/collision_distance_field
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_collision_distance_field]=] "/usr/bin/python3.10" "-u" "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/home/jake/moveit2_ws_main/build/moveit_core/test_results/moveit_core/test_collision_distance_field.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/jake/moveit2_ws_main/build/moveit_core/ament_cmake_gtest/test_collision_distance_field.txt" "--command" "/home/jake/moveit2_ws_main/build/moveit_core/collision_distance_field/test_collision_distance_field" "--gtest_output=xml:/home/jake/moveit2_ws_main/build/moveit_core/test_results/moveit_core/test_collision_distance_field.gtest.xml")
set_tests_properties([=[test_collision_distance_field]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/jake/moveit2_ws_main/build/moveit_core/collision_distance_field/test_collision_distance_field" TIMEOUT "60" WORKING_DIRECTORY "/home/jake/moveit2_ws_main/build/moveit_core/collision_distance_field" _BACKTRACE_TRIPLES "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/jake/ros2_iron/install/ament_cmake_gtest/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/jake/ros2_iron/install/ament_cmake_gtest/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/jake/moveit2_ws_main/src/moveit2/moveit_core/collision_distance_field/CMakeLists.txt;34;ament_add_gtest;/home/jake/moveit2_ws_main/src/moveit2/moveit_core/collision_distance_field/CMakeLists.txt;0;")
