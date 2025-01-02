/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2012, Willow Garage, Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Willow Garage nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *********************************************************************/

/* Author: Sachin Chitta, Mike Lautman*/

#include <pluginlib/class_loader.hpp>

// MoveIt
#include <moveit/robot_model_loader/robot_model_loader.h>
#include <moveit/robot_state/conversions.h>
#include <moveit/planning_pipeline/planning_pipeline.h>
#include <moveit/planning_interface/planning_interface.h>
#include <moveit/planning_scene_monitor/planning_scene_monitor.h>
#include <moveit/kinematic_constraints/utils.h>
#include <moveit_msgs/msg/display_trajectory.hpp>
#include <moveit_msgs/msg/planning_scene.hpp>
#include <moveit_visual_tools/moveit_visual_tools.h>
#include <moveit/moveit_cpp/moveit_cpp.h>
#include <moveit/moveit_cpp/planning_component.h>
static const rclcpp::Logger LOGGER = rclcpp::get_logger("pendulum_motion_planning_pipeline");

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);
  auto node = rclcpp::Node::make_shared("pendulum_motion_planning_pipeline_tutorial", node_options);

  // rclcpp::executors::MultiThreadedExecutor executor;
  // executor.add_node(node);
  // std::thread([&executor]() { executor.spin(); }).detach();

  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(node);
  std::thread([&executor]() { executor.spin(); }).detach();

  // RCLCPP_INFO(node->get_logger(), "Node name ME ME ME: %s", node->get_name());

  // Retrieve and log parameters
  // auto parameter_names = node->list_parameters({},0).names;
  // for (const auto& param_name : parameter_names)
  // {
  //   rclcpp::Parameter param = node->get_parameter(param_name);
  //   RCLCPP_INFO(node->get_logger(), "Parameter '%s': %s", param_name.c_str(), param.value_to_string().c_str());
  // }

  // std::vector<std::string> pipeline_names;
  // std::string parent_namespace;
  // const std::string ns = "planning_pipelines.";
  // node->get_parameter(ns + "pipeline_names", pipeline_names);
  // node->get_parameter(ns + "namespace", parent_namespace);

  RCLCPP_INFO(LOGGER, "HEREEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE main\n");
  // RCLCPP_INFO(LOGGER, "Planning pipeline options:");
  // RCLCPP_INFO(LOGGER, "Parent namespace: %s", parent_namespace.c_str());
  // RCLCPP_INFO(LOGGER, "Pipeline names:");
  // for (const auto& name : pipeline_names)
  // {
  //   RCLCPP_INFO(LOGGER, "- %s", name.c_str());
  // }



  // std::shared_ptr<moveit_cpp::MoveItCpp> moveit_cpp_{ std::make_shared<moveit_cpp::MoveItCpp>(node) };
  std::shared_ptr<moveit_cpp::MoveItCpp> moveit_cpp_{ std::make_shared<moveit_cpp::MoveItCpp>(node) };
  std::shared_ptr<moveit_cpp::PlanningComponent> planning_component_{ std::make_shared<moveit_cpp::PlanningComponent>("pendulum_arm", moveit_cpp_) };

  RCLCPP_INFO(LOGGER, "HEREEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE main1\n");


  // BEGIN_TUTORIAL
  // Start
  // ^^^^^
  // Setting up to start using a planning pipeline is pretty easy. Before we can load the planner, we need two objects,
  // a RobotModel and a PlanningScene.
  //
  // We will start by instantiating a
  // :moveit_codedir:`RobotModelLoader<moveit_ros/planning/robot_model_loader/include/moveit/robot_model_loader/robot_model_loader.h>`
  // object, which will look up the robot description on the ROS
  // parameter server and construct a
  // :moveit_codedir:`RobotModel<moveit_core/robot_model/include/moveit/robot_model/robot_model.h>`
  // for us to use.
  robot_model_loader::RobotModelLoaderPtr robot_model_loader(
      new robot_model_loader::RobotModelLoader(node, "robot_description"));
  RCLCPP_INFO(LOGGER, "CHECK POINT 11111111 Node Name: %s", node->get_name());
  RCLCPP_INFO(LOGGER, "Node Namespace: %s", node->get_namespace());

  // // List all parameters
  // std::vector<std::string> parameter_names;
  // if (node->list_parameters({}, 0).names.size() > 0) {
  //   parameter_names = node->list_parameters({}, 0).names;
  //   for (const auto& name : parameter_names) {
  //     RCLCPP_INFO(LOGGER, "Parameter: %s", name.c_str());
  //   }
  // } else {
  //   RCLCPP_INFO(LOGGER, "No parameters found for this node.");
  // }

  // Using the RobotModelLoader, we can construct a planning scene monitor that
  // will create a planning scene, monitors planning scene diffs, and apply the diffs to it's
  // internal planning scene. We then call startSceneMonitor, startWorldGeometryMonitor and
  // startStateMonitor to fully initialize the planning scene monitor
  planning_scene_monitor::PlanningSceneMonitorPtr psm(
      new planning_scene_monitor::PlanningSceneMonitor(node, robot_model_loader));

  /* listen for planning scene messages on topic /XXX and apply them to the internal planning scene
                       the internal planning scene accordingly */
  psm->startSceneMonitor();
  /* listens to changes of world geometry, collision objects, and (optionally) octomaps
                                world geometry, collision objects and optionally octomaps */
  psm->startWorldGeometryMonitor();
  /* listen to joint state updates as well as changes in attached collision objects
                        and update the internal planning scene accordingly*/
  psm->startStateMonitor();

  /* We can also use the RobotModelLoader to get a robot model which contains the robot's kinematic information */
  moveit::core::RobotModelPtr robot_model = robot_model_loader->getModel();

  /* We can get the most up to date robot state from the PlanningSceneMonitor by locking the internal planning scene
     for reading. This lock ensures that the underlying scene isn't updated while we are reading it's state.
     RobotState's are useful for computing the forward and inverse kinematics of the robot among many other uses */
  moveit::core::RobotStatePtr robot_state(
      new moveit::core::RobotState(planning_scene_monitor::LockedPlanningSceneRO(psm)->getCurrentState()));

  /* Create a JointModelGroup to keep track of the current robot pose and planning group. The Joint Model
     group is useful for dealing with one set of joints at a time such as a left arm or a end effector */
  const moveit::core::JointModelGroup* joint_model_group = robot_state->getJointModelGroup("pendulum_arm");

  // We can now setup the PlanningPipeline object, which will use the ROS parameter server
  // to determine the set of request adapters and the planning plugin to use
  planning_pipeline::PlanningPipelinePtr planning_pipeline(
      new planning_pipeline::PlanningPipeline(robot_model, node, "ompl"));
  for (const std::string& str : planning_pipeline->getPlannerPluginNames()) {
    RCLCPP_INFO(LOGGER, "Vector element: %s", str.c_str());
  }
  // RCLCPP_INFO(LOGGER, "Planning pipeline plugin name: %s", planning_pipeline->getPlannerPluginNames());

  // Visualization
  // ^^^^^^^^^^^^^
  // The package MoveItVisualTools provides many capabilities for visualizing objects, robots,
  // and trajectories in RViz as well as debugging tools such as step-by-step introspection of a script.
  namespace rvt = rviz_visual_tools;
  moveit_visual_tools::MoveItVisualTools visual_tools(node, "base_link", "move_group_tutorial", psm);
  visual_tools.deleteAllMarkers();

  /* Remote control is an introspection tool that allows users to step through a high level script
     via buttons and keyboard shortcuts in RViz */
  visual_tools.loadRemoteControl();

  /* RViz provides many types of markers, in this demo we will use text, cylinders, and spheres*/
  Eigen::Isometry3d text_pose = Eigen::Isometry3d::Identity();
  text_pose.translation().z() = 1.75;
  visual_tools.publishText(text_pose, "Pendulum Motion Planning Pipeline Demo", rvt::WHITE, rvt::XLARGE);

  /* Batch publishing is used to reduce the number of messages being sent to RViz for large visualizations */
  visual_tools.trigger();

  /* We can also use visual_tools to wait for user input */
  visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window to start the demo");

  // // Pose Goal
  // // ^^^^^^^^^
  // // We will now create a motion plan request for the right arm of the Panda
  // // specifying the desired pose of the end-effector as input.
  planning_interface::MotionPlanRequest req;
  // req.pipeline_id = "ompl";
  // req.planner_id = "RRTConnectkConfigDefault";
  req.pipeline_id = "drake_toppra";
  req.planner_id = "";
  req.allowed_planning_time = 1.0;
  req.max_velocity_scaling_factor = 1.0;
  req.max_acceleration_scaling_factor = 1.0;
  planning_interface::MotionPlanResponse res;
  // geometry_msgs::msg::PoseStamped pose;
  // pose.header.frame_id = "upper_arm";
  // pose.pose.position.x = 1.0;
  // pose.pose.position.y = 0.0;
  // pose.pose.position.z = 0.0;
  // pose.pose.orientation.w = 1.0;

  // geometry_msgs::msg::QuaternionStamped goal_orientation;
  // goal_orientation.header.frame_id = "base_link";
  // goal_orientation.quaternion.x = 0.0;
  // goal_orientation.quaternion.y = 0.0;
  // goal_orientation.quaternion.z = 0.0;
  // goal_orientation.quaternion.w = 1.0;

  // // A tolerance of 0.01 m is specified in position
  // // and 0.01 radians in orientation
  // std::vector<double> tolerance_pose(3, 0.1);
  // std::vector<double> tolerance_angle(3, 0.1);
  // double tolerance_orientation{0.1};

  // We will create the request as a constraint using a helper
  // function available from the
  // :moveit_codedir:`kinematic_constraints<moveit_core/kinematic_constraints/include/moveit/kinematic_constraints/kinematic_constraint.h>`
  // package.
  req.group_name = "pendulum_arm";
  moveit::core::RobotState goal_state(*robot_state);
  std::vector<double> joint_values = { -1.0 };
  goal_state.setJointGroupPositions(joint_model_group, joint_values);
  moveit_msgs::msg::Constraints joint_goal =
      kinematic_constraints::constructGoalConstraints(goal_state, joint_model_group);

  req.goal_constraints.clear();
  req.goal_constraints.push_back(joint_goal);
  // moveit_msgs::msg::Constraints pose_goal =
  //     kinematic_constraints::constructGoalConstraints("upper_arm", pose, tolerance_pose, tolerance_angle);
  // moveit_msgs::msg::Constraints orientation_goal =
  //     kinematic_constraints::constructGoalConstraints("upper_arm", goal_orientation, tolerance_orientation);
  // req.goal_constraints.push_back(orientation_goal);
  // req.goal_constraints.push_back(pose_goal);

  // Before planning, we will need a Read Only lock on the planning scene so that it does not modify the world
  // representation while planning
  {
    planning_scene_monitor::LockedPlanningSceneRO lscene(psm);
    /* Now, call the pipeline and check whether planning was successful. */
    /* Check that the planning was successful */
    if (!planning_pipeline->generatePlan(lscene, req, res) || res.error_code.val != res.error_code.SUCCESS)
    {
      RCLCPP_ERROR(LOGGER, "Could not compute plan successfully");
      rclcpp::shutdown();
      return -1;
    }
  }
  // Visualize the result
  // ^^^^^^^^^^^^^^^^^^^^
  rclcpp::Publisher<moveit_msgs::msg::DisplayTrajectory>::SharedPtr display_publisher =
      node->create_publisher<moveit_msgs::msg::DisplayTrajectory>("/display_planned_path", 1);
  moveit_msgs::msg::DisplayTrajectory display_trajectory;

  // /* Visualize tGGER, "Visualizing the trajectory");
  moveit_msgs::msg::MotionPlanResponse response;
  res.getMessage(response);

  display_trajectory.trajectory_start = response.trajectory_start;
  display_trajectory.trajectory.push_back(response.trajectory);
  display_publisher->publish(display_trajectory);
  visual_tools.publishTrajectoryLine(display_trajectory.trajectory.back(), joint_model_group);
  visual_tools.trigger();

  const Eigen::Isometry3d& end_effector_state = robot_state->getGlobalLinkTransform("upper_arm");
  Eigen::Vector3d position = end_effector_state.translation();
  Eigen::Quaterniond orientation(end_effector_state.rotation());

  RCLCPP_INFO(LOGGER, "Pose of the 'ball_end' link:");
  RCLCPP_INFO(LOGGER, "Position: [x: %f, y: %f, z: %f]", position.x(), position.y(), position.z());
  RCLCPP_INFO(LOGGER, "Orientation: [x: %f, y: %f, z: %f, w: %f]",
              orientation.x(), orientation.y(), orientation.z(), orientation.w());

  /* Wait for user input */
  visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window to continue the demo");

  // // Pose Goal
  // // ^^^^^^^^^
  // // We will now create a motion plan request for the right arm of the Panda
  // // specifying the desired pose of the end-effector as input.
  // planning_interface::MotionPlanRequest req;
  req.pipeline_id = "ompl";
  req.planner_id = "RRTConnectkConfigDefault";
  req.allowed_planning_time = 1.0;
  req.max_velocity_scaling_factor = 1.0;
  req.max_acceleration_scaling_factor = 1.0;
  // planning_interface::MotionPlanResponse res;
  // geometry_msgs::msg::PoseStamped pose;
  // pose.header.frame_id = "upper_arm";
  // pose.pose.position.x = 1.0;
  // pose.pose.position.y = 0.0;
  // pose.pose.position.z = 0.0;
  // pose.pose.orientation.w = 1.0;

  // geometry_msgs::msg::QuaternionStamped goal_orientation;
  // goal_orientation.header.frame_id = "base_link";
  // goal_orientation.quaternion.x = 0.0;
  // goal_orientation.quaternion.y = 0.0;
  // goal_orientation.quaternion.z = 0.0;
  // goal_orientation.quaternion.w = 1.0;

  // // A tolerance of 0.01 m is specified in position
  // // and 0.01 radians in orientation
  // std::vector<double> tolerance_pose(3, 0.1);
  // std::vector<double> tolerance_angle(3, 0.1);
  // double tolerance_orientation{0.1};

  // We will create the request as a constraint using a helper
  // function available from the
  // :moveit_codedir:`kinematic_constraints<moveit_core/kinematic_constraints/include/moveit/kinematic_constraints/kinematic_constraint.h>`
  // package.
  req.group_name = "pendulum_arm";
  // moveit::core::RobotState goal_state(*robot_state);
  joint_values = { 1.0 };
  goal_state.setJointGroupPositions(joint_model_group, joint_values);
  joint_goal =
      kinematic_constraints::constructGoalConstraints(goal_state, joint_model_group);

  req.goal_constraints.clear();
  req.goal_constraints.push_back(joint_goal);
  // moveit_msgs::msg::Constraints pose_goal =
  //     kinematic_constraints::constructGoalConstraints("upper_arm", pose, tolerance_pose, tolerance_angle);
  // moveit_msgs::msg::Constraints orientation_goal =
  //     kinematic_constraints::constructGoalConstraints("upper_arm", goal_orientation, tolerance_orientation);
  // req.goal_constraints.push_back(orientation_goal);
  // req.goal_constraints.push_back(pose_goal);

  // Before planning, we will need a Read Only lock on the planning scene so that it does not modify the world
  // representation while planning
  {
    planning_scene_monitor::LockedPlanningSceneRO lscene(psm);
    /* Now, call the pipeline and check whether planning was successful. */
    /* Check that the planning was successful */
    if (!planning_pipeline->generatePlan(lscene, req, res) || res.error_code.val != res.error_code.SUCCESS)
    {
      RCLCPP_ERROR(LOGGER, "Could not compute plan successfully");
      rclcpp::shutdown();
      return -1;
    }
  }
  // Visualize the result
  // ^^^^^^^^^^^^^^^^^^^^
  display_publisher =
      node->create_publisher<moveit_msgs::msg::DisplayTrajectory>("/display_planned_path", 1);
  // moveit_msgs::msg::DisplayTrajectory display_trajectory;

  // /* Visualize tGGER, "Visualizing the trajectory");
  // moveit_msgs::msg::MotionPlanResponse response;
  res.getMessage(response);

  display_trajectory.trajectory_start = response.trajectory_start;
  display_trajectory.trajectory.push_back(response.trajectory);
  display_publisher->publish(display_trajectory);
  visual_tools.publishTrajectoryLine(display_trajectory.trajectory.back(), joint_model_group);
  visual_tools.trigger();

  // end_effector_state = robot_state->getGlobalLinkTransform("upper_arm");
  position = end_effector_state.translation();
  // Eigen::Quaterniond orientation(end_effector_state.rotation());

  RCLCPP_INFO(LOGGER, "Pose of the 'ball_end' link:");
  RCLCPP_INFO(LOGGER, "Position: [x: %f, y: %f, z: %f]", position.x(), position.y(), position.z());
  RCLCPP_INFO(LOGGER, "Orientation: [x: %f, y: %f, z: %f, w: %f]",
              orientation.x(), orientation.y(), orientation.z(), orientation.w());

  /* Wait for user input */
  visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window to continue the demo");

  // Joint Space Goals
  // ^^^^^^^^^^^^^^^^^
  /* First, set the state in the planning scene to the final state of the last plan */
  // robot_state = planning_scene_monitor::LockedPlanningSceneRO(psm)->getCurrentStateUpdated(response.trajectory_start);
  // robot_state->setJointGroupPositions(joint_model_group, response.trajectory.joint_trajectory.points.back().positions);
  // moveit::core::robotStateToRobotStateMsg(*robot_state, req.start_state);

  // // Now, setup a joint space goal
  // moveit::core::RobotState goal_state(*robot_state);
  // std::vector<double> joint_values = { -1.0 };
  // goal_state.setJointGroupPositions(joint_model_group, joint_values);
  // moveit_msgs::msg::Constraints joint_goal =
  //     kinematic_constraints::constructGoalConstraints(goal_state, joint_model_group);

  // req.goal_constraints.clear();
  // req.goal_constraints.push_back(joint_goal);

  // // Before planning, we will need a Read Only lock on the planning scene so that it does not modify the world
  // // representation while planning
  // {
  //   planning_scene_monitor::LockedPlanningSceneRO lscene(psm);
  //   /* Now, call the pipeline and check whether planning was successful. */
  //   if (!planning_pipeline->generatePlan(lscene, req, res) || res.error_code.val != res.error_code.SUCCESS)
  //   {
  //     RCLCPP_ERROR(LOGGER, "Could not compute plan successfully");
  //     rclcpp::shutdown();
  //     return -1;
  //   }
  // }
  // /* Visualize the trajectory */
  // rclcpp::Publisher<moveit_msgs::msg::DisplayTrajectory>::SharedPtr display_publisher =
  //     node->create_publisher<moveit_msgs::msg::DisplayTrajectory>("/display_planned_path", 1);
  // moveit_msgs::msg::DisplayTrajectory display_trajectory;
  // RCLCPP_INFO(LOGGER, "Visualizing the trajectory");
  // res.getMessage(response);
  // display_trajectory.trajectory_start = response.trajectory_start;
  // display_trajectory.trajectory.push_back(response.trajectory);
  // // Now you should see two planned trajectories in series
  // display_publisher->publish(display_trajectory);
  // visual_tools.publishTrajectoryLine(display_trajectory.trajectory.back(), joint_model_group);
  // visual_tools.trigger();

  // /* Wait for user input */
  // visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window to continue the demo");

  // Using a Planning Request Adapter
  // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
  // A planning request adapter allows us to specify a series of operations that
  // should happen either before planning takes place or after the planning
  // has been done on the resultant path

  /* First, set the state in the planning scene to the final state of the last plan */
  robot_state = planning_scene_monitor::LockedPlanningSceneRO(psm)->getCurrentStateUpdated(response.trajectory_start);
  robot_state->setJointGroupPositions(joint_model_group, response.trajectory.joint_trajectory.points.back().positions);
  moveit::core::robotStateToRobotStateMsg(*robot_state, req.start_state);

  // Now, set one of the joints slightly outside its upper limit
  const moveit::core::JointModel* joint_model = joint_model_group->getJointModel("shoulder_joint");
  const moveit::core::JointModel::Bounds& joint_bounds = joint_model->getVariableBounds();
  std::vector<double> tmp_values(1, 0.0);
  tmp_values[0] = joint_bounds[0].min_position_ - 0.01;
  robot_state->setJointPositions(joint_model, tmp_values);

  req.goal_constraints.clear();
  req.goal_constraints.push_back(joint_goal);

  // Before planning, we will need a Read Only lock on the planning scene so that it does not modify the world
  // representation while planning
  {
    planning_scene_monitor::LockedPlanningSceneRO lscene(psm);
    /* Now, call the pipeline and check whether planning was successful. */
    if (!planning_pipeline->generatePlan(lscene, req, res) || res.error_code.val != res.error_code.SUCCESS)
    {
      RCLCPP_ERROR(LOGGER, "Could not compute plan successfully");
      rclcpp::shutdown();
      return -1;
    }
  }
  /* Visualize the trajectory */
  RCLCPP_INFO(LOGGER, "Visualizing the trajectory");
  res.getMessage(response);
  display_trajectory.trajectory_start = response.trajectory_start;
  display_trajectory.trajectory.push_back(response.trajectory);
  /* Now you should see three planned trajectories in series*/
  display_publisher->publish(display_trajectory);
  visual_tools.publishTrajectoryLine(display_trajectory.trajectory.back(), joint_model_group);
  visual_tools.trigger();

  /* Wait for user input */
  visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window to finish the demo");

  RCLCPP_INFO(LOGGER, "Done");

  rclcpp::shutdown();
  return 0;
}