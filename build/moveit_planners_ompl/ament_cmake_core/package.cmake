set(_AMENT_PACKAGE_NAME "moveit_planners_ompl")
set(moveit_planners_ompl_VERSION "2.11.0")
set(moveit_planners_ompl_MAINTAINER "Henning Kayser <henningkayser@picknik.ai>, Tyler Weaver <tyler@picknik.ai>, MoveIt Release Team <moveit_releasers@googlegroups.com>")
set(moveit_planners_ompl_BUILD_DEPENDS "moveit_common" "moveit_core" "moveit_msgs" "moveit_ros_planning" "ompl" "rclcpp" "tf2_eigen" "tf2_ros" "libomp-dev" "pluginlib")
set(moveit_planners_ompl_BUILD_DEPENDS_pluginlib_VERSION_GTE "1.11.2")
set(moveit_planners_ompl_BUILDTOOL_DEPENDS "ament_cmake" "eigen3_cmake_module")
set(moveit_planners_ompl_BUILD_EXPORT_DEPENDS "moveit_common" "moveit_core" "moveit_msgs" "moveit_ros_planning" "ompl" "rclcpp" "tf2_eigen" "tf2_ros" "libomp-dev" "pluginlib")
set(moveit_planners_ompl_BUILD_EXPORT_DEPENDS_pluginlib_VERSION_GTE "1.11.2")
set(moveit_planners_ompl_BUILDTOOL_EXPORT_DEPENDS )
set(moveit_planners_ompl_EXEC_DEPENDS "moveit_common" "moveit_core" "moveit_msgs" "moveit_ros_planning" "ompl" "rclcpp" "tf2_eigen" "tf2_ros" "libomp-dev" "pluginlib")
set(moveit_planners_ompl_EXEC_DEPENDS_pluginlib_VERSION_GTE "1.11.2")
set(moveit_planners_ompl_TEST_DEPENDS "moveit_resources_pr2_description" "moveit_resources_fanuc_moveit_config" "moveit_resources_panda_moveit_config" "eigen" "tf2_eigen" "ament_cmake_gtest")
set(moveit_planners_ompl_GROUP_DEPENDS )
set(moveit_planners_ompl_MEMBER_OF_GROUPS )
set(moveit_planners_ompl_DEPRECATED "")
set(moveit_planners_ompl_EXPORT_TAGS)
list(APPEND moveit_planners_ompl_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND moveit_planners_ompl_EXPORT_TAGS "<moveit_core plugin=\"ompl_interface_plugin_description.xml\"/>")
