// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__LOAD_MAP__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__LOAD_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filename'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadMap in the package moveit_msgs.
typedef struct moveit_msgs__srv__LoadMap_Request
{
  rosidl_runtime_c__String filename;
} moveit_msgs__srv__LoadMap_Request;

// Struct for a sequence of moveit_msgs__srv__LoadMap_Request.
typedef struct moveit_msgs__srv__LoadMap_Request__Sequence
{
  moveit_msgs__srv__LoadMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__LoadMap_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/LoadMap in the package moveit_msgs.
typedef struct moveit_msgs__srv__LoadMap_Response
{
  bool success;
} moveit_msgs__srv__LoadMap_Response;

// Struct for a sequence of moveit_msgs__srv__LoadMap_Response.
typedef struct moveit_msgs__srv__LoadMap_Response__Sequence
{
  moveit_msgs__srv__LoadMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__LoadMap_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  moveit_msgs__srv__LoadMap_Event__request__MAX_SIZE = 1
};
// response
enum
{
  moveit_msgs__srv__LoadMap_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/LoadMap in the package moveit_msgs.
typedef struct moveit_msgs__srv__LoadMap_Event
{
  service_msgs__msg__ServiceEventInfo info;
  moveit_msgs__srv__LoadMap_Request__Sequence request;
  moveit_msgs__srv__LoadMap_Response__Sequence response;
} moveit_msgs__srv__LoadMap_Event;

// Struct for a sequence of moveit_msgs__srv__LoadMap_Event.
typedef struct moveit_msgs__srv__LoadMap_Event__Sequence
{
  moveit_msgs__srv__LoadMap_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__LoadMap_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__LOAD_MAP__STRUCT_H_
