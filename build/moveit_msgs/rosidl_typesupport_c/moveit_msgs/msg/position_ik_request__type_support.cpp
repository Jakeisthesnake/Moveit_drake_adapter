// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/PositionIKRequest.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/msg/detail/position_ik_request__struct.h"
#include "moveit_msgs/msg/detail/position_ik_request__type_support.h"
#include "moveit_msgs/msg/detail/position_ik_request__functions.h"
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

typedef struct _PositionIKRequest_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PositionIKRequest_type_support_ids_t;

static const _PositionIKRequest_type_support_ids_t _PositionIKRequest_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PositionIKRequest_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PositionIKRequest_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PositionIKRequest_type_support_symbol_names_t _PositionIKRequest_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PositionIKRequest)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PositionIKRequest)),
  }
};

typedef struct _PositionIKRequest_type_support_data_t
{
  void * data[2];
} _PositionIKRequest_type_support_data_t;

static _PositionIKRequest_type_support_data_t _PositionIKRequest_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PositionIKRequest_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_PositionIKRequest_message_typesupport_ids.typesupport_identifier[0],
  &_PositionIKRequest_message_typesupport_symbol_names.symbol_name[0],
  &_PositionIKRequest_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PositionIKRequest_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PositionIKRequest_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__msg__PositionIKRequest__get_type_hash,
  &moveit_msgs__msg__PositionIKRequest__get_type_description,
  &moveit_msgs__msg__PositionIKRequest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, msg, PositionIKRequest)() {
  return &::moveit_msgs::msg::rosidl_typesupport_c::PositionIKRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
