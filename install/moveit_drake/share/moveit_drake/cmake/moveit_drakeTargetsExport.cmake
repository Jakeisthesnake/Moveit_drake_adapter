# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.6)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6...3.20)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget moveit_drake::moveit_drake moveit_drake::ktopt_moveit_parameters)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target moveit_drake::moveit_drake
add_library(moveit_drake::moveit_drake SHARED IMPORTED)

set_target_properties(moveit_drake::moveit_drake PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "/usr/include/eigen3;${_IMPORT_PREFIX}/include/drake"
  INTERFACE_LINK_LIBRARIES "rclcpp::rclcpp;pluginlib::pluginlib;moveit_core::collision_detector_bullet_plugin;moveit_core::collision_detector_fcl_plugin;moveit_core::moveit_acceleration_filter;moveit_core::moveit_acceleration_filter_parameters;moveit_core::moveit_butterworth_filter;moveit_core::moveit_butterworth_filter_parameters;moveit_core::moveit_collision_detection;moveit_core::moveit_collision_detection_bullet;moveit_core::moveit_collision_detection_fcl;moveit_core::moveit_collision_distance_field;moveit_core::moveit_constraint_samplers;moveit_core::moveit_distance_field;moveit_core::moveit_dynamics_solver;moveit_core::moveit_exceptions;moveit_core::moveit_kinematic_constraints;moveit_core::moveit_kinematics_base;moveit_core::moveit_kinematics_metrics;moveit_core::moveit_macros;moveit_core::moveit_planning_interface;moveit_core::moveit_planning_scene;moveit_core::moveit_robot_model;moveit_core::moveit_robot_state;moveit_core::moveit_robot_trajectory;moveit_core::moveit_ruckig_filter;moveit_core::moveit_ruckig_filter_parameters;moveit_core::moveit_smoothing_base;moveit_core::moveit_test_utils;moveit_core::moveit_trajectory_processing;moveit_core::moveit_transforms;moveit_core::moveit_utils;moveit_msgs::moveit_msgs__rosidl_generator_c;moveit_msgs::moveit_msgs__rosidl_typesupport_introspection_c;moveit_msgs::moveit_msgs__rosidl_typesupport_fastrtps_c;moveit_msgs::moveit_msgs__rosidl_typesupport_c;moveit_msgs::moveit_msgs__rosidl_generator_cpp;moveit_msgs::moveit_msgs__rosidl_typesupport_introspection_cpp;moveit_msgs::moveit_msgs__rosidl_typesupport_fastrtps_cpp;moveit_msgs::moveit_msgs__rosidl_typesupport_cpp;moveit_msgs::moveit_msgs__rosidl_generator_py;drake::drake;moveit_drake::ktopt_moveit_parameters"
)

# Create imported target moveit_drake::ktopt_moveit_parameters
add_library(moveit_drake::ktopt_moveit_parameters INTERFACE IMPORTED)

set_target_properties(moveit_drake::ktopt_moveit_parameters PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include/ktopt_moveit_parameters;${_IMPORT_PREFIX}/include/drake"
  INTERFACE_LINK_LIBRARIES "fmt::fmt;parameter_traits::parameter_traits;rclcpp::rclcpp;rclcpp_lifecycle::rclcpp_lifecycle;rsl::rsl;tcb_span::tcb_span;tl_expected::tl_expected"
)

if(CMAKE_VERSION VERSION_LESS 3.0.0)
  message(FATAL_ERROR "This file relies on consumers using CMake 3.0.0 or greater.")
endif()

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/moveit_drakeTargetsExport-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
