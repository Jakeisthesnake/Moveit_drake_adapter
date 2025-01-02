# Install script for directory: /home/jake/moveit2_ws_main/src/moveit2/moveit_kinematics/test

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jake/moveit2_ws_main/install/moveit_kinematics")
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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/jake/moveit2_ws_main/build/moveit_kinematics/gtest/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_kinematics" TYPE DIRECTORY FILES "/home/jake/moveit2_ws_main/src/moveit2/moveit_kinematics/test/config")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_kinematics" TYPE DIRECTORY FILES "/home/jake/moveit2_ws_main/src/moveit2/moveit_kinematics/test/launch")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/benchmark_ik" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/benchmark_ik")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/benchmark_ik"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics" TYPE EXECUTABLE FILES "/home/jake/moveit2_ws_main/build/moveit_kinematics/test/benchmark_ik")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/benchmark_ik" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/benchmark_ik")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/benchmark_ik"
         OLD_RPATH "/home/jake/moveit2_ws_main/install/moveit_ros_planning/lib:/home/jake/moveit2_ws_main/install/moveit_ros_occupancy_map_monitor/lib:/home/jake/moveit2_ws_main/install/moveit_core/lib:/home/jake/ros2_iron/install/rclcpp_lifecycle/lib:/home/jake/ros2_iron/install/rcl_lifecycle/lib:/home/jake/ros2_iron/install/lifecycle_msgs/lib:/home/jake/ros2_iron/install/urdf/lib:/home/jake/ros2_iron/install/tf2_ros/lib:/home/jake/ros2_iron/install/message_filters/lib:/home/jake/ros2_iron/install/tf2/lib:/home/jake/ros2_iron/install/rclcpp_action/lib:/home/jake/ros2_iron/install/rcl_action/lib:/home/jake/ros2_iron/install/tf2_msgs/lib:/home/jake/ros2_iron/install/visualization_msgs/lib:/home/jake/ros2_iron/install/resource_retriever/lib:/home/jake/ros2_iron/install/shape_msgs/lib:/home/jake/ros2_iron/install/action_msgs/lib:/home/jake/ros2_iron/install/unique_identifier_msgs/lib:/home/jake/ros2_iron/install/trajectory_msgs/lib:/home/jake/ros2_iron/install/sensor_msgs/lib:/home/jake/ros2_iron/install/geometry_msgs/lib:/home/jake/ros2_iron/install/std_msgs/lib:/home/jake/ros2_iron/install/rclcpp_components/lib:/home/jake/ros2_iron/install/rclcpp/lib:/home/jake/ros2_iron/install/libstatistics_collector/lib:/home/jake/ros2_iron/install/rcl/lib:/home/jake/ros2_iron/install/rmw_implementation/lib:/home/jake/ros2_iron/install/rcl_logging_interface/lib:/home/jake/ros2_iron/install/type_description_interfaces/lib:/home/jake/ros2_iron/install/rcl_yaml_param_parser/lib:/home/jake/ros2_iron/install/rosgraph_msgs/lib:/home/jake/ros2_iron/install/statistics_msgs/lib:/home/jake/ros2_iron/install/tracetools/lib:/home/jake/ros2_iron/install/ament_index_cpp/lib:/home/jake/ros2_iron/install/class_loader/lib:/home/jake/ros2_iron/install/composition_interfaces/lib:/home/jake/ros2_iron/install/rcl_interfaces/lib:/home/jake/ros2_iron/install/service_msgs/lib:/home/jake/ros2_iron/install/builtin_interfaces/lib:/home/jake/ros2_iron/install/rosidl_typesupport_fastrtps_c/lib:/home/jake/ros2_iron/install/rosidl_typesupport_introspection_cpp/lib:/home/jake/ros2_iron/install/rosidl_typesupport_introspection_c/lib:/home/jake/ros2_iron/install/rosidl_typesupport_fastrtps_cpp/lib:/home/jake/ros2_iron/install/rmw/lib:/home/jake/ros2_iron/install/rosidl_dynamic_typesupport/lib:/home/jake/ros2_iron/install/fastcdr/lib:/home/jake/ros2_iron/install/rosidl_typesupport_cpp/lib:/home/jake/ros2_iron/install/rosidl_typesupport_c/lib:/home/jake/ros2_iron/install/rcpputils/lib:/home/jake/ros2_iron/install/rosidl_runtime_c/lib:/home/jake/ros2_iron/install/rcutils/lib:/opt/ros/iron/lib:/home/jake/ros2_iron/install/kdl_parser/lib:/home/jake/ros2_iron/install/urdfdom/lib:/opt/ros/iron/lib/x86_64-linux-gnu:/home/jake/moveit2_ws_main/install/geometric_shapes/lib:/home/jake/moveit2_ws_main/install/moveit_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/benchmark_ik")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/test_kinematics_plugin" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/test_kinematics_plugin")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/test_kinematics_plugin"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics" TYPE EXECUTABLE FILES "/home/jake/moveit2_ws_main/build/moveit_kinematics/test/test_kinematics_plugin")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/test_kinematics_plugin" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/test_kinematics_plugin")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/test_kinematics_plugin"
         OLD_RPATH "/home/jake/moveit2_ws_main/install/moveit_ros_planning/lib:/home/jake/moveit2_ws_main/build/moveit_kinematics/kdl_kinematics_plugin:/home/jake/moveit2_ws_main/install/moveit_ros_occupancy_map_monitor/lib:/home/jake/ros2_iron/install/rclcpp_components/lib:/home/jake/ros2_iron/install/composition_interfaces/lib:/home/jake/moveit2_ws_main/install/moveit_core/lib:/home/jake/ros2_iron/install/visualization_msgs/lib:/home/jake/ros2_iron/install/resource_retriever/lib:/home/jake/ros2_iron/install/sensor_msgs/lib:/home/jake/ros2_iron/install/shape_msgs/lib:/home/jake/ros2_iron/install/trajectory_msgs/lib:/home/jake/ros2_iron/install/urdf/lib:/home/jake/ros2_iron/install/class_loader/lib:/home/jake/ros2_iron/install/tf2_ros/lib:/home/jake/ros2_iron/install/message_filters/lib:/home/jake/ros2_iron/install/tf2/lib:/home/jake/ros2_iron/install/rclcpp_action/lib:/home/jake/ros2_iron/install/rcl_action/lib:/home/jake/ros2_iron/install/tf2_msgs/lib:/home/jake/ros2_iron/install/geometry_msgs/lib:/home/jake/ros2_iron/install/std_msgs/lib:/home/jake/ros2_iron/install/action_msgs/lib:/home/jake/ros2_iron/install/unique_identifier_msgs/lib:/home/jake/ros2_iron/install/rclcpp_lifecycle/lib:/home/jake/ros2_iron/install/rcl_lifecycle/lib:/home/jake/ros2_iron/install/lifecycle_msgs/lib:/home/jake/ros2_iron/install/rclcpp/lib:/home/jake/ros2_iron/install/libstatistics_collector/lib:/home/jake/ros2_iron/install/rcl/lib:/home/jake/ros2_iron/install/rmw_implementation/lib:/home/jake/ros2_iron/install/ament_index_cpp/lib:/home/jake/ros2_iron/install/rcl_logging_interface/lib:/home/jake/ros2_iron/install/type_description_interfaces/lib:/home/jake/ros2_iron/install/rcl_interfaces/lib:/home/jake/ros2_iron/install/service_msgs/lib:/home/jake/ros2_iron/install/rcl_yaml_param_parser/lib:/home/jake/ros2_iron/install/rosgraph_msgs/lib:/home/jake/ros2_iron/install/statistics_msgs/lib:/home/jake/ros2_iron/install/builtin_interfaces/lib:/home/jake/ros2_iron/install/rosidl_typesupport_fastrtps_c/lib:/home/jake/ros2_iron/install/rosidl_typesupport_fastrtps_cpp/lib:/home/jake/ros2_iron/install/fastcdr/lib:/home/jake/ros2_iron/install/rmw/lib:/home/jake/ros2_iron/install/rosidl_dynamic_typesupport/lib:/home/jake/ros2_iron/install/rosidl_typesupport_introspection_cpp/lib:/home/jake/ros2_iron/install/rosidl_typesupport_introspection_c/lib:/home/jake/ros2_iron/install/rosidl_typesupport_cpp/lib:/home/jake/ros2_iron/install/rosidl_typesupport_c/lib:/home/jake/ros2_iron/install/rcpputils/lib:/home/jake/ros2_iron/install/rosidl_runtime_c/lib:/home/jake/ros2_iron/install/rcutils/lib:/home/jake/ros2_iron/install/tracetools/lib:/opt/ros/iron/lib:/home/jake/ros2_iron/install/urdfdom/lib:/opt/ros/iron/lib/x86_64-linux-gnu:/home/jake/moveit2_ws_main/install/geometric_shapes/lib:/home/jake/moveit2_ws_main/install/moveit_msgs/lib:/home/jake/ros2_iron/install/kdl_parser/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/test_kinematics_plugin")
    endif()
  endif()
endif()
