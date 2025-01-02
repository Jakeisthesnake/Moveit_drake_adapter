// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/GripperTranslation.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/gripper_translation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "moveit_msgs/msg/detail/gripper_translation__functions.h"
#include "moveit_msgs/msg/detail/gripper_translation__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3Stamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3Stamped &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3Stamped &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3Stamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace moveit_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::msg::GripperTranslation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: direction
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.direction,
    cdr);
  // Member: desired_distance
  cdr << ros_message.desired_distance;
  // Member: min_distance
  cdr << ros_message.min_distance;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::msg::GripperTranslation & ros_message)
{
  // Member: direction
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.direction);

  // Member: desired_distance
  cdr >> ros_message.desired_distance;

  // Member: min_distance
  cdr >> ros_message.min_distance;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::msg::GripperTranslation & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: direction

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.direction, current_alignment);
  // Member: desired_distance
  {
    size_t item_size = sizeof(ros_message.desired_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_distance
  {
    size_t item_size = sizeof(ros_message.min_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_GripperTranslation(
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


  // Member: direction
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3Stamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: desired_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_distance
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
    using DataType = moveit_msgs::msg::GripperTranslation;
    is_plain =
      (
      offsetof(DataType, min_distance) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GripperTranslation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::GripperTranslation *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GripperTranslation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::msg::GripperTranslation *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GripperTranslation__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::GripperTranslation *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GripperTranslation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GripperTranslation(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GripperTranslation__callbacks = {
  "moveit_msgs::msg",
  "GripperTranslation",
  _GripperTranslation__cdr_serialize,
  _GripperTranslation__cdr_deserialize,
  _GripperTranslation__get_serialized_size,
  _GripperTranslation__max_serialized_size
};

static rosidl_message_type_support_t _GripperTranslation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GripperTranslation__callbacks,
  get_message_typesupport_handle_function,
  &moveit_msgs__msg__GripperTranslation__get_type_hash,
  &moveit_msgs__msg__GripperTranslation__get_type_description,
  &moveit_msgs__msg__GripperTranslation__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::msg::GripperTranslation>()
{
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_GripperTranslation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, msg, GripperTranslation)() {
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_GripperTranslation__handle;
}

#ifdef __cplusplus
}
#endif