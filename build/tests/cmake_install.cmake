# Install script for directory: /workspaces/congenial-waddle/cyclus/tests

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
  include("/workspaces/congenial-waddle/build/_deps/googletest-build/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "testing" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libgtest.so.1.14.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libgtest.so.1.14.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libgtest.so.1.14.0"
         RPATH "/home/codespace/.local/lib/cyclus")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cyclus" TYPE SHARED_LIBRARY FILES "/workspaces/congenial-waddle/build/lib/libgtest.so.1.14.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libgtest.so.1.14.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libgtest.so.1.14.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libgtest.so.1.14.0"
         OLD_RPATH ":::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/codespace/.local/lib/cyclus")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libgtest.so.1.14.0")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "testing" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cyclus" TYPE SHARED_LIBRARY FILES "/workspaces/congenial-waddle/build/lib/libgtest.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "testing" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cyclus" TYPE DIRECTORY FILES "/workspaces/congenial-waddle/build/_deps/googletest-src/googletest/include/gtest")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "testing" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cyclus" TYPE FILE FILES
    "/workspaces/congenial-waddle/cyclus/tests/cycpp_tests.h"
    "/workspaces/congenial-waddle/cyclus/tests/equality_helpers.h"
    "/workspaces/congenial-waddle/cyclus/tests/exchange_test_cases.h"
    "/workspaces/congenial-waddle/cyclus/tests/infile_tree_tests.h"
    "/workspaces/congenial-waddle/cyclus/tests/material_tests.h"
    "/workspaces/congenial-waddle/cyclus/tests/resource_helpers.h"
    "/workspaces/congenial-waddle/cyclus/tests/solver_tests.h"
    "/workspaces/congenial-waddle/cyclus/tests/test_context.h"
    "/workspaces/congenial-waddle/cyclus/tests/test_trader.h"
    "/workspaces/congenial-waddle/cyclus/tests/tools.h"
    "/workspaces/congenial-waddle/cyclus/tests/xml_file_loader_tests.h"
    "/workspaces/congenial-waddle/cyclus/tests/xml_parser_tests.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/congenial-waddle/build/tests/input/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/congenial-waddle/build/tests/toolkit/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/congenial-waddle/build/tests/agent_tests/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/congenial-waddle/build/tests/test_agents/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "testing" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cyclus/test_agents" TYPE FILE FILES
    "/workspaces/congenial-waddle/cyclus/tests/test_agents/test_agent.h"
    "/workspaces/congenial-waddle/cyclus/tests/test_agents/test_facility.h"
    "/workspaces/congenial-waddle/cyclus/tests/test_agents/test_inst.h"
    "/workspaces/congenial-waddle/cyclus/tests/test_agents/test_positionfac.h"
    "/workspaces/congenial-waddle/cyclus/tests/test_agents/test_region.h"
    )
endif()

