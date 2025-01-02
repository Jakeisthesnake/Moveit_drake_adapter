// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from moveit_msgs:srv/QueryPlannerInterfaces.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/srv/detail/query_planner_interfaces__struct.h"
#include "moveit_msgs/srv/detail/query_planner_interfaces__type_support.h"
#include "moveit_msgs/srv/detail/query_planner_interfaces__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _QueryPlannerInterfaces_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _QueryPlannerInterfaces_Request_type_support_ids_t;

static const _QueryPlannerInterfaces_Request_type_support_ids_t _QueryPlannerInterfaces_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _QueryPlannerInterfaces_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _QueryPlannerInterfaces_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _QueryPlannerInterfaces_Request_type_support_symbol_names_t _QueryPlannerInterfaces_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, QueryPlannerInterfaces_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, QueryPlannerInterfaces_Request)),
  }
};

typedef struct _QueryPlannerInterfaces_Request_type_support_data_t
{
  void * data[2];
} _QueryPlannerInterfaces_Request_type_support_data_t;

static _QueryPlannerInterfaces_Request_type_support_data_t _QueryPlannerInterfaces_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _QueryPlannerInterfaces_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_QueryPlannerInterfaces_Request_message_typesupport_ids.typesupport_identifier[0],
  &_QueryPlannerInterfaces_Request_message_typesupport_symbol_names.symbol_name[0],
  &_QueryPlannerInterfaces_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t QueryPlannerInterfaces_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_QueryPlannerInterfaces_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__srv__QueryPlannerInterfaces_Request__get_type_hash,
  &moveit_msgs__srv__QueryPlannerInterfaces_Request__get_type_description,
  &moveit_msgs__srv__QueryPlannerInterfaces_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, QueryPlannerInterfaces_Request)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::QueryPlannerInterfaces_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/query_planner_interfaces__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/query_planner_interfaces__type_support.h"
// already included above
// #include "moveit_msgs/srv/detail/query_planner_interfaces__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _QueryPlannerInterfaces_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _QueryPlannerInterfaces_Response_type_support_ids_t;

static const _QueryPlannerInterfaces_Response_type_support_ids_t _QueryPlannerInterfaces_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _QueryPlannerInterfaces_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _QueryPlannerInterfaces_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _QueryPlannerInterfaces_Response_type_support_symbol_names_t _QueryPlannerInterfaces_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, QueryPlannerInterfaces_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, QueryPlannerInterfaces_Response)),
  }
};

typedef struct _QueryPlannerInterfaces_Response_type_support_data_t
{
  void * data[2];
} _QueryPlannerInterfaces_Response_type_support_data_t;

static _QueryPlannerInterfaces_Response_type_support_data_t _QueryPlannerInterfaces_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _QueryPlannerInterfaces_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_QueryPlannerInterfaces_Response_message_typesupport_ids.typesupport_identifier[0],
  &_QueryPlannerInterfaces_Response_message_typesupport_symbol_names.symbol_name[0],
  &_QueryPlannerInterfaces_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t QueryPlannerInterfaces_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_QueryPlannerInterfaces_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__srv__QueryPlannerInterfaces_Response__get_type_hash,
  &moveit_msgs__srv__QueryPlannerInterfaces_Response__get_type_description,
  &moveit_msgs__srv__QueryPlannerInterfaces_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, QueryPlannerInterfaces_Response)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::QueryPlannerInterfaces_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/query_planner_interfaces__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/query_planner_interfaces__type_support.h"
// already included above
// #include "moveit_msgs/srv/detail/query_planner_interfaces__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _QueryPlannerInterfaces_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _QueryPlannerInterfaces_Event_type_support_ids_t;

static const _QueryPlannerInterfaces_Event_type_support_ids_t _QueryPlannerInterfaces_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _QueryPlannerInterfaces_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _QueryPlannerInterfaces_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _QueryPlannerInterfaces_Event_type_support_symbol_names_t _QueryPlannerInterfaces_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, QueryPlannerInterfaces_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, QueryPlannerInterfaces_Event)),
  }
};

typedef struct _QueryPlannerInterfaces_Event_type_support_data_t
{
  void * data[2];
} _QueryPlannerInterfaces_Event_type_support_data_t;

static _QueryPlannerInterfaces_Event_type_support_data_t _QueryPlannerInterfaces_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _QueryPlannerInterfaces_Event_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_QueryPlannerInterfaces_Event_message_typesupport_ids.typesupport_identifier[0],
  &_QueryPlannerInterfaces_Event_message_typesupport_symbol_names.symbol_name[0],
  &_QueryPlannerInterfaces_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t QueryPlannerInterfaces_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_QueryPlannerInterfaces_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_msgs__srv__QueryPlannerInterfaces_Event__get_type_hash,
  &moveit_msgs__srv__QueryPlannerInterfaces_Event__get_type_description,
  &moveit_msgs__srv__QueryPlannerInterfaces_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, QueryPlannerInterfaces_Event)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::QueryPlannerInterfaces_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/query_planner_interfaces__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _QueryPlannerInterfaces_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _QueryPlannerInterfaces_type_support_ids_t;

static const _QueryPlannerInterfaces_type_support_ids_t _QueryPlannerInterfaces_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _QueryPlannerInterfaces_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _QueryPlannerInterfaces_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _QueryPlannerInterfaces_type_support_symbol_names_t _QueryPlannerInterfaces_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, QueryPlannerInterfaces)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, QueryPlannerInterfaces)),
  }
};

typedef struct _QueryPlannerInterfaces_type_support_data_t
{
  void * data[2];
} _QueryPlannerInterfaces_type_support_data_t;

static _QueryPlannerInterfaces_type_support_data_t _QueryPlannerInterfaces_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _QueryPlannerInterfaces_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_QueryPlannerInterfaces_service_typesupport_ids.typesupport_identifier[0],
  &_QueryPlannerInterfaces_service_typesupport_symbol_names.symbol_name[0],
  &_QueryPlannerInterfaces_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t QueryPlannerInterfaces_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_QueryPlannerInterfaces_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &QueryPlannerInterfaces_Request_message_type_support_handle,
  &QueryPlannerInterfaces_Response_message_type_support_handle,
  &QueryPlannerInterfaces_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    srv,
    QueryPlannerInterfaces
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    srv,
    QueryPlannerInterfaces
  ),
  &moveit_msgs__srv__QueryPlannerInterfaces__get_type_hash,
  &moveit_msgs__srv__QueryPlannerInterfaces__get_type_description,
  &moveit_msgs__srv__QueryPlannerInterfaces__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, srv, QueryPlannerInterfaces)() {
  return &::moveit_msgs::srv::rosidl_typesupport_c::QueryPlannerInterfaces_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif