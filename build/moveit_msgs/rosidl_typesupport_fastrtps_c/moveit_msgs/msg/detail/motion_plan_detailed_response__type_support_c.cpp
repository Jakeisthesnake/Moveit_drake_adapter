// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:msg/MotionPlanDetailedResponse.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/motion_plan_detailed_response__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/msg/detail/motion_plan_detailed_response__struct.h"
#include "moveit_msgs/msg/detail/motion_plan_detailed_response__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"  // error_code
#include "moveit_msgs/msg/detail/robot_state__functions.h"  // trajectory_start
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"  // trajectory
#include "rosidl_runtime_c/primitives_sequence.h"  // processing_time
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // processing_time
#include "rosidl_runtime_c/string.h"  // description, group_name
#include "rosidl_runtime_c/string_functions.h"  // description, group_name

// forward declare type support functions
size_t get_serialized_size_moveit_msgs__msg__MoveItErrorCodes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__MoveItErrorCodes(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MoveItErrorCodes)();
size_t get_serialized_size_moveit_msgs__msg__RobotState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__RobotState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotState)();
size_t get_serialized_size_moveit_msgs__msg__RobotTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__RobotTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotTrajectory)();


using _MotionPlanDetailedResponse__ros_msg_type = moveit_msgs__msg__MotionPlanDetailedResponse;

static bool _MotionPlanDetailedResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionPlanDetailedResponse__ros_msg_type * ros_message = static_cast<const _MotionPlanDetailedResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory_start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trajectory_start, cdr))
    {
      return false;
    }
  }

  // Field name: group_name
  {
    const rosidl_runtime_c__String * str = &ros_message->group_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotTrajectory
      )()->data);
    size_t size = ros_message->trajectory.size;
    auto array_ptr = ros_message->trajectory.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: description
  {
    size_t size = ros_message->description.size;
    auto array_ptr = ros_message->description.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: processing_time
  {
    size_t size = ros_message->processing_time.size;
    auto array_ptr = ros_message->processing_time.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: error_code
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MoveItErrorCodes
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->error_code, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MotionPlanDetailedResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionPlanDetailedResponse__ros_msg_type * ros_message = static_cast<_MotionPlanDetailedResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory_start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trajectory_start))
    {
      return false;
    }
  }

  // Field name: group_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->group_name.data) {
      rosidl_runtime_c__String__init(&ros_message->group_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->group_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'group_name'\n");
      return false;
    }
  }

  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotTrajectory
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->trajectory.data) {
      moveit_msgs__msg__RobotTrajectory__Sequence__fini(&ros_message->trajectory);
    }
    if (!moveit_msgs__msg__RobotTrajectory__Sequence__init(&ros_message->trajectory, size)) {
      fprintf(stderr, "failed to create array for field 'trajectory'");
      return false;
    }
    auto array_ptr = ros_message->trajectory.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: description
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->description.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->description);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->description, size)) {
      fprintf(stderr, "failed to create array for field 'description'");
      return false;
    }
    auto array_ptr = ros_message->description.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'description'\n");
        return false;
      }
    }
  }

  // Field name: processing_time
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->processing_time.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->processing_time);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->processing_time, size)) {
      fprintf(stderr, "failed to create array for field 'processing_time'");
      return false;
    }
    auto array_ptr = ros_message->processing_time.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: error_code
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MoveItErrorCodes
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->error_code))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__msg__MotionPlanDetailedResponse(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionPlanDetailedResponse__ros_msg_type * ros_message = static_cast<const _MotionPlanDetailedResponse__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trajectory_start

  current_alignment += get_serialized_size_moveit_msgs__msg__RobotState(
    &(ros_message->trajectory_start), current_alignment);
  // field.name group_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->group_name.size + 1);
  // field.name trajectory
  {
    size_t array_size = ros_message->trajectory.size;
    auto array_ptr = ros_message->trajectory.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_moveit_msgs__msg__RobotTrajectory(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name description
  {
    size_t array_size = ros_message->description.size;
    auto array_ptr = ros_message->description.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name processing_time
  {
    size_t array_size = ros_message->processing_time.size;
    auto array_ptr = ros_message->processing_time.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_code

  current_alignment += get_serialized_size_moveit_msgs__msg__MoveItErrorCodes(
    &(ros_message->error_code), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MotionPlanDetailedResponse__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__msg__MotionPlanDetailedResponse(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__msg__MotionPlanDetailedResponse(
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

  // member: trajectory_start
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__RobotState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: group_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: trajectory
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__RobotTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: description
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: processing_time
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: error_code
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__MoveItErrorCodes(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs__msg__MotionPlanDetailedResponse;
    is_plain =
      (
      offsetof(DataType, error_code) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MotionPlanDetailedResponse__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__msg__MotionPlanDetailedResponse(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotionPlanDetailedResponse = {
  "moveit_msgs::msg",
  "MotionPlanDetailedResponse",
  _MotionPlanDetailedResponse__cdr_serialize,
  _MotionPlanDetailedResponse__cdr_deserialize,
  _MotionPlanDetailedResponse__get_serialized_size,
  _MotionPlanDetailedResponse__max_serialized_size
};

static rosidl_message_type_support_t _MotionPlanDetailedResponse__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionPlanDetailedResponse,
  get_message_typesupport_handle_function,
  &moveit_msgs__msg__MotionPlanDetailedResponse__get_type_hash,
  &moveit_msgs__msg__MotionPlanDetailedResponse__get_type_description,
  &moveit_msgs__msg__MotionPlanDetailedResponse__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MotionPlanDetailedResponse)() {
  return &_MotionPlanDetailedResponse__type_support;
}

#if defined(__cplusplus)
}
#endif
