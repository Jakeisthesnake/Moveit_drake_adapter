// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from moveit_msgs:srv/ListRobotStatesInWarehouse.idl
// generated code does not contain a copyright notice

#include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__ListRobotStatesInWarehouse__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe1, 0x13, 0xaf, 0xb9, 0x2b, 0x6c, 0x74, 0x8e,
      0x84, 0xae, 0xc9, 0xdc, 0x2e, 0x27, 0xa1, 0xf3,
      0xf0, 0xb7, 0xf1, 0x3d, 0x12, 0xed, 0x54, 0xdd,
      0x12, 0xad, 0x36, 0x76, 0x7f, 0x68, 0xf3, 0xdc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0x56, 0xbf, 0xfd, 0xd0, 0x38, 0xa2, 0x4c,
      0x9c, 0x96, 0xdb, 0x06, 0x96, 0x60, 0x2f, 0xb8,
      0xb6, 0x38, 0xe8, 0x4f, 0x83, 0x8d, 0x80, 0x99,
      0x7c, 0xaa, 0xca, 0xf2, 0x51, 0xba, 0x0b, 0x53,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1a, 0x87, 0xe6, 0x1f, 0x32, 0x08, 0x13, 0x9a,
      0xff, 0xcc, 0x02, 0xa8, 0x73, 0x90, 0x26, 0x0b,
      0x2b, 0x40, 0xb8, 0xf3, 0xcb, 0x4b, 0xe5, 0x19,
      0x1d, 0x05, 0xaa, 0xc6, 0x55, 0x96, 0x56, 0x93,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__ListRobotStatesInWarehouse_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0xe4, 0x68, 0x77, 0x4f, 0x22, 0xda, 0xa9,
      0x4f, 0x6e, 0x78, 0xb2, 0x63, 0x3c, 0x6b, 0x9d,
      0x70, 0xd0, 0x7a, 0xb1, 0x49, 0x83, 0x99, 0xe6,
      0x33, 0xe8, 0x4b, 0x38, 0xad, 0x5b, 0x3d, 0x34,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char moveit_msgs__srv__ListRobotStatesInWarehouse__TYPE_NAME[] = "moveit_msgs/srv/ListRobotStatesInWarehouse";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char moveit_msgs__srv__ListRobotStatesInWarehouse_Event__TYPE_NAME[] = "moveit_msgs/srv/ListRobotStatesInWarehouse_Event";
static char moveit_msgs__srv__ListRobotStatesInWarehouse_Request__TYPE_NAME[] = "moveit_msgs/srv/ListRobotStatesInWarehouse_Request";
static char moveit_msgs__srv__ListRobotStatesInWarehouse_Response__TYPE_NAME[] = "moveit_msgs/srv/ListRobotStatesInWarehouse_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char moveit_msgs__srv__ListRobotStatesInWarehouse__FIELD_NAME__request_message[] = "request_message";
static char moveit_msgs__srv__ListRobotStatesInWarehouse__FIELD_NAME__response_message[] = "response_message";
static char moveit_msgs__srv__ListRobotStatesInWarehouse__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__ListRobotStatesInWarehouse__FIELDS[] = {
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__ListRobotStatesInWarehouse_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__ListRobotStatesInWarehouse_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__ListRobotStatesInWarehouse_Event__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_msgs__srv__ListRobotStatesInWarehouse__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Event__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__ListRobotStatesInWarehouse__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__ListRobotStatesInWarehouse__TYPE_NAME, 42, 42},
      {moveit_msgs__srv__ListRobotStatesInWarehouse__FIELDS, 3, 3},
    },
    {moveit_msgs__srv__ListRobotStatesInWarehouse__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = moveit_msgs__srv__ListRobotStatesInWarehouse_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = moveit_msgs__srv__ListRobotStatesInWarehouse_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = moveit_msgs__srv__ListRobotStatesInWarehouse_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__ListRobotStatesInWarehouse_Request__FIELD_NAME__regex[] = "regex";
static char moveit_msgs__srv__ListRobotStatesInWarehouse_Request__FIELD_NAME__robot[] = "robot";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__ListRobotStatesInWarehouse_Request__FIELDS[] = {
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Request__FIELD_NAME__regex, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Request__FIELD_NAME__robot, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__ListRobotStatesInWarehouse_Request__TYPE_NAME, 50, 50},
      {moveit_msgs__srv__ListRobotStatesInWarehouse_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__ListRobotStatesInWarehouse_Response__FIELD_NAME__states[] = "states";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__ListRobotStatesInWarehouse_Response__FIELDS[] = {
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Response__FIELD_NAME__states, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__ListRobotStatesInWarehouse_Response__TYPE_NAME, 51, 51},
      {moveit_msgs__srv__ListRobotStatesInWarehouse_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__ListRobotStatesInWarehouse_Event__FIELD_NAME__info[] = "info";
static char moveit_msgs__srv__ListRobotStatesInWarehouse_Event__FIELD_NAME__request[] = "request";
static char moveit_msgs__srv__ListRobotStatesInWarehouse_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__ListRobotStatesInWarehouse_Event__FIELDS[] = {
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {moveit_msgs__srv__ListRobotStatesInWarehouse_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {moveit_msgs__srv__ListRobotStatesInWarehouse_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_msgs__srv__ListRobotStatesInWarehouse_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__ListRobotStatesInWarehouse_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__ListRobotStatesInWarehouse_Event__TYPE_NAME, 48, 48},
      {moveit_msgs__srv__ListRobotStatesInWarehouse_Event__FIELDS, 3, 3},
    },
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = moveit_msgs__srv__ListRobotStatesInWarehouse_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = moveit_msgs__srv__ListRobotStatesInWarehouse_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string regex\n"
  "string robot\n"
  "\n"
  "---\n"
  "\n"
  "string[] states";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__ListRobotStatesInWarehouse__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__ListRobotStatesInWarehouse__TYPE_NAME, 42, 42},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Request__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Response__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__ListRobotStatesInWarehouse_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__ListRobotStatesInWarehouse_Event__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__ListRobotStatesInWarehouse__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__ListRobotStatesInWarehouse__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *moveit_msgs__srv__ListRobotStatesInWarehouse_Event__get_individual_type_description_source(NULL);
    sources[3] = *moveit_msgs__srv__ListRobotStatesInWarehouse_Request__get_individual_type_description_source(NULL);
    sources[4] = *moveit_msgs__srv__ListRobotStatesInWarehouse_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__ListRobotStatesInWarehouse_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__ListRobotStatesInWarehouse_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__ListRobotStatesInWarehouse_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__ListRobotStatesInWarehouse_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *moveit_msgs__srv__ListRobotStatesInWarehouse_Request__get_individual_type_description_source(NULL);
    sources[3] = *moveit_msgs__srv__ListRobotStatesInWarehouse_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}