import os
import yaml
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from moveit_configs_utils import MoveItConfigsBuilder


def load_yaml(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, "r") as file:
            return yaml.safe_load(file)
    except (
        EnvironmentError
    ):  # parent of IOError, OSError *and* WindowsError where available
        return None


def generate_launch_description():
    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "rviz_config",
            default_value="panda_moveit_config_demo.rviz",
            description="RViz configuration file",
        )
    )

    return LaunchDescription(
        declared_arguments + [OpaqueFunction(function=launch_setup)]
    )


def launch_setup(context, *args, **kwargs):
    moveit_config = (
        MoveItConfigsBuilder("moveit_resources_panda")
        .robot_description(file_path="config/panda.urdf.xacro")
        .planning_pipelines(pipelines=["ompl", "stomp"])
        .planning_scene_monitor(
            publish_robot_description=True, publish_robot_description_semantic=True
        )
        .trajectory_execution(file_path="config/moveit_controllers.yaml")
        .moveit_cpp(
            os.path.join(
                get_package_share_directory("moveit_drake"),
                "config",
                "testbench_moveit_cpp.yaml",
            )
        )
        .to_moveit_configs()
    )

    # Warehouse config
    sqlite_database = os.path.join(
        get_package_share_directory("moveit_drake"),
        "config",
        "panda_benchmarks.sqlite",
    )

    warehouse_ros_config = {
        "warehouse_plugin": "warehouse_ros_sqlite::DatabaseConnection",
        "warehouse": {
            "warehouse_plugin": "warehouse_ros_sqlite::DatabaseConnection",
            "host": sqlite_database,
            "port": 33828,
            "scene_name": "kitchen_panda_scene_sensed1",
        },
    }

    drake_ktopt_planning_pipeline_config = {
        "drake_ktopt": {
            "planning_plugins": [
                "ktopt_interface/KTOptPlanner",
            ],
            "request_adapters": [
                "default_planning_request_adapters/ResolveConstraintFrames",
                "default_planning_request_adapters/ValidateWorkspaceBounds",
                "default_planning_request_adapters/CheckStartStateBounds",
                "default_planning_request_adapters/CheckStartStateCollision",
            ],
            "response_adapters": [
                "default_planning_response_adapters/ValidateSolution",
                "default_planning_response_adapters/DisplayMotionPath",
            ],
        }
    }

    drake_toppra_planning_pipeline_config = {
        "drake_toppra": {
            "planning_plugins": [
                "ompl_interface/OMPLPlanner",
            ],
            "request_adapters": [
                "default_planning_request_adapters/ResolveConstraintFrames",
                "default_planning_request_adapters/ValidateWorkspaceBounds",
                "default_planning_request_adapters/CheckStartStateBounds",
                "default_planning_request_adapters/CheckStartStateCollision",
            ],
            "response_adapters": [
                "default_planning_response_adapters/AddTimeOptimalParameterization",
                "moveit/drake/AddToppraTimeParameterization",
                "default_planning_response_adapters/ValidateSolution",
                "default_planning_response_adapters/DisplayMotionPath",
            ],
        }
    }

    # # MoveitCpp demo with drake
    # moveit_cpp_node = Node(
    #     name="pipeline_testbench_example",
    #     package="moveit_drake",
    #     executable="pipeline_testbench_example",
    #     output="screen",
    #     parameters=[
    #         moveit_config.to_dict(),
    #         drake_ktopt_planning_pipeline_config,
    #         drake_toppra_planning_pipeline_config,
    #         warehouse_ros_config,
    #     ],
    #      print(parameters)
    # )

    # MoveitCpp demo with drake
    moveit_cpp_node_parameters = [
        moveit_config.to_dict(),
        drake_ktopt_planning_pipeline_config,
        drake_toppra_planning_pipeline_config,
        warehouse_ros_config,
    ]

    moveit_cpp_node = Node(
        name="pipeline_testbench_example",
        package="moveit_drake",
        executable="pipeline_testbench_example",
        output="screen",
        parameters=moveit_cpp_node_parameters,
    )

    # Function to print parameters
    # def print_parameters(context):
    #     print("moveit_cpp_node parameters:", moveit_cpp_node_parameters)

    # Add the print function to the launch description
    # print_parameters_action = OpaqueFunction(function=print_parameters)


    # RViz
    rviz_config_file = os.path.join(
        get_package_share_directory("moveit_drake"),
        "config",
        "testbench_config.rviz",
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

    # Static TF
    static_tf = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="static_transform_publisher",
        output="log",
        arguments=["0.0", "0.0", "0.0", "0.0", "0.0", "0.0", "world", "panda_link0"],
    )

    # Publish TF
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        output="both",
        parameters=[moveit_config.robot_description],
    )

    # ros2_control using FakeSystem as hardware
    ros2_controllers_path = os.path.join(
        get_package_share_directory("moveit_resources_panda_moveit_config"),
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

    arm_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["panda_arm_controller", "-c", "/controller_manager"],
    )

    hand_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["panda_hand_controller", "-c", "/controller_manager"],
    )

    nodes_to_start = [
        # print_parameters_action,
        static_tf,
        robot_state_publisher,
        rviz_node,
        moveit_cpp_node,
        ros2_control_node,
        joint_state_broadcaster_spawner,
        arm_controller_spawner,
        hand_controller_spawner,
    ]

    return nodes_to_start
