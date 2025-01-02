# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# compile CXX with /usr/bin/c++
CXX_DEFINES = -DBOOST_ALL_NO_LIB -DBOOST_ATOMIC_DYN_LINK -DBOOST_CHRONO_DYN_LINK -DBOOST_DATE_TIME_DYN_LINK -DBOOST_FILESYSTEM_DYN_LINK -DBOOST_IOSTREAMS_DYN_LINK -DBOOST_PROGRAM_OPTIONS_DYN_LINK -DBOOST_REGEX_DYN_LINK -DBOOST_SERIALIZATION_DYN_LINK -DBOOST_SYSTEM_DYN_LINK -DBOOST_THREAD_DYN_LINK -DDEFAULT_RMW_IMPLEMENTATION=rmw_fastrtps_cpp -DFASTCDR_DYN_LINK -DFMT_LOCALE -DFMT_SHARED -DRCUTILS_ENABLE_FAULT_INJECTION -Dforward_trajectory_plugin_EXPORTS

CXX_INCLUDES = -I/home/jake/moveit2_ws_main/src/moveit2/moveit_ros/hybrid_planning/global_planner/global_planner_component/include -I/home/jake/moveit2_ws_main/src/moveit2/moveit_ros/hybrid_planning/global_planner/global_planner_plugins/include -I/home/jake/moveit2_ws_main/src/moveit2/moveit_ros/hybrid_planning/hybrid_planning_manager/hybrid_planning_manager_component/include -I/home/jake/moveit2_ws_main/src/moveit2/moveit_ros/hybrid_planning/hybrid_planning_manager/planner_logic_plugins/include -I/home/jake/moveit2_ws_main/src/moveit2/moveit_ros/hybrid_planning/local_planner/local_planner_component/include -I/home/jake/moveit2_ws_main/src/moveit2/moveit_ros/hybrid_planning/local_planner/trajectory_operator_plugins/include -I/home/jake/moveit2_ws_main/src/moveit2/moveit_ros/hybrid_planning/local_planner/local_constraint_solver_plugins/include -isystem /home/jake/moveit2_ws_main/install/moveit_ros_planning_interface/include/moveit_ros_planning_interface -isystem /home/jake/moveit2_ws_main/install/moveit_ros_planning/include/kinematics_parameters -isystem /home/jake/moveit2_ws_main/install/moveit_ros_planning/include/default_request_adapter_parameters -isystem /home/jake/moveit2_ws_main/install/moveit_ros_planning/include/moveit_ros_planning -isystem /home/jake/moveit2_ws_main/install/moveit_ros_planning/include/default_response_adapter_parameters -isystem /home/jake/moveit2_ws_main/install/moveit_ros_planning/include/planning_pipeline_parameters -isystem /home/jake/moveit2_ws_main/install/moveit_core/include/moveit_acceleration_filter_parameters -isystem /home/jake/moveit2_ws_main/install/moveit_core/include/moveit_butterworth_filter_parameters -isystem /home/jake/moveit2_ws_main/install/moveit_core/include/moveit_core -isystem /home/jake/moveit2_ws_main/install/moveit_core/include/moveit_ruckig_filter_parameters -isystem /home/jake/moveit2_ws_main/install/moveit_msgs/include/moveit_msgs -isystem /home/jake/ros2_iron/install/trajectory_msgs/include/trajectory_msgs -isystem /home/jake/ros2_iron/install/tf2_ros/include/tf2_ros -isystem /home/jake/ros2_iron/install/std_srvs/include/std_srvs -isystem /home/jake/ros2_iron/install/std_msgs/include/std_msgs -isystem /home/jake/ros2_iron/install/rclcpp_components/include/rclcpp_components -isystem /home/jake/ros2_iron/install/rclcpp_action/include/rclcpp_action -isystem /home/jake/ros2_iron/install/rclcpp/include/rclcpp -isystem /home/jake/ros2_iron/install/pluginlib/include/pluginlib -isystem /opt/ros/iron/include -isystem /usr/include/bullet -isystem /usr/include/eigen3 -isystem /home/jake/ros2_iron/install/ament_index_cpp/include/ament_index_cpp -isystem /home/jake/ros2_iron/install/libstatistics_collector/include/libstatistics_collector -isystem /home/jake/ros2_iron/install/builtin_interfaces/include/builtin_interfaces -isystem /home/jake/ros2_iron/install/rosidl_runtime_c/include/rosidl_runtime_c -isystem /home/jake/ros2_iron/install/rcutils/include/rcutils -isystem /home/jake/ros2_iron/install/rosidl_typesupport_interface/include/rosidl_typesupport_interface -isystem /home/jake/ros2_iron/install/fastcdr/include -isystem /home/jake/ros2_iron/install/rosidl_runtime_cpp/include/rosidl_runtime_cpp -isystem /home/jake/ros2_iron/install/rosidl_typesupport_fastrtps_cpp/include/rosidl_typesupport_fastrtps_cpp -isystem /home/jake/ros2_iron/install/rmw/include/rmw -isystem /home/jake/ros2_iron/install/rosidl_dynamic_typesupport/include/rosidl_dynamic_typesupport -isystem /home/jake/ros2_iron/install/rosidl_typesupport_fastrtps_c/include/rosidl_typesupport_fastrtps_c -isystem /home/jake/ros2_iron/install/rosidl_typesupport_introspection_c/include/rosidl_typesupport_introspection_c -isystem /home/jake/ros2_iron/install/rosidl_typesupport_introspection_cpp/include/rosidl_typesupport_introspection_cpp -isystem /home/jake/ros2_iron/install/rcl/include/rcl -isystem /home/jake/ros2_iron/install/rcl_interfaces/include/rcl_interfaces -isystem /home/jake/ros2_iron/install/service_msgs/include/service_msgs -isystem /home/jake/ros2_iron/install/rcl_logging_interface/include/rcl_logging_interface -isystem /home/jake/ros2_iron/install/rcl_yaml_param_parser/include/rcl_yaml_param_parser -isystem /home/jake/ros2_iron/install/type_description_interfaces/include/type_description_interfaces -isystem /home/jake/ros2_iron/install/rcpputils/include/rcpputils -isystem /home/jake/ros2_iron/install/statistics_msgs/include/statistics_msgs -isystem /home/jake/ros2_iron/install/rosgraph_msgs/include/rosgraph_msgs -isystem /home/jake/ros2_iron/install/rosidl_typesupport_cpp/include/rosidl_typesupport_cpp -isystem /home/jake/ros2_iron/install/rosidl_typesupport_c/include/rosidl_typesupport_c -isystem /home/jake/ros2_iron/install/tracetools/include/tracetools -isystem /home/jake/ros2_iron/install/urdf/include/urdf -isystem /home/jake/ros2_iron/install/urdf_parser_plugin/include/urdf_parser_plugin -isystem /home/jake/ros2_iron/install/urdfdom_headers/include/urdfdom_headers -isystem /home/jake/ros2_iron/install/urdfdom/include/urdfdom -isystem /home/jake/ros2_iron/install/class_loader/include/class_loader -isystem /home/jake/ros2_iron/install/visualization_msgs/include/visualization_msgs -isystem /home/jake/ros2_iron/install/geometry_msgs/include/geometry_msgs -isystem /home/jake/ros2_iron/install/sensor_msgs/include/sensor_msgs -isystem /opt/ros/iron/include/octomap_msgs -isystem /home/jake/ros2_iron/install/tf2_eigen/include/tf2_eigen -isystem /home/jake/ros2_iron/install/tf2/include/tf2 -isystem /home/jake/ros2_iron/install/message_filters/include/message_filters -isystem /home/jake/ros2_iron/install/action_msgs/include/action_msgs -isystem /home/jake/ros2_iron/install/unique_identifier_msgs/include/unique_identifier_msgs -isystem /home/jake/ros2_iron/install/rcl_action/include/rcl_action -isystem /home/jake/ros2_iron/install/tf2_msgs/include/tf2_msgs -isystem /usr/include/libqhull_r -isystem /home/jake/moveit2_ws_main/install/geometric_shapes/include -isystem /home/jake/ros2_iron/install/resource_retriever/include/resource_retriever -isystem /home/jake/ros2_iron/install/shape_msgs/include/shape_msgs -isystem /home/jake/ros2_iron/install/tf2_geometry_msgs/include/tf2_geometry_msgs -isystem /opt/ros/iron/include/angles -isystem /opt/ros/iron/include/object_recognition_msgs -isystem /opt/ros/iron/include/rsl -isystem /home/jake/moveit2_ws_main/install/parameter_traits/include/parameter_traits -isystem /home/jake/ros2_iron/install/rclcpp_lifecycle/include/rclcpp_lifecycle -isystem /home/jake/ros2_iron/install/lifecycle_msgs/include/lifecycle_msgs -isystem /home/jake/ros2_iron/install/rcl_lifecycle/include/rcl_lifecycle -isystem /opt/ros/iron/include/osqp -isystem /home/jake/ros2_iron/install/kdl_parser/include/kdl_parser -isystem /home/jake/moveit2_ws_main/install/moveit_ros_occupancy_map_monitor/include/moveit_ros_occupancy_map_monitor -isystem /home/jake/ros2_iron/install/composition_interfaces/include/composition_interfaces -isystem /home/jake/moveit2_ws_main/install/moveit_ros_move_group/include/moveit_ros_move_group -isystem /home/jake/moveit2_ws_main/install/moveit_ros_warehouse/include/moveit_ros_warehouse

CXX_FLAGS = -O3 -DNDEBUG -fPIC -Wall -Wextra -Wwrite-strings -Wunreachable-code -Wpointer-arith -Wredundant-decls -Wcast-qual -Wold-style-cast -Wformat=2 -Wno-maybe-uninitialized -std=c++17

