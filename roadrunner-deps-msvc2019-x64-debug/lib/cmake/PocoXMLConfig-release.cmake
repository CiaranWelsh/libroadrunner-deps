#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "PocoXML::PocoXML" for configuration "Release"
set_property(TARGET PocoXML::PocoXML APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(PocoXML::PocoXML PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C;CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/PocoXML.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS PocoXML::PocoXML )
list(APPEND _IMPORT_CHECK_FILES_FOR_PocoXML::PocoXML "${_IMPORT_PREFIX}/lib/PocoXML.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
