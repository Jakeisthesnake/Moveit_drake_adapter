set(moveit_drake_DIR "/home/jake/moveit2_ws_main/install/moveit_drake/share/moveit_drake/cmake")
set(drake_DIR "opt/drake/lib/cmake")

find_package(drake CONFIG REQUIRED PATHS /opt/drake)
find_package(moveit_drake REQUIRED)

add_executable(motion_planning_pipeline_tutorial
    src/motion_planning_pipeline_tutorial.cpp)
add_executable(pendulum_motion_planning_pipeline_tutorial
    src/pendulum_motion_planning_pipeline_tutorial.cpp)
target_include_directories(motion_planning_pipeline_tutorial
    PUBLIC include)
ament_target_dependencies(motion_planning_pipeline_tutorial
    ${THIS_PACKAGE_INCLUDE_DEPENDS})
ament_target_dependencies(pendulum_motion_planning_pipeline_tutorial
    ${THIS_PACKAGE_INCLUDE_DEPENDS} moveit_drake)

install(TARGETS motion_planning_pipeline_tutorial pendulum_motion_planning_pipeline_tutorial
    DESTINATION lib/${PROJECT_NAME}
)
install(DIRECTORY launch
    DESTINATION share/${PROJECT_NAME})

install(DIRECTORY config DESTINATION share/${PROJECT_NAME})
