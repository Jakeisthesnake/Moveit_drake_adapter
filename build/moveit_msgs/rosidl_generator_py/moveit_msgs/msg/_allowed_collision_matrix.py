# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AllowedCollisionMatrix(type):
    """Metaclass of message 'AllowedCollisionMatrix'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.msg.AllowedCollisionMatrix')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__allowed_collision_matrix
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__allowed_collision_matrix
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__allowed_collision_matrix
            cls._TYPE_SUPPORT = module.type_support_msg__msg__allowed_collision_matrix
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__allowed_collision_matrix

            from moveit_msgs.msg import AllowedCollisionEntry
            if AllowedCollisionEntry.__class__._TYPE_SUPPORT is None:
                AllowedCollisionEntry.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AllowedCollisionMatrix(metaclass=Metaclass_AllowedCollisionMatrix):
    """Message class 'AllowedCollisionMatrix'."""

    __slots__ = [
        '_entry_names',
        '_entry_values',
        '_default_entry_names',
        '_default_entry_values',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'entry_names': 'sequence<string>',
        'entry_values': 'sequence<moveit_msgs/AllowedCollisionEntry>',
        'default_entry_names': 'sequence<string>',
        'default_entry_values': 'sequence<boolean>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'AllowedCollisionEntry')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.entry_names = kwargs.get('entry_names', [])
        self.entry_values = kwargs.get('entry_values', [])
        self.default_entry_names = kwargs.get('default_entry_names', [])
        self.default_entry_values = kwargs.get('default_entry_values', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.entry_names != other.entry_names:
            return False
        if self.entry_values != other.entry_values:
            return False
        if self.default_entry_names != other.default_entry_names:
            return False
        if self.default_entry_values != other.default_entry_values:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def entry_names(self):
        """Message field 'entry_names'."""
        return self._entry_names

    @entry_names.setter
    def entry_names(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'entry_names' field must be a set or sequence and each value of type 'str'"
        self._entry_names = value

    @builtins.property
    def entry_values(self):
        """Message field 'entry_values'."""
        return self._entry_values

    @entry_values.setter
    def entry_values(self, value):
        if self._check_fields:
            from moveit_msgs.msg import AllowedCollisionEntry
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, AllowedCollisionEntry) for v in value) and
                 True), \
                "The 'entry_values' field must be a set or sequence and each value of type 'AllowedCollisionEntry'"
        self._entry_values = value

    @builtins.property
    def default_entry_names(self):
        """Message field 'default_entry_names'."""
        return self._default_entry_names

    @default_entry_names.setter
    def default_entry_names(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'default_entry_names' field must be a set or sequence and each value of type 'str'"
        self._default_entry_names = value

    @builtins.property
    def default_entry_values(self):
        """Message field 'default_entry_values'."""
        return self._default_entry_values

    @default_entry_values.setter
    def default_entry_values(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'default_entry_values' field must be a set or sequence and each value of type 'bool'"
        self._default_entry_values = value
