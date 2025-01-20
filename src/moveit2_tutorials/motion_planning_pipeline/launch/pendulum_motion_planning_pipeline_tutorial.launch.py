# import os
# import yaml
# from launch import LaunchDescription
# from launch_ros.actions import Node
# from ament_index_python.packages import get_package_share_directory
# from moveit_configs_utils import MoveItConfigsBuilder


# def load_file(package_name, file_path):
#     package_path = get_package_share_directory(package_name)
#     absolute_file_path = os.path.join(package_path, file_path)

#     try:
#         with open(absolute_file_path, "r") as file:
#             return file.read()
#     # parent of IOError, OSError *and* WindowsError where available
#     except EnvironmentError:
#         return None


# def load_yaml(package_name, file_path):
#     package_path = get_package_share_directory(package_name)
#     absolute_file_path = os.path.join(package_path, file_path)

#     try:
#         with open(absolute_file_path, "r") as file:
#             return yaml.safe_load(file)
#     # parent of IOError, OSError *and* WindowsError where available
#     except EnvironmentError:
#         return None


# def generate_launch_description():

#     moveit_config = (
#         MoveItConfigsBuilder("test_jp")
#         .robot_description(file_path="/home/jake/test/src/test_jp_moveit_config/config/acrobot.urdf.xacro")#="config/acrobot.urdf.xacro")
#         .planning_scene_monitor(
#             publish_robot_description=True, publish_robot_description_semantic=True
#         )
#         .planning_pipelines(pipelines=["ompl", "stomp"])# ("drake_toppra", ["drake_toppra"])
#         # .planning_pipelines("ompl", ["ompl"])
#         .moveit_cpp(
#             os.path.join(
#                 get_package_share_directory("moveit2_tutorials"),
#                 "config",
#                 "pendulum_motion_planning_tutorial.yaml",
#             )
#         )
#         .to_moveit_configs()
#     )

#     drake_toppra_planning_pipeline_config = {
#         "drake_toppra": {
#             "planning_plugins": [
#                 "ompl_interface/OMPLPlanner",
#             ],
#             "request_adapters": [
#                 "default_planning_request_adapters/ResolveConstraintFrames",
#                 "default_planning_request_adapters/ValidateWorkspaceBounds",
#                 "default_planning_request_adapters/CheckStartStateBounds",
#                 "default_planning_request_adapters/CheckStartStateCollision",
#             ],
#             "response_adapters": [
#                 "default_planning_response_adapters/AddTimeOptimalParameterization",
#                 "moveit/drake/AddToppraTimeParameterization",
#                 "default_planning_response_adapters/ValidateSolution",
#                 "default_planning_response_adapters/DisplayMotionPath",
#             ],
#         }
#     }

#     # MotionPlanningPipeline demo executable
#     motion_planning_pipeline_demo = Node(
#         name="pendulum_motion_planning_pipeline_tutorial",
#         package="moveit2_tutorials",
#         executable="pendulum_motion_planning_pipeline_tutorial",
#         output="screen",
#         parameters=[
#             moveit_config.to_dict(),
#             # moveit_config.robot_description,
#             # moveit_config.robot_description_semantic,
#             # moveit_config.robot_description_kinematics,
#             # moveit_config.planning_pipelines,
#             # moveit_config.joint_limits,
#             drake_toppra_planning_pipeline_config,
#         ],
#     )


#     return LaunchDescription([motion_planning_pipeline_demo])

###########################################

import os
import yaml
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from moveit_configs_utils import MoveItConfigsBuilder


def load_file(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, "r") as file:
            return file.read()
    # parent of IOError, OSError *and* WindowsError where available
    except EnvironmentError:
        return None


def load_yaml(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, "r") as file:
            return yaml.safe_load(file)
    # parent of IOError, OSError *and* WindowsError where available
    except EnvironmentError:
        return None

def generate_launch_description():
    declared_arguments = [
        # DeclareLaunchArgument(
        #     'use_sim_time',
        #     default_value='true',
        #     description='Use simulation (Gazebo) clock if true'
        # )
    ]
    # declared_arguments.append(
    #     DeclareLaunchArgument(
    #         "rviz_config",
    #         default_value="panda_moveit_config_demo.rviz",
    #         description="RViz configuration file",
    #     )
    # )

    return LaunchDescription(
        declared_arguments + [OpaqueFunction(function=launch_setup)]
    )

def launch_setup(context, *args, **kwargs):

    moveit_config = (
        MoveItConfigsBuilder("jakes_pendulum")
        .robot_description(file_path="config/jakes_pendulum.urdf.xacro")
        # .planning_scene_monitor(
        #     publish_robot_description=True, publish_robot_description_semantic=True
        # )
        .planning_pipelines(pipelines=["ompl", "stomp"])
        .moveit_cpp(
            os.path.join(
                get_package_share_directory("moveit2_tutorials"),
                "config",
                "pendulum_motion_planning_tutorial.yaml",
            )
        )
        .to_moveit_configs()
    )

    # MotionPlanningPipeline demo executable
    motion_planning_pipeline_demo = Node(
        name="pendulum_motion_planning_pipeline_tutorial",
        package="moveit2_tutorials",
        executable="pendulum_motion_planning_pipeline_tutorial",
        output="screen",
        parameters=[
            moveit_config.to_dict(),    
            # moveit_config.robot_description,
            # moveit_config.robot_description_semantic,
            # moveit_config.robot_description_kinematics,
            # moveit_config.planning_pipelines,
            # moveit_config.joint_limits,
        ],
    )

    static_tf = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="static_transform_publisher",
        output="log",
        arguments=["0.0", "0.0", "0.0", "0.0", "0.0", "0.0", "world", "base_link"],
    )

    # RViz
    rviz_config_file = os.path.join(
        get_package_share_directory("moveit_drake"),
        "config",
        "pendulum_moveit.rviz",
    )

    ros2_controllers_path = os.path.join(
        get_package_share_directory("jakes_pendulum_moveit_config"),
        "config",
        "ros2_controllers.yaml",
    )

    ros2_control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[moveit_config.robot_description, ros2_controllers_path],
        output="screen",
    )

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager",
            "/controller_manager",
        ],
    )

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=["-d", rviz_config_file],
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
            moveit_config.planning_pipelines,
            moveit_config.joint_limits,
        ],
    )

    nodes_to_start = [
        # rviz_node,
        ros2_control_node,
        motion_planning_pipeline_demo, 
        static_tf,      
        joint_state_broadcaster_spawner,
    ]

    return nodes_to_start
