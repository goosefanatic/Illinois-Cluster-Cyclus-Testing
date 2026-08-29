# Install script for directory: /workspaces/congenial-waddle/cyclus

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/codespace/.local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/congenial-waddle/build/share/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/congenial-waddle/build/src/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/congenial-waddle/build/tests/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/congenial-waddle/build/agents/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/congenial-waddle/build/cli/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/congenial-waddle/build/cmake/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "stubs" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cyclus/stubs" TYPE FILE FILES
    "/workspaces/congenial-waddle/cyclus/stubs/CMakeLists.txt"
    "/workspaces/congenial-waddle/cyclus/stubs/example_facility.xml"
    "/workspaces/congenial-waddle/cyclus/stubs/example_inst.xml"
    "/workspaces/congenial-waddle/cyclus/stubs/example_region.xml"
    "/workspaces/congenial-waddle/cyclus/stubs/install.py"
    "/workspaces/congenial-waddle/cyclus/stubs/README.rst"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "stubs" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cyclus/stubs/src" TYPE FILE FILES
    "/workspaces/congenial-waddle/cyclus/stubs/src/CMakeLists.txt"
    "/workspaces/congenial-waddle/cyclus/stubs/src/stub_facility.h"
    "/workspaces/congenial-waddle/cyclus/stubs/src/stub_facility.cc"
    "/workspaces/congenial-waddle/cyclus/stubs/src/stub_facility_tests.cc"
    "/workspaces/congenial-waddle/cyclus/stubs/src/stub_inst.h"
    "/workspaces/congenial-waddle/cyclus/stubs/src/stub_inst.cc"
    "/workspaces/congenial-waddle/cyclus/stubs/src/stub_inst_tests.cc"
    "/workspaces/congenial-waddle/cyclus/stubs/src/stub_region.h"
    "/workspaces/congenial-waddle/cyclus/stubs/src/stub_region.cc"
    "/workspaces/congenial-waddle/cyclus/stubs/src/stub_region_tests.cc"
    "/workspaces/congenial-waddle/cyclus/stubs/src/stub_unit_test_driver.cc"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/workspaces/congenial-waddle/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
