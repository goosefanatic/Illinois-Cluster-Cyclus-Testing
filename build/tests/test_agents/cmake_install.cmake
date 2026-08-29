# Install script for directory: /workspaces/congenial-waddle/cyclus/tests/test_agents

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "TestAgent" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestAgent.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestAgent.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestAgent.so"
         RPATH "/home/codespace/.local/lib:/home/codespace/.local/lib/cyclus:/usr/lib:/usr/lib/cyclus:/usr/lib/x86_64-linux-gnu/hdf5/serial")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests" TYPE SHARED_LIBRARY FILES "/workspaces/congenial-waddle/build/lib/cyclus/TestAgent/libTestAgent.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestAgent.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestAgent.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestAgent.so"
         OLD_RPATH "/usr/lib/x86_64-linux-gnu/hdf5/serial:/workspaces/congenial-waddle/build/lib:::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/codespace/.local/lib:/home/codespace/.local/lib/cyclus:/usr/lib:/usr/lib/cyclus:/usr/lib/x86_64-linux-gnu/hdf5/serial")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestAgent.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "TestAgent" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "TestFacility" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestFacility.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestFacility.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestFacility.so"
         RPATH "/home/codespace/.local/lib:/home/codespace/.local/lib/cyclus:/usr/lib:/usr/lib/cyclus:/usr/lib/x86_64-linux-gnu/hdf5/serial")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests" TYPE SHARED_LIBRARY FILES "/workspaces/congenial-waddle/build/lib/cyclus/TestAgent/cyclus/TestFacility/libTestFacility.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestFacility.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestFacility.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestFacility.so"
         OLD_RPATH "/usr/lib/x86_64-linux-gnu/hdf5/serial:/workspaces/congenial-waddle/build/lib:::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/codespace/.local/lib:/home/codespace/.local/lib/cyclus:/usr/lib:/usr/lib/cyclus:/usr/lib/x86_64-linux-gnu/hdf5/serial")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestFacility.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "TestFacility" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "TestInst" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestInst.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestInst.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestInst.so"
         RPATH "/home/codespace/.local/lib:/home/codespace/.local/lib/cyclus:/usr/lib:/usr/lib/cyclus:/usr/lib/x86_64-linux-gnu/hdf5/serial")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests" TYPE SHARED_LIBRARY FILES "/workspaces/congenial-waddle/build/lib/cyclus/TestAgent/cyclus/TestFacility/cyclus/TestInst/libTestInst.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestInst.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestInst.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestInst.so"
         OLD_RPATH "/usr/lib/x86_64-linux-gnu/hdf5/serial:/workspaces/congenial-waddle/build/lib:::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/codespace/.local/lib:/home/codespace/.local/lib/cyclus:/usr/lib:/usr/lib/cyclus:/usr/lib/x86_64-linux-gnu/hdf5/serial")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestInst.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "TestInst" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "TestRegion" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestRegion.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestRegion.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestRegion.so"
         RPATH "/home/codespace/.local/lib:/home/codespace/.local/lib/cyclus:/usr/lib:/usr/lib/cyclus:/usr/lib/x86_64-linux-gnu/hdf5/serial")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests" TYPE SHARED_LIBRARY FILES "/workspaces/congenial-waddle/build/lib/cyclus/TestAgent/cyclus/TestFacility/cyclus/TestInst/cyclus/TestRegion/libTestRegion.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestRegion.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestRegion.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestRegion.so"
         OLD_RPATH "/usr/lib/x86_64-linux-gnu/hdf5/serial:/workspaces/congenial-waddle/build/lib:::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/codespace/.local/lib:/home/codespace/.local/lib/cyclus:/usr/lib:/usr/lib/cyclus:/usr/lib/x86_64-linux-gnu/hdf5/serial")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestRegion.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "TestRegion" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "TestPositionFac" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestPositionFac.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestPositionFac.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestPositionFac.so"
         RPATH "/home/codespace/.local/lib:/home/codespace/.local/lib/cyclus:/usr/lib:/usr/lib/cyclus:/usr/lib/x86_64-linux-gnu/hdf5/serial")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests" TYPE SHARED_LIBRARY FILES "/workspaces/congenial-waddle/build/lib/cyclus/TestAgent/cyclus/TestFacility/cyclus/TestInst/cyclus/TestRegion/cyclus/TestPositionFac/libTestPositionFac.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestPositionFac.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestPositionFac.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestPositionFac.so"
         OLD_RPATH "/usr/lib/x86_64-linux-gnu/hdf5/serial:/workspaces/congenial-waddle/build/lib:::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/codespace/.local/lib:/home/codespace/.local/lib/cyclus:/usr/lib:/usr/lib/cyclus:/usr/lib/x86_64-linux-gnu/hdf5/serial")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cyclus/tests/libTestPositionFac.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "TestPositionFac" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

