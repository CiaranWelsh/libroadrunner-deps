#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "LibXml2LibXml2" for configuration "Release"
set_property(TARGET LibXml2LibXml2 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LibXml2LibXml2 PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C;RC"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libxml2s.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS LibXml2LibXml2 )
list(APPEND _IMPORT_CHECK_FILES_FOR_LibXml2LibXml2 "${_IMPORT_PREFIX}/lib/libxml2s.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
