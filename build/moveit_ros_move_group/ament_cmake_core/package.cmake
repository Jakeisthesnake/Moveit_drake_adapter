set(_AMENT_PACKAGE_NAME "moveit_ros_move_group")
set(moveit_ros_move_group_VERSION "2.11.0")
set(moveit_ros_move_group_MAINTAINER "Michael Görner <me@v4hn.de>, Henning Kayser <henningkayser@picknik.ai>, Tyler Weaver <tyler@picknik.ai>, MoveIt Release Team <moveit_releasers@googlegroups.com>")
set(moveit_ros_move_group_BUILD_DEPENDS "moveit_common" "moveit_core" "moveit_ros_occupancy_map_monitor" "moveit_ros_planning" "pluginlib" "rclcpp" "rclcpp_action" "std_srvs" "tf2" "tf2_geometry_msgs" "tf2_ros" "fmt")
set(moveit_ros_move_group_BUILD_DEPENDS_pluginlib_VERSION_GTE "1.11.2")
set(moveit_ros_move_group_BUILDTOOL_DEPENDS "ament_cmake")
set(moveit_ros_move_group_BUILD_EXPORT_DEPENDS "moveit_common" "moveit_core" "moveit_ros_occupancy_map_monitor" "moveit_ros_planning" "pluginlib" "rclcpp" "rclcpp_action" "std_srvs" "tf2" "tf2_geometry_msgs" "tf2_ros" "fmt")
set(moveit_ros_move_group_BUILD_EXPORT_DEPENDS_pluginlib_VERSION_GTE "1.11.2")
set(moveit_ros_move_group_BUILDTOOL_EXPORT_DEPENDS )
set(moveit_ros_move_group_EXEC_DEPENDS "moveit_kinematics" "moveit_common" "moveit_core" "moveit_ros_occupancy_map_monitor" "moveit_ros_planning" "pluginlib" "rclcpp" "rclcpp_action" "std_srvs" "tf2" "tf2_geometry_msgs" "tf2_ros" "fmt")
set(moveit_ros_move_group_EXEC_DEPENDS_pluginlib_VERSION_GTE "1.11.2")
set(moveit_ros_move_group_TEST_DEPENDS "moveit_resources_fanuc_moveit_config" "ament_cmake_gtest" "moveit_configs_utils" "moveit_resources_panda_moveit_config" "ros_testing")
set(moveit_ros_move_group_GROUP_DEPENDS )
set(moveit_ros_move_group_MEMBER_OF_GROUPS )
set(moveit_ros_move_group_DEPRECATED "")
set(moveit_ros_move_group_EXPORT_TAGS)
list(APPEND moveit_ros_move_group_EXPORT_TAGS "<moveit_ros_move_group plugin=\"default_capabilities_plugin_description.xml\"/>")
list(APPEND moveit_ros_move_group_EXPORT_TAGS "<build_type>ament_cmake</build_type>")