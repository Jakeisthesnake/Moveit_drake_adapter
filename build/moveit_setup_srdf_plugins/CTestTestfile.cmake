# CMake generated Testfile for 
# Source directory: /home/jake/moveit2_ws_main/src/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins
# Build directory: /home/jake/moveit2_ws_main/build/moveit_setup_srdf_plugins
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_srdf]=] "/usr/bin/python3.10" "-u" "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/home/jake/moveit2_ws_main/build/moveit_setup_srdf_plugins/test_results/moveit_setup_srdf_plugins/test_srdf.gtest.xml" "--package-name" "moveit_setup_srdf_plugins" "--output-file" "/home/jake/moveit2_ws_main/build/moveit_setup_srdf_plugins/ament_cmake_gtest/test_srdf.txt" "--command" "/home/jake/moveit2_ws_main/build/moveit_setup_srdf_plugins/test_srdf" "--gtest_output=xml:/home/jake/moveit2_ws_main/build/moveit_setup_srdf_plugins/test_results/moveit_setup_srdf_plugins/test_srdf.gtest.xml")
set_tests_properties([=[test_srdf]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/jake/moveit2_ws_main/build/moveit_setup_srdf_plugins/test_srdf" TIMEOUT "60" WORKING_DIRECTORY "/home/jake/moveit2_ws_main/build/moveit_setup_srdf_plugins" _BACKTRACE_TRIPLES "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/jake/ros2_iron/install/ament_cmake_gtest/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/jake/ros2_iron/install/ament_cmake_gtest/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/jake/moveit2_ws_main/src/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins/CMakeLists.txt;58;ament_add_gtest;/home/jake/moveit2_ws_main/src/moveit2/moveit_setup_assistant/moveit_setup_srdf_plugins/CMakeLists.txt;0;")
subdirs("gtest")