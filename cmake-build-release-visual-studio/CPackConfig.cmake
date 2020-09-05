# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BINARY_7Z "OFF")
set(CPACK_BINARY_IFW "OFF")
set(CPACK_BINARY_NSIS "ON")
set(CPACK_BINARY_NUGET "OFF")
set(CPACK_BINARY_WIX "OFF")
set(CPACK_BINARY_ZIP "OFF")
set(CPACK_BUILD_SOURCE_DIRS "D:/rrbuild/libroadrunner-deps;D:/rrbuild/libroadrunner-deps/cmake-build-release-visual-studio")
set(CPACK_CMAKE_GENERATOR "NMake Makefiles")
set(CPACK_COMPONENTS_ALL "Development;Runtime;Unspecified;development;documentation")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "amd64")
set(CPACK_DEBIAN_PACKAGE_SECTION "Libraries")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "D:/cmake/cmake-3.18.1-win64-x64/share/cmake-3.18/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "libroadrunner_deps built using CMake")
set(CPACK_GENERATOR "NSIS")
set(CPACK_INSTALL_CMAKE_PROJECTS "D:/rrbuild/libroadrunner-deps/cmake-build-release-visual-studio;libroadrunner_deps;ALL;/")
set(CPACK_INSTALL_PREFIX "D:/rrbuild/libroadrunner-deps/install-MSVC2019/Release")
set(CPACK_MODULE_PATH "")
set(CPACK_NSIS_DISPLAY_NAME "libSBML 5.18.1")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES64")
set(CPACK_NSIS_PACKAGE_NAME "libSBML 5.18.1")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OUTPUT_CONFIG_FILE "D:/rrbuild/libroadrunner-deps/cmake-build-release-visual-studio/CPackConfig.cmake")
set(CPACK_PACKAGE_CONTACT "LibSBML Team <libsbml-team@googlegroups.com>")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "D:/rrbuild/libroadrunner-deps/third_party/libSBML-5.18.1-experimental-Source/README.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "An API library for reading/writing/manipulating SBML.")
set(CPACK_PACKAGE_FILE_NAME "libSBML-5.18.1-win64")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "libSBML 5.18.1")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "libSBML 5.18.1")
set(CPACK_PACKAGE_NAME "libSBML")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "The libSBML Team")
set(CPACK_PACKAGE_VERSION "5.18.1")
set(CPACK_PACKAGE_VERSION_MAJOR "5")
set(CPACK_PACKAGE_VERSION_MINOR "18")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(CPACK_RESOURCE_FILE_LICENSE "D:/rrbuild/libroadrunner-deps/third_party/libSBML-5.18.1-experimental-Source/COPYING.txt")
set(CPACK_RESOURCE_FILE_README "D:/cmake/cmake-3.18.1-win64-x64/share/cmake-3.18/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "D:/cmake/cmake-3.18.1-win64-x64/share/cmake-3.18/Templates/CPack.GenericWelcome.txt")
set(CPACK_RPM_PACKAGE_ARCHITECTURE "x86_64")
set(CPACK_RPM_PACKAGE_GROUP "Libraries/Development")
set(CPACK_RPM_PACKAGE_LICENSE "LGPL")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_7Z "ON")
set(CPACK_SOURCE_GENERATOR "7Z;ZIP")
set(CPACK_SOURCE_IGNORE_FILES "D:/rrbuild/libroadrunner-deps/cmake-build-release-visual-studio/third_party/libSBML-5.18.1-experimental-Source;/.vs/;/.vscode/;/.svn/;/.libs/;/.deps/;/.bzr/;.*.o$;.*.lo$;.*.la$;;/.DS_Store;/.svnignore;blib;libsbml-dist")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "D:/rrbuild/libroadrunner-deps/cmake-build-release-visual-studio/CPackSourceConfig.cmake")
set(CPACK_SOURCE_ZIP "ON")
set(CPACK_SYSTEM_NAME "win64")
set(CPACK_TOPLEVEL_TAG "win64")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "D:/rrbuild/libroadrunner-deps/cmake-build-release-visual-studio/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
