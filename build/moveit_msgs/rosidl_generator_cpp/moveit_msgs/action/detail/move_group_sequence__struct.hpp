// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:action/MoveGroupSequence.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP_SEQUENCE__STRUCT_HPP_
#define MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP_SEQUENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request'
#include "moveit_msgs/msg/detail/motion_sequence_request__struct.hpp"
// Member 'planning_options'
#include "moveit_msgs/msg/detail/planning_options__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_Goal __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_Goal __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGroupSequence_Goal_
{
  using Type = MoveGroupSequence_Goal_<ContainerAllocator>;

  explicit MoveGroupSequence_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init),
    planning_options(_init)
  {
    (void)_init;
  }

  explicit MoveGroupSequence_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init),
    planning_options(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator>;
  _request_type request;
  using _planning_options_type =
    moveit_msgs::msg::PlanningOptions_<ContainerAllocator>;
  _planning_options_type planning_options;

  // setters for named parameter idiom
  Type & set__request(
    const moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__planning_options(
    const moveit_msgs::msg::PlanningOptions_<ContainerAllocator> & _arg)
  {
    this->planning_options = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_Goal
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_Goal
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGroupSequence_Goal_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    if (this->planning_options != other.planning_options) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGroupSequence_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGroupSequence_Goal_

// alias to use template instance with default allocator
using MoveGroupSequence_Goal =
  moveit_msgs::action::MoveGroupSequence_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'response'
#include "moveit_msgs/msg/detail/motion_sequence_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_Result __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_Result __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGroupSequence_Result_
{
  using Type = MoveGroupSequence_Result_<ContainerAllocator>;

  explicit MoveGroupSequence_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit MoveGroupSequence_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_Result
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_Result
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGroupSequence_Result_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGroupSequence_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGroupSequence_Result_

// alias to use template instance with default allocator
using MoveGroupSequence_Result =
  moveit_msgs::action::MoveGroupSequence_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_Feedback __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGroupSequence_Feedback_
{
  using Type = MoveGroupSequence_Feedback_<ContainerAllocator>;

  explicit MoveGroupSequence_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  explicit MoveGroupSequence_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_Feedback
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_Feedback
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGroupSequence_Feedback_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGroupSequence_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGroupSequence_Feedback_

// alias to use template instance with default allocator
using MoveGroupSequence_Feedback =
  moveit_msgs::action::MoveGroupSequence_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_SendGoal_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGroupSequence_SendGoal_Request_
{
  using Type = MoveGroupSequence_SendGoal_Request_<ContainerAllocator>;

  explicit MoveGroupSequence_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveGroupSequence_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const moveit_msgs::action::MoveGroupSequence_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_SendGoal_Request
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_SendGoal_Request
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGroupSequence_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGroupSequence_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGroupSequence_SendGoal_Request_

// alias to use template instance with default allocator
using MoveGroupSequence_SendGoal_Request =
  moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_SendGoal_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGroupSequence_SendGoal_Response_
{
  using Type = MoveGroupSequence_SendGoal_Response_<ContainerAllocator>;

  explicit MoveGroupSequence_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveGroupSequence_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_SendGoal_Response
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_SendGoal_Response
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGroupSequence_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGroupSequence_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGroupSequence_SendGoal_Response_

// alias to use template instance with default allocator
using MoveGroupSequence_SendGoal_Response =
  moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_SendGoal_Event __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGroupSequence_SendGoal_Event_
{
  using Type = MoveGroupSequence_SendGoal_Event_<ContainerAllocator>;

  explicit MoveGroupSequence_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MoveGroupSequence_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::action::MoveGroupSequence_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::action::MoveGroupSequence_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::MoveGroupSequence_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::MoveGroupSequence_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_SendGoal_Event
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_SendGoal_Event
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGroupSequence_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGroupSequence_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGroupSequence_SendGoal_Event_

// alias to use template instance with default allocator
using MoveGroupSequence_SendGoal_Event =
  moveit_msgs::action::MoveGroupSequence_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace action
{

struct MoveGroupSequence_SendGoal
{
  using Request = moveit_msgs::action::MoveGroupSequence_SendGoal_Request;
  using Response = moveit_msgs::action::MoveGroupSequence_SendGoal_Response;
  using Event = moveit_msgs::action::MoveGroupSequence_SendGoal_Event;
};

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_GetResult_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGroupSequence_GetResult_Request_
{
  using Type = MoveGroupSequence_GetResult_Request_<ContainerAllocator>;

  explicit MoveGroupSequence_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveGroupSequence_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_GetResult_Request
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_GetResult_Request
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGroupSequence_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGroupSequence_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGroupSequence_GetResult_Request_

// alias to use template instance with default allocator
using MoveGroupSequence_GetResult_Request =
  moveit_msgs::action::MoveGroupSequence_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_GetResult_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGroupSequence_GetResult_Response_
{
  using Type = MoveGroupSequence_GetResult_Response_<ContainerAllocator>;

  explicit MoveGroupSequence_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveGroupSequence_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const moveit_msgs::action::MoveGroupSequence_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_GetResult_Response
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_GetResult_Response
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGroupSequence_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGroupSequence_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGroupSequence_GetResult_Response_

// alias to use template instance with default allocator
using MoveGroupSequence_GetResult_Response =
  moveit_msgs::action::MoveGroupSequence_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_GetResult_Event __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGroupSequence_GetResult_Event_
{
  using Type = MoveGroupSequence_GetResult_Event_<ContainerAllocator>;

  explicit MoveGroupSequence_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MoveGroupSequence_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::action::MoveGroupSequence_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::action::MoveGroupSequence_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::MoveGroupSequence_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::MoveGroupSequence_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_GetResult_Event
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_GetResult_Event
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGroupSequence_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGroupSequence_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGroupSequence_GetResult_Event_

// alias to use template instance with default allocator
using MoveGroupSequence_GetResult_Event =
  moveit_msgs::action::MoveGroupSequence_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace action
{

struct MoveGroupSequence_GetResult
{
  using Request = moveit_msgs::action::MoveGroupSequence_GetResult_Request;
  using Response = moveit_msgs::action::MoveGroupSequence_GetResult_Response;
  using Event = moveit_msgs::action::MoveGroupSequence_GetResult_Event;
};

}  // namespace action

}  // namespace moveit_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__action__MoveGroupSequence_FeedbackMessage __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGroupSequence_FeedbackMessage_
{
  using Type = MoveGroupSequence_FeedbackMessage_<ContainerAllocator>;

  explicit MoveGroupSequence_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveGroupSequence_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const moveit_msgs::action::MoveGroupSequence_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::action::MoveGroupSequence_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::action::MoveGroupSequence_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::action::MoveGroupSequence_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::action::MoveGroupSequence_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::action::MoveGroupSequence_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_FeedbackMessage
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__action__MoveGroupSequence_FeedbackMessage
    std::shared_ptr<moveit_msgs::action::MoveGroupSequence_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGroupSequence_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGroupSequence_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGroupSequence_FeedbackMessage_

// alias to use template instance with default allocator
using MoveGroupSequence_FeedbackMessage =
  moveit_msgs::action::MoveGroupSequence_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace moveit_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace moveit_msgs
{

namespace action
{

struct MoveGroupSequence
{
  /// The goal message defined in the action definition.
  using Goal = moveit_msgs::action::MoveGroupSequence_Goal;
  /// The result message defined in the action definition.
  using Result = moveit_msgs::action::MoveGroupSequence_Result;
  /// The feedback message defined in the action definition.
  using Feedback = moveit_msgs::action::MoveGroupSequence_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = moveit_msgs::action::MoveGroupSequence_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = moveit_msgs::action::MoveGroupSequence_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = moveit_msgs::action::MoveGroupSequence_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveGroupSequence MoveGroupSequence;

}  // namespace action

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP_SEQUENCE__STRUCT_HPP_