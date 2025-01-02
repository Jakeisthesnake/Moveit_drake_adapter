// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:srv/DeleteRobotStateFromWarehouse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__functions.h"
#include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DeleteRobotStateFromWarehouse_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request(_init);
}

void DeleteRobotStateFromWarehouse_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request *>(message_memory);
  typed_message->~DeleteRobotStateFromWarehouse_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DeleteRobotStateFromWarehouse_Request_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request, robot),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DeleteRobotStateFromWarehouse_Request_message_members = {
  "moveit_msgs::srv",  // message namespace
  "DeleteRobotStateFromWarehouse_Request",  // message name
  2,  // number of fields
  sizeof(moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request),
  DeleteRobotStateFromWarehouse_Request_message_member_array,  // message members
  DeleteRobotStateFromWarehouse_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DeleteRobotStateFromWarehouse_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DeleteRobotStateFromWarehouse_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DeleteRobotStateFromWarehouse_Request_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_type_hash,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_type_description,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_introspection_cpp::DeleteRobotStateFromWarehouse_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Request)() {
  return &::moveit_msgs::srv::rosidl_typesupport_introspection_cpp::DeleteRobotStateFromWarehouse_Request_message_type_support_handle;
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
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__struct.hpp"
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

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DeleteRobotStateFromWarehouse_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response(_init);
}

void DeleteRobotStateFromWarehouse_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response *>(message_memory);
  typed_message->~DeleteRobotStateFromWarehouse_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DeleteRobotStateFromWarehouse_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DeleteRobotStateFromWarehouse_Response_message_members = {
  "moveit_msgs::srv",  // message namespace
  "DeleteRobotStateFromWarehouse_Response",  // message name
  1,  // number of fields
  sizeof(moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response),
  DeleteRobotStateFromWarehouse_Response_message_member_array,  // message members
  DeleteRobotStateFromWarehouse_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DeleteRobotStateFromWarehouse_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DeleteRobotStateFromWarehouse_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DeleteRobotStateFromWarehouse_Response_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_type_hash,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_type_description,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_introspection_cpp::DeleteRobotStateFromWarehouse_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Response)() {
  return &::moveit_msgs::srv::rosidl_typesupport_introspection_cpp::DeleteRobotStateFromWarehouse_Response_message_type_support_handle;
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
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__struct.hpp"
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

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DeleteRobotStateFromWarehouse_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::srv::DeleteRobotStateFromWarehouse_Event(_init);
}

void DeleteRobotStateFromWarehouse_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Event *>(message_memory);
  typed_message->~DeleteRobotStateFromWarehouse_Event();
}

size_t size_function__DeleteRobotStateFromWarehouse_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DeleteRobotStateFromWarehouse_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__DeleteRobotStateFromWarehouse_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__DeleteRobotStateFromWarehouse_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request *>(
    get_const_function__DeleteRobotStateFromWarehouse_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request *>(untyped_value);
  value = item;
}

void assign_function__DeleteRobotStateFromWarehouse_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request *>(
    get_function__DeleteRobotStateFromWarehouse_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request *>(untyped_value);
  item = value;
}

void resize_function__DeleteRobotStateFromWarehouse_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DeleteRobotStateFromWarehouse_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DeleteRobotStateFromWarehouse_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__DeleteRobotStateFromWarehouse_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__DeleteRobotStateFromWarehouse_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response *>(
    get_const_function__DeleteRobotStateFromWarehouse_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response *>(untyped_value);
  value = item;
}

void assign_function__DeleteRobotStateFromWarehouse_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response *>(
    get_function__DeleteRobotStateFromWarehouse_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response *>(untyped_value);
  item = value;
}

void resize_function__DeleteRobotStateFromWarehouse_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DeleteRobotStateFromWarehouse_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::srv::DeleteRobotStateFromWarehouse_Event, info),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(moveit_msgs::srv::DeleteRobotStateFromWarehouse_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__DeleteRobotStateFromWarehouse_Event__request,  // size() function pointer
    get_const_function__DeleteRobotStateFromWarehouse_Event__request,  // get_const(index) function pointer
    get_function__DeleteRobotStateFromWarehouse_Event__request,  // get(index) function pointer
    fetch_function__DeleteRobotStateFromWarehouse_Event__request,  // fetch(index, &value) function pointer
    assign_function__DeleteRobotStateFromWarehouse_Event__request,  // assign(index, value) function pointer
    resize_function__DeleteRobotStateFromWarehouse_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(moveit_msgs::srv::DeleteRobotStateFromWarehouse_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__DeleteRobotStateFromWarehouse_Event__response,  // size() function pointer
    get_const_function__DeleteRobotStateFromWarehouse_Event__response,  // get_const(index) function pointer
    get_function__DeleteRobotStateFromWarehouse_Event__response,  // get(index) function pointer
    fetch_function__DeleteRobotStateFromWarehouse_Event__response,  // fetch(index, &value) function pointer
    assign_function__DeleteRobotStateFromWarehouse_Event__response,  // assign(index, value) function pointer
    resize_function__DeleteRobotStateFromWarehouse_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DeleteRobotStateFromWarehouse_Event_message_members = {
  "moveit_msgs::srv",  // message namespace
  "DeleteRobotStateFromWarehouse_Event",  // message name
  3,  // number of fields
  sizeof(moveit_msgs::srv::DeleteRobotStateFromWarehouse_Event),
  DeleteRobotStateFromWarehouse_Event_message_member_array,  // message members
  DeleteRobotStateFromWarehouse_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  DeleteRobotStateFromWarehouse_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DeleteRobotStateFromWarehouse_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DeleteRobotStateFromWarehouse_Event_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__get_type_hash,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__get_type_description,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Event>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_introspection_cpp::DeleteRobotStateFromWarehouse_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, DeleteRobotStateFromWarehouse_Event)() {
  return &::moveit_msgs::srv::rosidl_typesupport_introspection_cpp::DeleteRobotStateFromWarehouse_Event_message_type_support_handle;
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
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers DeleteRobotStateFromWarehouse_service_members = {
  "moveit_msgs::srv",  // service namespace
  "DeleteRobotStateFromWarehouse",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<moveit_msgs::srv::DeleteRobotStateFromWarehouse>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t DeleteRobotStateFromWarehouse_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DeleteRobotStateFromWarehouse_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::srv::DeleteRobotStateFromWarehouse_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<moveit_msgs::srv::DeleteRobotStateFromWarehouse>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<moveit_msgs::srv::DeleteRobotStateFromWarehouse>,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse__get_type_hash,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse__get_type_description,
  &moveit_msgs__srv__DeleteRobotStateFromWarehouse__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::srv::DeleteRobotStateFromWarehouse>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::moveit_msgs::srv::rosidl_typesupport_introspection_cpp::DeleteRobotStateFromWarehouse_service_type_support_handle;
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
        ::moveit_msgs::srv::DeleteRobotStateFromWarehouse_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::moveit_msgs::srv::DeleteRobotStateFromWarehouse_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::moveit_msgs::srv::DeleteRobotStateFromWarehouse_Event
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, DeleteRobotStateFromWarehouse)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<moveit_msgs::srv::DeleteRobotStateFromWarehouse>();
}

#ifdef __cplusplus
}
#endif