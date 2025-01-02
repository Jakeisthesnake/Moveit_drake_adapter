// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from moveit_msgs:msg/LinkScale.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__LINK_SCALE__FUNCTIONS_H_
#define MOVEIT_MSGS__MSG__DETAIL__LINK_SCALE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "moveit_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "moveit_msgs/msg/detail/link_scale__struct.h"

/// Initialize msg/LinkScale message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__msg__LinkScale
 * )) before or use
 * moveit_msgs__msg__LinkScale__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__LinkScale__init(moveit_msgs__msg__LinkScale * msg);

/// Finalize msg/LinkScale message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__LinkScale__fini(moveit_msgs__msg__LinkScale * msg);

/// Create msg/LinkScale message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__msg__LinkScale__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__msg__LinkScale *
moveit_msgs__msg__LinkScale__create();

/// Destroy msg/LinkScale message.
/**
 * It calls
 * moveit_msgs__msg__LinkScale__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__LinkScale__destroy(moveit_msgs__msg__LinkScale * msg);

/// Check for msg/LinkScale message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__LinkScale__are_equal(const moveit_msgs__msg__LinkScale * lhs, const moveit_msgs__msg__LinkScale * rhs);

/// Copy a msg/LinkScale message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__LinkScale__copy(
  const moveit_msgs__msg__LinkScale * input,
  moveit_msgs__msg__LinkScale * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__msg__LinkScale__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__msg__LinkScale__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__msg__LinkScale__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__msg__LinkScale__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/LinkScale messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__msg__LinkScale__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__LinkScale__Sequence__init(moveit_msgs__msg__LinkScale__Sequence * array, size_t size);

/// Finalize array of msg/LinkScale messages.
/**
 * It calls
 * moveit_msgs__msg__LinkScale__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__LinkScale__Sequence__fini(moveit_msgs__msg__LinkScale__Sequence * array);

/// Create array of msg/LinkScale messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__msg__LinkScale__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__msg__LinkScale__Sequence *
moveit_msgs__msg__LinkScale__Sequence__create(size_t size);

/// Destroy array of msg/LinkScale messages.
/**
 * It calls
 * moveit_msgs__msg__LinkScale__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__LinkScale__Sequence__destroy(moveit_msgs__msg__LinkScale__Sequence * array);

/// Check for msg/LinkScale message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__LinkScale__Sequence__are_equal(const moveit_msgs__msg__LinkScale__Sequence * lhs, const moveit_msgs__msg__LinkScale__Sequence * rhs);

/// Copy an array of msg/LinkScale messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__LinkScale__Sequence__copy(
  const moveit_msgs__msg__LinkScale__Sequence * input,
  moveit_msgs__msg__LinkScale__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__LINK_SCALE__FUNCTIONS_H_