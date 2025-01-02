# CMake generated Testfile for 
# Source directory: /home/jake/moveit2_ws_main/src/generate_parameter_library/generate_parameter_library
# Build directory: /home/jake/moveit2_ws_main/build/generate_parameter_library
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3.10" "-u" "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/home/jake/moveit2_ws_main/build/generate_parameter_library/test_results/generate_parameter_library/copyright.xunit.xml" "--package-name" "generate_parameter_library" "--output-file" "/home/jake/moveit2_ws_main/build/generate_parameter_library/ament_copyright/copyright.txt" "--command" "/home/jake/ros2_iron/install/ament_copyright/bin/ament_copyright" "--xunit-file" "/home/jake/moveit2_ws_main/build/generate_parameter_library/test_results/generate_parameter_library/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "200" WORKING_DIRECTORY "/home/jake/moveit2_ws_main/src/generate_parameter_library/generate_parameter_library" _BACKTRACE_TRIPLES "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/jake/ros2_iron/install/ament_cmake_copyright/share/ament_cmake_copyright/cmake/ament_copyright.cmake;51;ament_add_test;/home/jake/ros2_iron/install/ament_cmake_copyright/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;22;ament_copyright;/home/jake/ros2_iron/install/ament_cmake_copyright/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/home/jake/ros2_iron/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/jake/ros2_iron/install/ament_lint_auto/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/jake/ros2_iron/install/ament_lint_auto/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/jake/ros2_iron/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/jake/ros2_iron/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/jake/moveit2_ws_main/src/generate_parameter_library/generate_parameter_library/CMakeLists.txt;20;ament_package;/home/jake/moveit2_ws_main/src/generate_parameter_library/generate_parameter_library/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3.10" "-u" "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/home/jake/moveit2_ws_main/build/generate_parameter_library/test_results/generate_parameter_library/lint_cmake.xunit.xml" "--package-name" "generate_parameter_library" "--output-file" "/home/jake/moveit2_ws_main/build/generate_parameter_library/ament_lint_cmake/lint_cmake.txt" "--command" "/home/jake/ros2_iron/install/ament_lint_cmake/bin/ament_lint_cmake" "--xunit-file" "/home/jake/moveit2_ws_main/build/generate_parameter_library/test_results/generate_parameter_library/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/jake/moveit2_ws_main/src/generate_parameter_library/generate_parameter_library" _BACKTRACE_TRIPLES "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/jake/ros2_iron/install/ament_cmake_lint_cmake/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/home/jake/ros2_iron/install/ament_cmake_lint_cmake/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/home/jake/ros2_iron/install/ament_cmake_lint_cmake/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/home/jake/ros2_iron/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/jake/ros2_iron/install/ament_lint_auto/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/jake/ros2_iron/install/ament_lint_auto/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/jake/ros2_iron/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/jake/ros2_iron/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/jake/moveit2_ws_main/src/generate_parameter_library/generate_parameter_library/CMakeLists.txt;20;ament_package;/home/jake/moveit2_ws_main/src/generate_parameter_library/generate_parameter_library/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3.10" "-u" "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/home/jake/moveit2_ws_main/build/generate_parameter_library/test_results/generate_parameter_library/xmllint.xunit.xml" "--package-name" "generate_parameter_library" "--output-file" "/home/jake/moveit2_ws_main/build/generate_parameter_library/ament_xmllint/xmllint.txt" "--command" "/home/jake/ros2_iron/install/ament_xmllint/bin/ament_xmllint" "--xunit-file" "/home/jake/moveit2_ws_main/build/generate_parameter_library/test_results/generate_parameter_library/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/jake/moveit2_ws_main/src/generate_parameter_library/generate_parameter_library" _BACKTRACE_TRIPLES "/home/jake/ros2_iron/install/ament_cmake_test/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/jake/ros2_iron/install/ament_cmake_xmllint/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/home/jake/ros2_iron/install/ament_cmake_xmllint/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/home/jake/ros2_iron/install/ament_cmake_xmllint/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/home/jake/ros2_iron/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/jake/ros2_iron/install/ament_lint_auto/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/jake/ros2_iron/install/ament_lint_auto/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/jake/ros2_iron/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/jake/ros2_iron/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/jake/moveit2_ws_main/src/generate_parameter_library/generate_parameter_library/CMakeLists.txt;20;ament_package;/home/jake/moveit2_ws_main/src/generate_parameter_library/generate_parameter_library/CMakeLists.txt;0;")
