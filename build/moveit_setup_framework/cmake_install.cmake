# Install script for directory: /home/jake/moveit2_ws_main/src/moveit2/moveit_setup_assistant/moveit_setup_framework

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jake/moveit2_ws_main/install/moveit_setup_framework")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_setup_framework" TYPE DIRECTORY FILES "/home/jake/moveit2_ws_main/src/moveit2/moveit_setup_assistant/moveit_setup_framework/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework" TYPE FILE FILES "/home/jake/moveit2_ws_main/src/moveit2/moveit_setup_assistant/moveit_setup_framework/moveit_setup_framework_plugins.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework" TYPE DIRECTORY FILES "/home/jake/moveit2_ws_main/src/moveit2/moveit_setup_assistant/moveit_setup_framework/templates")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/environment" TYPE FILE FILES "/home/jake/ros2_iron/build/ament_package/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/environment" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_framework.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_framework.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_framework.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/libmoveit_setup_framework.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_framework.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_framework.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_framework.so"
         OLD_RPATH "/home/jake/moveit2_ws_main/install/moveit_ros_visualization/lib:/home/jake/moveit2_ws_main/install/moveit_ros_robot_interaction/lib:/home/jake/moveit2_ws_main/install/moveit_ros_planning_interface/lib:/home/jake/moveit2_ws_main/install/moveit_ros_warehouse/lib:/home/jake/ros2_iron/install/rclcpp_components/lib:/home/jake/ros2_iron/install/composition_interfaces/lib:/home/jake/ros2_iron/install/rclcpp_lifecycle/lib:/home/jake/ros2_iron/install/rcl_lifecycle/lib:/home/jake/ros2_iron/install/lifecycle_msgs/lib:/home/jake/ros2_iron/install/tf2_ros/lib:/home/jake/ros2_iron/install/urdf/lib:/home/jake/ros2_iron/install/resource_retriever/lib:/home/jake/ros2_iron/install/rclcpp_action/lib:/home/jake/ros2_iron/install/rcl_action/lib:/home/jake/ros2_iron/install/tf2_msgs/lib:/home/jake/ros2_iron/install/visualization_msgs/lib:/home/jake/ros2_iron/install/message_filters/lib:/home/jake/ros2_iron/install/tf2/lib:/home/jake/ros2_iron/install/sensor_msgs/lib:/home/jake/ros2_iron/install/shape_msgs/lib:/home/jake/ros2_iron/install/action_msgs/lib:/home/jake/ros2_iron/install/unique_identifier_msgs/lib:/home/jake/ros2_iron/install/trajectory_msgs/lib:/home/jake/ros2_iron/install/geometry_msgs/lib:/home/jake/ros2_iron/install/std_msgs/lib:/home/jake/ros2_iron/install/class_loader/lib:/home/jake/ros2_iron/install/rclcpp/lib:/home/jake/ros2_iron/install/libstatistics_collector/lib:/home/jake/ros2_iron/install/rcl/lib:/home/jake/ros2_iron/install/rmw_implementation/lib:/home/jake/ros2_iron/install/ament_index_cpp/lib:/home/jake/ros2_iron/install/rcl_logging_interface/lib:/home/jake/ros2_iron/install/type_description_interfaces/lib:/home/jake/ros2_iron/install/rcl_interfaces/lib:/home/jake/ros2_iron/install/service_msgs/lib:/home/jake/ros2_iron/install/rcl_yaml_param_parser/lib:/home/jake/ros2_iron/install/rosgraph_msgs/lib:/home/jake/ros2_iron/install/statistics_msgs/lib:/home/jake/ros2_iron/install/builtin_interfaces/lib:/home/jake/ros2_iron/install/rosidl_typesupport_fastrtps_c/lib:/home/jake/ros2_iron/install/rosidl_typesupport_fastrtps_cpp/lib:/home/jake/ros2_iron/install/fastcdr/lib:/home/jake/ros2_iron/install/rmw/lib:/home/jake/ros2_iron/install/rosidl_dynamic_typesupport/lib:/home/jake/ros2_iron/install/rosidl_typesupport_introspection_cpp/lib:/home/jake/ros2_iron/install/rosidl_typesupport_introspection_c/lib:/home/jake/ros2_iron/install/rosidl_typesupport_cpp/lib:/home/jake/ros2_iron/install/rosidl_typesupport_c/lib:/home/jake/ros2_iron/install/rcpputils/lib:/home/jake/ros2_iron/install/rosidl_runtime_c/lib:/home/jake/ros2_iron/install/rcutils/lib:/home/jake/ros2_iron/install/tracetools/lib:/opt/ros/iron/lib:/home/jake/moveit2_ws_main/install/moveit_ros_move_group/lib:/home/jake/moveit2_ws_main/install/moveit_ros_planning/lib:/home/jake/moveit2_ws_main/install/moveit_ros_occupancy_map_monitor/lib:/home/jake/ros2_iron/install/std_srvs/lib:/home/jake/moveit2_ws_main/install/moveit_core/lib:/home/jake/ros2_iron/install/kdl_parser/lib:/home/jake/ros2_iron/install/urdfdom/lib:/opt/ros/iron/lib/x86_64-linux-gnu:/home/jake/moveit2_ws_main/install/geometric_shapes/lib:/home/jake/ros2_iron/install/rviz_default_plugins/lib:/home/jake/ros2_iron/install/rviz_common/lib:/home/jake/ros2_iron/install/rviz_rendering/lib:/home/jake/ros2_iron/install/rviz_ogre_vendor/opt/rviz_ogre_vendor/lib:/home/jake/ros2_iron/install/interactive_markers/lib:/home/jake/ros2_iron/install/image_transport/lib:/home/jake/ros2_iron/install/laser_geometry/lib:/home/jake/ros2_iron/install/map_msgs/lib:/home/jake/ros2_iron/install/nav_msgs/lib:/home/jake/moveit2_ws_main/install/moveit_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_framework.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework" TYPE FILE FILES "/home/jake/moveit2_ws_main/src/moveit2/moveit_setup_assistant/moveit_setup_framework/moveit_setup_framework_plugins.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/moveit_setup_framework")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/moveit_setup_framework")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/environment" TYPE FILE FILES "/home/jake/ros2_iron/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/environment" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/environment" TYPE FILE FILES "/home/jake/ros2_iron/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/environment" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_index/share/ament_index/resource_index/packages/moveit_setup_framework")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/moveit_setup_framework__pluginlib__plugin" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_index/share/ament_index/resource_index/moveit_setup_framework__pluginlib__plugin/moveit_setup_framework")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/cmake/moveit_setup_frameworkTargetsExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/cmake/moveit_setup_frameworkTargetsExport.cmake"
         "/home/jake/moveit2_ws_main/build/moveit_setup_framework/CMakeFiles/Export/share/moveit_setup_framework/cmake/moveit_setup_frameworkTargetsExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/cmake/moveit_setup_frameworkTargetsExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/cmake/moveit_setup_frameworkTargetsExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/cmake" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/CMakeFiles/Export/share/moveit_setup_framework/cmake/moveit_setup_frameworkTargetsExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/cmake" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/CMakeFiles/Export/share/moveit_setup_framework/cmake/moveit_setup_frameworkTargetsExport-release.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/cmake" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/cmake" TYPE FILE FILES "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework/cmake" TYPE FILE FILES
    "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_core/moveit_setup_frameworkConfig.cmake"
    "/home/jake/moveit2_ws_main/build/moveit_setup_framework/ament_cmake_core/moveit_setup_frameworkConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_framework" TYPE FILE FILES "/home/jake/moveit2_ws_main/src/moveit2/moveit_setup_assistant/moveit_setup_framework/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/jake/moveit2_ws_main/build/moveit_setup_framework/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
