# CMake generated Testfile for 
# Source directory: /home/jake/moveit2_ws_main/src/rviz_visual_tools
# Build directory: /home/jake/moveit2_ws_main/build/rviz_visual_tools
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(rviz_visual_tools_rvt_test "/usr/bin/python3.10" "-u" "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/home/jake/moveit2_ws_main/build/rviz_visual_tools/test_results/rviz_visual_tools/rviz_visual_tools_rvt_test.gtest.xml" "--package-name" "rviz_visual_tools" "--output-file" "/home/jake/moveit2_ws_main/build/rviz_visual_tools/ament_cmake_gtest/rviz_visual_tools_rvt_test.txt" "--command" "/home/jake/moveit2_ws_main/build/rviz_visual_tools/rviz_visual_tools_rvt_test" "--gtest_output=xml:/home/jake/moveit2_ws_main/build/rviz_visual_tools/test_results/rviz_visual_tools/rviz_visual_tools_rvt_test.gtest.xml")
set_tests_properties(rviz_visual_tools_rvt_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/jake/moveit2_ws_main/build/rviz_visual_tools/rviz_visual_tools_rvt_test" TIMEOUT "180" WORKING_DIRECTORY "/home/jake/moveit2_ws_main/build/rviz_visual_tools" _BACKTRACE_TRIPLES "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/jake/ros2_iron/install/ament_cmake_gtest/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/jake/ros2_iron/install/ament_cmake_gtest/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/jake/moveit2_ws_main/src/rviz_visual_tools/CMakeLists.txt;247;ament_add_gtest;/home/jake/moveit2_ws_main/src/rviz_visual_tools/CMakeLists.txt;0;")
subdirs("gtest")
