# Install script for directory: /workspaces/congenial-waddle/cyclus/tests/input

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "testing" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cyclus/input" TYPE FILE FILES
    "/workspaces/congenial-waddle/cyclus/tests/input/custom_dt.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/custom_dt_flat.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/custom_seed.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/include_recipe.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/include_source_w_archetype.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/inventory.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/inventory_compact.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/inventory_compact_false.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/inventory_false.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/lotka_volterra_determ.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/minimal_cycle.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/no_recipe.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/null_sink.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/predator.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/prey.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/recipe.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/source_to_sink.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/source_w_archetype.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/stub_example.xml"
    "/workspaces/congenial-waddle/cyclus/tests/input/trivial_cycle.xml"
    )
endif()

