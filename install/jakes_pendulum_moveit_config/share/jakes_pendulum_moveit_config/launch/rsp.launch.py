from moveit_configs_utils import MoveItConfigsBuilder
from moveit_configs_utils.launches import generate_rsp_launch


def generate_launch_description():
    moveit_config = MoveItConfigsBuilder("jakes_pendulum", package_name="jakes_pendulum_moveit_config").to_moveit_configs()
    return generate_rsp_launch(moveit_config)