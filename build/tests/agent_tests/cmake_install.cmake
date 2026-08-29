# Install script for directory: /workspaces/congenial-waddle/cyclus/tests/agent_tests

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cyclus" TYPE FILE FILES
    "/workspaces/congenial-waddle/cyclus/tests/agent_tests/agent_tests.h"
    "/workspaces/congenial-waddle/cyclus/tests/agent_tests/facility_tests.h"
    "/workspaces/congenial-waddle/cyclus/tests/agent_tests/institution_tests.h"
    "/workspaces/congenial-waddle/cyclus/tests/agent_tests/region_tests.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "testing" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libbaseagentunittests.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libbaseagentunittests.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libbaseagentunittests.so"
         RPATH "/home/codespace/.local/lib/cyclus:/usr/lib/x86_64-linux-gnu/hdf5/serial")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cyclus" TYPE SHARED_LIBRARY FILES "/workspaces/congenial-waddle/build/lib/libbaseagentunittests.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libbaseagentunittests.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libbaseagentunittests.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libbaseagentunittests.so"
         OLD_RPATH "/usr/lib/x86_64-linux-gnu/hdf5/serial:/workspaces/congenial-waddle/build/lib:"
         NEW_RPATH "/home/codespace/.local/lib/cyclus:/usr/lib/x86_64-linux-gnu/hdf5/serial")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/libbaseagentunittests.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "testing" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

