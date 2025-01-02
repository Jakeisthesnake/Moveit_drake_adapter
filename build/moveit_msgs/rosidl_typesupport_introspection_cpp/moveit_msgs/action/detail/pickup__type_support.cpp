// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:action/Pickup.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/action/detail/pickup__functions.h"
#include "moveit_msgs/action/detail/pickup__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Pickup_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::action::Pickup_Goal(_init);
}

void Pickup_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::action::Pickup_Goal *>(message_memory);
  typed_message->~Pickup_Goal();
}

size_t size_function__Pickup_Goal__possible_grasps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pickup_Goal__possible_grasps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return &member[index];
}

void * get_function__Pickup_Goal__possible_grasps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pickup_Goal__possible_grasps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::Grasp *>(
    get_const_function__Pickup_Goal__possible_grasps(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::Grasp *>(untyped_value);
  value = item;
}

void assign_function__Pickup_Goal__possible_grasps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::Grasp *>(
    get_function__Pickup_Goal__possible_grasps(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::Grasp *>(untyped_value);
  item = value;
}

void resize_function__Pickup_Goal__possible_grasps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Pickup_Goal__attached_object_touch_links(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pickup_Goal__attached_object_touch_links(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Pickup_Goal__attached_object_touch_links(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pickup_Goal__attached_object_touch_links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Pickup_Goal__attached_object_touch_links(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Pickup_Goal__attached_object_touch_links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Pickup_Goal__attached_object_touch_links(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Pickup_Goal__attached_object_touch_links(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Pickup_Goal__allowed_touch_objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pickup_Goal__allowed_touch_objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Pickup_Goal__allowed_touch_objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pickup_Goal__allowed_touch_objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Pickup_Goal__allowed_touch_objects(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Pickup_Goal__allowed_touch_objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Pickup_Goal__allowed_touch_objects(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Pickup_Goal__allowed_touch_objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pickup_Goal_message_member_array[13] = {
  {
    "target_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Goal, target_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "group_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Goal, group_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end_effector",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Goal, end_effector),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "possible_grasps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::Grasp>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Goal, possible_grasps),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pickup_Goal__possible_grasps,  // size() function pointer
    get_const_function__Pickup_Goal__possible_grasps,  // get_const(index) function pointer
    get_function__Pickup_Goal__possible_grasps,  // get(index) function pointer
    fetch_function__Pickup_Goal__possible_grasps,  // fetch(index, &value) function pointer
    assign_function__Pickup_Goal__possible_grasps,  // assign(index, value) function pointer
    resize_function__Pickup_Goal__possible_grasps  // resize(index) function pointer
  },
  {
    "support_surface_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Goal, support_surface_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "allow_gripper_support_collision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Goal, allow_gripper_support_collision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "attached_object_touch_links",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Goal, attached_object_touch_links),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pickup_Goal__attached_object_touch_links,  // size() function pointer
    get_const_function__Pickup_Goal__attached_object_touch_links,  // get_const(index) function pointer
    get_function__Pickup_Goal__attached_object_touch_links,  // get(index) function pointer
    fetch_function__Pickup_Goal__attached_object_touch_links,  // fetch(index, &value) function pointer
    assign_function__Pickup_Goal__attached_object_touch_links,  // assign(index, value) function pointer
    resize_function__Pickup_Goal__attached_object_touch_links  // resize(index) function pointer
  },
  {
    "minimize_object_distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Goal, minimize_object_distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "path_constraints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::Constraints>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Goal, path_constraints),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "planner_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Goal, planner_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "allowed_touch_objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Goal, allowed_touch_objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pickup_Goal__allowed_touch_objects,  // size() function pointer
    get_const_function__Pickup_Goal__allowed_touch_objects,  // get_const(index) function pointer
    get_function__Pickup_Goal__allowed_touch_objects,  // get(index) function pointer
    fetch_function__Pickup_Goal__allowed_touch_objects,  // fetch(index, &value) function pointer
    assign_function__Pickup_Goal__allowed_touch_objects,  // assign(index, value) function pointer
    resize_function__Pickup_Goal__allowed_touch_objects  // resize(index) function pointer
  },
  {
    "allowed_planning_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Goal, allowed_planning_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "planning_options",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::PlanningOptions>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Goal, planning_options),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pickup_Goal_message_members = {
  "moveit_msgs::action",  // message namespace
  "Pickup_Goal",  // message name
  13,  // number of fields
  sizeof(moveit_msgs::action::Pickup_Goal),
  Pickup_Goal_message_member_array,  // message members
  Pickup_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pickup_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pickup_Goal_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__action__Pickup_Goal__get_type_hash,
  &moveit_msgs__action__Pickup_Goal__get_type_description,
  &moveit_msgs__action__Pickup_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::Pickup_Goal>()
{
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, Pickup_Goal)() {
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Pickup_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::action::Pickup_Result(_init);
}

void Pickup_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::action::Pickup_Result *>(message_memory);
  typed_message->~Pickup_Result();
}

size_t size_function__Pickup_Result__trajectory_stages(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::RobotTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pickup_Result__trajectory_stages(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::RobotTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__Pickup_Result__trajectory_stages(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::RobotTrajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pickup_Result__trajectory_stages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::RobotTrajectory *>(
    get_const_function__Pickup_Result__trajectory_stages(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::RobotTrajectory *>(untyped_value);
  value = item;
}

void assign_function__Pickup_Result__trajectory_stages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::RobotTrajectory *>(
    get_function__Pickup_Result__trajectory_stages(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::RobotTrajectory *>(untyped_value);
  item = value;
}

void resize_function__Pickup_Result__trajectory_stages(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::RobotTrajectory> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Pickup_Result__trajectory_descriptions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pickup_Result__trajectory_descriptions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Pickup_Result__trajectory_descriptions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pickup_Result__trajectory_descriptions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Pickup_Result__trajectory_descriptions(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Pickup_Result__trajectory_descriptions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Pickup_Result__trajectory_descriptions(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Pickup_Result__trajectory_descriptions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pickup_Result_message_member_array[6] = {
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::MoveItErrorCodes>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Result, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectory_start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::RobotState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Result, trajectory_start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectory_stages",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::RobotTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Result, trajectory_stages),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pickup_Result__trajectory_stages,  // size() function pointer
    get_const_function__Pickup_Result__trajectory_stages,  // get_const(index) function pointer
    get_function__Pickup_Result__trajectory_stages,  // get(index) function pointer
    fetch_function__Pickup_Result__trajectory_stages,  // fetch(index, &value) function pointer
    assign_function__Pickup_Result__trajectory_stages,  // assign(index, value) function pointer
    resize_function__Pickup_Result__trajectory_stages  // resize(index) function pointer
  },
  {
    "trajectory_descriptions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Result, trajectory_descriptions),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pickup_Result__trajectory_descriptions,  // size() function pointer
    get_const_function__Pickup_Result__trajectory_descriptions,  // get_const(index) function pointer
    get_function__Pickup_Result__trajectory_descriptions,  // get(index) function pointer
    fetch_function__Pickup_Result__trajectory_descriptions,  // fetch(index, &value) function pointer
    assign_function__Pickup_Result__trajectory_descriptions,  // assign(index, value) function pointer
    resize_function__Pickup_Result__trajectory_descriptions  // resize(index) function pointer
  },
  {
    "grasp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::Grasp>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Result, grasp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "planning_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Result, planning_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pickup_Result_message_members = {
  "moveit_msgs::action",  // message namespace
  "Pickup_Result",  // message name
  6,  // number of fields
  sizeof(moveit_msgs::action::Pickup_Result),
  Pickup_Result_message_member_array,  // message members
  Pickup_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pickup_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pickup_Result_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__action__Pickup_Result__get_type_hash,
  &moveit_msgs__action__Pickup_Result__get_type_description,
  &moveit_msgs__action__Pickup_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::Pickup_Result>()
{
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, Pickup_Result)() {
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Pickup_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::action::Pickup_Feedback(_init);
}

void Pickup_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::action::Pickup_Feedback *>(message_memory);
  typed_message->~Pickup_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pickup_Feedback_message_member_array[1] = {
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_Feedback, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pickup_Feedback_message_members = {
  "moveit_msgs::action",  // message namespace
  "Pickup_Feedback",  // message name
  1,  // number of fields
  sizeof(moveit_msgs::action::Pickup_Feedback),
  Pickup_Feedback_message_member_array,  // message members
  Pickup_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pickup_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pickup_Feedback_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__action__Pickup_Feedback__get_type_hash,
  &moveit_msgs__action__Pickup_Feedback__get_type_description,
  &moveit_msgs__action__Pickup_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::Pickup_Feedback>()
{
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, Pickup_Feedback)() {
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Pickup_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::action::Pickup_SendGoal_Request(_init);
}

void Pickup_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::action::Pickup_SendGoal_Request *>(message_memory);
  typed_message->~Pickup_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pickup_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::action::Pickup_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pickup_SendGoal_Request_message_members = {
  "moveit_msgs::action",  // message namespace
  "Pickup_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(moveit_msgs::action::Pickup_SendGoal_Request),
  Pickup_SendGoal_Request_message_member_array,  // message members
  Pickup_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pickup_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pickup_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__action__Pickup_SendGoal_Request__get_type_hash,
  &moveit_msgs__action__Pickup_SendGoal_Request__get_type_description,
  &moveit_msgs__action__Pickup_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::Pickup_SendGoal_Request>()
{
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, Pickup_SendGoal_Request)() {
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Pickup_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::action::Pickup_SendGoal_Response(_init);
}

void Pickup_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::action::Pickup_SendGoal_Response *>(message_memory);
  typed_message->~Pickup_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pickup_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pickup_SendGoal_Response_message_members = {
  "moveit_msgs::action",  // message namespace
  "Pickup_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(moveit_msgs::action::Pickup_SendGoal_Response),
  Pickup_SendGoal_Response_message_member_array,  // message members
  Pickup_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pickup_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pickup_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__action__Pickup_SendGoal_Response__get_type_hash,
  &moveit_msgs__action__Pickup_SendGoal_Response__get_type_description,
  &moveit_msgs__action__Pickup_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::Pickup_SendGoal_Response>()
{
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, Pickup_SendGoal_Response)() {
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Pickup_SendGoal_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::action::Pickup_SendGoal_Event(_init);
}

void Pickup_SendGoal_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::action::Pickup_SendGoal_Event *>(message_memory);
  typed_message->~Pickup_SendGoal_Event();
}

size_t size_function__Pickup_SendGoal_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::action::Pickup_SendGoal_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pickup_SendGoal_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::action::Pickup_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__Pickup_SendGoal_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::action::Pickup_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pickup_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::action::Pickup_SendGoal_Request *>(
    get_const_function__Pickup_SendGoal_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::action::Pickup_SendGoal_Request *>(untyped_value);
  value = item;
}

void assign_function__Pickup_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::action::Pickup_SendGoal_Request *>(
    get_function__Pickup_SendGoal_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::action::Pickup_SendGoal_Request *>(untyped_value);
  item = value;
}

void resize_function__Pickup_SendGoal_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::action::Pickup_SendGoal_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Pickup_SendGoal_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::action::Pickup_SendGoal_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pickup_SendGoal_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::action::Pickup_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__Pickup_SendGoal_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::action::Pickup_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pickup_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::action::Pickup_SendGoal_Response *>(
    get_const_function__Pickup_SendGoal_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::action::Pickup_SendGoal_Response *>(untyped_value);
  value = item;
}

void assign_function__Pickup_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::action::Pickup_SendGoal_Response *>(
    get_function__Pickup_SendGoal_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::action::Pickup_SendGoal_Response *>(untyped_value);
  item = value;
}

void resize_function__Pickup_SendGoal_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::action::Pickup_SendGoal_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pickup_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_SendGoal_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::action::Pickup_SendGoal_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_SendGoal_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pickup_SendGoal_Event__request,  // size() function pointer
    get_const_function__Pickup_SendGoal_Event__request,  // get_const(index) function pointer
    get_function__Pickup_SendGoal_Event__request,  // get(index) function pointer
    fetch_function__Pickup_SendGoal_Event__request,  // fetch(index, &value) function pointer
    assign_function__Pickup_SendGoal_Event__request,  // assign(index, value) function pointer
    resize_function__Pickup_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::action::Pickup_SendGoal_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_SendGoal_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pickup_SendGoal_Event__response,  // size() function pointer
    get_const_function__Pickup_SendGoal_Event__response,  // get_const(index) function pointer
    get_function__Pickup_SendGoal_Event__response,  // get(index) function pointer
    fetch_function__Pickup_SendGoal_Event__response,  // fetch(index, &value) function pointer
    assign_function__Pickup_SendGoal_Event__response,  // assign(index, value) function pointer
    resize_function__Pickup_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pickup_SendGoal_Event_message_members = {
  "moveit_msgs::action",  // message namespace
  "Pickup_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(moveit_msgs::action::Pickup_SendGoal_Event),
  Pickup_SendGoal_Event_message_member_array,  // message members
  Pickup_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pickup_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pickup_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__action__Pickup_SendGoal_Event__get_type_hash,
  &moveit_msgs__action__Pickup_SendGoal_Event__get_type_description,
  &moveit_msgs__action__Pickup_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::Pickup_SendGoal_Event>()
{
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_SendGoal_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, Pickup_SendGoal_Event)() {
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Pickup_SendGoal_service_members = {
  "moveit_msgs::action",  // service namespace
  "Pickup_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<moveit_msgs::action::Pickup_SendGoal>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t Pickup_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pickup_SendGoal_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::action::Pickup_SendGoal_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::action::Pickup_SendGoal_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::action::Pickup_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<moveit_msgs::action::Pickup_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<moveit_msgs::action::Pickup_SendGoal>,
  &moveit_msgs__action__Pickup_SendGoal__get_type_hash,
  &moveit_msgs__action__Pickup_SendGoal__get_type_description,
  &moveit_msgs__action__Pickup_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::action::Pickup_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::moveit_msgs::action::Pickup_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::moveit_msgs::action::Pickup_SendGoal_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::moveit_msgs::action::Pickup_SendGoal_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, Pickup_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<moveit_msgs::action::Pickup_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Pickup_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::action::Pickup_GetResult_Request(_init);
}

void Pickup_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::action::Pickup_GetResult_Request *>(message_memory);
  typed_message->~Pickup_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pickup_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pickup_GetResult_Request_message_members = {
  "moveit_msgs::action",  // message namespace
  "Pickup_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(moveit_msgs::action::Pickup_GetResult_Request),
  Pickup_GetResult_Request_message_member_array,  // message members
  Pickup_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pickup_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pickup_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__action__Pickup_GetResult_Request__get_type_hash,
  &moveit_msgs__action__Pickup_GetResult_Request__get_type_description,
  &moveit_msgs__action__Pickup_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::Pickup_GetResult_Request>()
{
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, Pickup_GetResult_Request)() {
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Pickup_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::action::Pickup_GetResult_Response(_init);
}

void Pickup_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::action::Pickup_GetResult_Response *>(message_memory);
  typed_message->~Pickup_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pickup_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::action::Pickup_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pickup_GetResult_Response_message_members = {
  "moveit_msgs::action",  // message namespace
  "Pickup_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(moveit_msgs::action::Pickup_GetResult_Response),
  Pickup_GetResult_Response_message_member_array,  // message members
  Pickup_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pickup_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pickup_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__action__Pickup_GetResult_Response__get_type_hash,
  &moveit_msgs__action__Pickup_GetResult_Response__get_type_description,
  &moveit_msgs__action__Pickup_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::Pickup_GetResult_Response>()
{
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, Pickup_GetResult_Response)() {
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Pickup_GetResult_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::action::Pickup_GetResult_Event(_init);
}

void Pickup_GetResult_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::action::Pickup_GetResult_Event *>(message_memory);
  typed_message->~Pickup_GetResult_Event();
}

size_t size_function__Pickup_GetResult_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::action::Pickup_GetResult_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pickup_GetResult_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::action::Pickup_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__Pickup_GetResult_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::action::Pickup_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pickup_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::action::Pickup_GetResult_Request *>(
    get_const_function__Pickup_GetResult_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::action::Pickup_GetResult_Request *>(untyped_value);
  value = item;
}

void assign_function__Pickup_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::action::Pickup_GetResult_Request *>(
    get_function__Pickup_GetResult_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::action::Pickup_GetResult_Request *>(untyped_value);
  item = value;
}

void resize_function__Pickup_GetResult_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::action::Pickup_GetResult_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Pickup_GetResult_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::action::Pickup_GetResult_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pickup_GetResult_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::action::Pickup_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__Pickup_GetResult_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::action::Pickup_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pickup_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::action::Pickup_GetResult_Response *>(
    get_const_function__Pickup_GetResult_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::action::Pickup_GetResult_Response *>(untyped_value);
  value = item;
}

void assign_function__Pickup_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::action::Pickup_GetResult_Response *>(
    get_function__Pickup_GetResult_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::action::Pickup_GetResult_Response *>(untyped_value);
  item = value;
}

void resize_function__Pickup_GetResult_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::action::Pickup_GetResult_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pickup_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_GetResult_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::action::Pickup_GetResult_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_GetResult_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pickup_GetResult_Event__request,  // size() function pointer
    get_const_function__Pickup_GetResult_Event__request,  // get_const(index) function pointer
    get_function__Pickup_GetResult_Event__request,  // get(index) function pointer
    fetch_function__Pickup_GetResult_Event__request,  // fetch(index, &value) function pointer
    assign_function__Pickup_GetResult_Event__request,  // assign(index, value) function pointer
    resize_function__Pickup_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::action::Pickup_GetResult_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_GetResult_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pickup_GetResult_Event__response,  // size() function pointer
    get_const_function__Pickup_GetResult_Event__response,  // get_const(index) function pointer
    get_function__Pickup_GetResult_Event__response,  // get(index) function pointer
    fetch_function__Pickup_GetResult_Event__response,  // fetch(index, &value) function pointer
    assign_function__Pickup_GetResult_Event__response,  // assign(index, value) function pointer
    resize_function__Pickup_GetResult_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pickup_GetResult_Event_message_members = {
  "moveit_msgs::action",  // message namespace
  "Pickup_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(moveit_msgs::action::Pickup_GetResult_Event),
  Pickup_GetResult_Event_message_member_array,  // message members
  Pickup_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pickup_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pickup_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__action__Pickup_GetResult_Event__get_type_hash,
  &moveit_msgs__action__Pickup_GetResult_Event__get_type_description,
  &moveit_msgs__action__Pickup_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::Pickup_GetResult_Event>()
{
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_GetResult_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, Pickup_GetResult_Event)() {
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Pickup_GetResult_service_members = {
  "moveit_msgs::action",  // service namespace
  "Pickup_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<moveit_msgs::action::Pickup_GetResult>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t Pickup_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pickup_GetResult_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::action::Pickup_GetResult_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::action::Pickup_GetResult_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::action::Pickup_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<moveit_msgs::action::Pickup_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<moveit_msgs::action::Pickup_GetResult>,
  &moveit_msgs__action__Pickup_GetResult__get_type_hash,
  &moveit_msgs__action__Pickup_GetResult__get_type_description,
  &moveit_msgs__action__Pickup_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::action::Pickup_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::moveit_msgs::action::Pickup_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::moveit_msgs::action::Pickup_GetResult_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::moveit_msgs::action::Pickup_GetResult_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, Pickup_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<moveit_msgs::action::Pickup_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Pickup_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::action::Pickup_FeedbackMessage(_init);
}

void Pickup_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::action::Pickup_FeedbackMessage *>(message_memory);
  typed_message->~Pickup_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pickup_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::action::Pickup_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::action::Pickup_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pickup_FeedbackMessage_message_members = {
  "moveit_msgs::action",  // message namespace
  "Pickup_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(moveit_msgs::action::Pickup_FeedbackMessage),
  Pickup_FeedbackMessage_message_member_array,  // message members
  Pickup_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pickup_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pickup_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__action__Pickup_FeedbackMessage__get_type_hash,
  &moveit_msgs__action__Pickup_FeedbackMessage__get_type_description,
  &moveit_msgs__action__Pickup_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::Pickup_FeedbackMessage>()
{
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, Pickup_FeedbackMessage)() {
  return &::moveit_msgs::action::rosidl_typesupport_introspection_cpp::Pickup_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif