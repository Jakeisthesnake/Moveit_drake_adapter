// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/ApplyPlanningScene.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/apply_planning_scene__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `scene`
#include "moveit_msgs/msg/detail/planning_scene__functions.h"

bool
moveit_msgs__srv__ApplyPlanningScene_Request__init(moveit_msgs__srv__ApplyPlanningScene_Request * msg)
{
  if (!msg) {
    return false;
  }
  // scene
  if (!moveit_msgs__msg__PlanningScene__init(&msg->scene)) {
    moveit_msgs__srv__ApplyPlanningScene_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__ApplyPlanningScene_Request__fini(moveit_msgs__srv__ApplyPlanningScene_Request * msg)
{
  if (!msg) {
    return;
  }
  // scene
  moveit_msgs__msg__PlanningScene__fini(&msg->scene);
}

bool
moveit_msgs__srv__ApplyPlanningScene_Request__are_equal(const moveit_msgs__srv__ApplyPlanningScene_Request * lhs, const moveit_msgs__srv__ApplyPlanningScene_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // scene
  if (!moveit_msgs__msg__PlanningScene__are_equal(
      &(lhs->scene), &(rhs->scene)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__ApplyPlanningScene_Request__copy(
  const moveit_msgs__srv__ApplyPlanningScene_Request * input,
  moveit_msgs__srv__ApplyPlanningScene_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // scene
  if (!moveit_msgs__msg__PlanningScene__copy(
      &(input->scene), &(output->scene)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__ApplyPlanningScene_Request *
moveit_msgs__srv__ApplyPlanningScene_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ApplyPlanningScene_Request * msg = (moveit_msgs__srv__ApplyPlanningScene_Request *)allocator.allocate(sizeof(moveit_msgs__srv__ApplyPlanningScene_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__ApplyPlanningScene_Request));
  bool success = moveit_msgs__srv__ApplyPlanningScene_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__ApplyPlanningScene_Request__destroy(moveit_msgs__srv__ApplyPlanningScene_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__srv__ApplyPlanningScene_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__srv__ApplyPlanningScene_Request__Sequence__init(moveit_msgs__srv__ApplyPlanningScene_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ApplyPlanningScene_Request * data = NULL;

  if (size) {
    data = (moveit_msgs__srv__ApplyPlanningScene_Request *)allocator.zero_allocate(size, sizeof(moveit_msgs__srv__ApplyPlanningScene_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__ApplyPlanningScene_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__ApplyPlanningScene_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__srv__ApplyPlanningScene_Request__Sequence__fini(moveit_msgs__srv__ApplyPlanningScene_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__ApplyPlanningScene_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__srv__ApplyPlanningScene_Request__Sequence *
moveit_msgs__srv__ApplyPlanningScene_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ApplyPlanningScene_Request__Sequence * array = (moveit_msgs__srv__ApplyPlanningScene_Request__Sequence *)allocator.allocate(sizeof(moveit_msgs__srv__ApplyPlanningScene_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__ApplyPlanningScene_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__ApplyPlanningScene_Request__Sequence__destroy(moveit_msgs__srv__ApplyPlanningScene_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__srv__ApplyPlanningScene_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__srv__ApplyPlanningScene_Request__Sequence__are_equal(const moveit_msgs__srv__ApplyPlanningScene_Request__Sequence * lhs, const moveit_msgs__srv__ApplyPlanningScene_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__ApplyPlanningScene_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__ApplyPlanningScene_Request__Sequence__copy(
  const moveit_msgs__srv__ApplyPlanningScene_Request__Sequence * input,
  moveit_msgs__srv__ApplyPlanningScene_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__ApplyPlanningScene_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__srv__ApplyPlanningScene_Request * data =
      (moveit_msgs__srv__ApplyPlanningScene_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__ApplyPlanningScene_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__ApplyPlanningScene_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__srv__ApplyPlanningScene_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
moveit_msgs__srv__ApplyPlanningScene_Response__init(moveit_msgs__srv__ApplyPlanningScene_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
moveit_msgs__srv__ApplyPlanningScene_Response__fini(moveit_msgs__srv__ApplyPlanningScene_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
moveit_msgs__srv__ApplyPlanningScene_Response__are_equal(const moveit_msgs__srv__ApplyPlanningScene_Response * lhs, const moveit_msgs__srv__ApplyPlanningScene_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__ApplyPlanningScene_Response__copy(
  const moveit_msgs__srv__ApplyPlanningScene_Response * input,
  moveit_msgs__srv__ApplyPlanningScene_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

moveit_msgs__srv__ApplyPlanningScene_Response *
moveit_msgs__srv__ApplyPlanningScene_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ApplyPlanningScene_Response * msg = (moveit_msgs__srv__ApplyPlanningScene_Response *)allocator.allocate(sizeof(moveit_msgs__srv__ApplyPlanningScene_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__ApplyPlanningScene_Response));
  bool success = moveit_msgs__srv__ApplyPlanningScene_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__ApplyPlanningScene_Response__destroy(moveit_msgs__srv__ApplyPlanningScene_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__srv__ApplyPlanningScene_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__srv__ApplyPlanningScene_Response__Sequence__init(moveit_msgs__srv__ApplyPlanningScene_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ApplyPlanningScene_Response * data = NULL;

  if (size) {
    data = (moveit_msgs__srv__ApplyPlanningScene_Response *)allocator.zero_allocate(size, sizeof(moveit_msgs__srv__ApplyPlanningScene_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__ApplyPlanningScene_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__ApplyPlanningScene_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__srv__ApplyPlanningScene_Response__Sequence__fini(moveit_msgs__srv__ApplyPlanningScene_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__ApplyPlanningScene_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__srv__ApplyPlanningScene_Response__Sequence *
moveit_msgs__srv__ApplyPlanningScene_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ApplyPlanningScene_Response__Sequence * array = (moveit_msgs__srv__ApplyPlanningScene_Response__Sequence *)allocator.allocate(sizeof(moveit_msgs__srv__ApplyPlanningScene_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__ApplyPlanningScene_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__ApplyPlanningScene_Response__Sequence__destroy(moveit_msgs__srv__ApplyPlanningScene_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__srv__ApplyPlanningScene_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__srv__ApplyPlanningScene_Response__Sequence__are_equal(const moveit_msgs__srv__ApplyPlanningScene_Response__Sequence * lhs, const moveit_msgs__srv__ApplyPlanningScene_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__ApplyPlanningScene_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__ApplyPlanningScene_Response__Sequence__copy(
  const moveit_msgs__srv__ApplyPlanningScene_Response__Sequence * input,
  moveit_msgs__srv__ApplyPlanningScene_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__ApplyPlanningScene_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__srv__ApplyPlanningScene_Response * data =
      (moveit_msgs__srv__ApplyPlanningScene_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__ApplyPlanningScene_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__ApplyPlanningScene_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__srv__ApplyPlanningScene_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "moveit_msgs/srv/detail/apply_planning_scene__functions.h"

bool
moveit_msgs__srv__ApplyPlanningScene_Event__init(moveit_msgs__srv__ApplyPlanningScene_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    moveit_msgs__srv__ApplyPlanningScene_Event__fini(msg);
    return false;
  }
  // request
  if (!moveit_msgs__srv__ApplyPlanningScene_Request__Sequence__init(&msg->request, 0)) {
    moveit_msgs__srv__ApplyPlanningScene_Event__fini(msg);
    return false;
  }
  // response
  if (!moveit_msgs__srv__ApplyPlanningScene_Response__Sequence__init(&msg->response, 0)) {
    moveit_msgs__srv__ApplyPlanningScene_Event__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__ApplyPlanningScene_Event__fini(moveit_msgs__srv__ApplyPlanningScene_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  moveit_msgs__srv__ApplyPlanningScene_Request__Sequence__fini(&msg->request);
  // response
  moveit_msgs__srv__ApplyPlanningScene_Response__Sequence__fini(&msg->response);
}

bool
moveit_msgs__srv__ApplyPlanningScene_Event__are_equal(const moveit_msgs__srv__ApplyPlanningScene_Event * lhs, const moveit_msgs__srv__ApplyPlanningScene_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!moveit_msgs__srv__ApplyPlanningScene_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!moveit_msgs__srv__ApplyPlanningScene_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__ApplyPlanningScene_Event__copy(
  const moveit_msgs__srv__ApplyPlanningScene_Event * input,
  moveit_msgs__srv__ApplyPlanningScene_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!moveit_msgs__srv__ApplyPlanningScene_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!moveit_msgs__srv__ApplyPlanningScene_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__ApplyPlanningScene_Event *
moveit_msgs__srv__ApplyPlanningScene_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ApplyPlanningScene_Event * msg = (moveit_msgs__srv__ApplyPlanningScene_Event *)allocator.allocate(sizeof(moveit_msgs__srv__ApplyPlanningScene_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__ApplyPlanningScene_Event));
  bool success = moveit_msgs__srv__ApplyPlanningScene_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__ApplyPlanningScene_Event__destroy(moveit_msgs__srv__ApplyPlanningScene_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__srv__ApplyPlanningScene_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__srv__ApplyPlanningScene_Event__Sequence__init(moveit_msgs__srv__ApplyPlanningScene_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ApplyPlanningScene_Event * data = NULL;

  if (size) {
    data = (moveit_msgs__srv__ApplyPlanningScene_Event *)allocator.zero_allocate(size, sizeof(moveit_msgs__srv__ApplyPlanningScene_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__ApplyPlanningScene_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__ApplyPlanningScene_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__srv__ApplyPlanningScene_Event__Sequence__fini(moveit_msgs__srv__ApplyPlanningScene_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__ApplyPlanningScene_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__srv__ApplyPlanningScene_Event__Sequence *
moveit_msgs__srv__ApplyPlanningScene_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ApplyPlanningScene_Event__Sequence * array = (moveit_msgs__srv__ApplyPlanningScene_Event__Sequence *)allocator.allocate(sizeof(moveit_msgs__srv__ApplyPlanningScene_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__ApplyPlanningScene_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__ApplyPlanningScene_Event__Sequence__destroy(moveit_msgs__srv__ApplyPlanningScene_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__srv__ApplyPlanningScene_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__srv__ApplyPlanningScene_Event__Sequence__are_equal(const moveit_msgs__srv__ApplyPlanningScene_Event__Sequence * lhs, const moveit_msgs__srv__ApplyPlanningScene_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__ApplyPlanningScene_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__ApplyPlanningScene_Event__Sequence__copy(
  const moveit_msgs__srv__ApplyPlanningScene_Event__Sequence * input,
  moveit_msgs__srv__ApplyPlanningScene_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__ApplyPlanningScene_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__srv__ApplyPlanningScene_Event * data =
      (moveit_msgs__srv__ApplyPlanningScene_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__ApplyPlanningScene_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__ApplyPlanningScene_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__srv__ApplyPlanningScene_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
