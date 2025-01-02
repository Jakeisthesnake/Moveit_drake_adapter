// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:action/MoveGroup.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP__TRAITS_HPP_
#define MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/action/detail/move_group__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "moveit_msgs/msg/detail/motion_plan_request__traits.hpp"
// Member 'planning_options'
#include "moveit_msgs/msg/detail/planning_options__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGroup_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
    out << ", ";
  }

  // member: planning_options
  {
    out << "planning_options: ";
    to_flow_style_yaml(msg.planning_options, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGroup_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_block_style_yaml(msg.request, out, indentation + 2);
  }

  // member: planning_options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_options:\n";
    to_block_style_yaml(msg.planning_options, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGroup_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::MoveGroup_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::MoveGroup_Goal & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_Goal>()
{
  return "moveit_msgs::action::MoveGroup_Goal";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_Goal>()
{
  return "moveit_msgs/action/MoveGroup_Goal";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_Goal>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MotionPlanRequest>::value && has_fixed_size<moveit_msgs::msg::PlanningOptions>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_Goal>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MotionPlanRequest>::value && has_bounded_size<moveit_msgs::msg::PlanningOptions>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'planned_trajectory'
// Member 'executed_trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGroup_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    to_flow_style_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: trajectory_start
  {
    out << "trajectory_start: ";
    to_flow_style_yaml(msg.trajectory_start, out);
    out << ", ";
  }

  // member: planned_trajectory
  {
    out << "planned_trajectory: ";
    to_flow_style_yaml(msg.planned_trajectory, out);
    out << ", ";
  }

  // member: executed_trajectory
  {
    out << "executed_trajectory: ";
    to_flow_style_yaml(msg.executed_trajectory, out);
    out << ", ";
  }

  // member: planning_time
  {
    out << "planning_time: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGroup_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code:\n";
    to_block_style_yaml(msg.error_code, out, indentation + 2);
  }

  // member: trajectory_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_start:\n";
    to_block_style_yaml(msg.trajectory_start, out, indentation + 2);
  }

  // member: planned_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planned_trajectory:\n";
    to_block_style_yaml(msg.planned_trajectory, out, indentation + 2);
  }

  // member: executed_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "executed_trajectory:\n";
    to_block_style_yaml(msg.executed_trajectory, out, indentation + 2);
  }

  // member: planning_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_time: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGroup_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::MoveGroup_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::MoveGroup_Result & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_Result>()
{
  return "moveit_msgs::action::MoveGroup_Result";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_Result>()
{
  return "moveit_msgs/action/MoveGroup_Result";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_Result>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_fixed_size<moveit_msgs::msg::RobotState>::value && has_fixed_size<moveit_msgs::msg::RobotTrajectory>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_Result>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_bounded_size<moveit_msgs::msg::RobotState>::value && has_bounded_size<moveit_msgs::msg::RobotTrajectory>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGroup_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGroup_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGroup_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::MoveGroup_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::MoveGroup_Feedback & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_Feedback>()
{
  return "moveit_msgs::action::MoveGroup_Feedback";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_Feedback>()
{
  return "moveit_msgs/action/MoveGroup_Feedback";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "moveit_msgs/action/detail/move_group__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGroup_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGroup_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGroup_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::MoveGroup_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::MoveGroup_SendGoal_Request & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_SendGoal_Request>()
{
  return "moveit_msgs::action::MoveGroup_SendGoal_Request";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_SendGoal_Request>()
{
  return "moveit_msgs/action/MoveGroup_SendGoal_Request";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::MoveGroup_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::MoveGroup_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGroup_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGroup_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGroup_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::MoveGroup_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::MoveGroup_SendGoal_Response & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_SendGoal_Response>()
{
  return "moveit_msgs::action::MoveGroup_SendGoal_Response";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_SendGoal_Response>()
{
  return "moveit_msgs/action/MoveGroup_SendGoal_Response";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGroup_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGroup_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGroup_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::MoveGroup_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::MoveGroup_SendGoal_Event & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_SendGoal_Event>()
{
  return "moveit_msgs::action::MoveGroup_SendGoal_Event";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_SendGoal_Event>()
{
  return "moveit_msgs/action/MoveGroup_SendGoal_Event";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::MoveGroup_SendGoal_Request>::value && has_bounded_size<moveit_msgs::action::MoveGroup_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_SendGoal>()
{
  return "moveit_msgs::action::MoveGroup_SendGoal";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_SendGoal>()
{
  return "moveit_msgs/action/MoveGroup_SendGoal";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::action::MoveGroup_SendGoal_Request>::value &&
    has_fixed_size<moveit_msgs::action::MoveGroup_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::action::MoveGroup_SendGoal_Request>::value &&
    has_bounded_size<moveit_msgs::action::MoveGroup_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::action::MoveGroup_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::action::MoveGroup_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::action::MoveGroup_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGroup_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGroup_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGroup_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::MoveGroup_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::MoveGroup_GetResult_Request & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_GetResult_Request>()
{
  return "moveit_msgs::action::MoveGroup_GetResult_Request";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_GetResult_Request>()
{
  return "moveit_msgs/action/MoveGroup_GetResult_Request";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/move_group__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGroup_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGroup_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGroup_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::MoveGroup_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::MoveGroup_GetResult_Response & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_GetResult_Response>()
{
  return "moveit_msgs::action::MoveGroup_GetResult_Response";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_GetResult_Response>()
{
  return "moveit_msgs/action/MoveGroup_GetResult_Response";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::MoveGroup_Result>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::MoveGroup_Result>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGroup_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGroup_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGroup_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::MoveGroup_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::MoveGroup_GetResult_Event & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_GetResult_Event>()
{
  return "moveit_msgs::action::MoveGroup_GetResult_Event";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_GetResult_Event>()
{
  return "moveit_msgs/action/MoveGroup_GetResult_Event";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::MoveGroup_GetResult_Request>::value && has_bounded_size<moveit_msgs::action::MoveGroup_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_GetResult>()
{
  return "moveit_msgs::action::MoveGroup_GetResult";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_GetResult>()
{
  return "moveit_msgs/action/MoveGroup_GetResult";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::action::MoveGroup_GetResult_Request>::value &&
    has_fixed_size<moveit_msgs::action::MoveGroup_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::action::MoveGroup_GetResult_Request>::value &&
    has_bounded_size<moveit_msgs::action::MoveGroup_GetResult_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::action::MoveGroup_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::action::MoveGroup_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::action::MoveGroup_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/move_group__traits.hpp"

namespace moveit_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGroup_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGroup_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGroup_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::action::MoveGroup_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::action::MoveGroup_FeedbackMessage & msg)
{
  return moveit_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_FeedbackMessage>()
{
  return "moveit_msgs::action::MoveGroup_FeedbackMessage";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_FeedbackMessage>()
{
  return "moveit_msgs/action/MoveGroup_FeedbackMessage";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::MoveGroup_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::MoveGroup_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<moveit_msgs::action::MoveGroup>
  : std::true_type
{
};

template<>
struct is_action_goal<moveit_msgs::action::MoveGroup_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<moveit_msgs::action::MoveGroup_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<moveit_msgs::action::MoveGroup_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP__TRAITS_HPP_
