# Install script for directory: /workspaces/congenial-waddle/cyclus/src/toolkit

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cyclus/toolkit" TYPE FILE FILES
    "/workspaces/congenial-waddle/cyclus/src/toolkit/agent_managed.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/builder.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/building_manager.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/commodity.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/commodity_producer.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/commodity_producer_manager.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/commodity_recipe_context.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/enrichment.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/facility_cost.cycpp.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/infile_converters.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/institution_cost.cycpp.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/mat_query.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/matl_buy_policy.cycpp.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/matl_buy_policy.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/matl_sell_policy.cycpp.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/matl_sell_policy.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/position.cycpp.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/position.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/region_cost.cycpp.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/res_buf.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/res_manip.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/res_map.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/supply_demand_manager.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/symbolic_function_factories.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/symbolic_functions.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/timeseries.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/total_inv_tracker.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/facility_cost.cycpp.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/institution_cost.cycpp.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/matl_buy_policy.cycpp.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/matl_sell_policy.cycpp.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/position.cycpp.h"
    "/workspaces/congenial-waddle/cyclus/src/toolkit/region_cost.cycpp.h"
    )
endif()

