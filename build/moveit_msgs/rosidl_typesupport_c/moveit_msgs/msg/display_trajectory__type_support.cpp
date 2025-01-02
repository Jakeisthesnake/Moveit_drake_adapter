// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/DisplayTrajectory.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/msg/detail/display_trajectory__struct.h"
#include "moveit_msgs/msg/detail/display_trajectory__type_support.h"
#include "moveit_msgs/msg/detail/display_trajectory__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _DisplayTrajectory_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DisplayTrajectory_type_support_ids_t;

static const _DisplayTrajectory_type_support_ids_t _DisplayTrajectory_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DisplayTrajectory_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DisplayTrajectory_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DisplayTrajectory_type_support_symbol_names_t _DisplayTrajectory_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, DisplayTrajectory)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, DisplayTrajectory)),
  }
};

typedef struct _DisplayTrajectory_type_support_data_t
{
  void * data[2];
} _DisplayTrajectory_type_support_data_t;

static _DisplayTrajectory_type_support_data_t _DisplayTrajectory_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DisplayTrajectory_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_DisplayTrajectory_message_typesupport_ids.typesupport_identifier[0],
  &_DisplayTrajectory_message_typesupport_symbol_names.symbol_name[0],
  &_DisplayTrajectory_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DisplayTrajectory_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DisplayTrajectory_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__msg__DisplayTrajectory__get_type_hash,
  &moveit_msgs__msg__DisplayTrajectory__get_type_description,
  &moveit_msgs__msg__DisplayTrajectory__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, msg, DisplayTrajectory)() {
  return &::moveit_msgs::msg::rosidl_typesupport_c::DisplayTrajectory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
