// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/PlanningSceneComponents.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planning_scene_components__rosidl_typesupport_fastrtps_cpp.hpp"
#include "moveit_msgs/msg/detail/planning_scene_components__functions.h"
#include "moveit_msgs/msg/detail/planning_scene_components__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace moveit_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::msg::PlanningSceneComponents & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: components
  cdr << ros_message.components;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::msg::PlanningSceneComponents & ros_message)
{
  // Member: components
  cdr >> ros_message.components;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::msg::PlanningSceneComponents & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: components
  {
    size_t item_size = sizeof(ros_message.components);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_PlanningSceneComponents(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: components
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs::msg::PlanningSceneComponents;
    is_plain =
      (
      offsetof(DataType, components) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PlanningSceneComponents__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::PlanningSceneComponents *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlanningSceneComponents__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::msg::PlanningSceneComponents *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlanningSceneComponents__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::PlanningSceneComponents *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlanningSceneComponents__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PlanningSceneComponents(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PlanningSceneComponents__callbacks = {
  "moveit_msgs::msg",
  "PlanningSceneComponents",
  _PlanningSceneComponents__cdr_serialize,
  _PlanningSceneComponents__cdr_deserialize,
  _PlanningSceneComponents__get_serialized_size,
  _PlanningSceneComponents__max_serialized_size
};

static rosidl_message_type_support_t _PlanningSceneComponents__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlanningSceneComponents__callbacks,
  get_message_typesupport_handle_function,
  &moveit_msgs__msg__PlanningSceneComponents__get_type_hash,
  &moveit_msgs__msg__PlanningSceneComponents__get_type_description,
  &moveit_msgs__msg__PlanningSceneComponents__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::msg::PlanningSceneComponents>()
{
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_PlanningSceneComponents__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, msg, PlanningSceneComponents)() {
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_PlanningSceneComponents__handle;
}

#ifdef __cplusplus
}
#endif
