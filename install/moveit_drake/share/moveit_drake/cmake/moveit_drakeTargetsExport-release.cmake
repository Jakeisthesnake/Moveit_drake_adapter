#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_drake::moveit_drake" for configuration "Release"
set_property(TARGET moveit_drake::moveit_drake APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_drake::moveit_drake PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_drake.so"
  IMPORTED_SONAME_RELEASE "libmoveit_drake.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_drake::moveit_drake )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_drake::moveit_drake "${_IMPORT_PREFIX}/lib/libmoveit_drake.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
