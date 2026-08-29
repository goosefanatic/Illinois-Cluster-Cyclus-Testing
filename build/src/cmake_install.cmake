# Install script for directory: /workspaces/congenial-waddle/cyclus/src

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
    "/workspaces/congenial-waddle/cyclus/src/agent.h"
    "/workspaces/congenial-waddle/cyclus/src/bid.h"
    "/workspaces/congenial-waddle/cyclus/src/bid_portfolio.h"
    "/workspaces/congenial-waddle/cyclus/src/blob.h"
    "/workspaces/congenial-waddle/cyclus/src/capacity_constraint.h"
    "/workspaces/congenial-waddle/cyclus/src/coin_helpers.h"
    "/workspaces/congenial-waddle/cyclus/src/comp_math.h"
    "/workspaces/congenial-waddle/cyclus/src/composition.h"
    "/workspaces/congenial-waddle/cyclus/src/context.h"
    "/workspaces/congenial-waddle/cyclus/src/cram.h"
    "/workspaces/congenial-waddle/cyclus/src/cyc_arithmetic.h"
    "/workspaces/congenial-waddle/cyclus/src/cyc_limits.h"
    "/workspaces/congenial-waddle/cyclus/src/cyc_std.h"
    "/workspaces/congenial-waddle/cyclus/src/cyclus.h"
    "/workspaces/congenial-waddle/cyclus/src/datum.h"
    "/workspaces/congenial-waddle/cyclus/src/db_init.h"
    "/workspaces/congenial-waddle/cyclus/src/decay.h"
    "/workspaces/congenial-waddle/cyclus/src/decayer.h"
    "/workspaces/congenial-waddle/cyclus/src/discovery.h"
    "/workspaces/congenial-waddle/cyclus/src/dynamic_module.h"
    "/workspaces/congenial-waddle/cyclus/src/economic_entity.h"
    "/workspaces/congenial-waddle/cyclus/src/env.h"
    "/workspaces/congenial-waddle/cyclus/src/error.h"
    "/workspaces/congenial-waddle/cyclus/src/exchange_context.h"
    "/workspaces/congenial-waddle/cyclus/src/exchange_graph.h"
    "/workspaces/congenial-waddle/cyclus/src/exchange_manager.h"
    "/workspaces/congenial-waddle/cyclus/src/exchange_solver.h"
    "/workspaces/congenial-waddle/cyclus/src/exchange_translation_context.h"
    "/workspaces/congenial-waddle/cyclus/src/exchange_translator.h"
    "/workspaces/congenial-waddle/cyclus/src/facility.h"
    "/workspaces/congenial-waddle/cyclus/src/greedy_preconditioner.h"
    "/workspaces/congenial-waddle/cyclus/src/greedy_solver.h"
    "/workspaces/congenial-waddle/cyclus/src/hdf5_back.h"
    "/workspaces/congenial-waddle/cyclus/src/infile_tree.h"
    "/workspaces/congenial-waddle/cyclus/src/institution.h"
    "/workspaces/congenial-waddle/cyclus/src/intrusive_base.h"
    "/workspaces/congenial-waddle/cyclus/src/l_matrix.h"
    "/workspaces/congenial-waddle/cyclus/src/logger.h"
    "/workspaces/congenial-waddle/cyclus/src/material.h"
    "/workspaces/congenial-waddle/cyclus/src/mock_sim.h"
    "/workspaces/congenial-waddle/cyclus/src/package.h"
    "/workspaces/congenial-waddle/cyclus/src/platform.h"
    "/workspaces/congenial-waddle/cyclus/src/product.h"
    "/workspaces/congenial-waddle/cyclus/src/prog_solver.h"
    "/workspaces/congenial-waddle/cyclus/src/prog_translator.h"
    "/workspaces/congenial-waddle/cyclus/src/pyhooks.h"
    "/workspaces/congenial-waddle/cyclus/src/pyne.h"
    "/workspaces/congenial-waddle/cyclus/src/query_backend.h"
    "/workspaces/congenial-waddle/cyclus/src/random_number_generator.h"
    "/workspaces/congenial-waddle/cyclus/src/rec_backend.h"
    "/workspaces/congenial-waddle/cyclus/src/recorder.h"
    "/workspaces/congenial-waddle/cyclus/src/region.h"
    "/workspaces/congenial-waddle/cyclus/src/relax_ng_validator.h"
    "/workspaces/congenial-waddle/cyclus/src/request.h"
    "/workspaces/congenial-waddle/cyclus/src/request_portfolio.h"
    "/workspaces/congenial-waddle/cyclus/src/res_tracker.h"
    "/workspaces/congenial-waddle/cyclus/src/resource.h"
    "/workspaces/congenial-waddle/cyclus/src/resource_exchange.h"
    "/workspaces/congenial-waddle/cyclus/src/sim_init.h"
    "/workspaces/congenial-waddle/cyclus/src/solver_factory.h"
    "/workspaces/congenial-waddle/cyclus/src/sqlite_back.h"
    "/workspaces/congenial-waddle/cyclus/src/sqlite_db.h"
    "/workspaces/congenial-waddle/cyclus/src/state_wrangler.h"
    "/workspaces/congenial-waddle/cyclus/src/time_listener.h"
    "/workspaces/congenial-waddle/cyclus/src/timer.h"
    "/workspaces/congenial-waddle/cyclus/src/trade.h"
    "/workspaces/congenial-waddle/cyclus/src/trade_executor.h"
    "/workspaces/congenial-waddle/cyclus/src/trader.h"
    "/workspaces/congenial-waddle/cyclus/src/trader_management.h"
    "/workspaces/congenial-waddle/cyclus/src/uniform_taylor.h"
    "/workspaces/congenial-waddle/cyclus/src/unix_helper_functions.h"
    "/workspaces/congenial-waddle/cyclus/src/use_matrix_lib.h"
    "/workspaces/congenial-waddle/cyclus/src/version.h"
    "/workspaces/congenial-waddle/cyclus/src/windows_helper_functions.h"
    "/workspaces/congenial-waddle/cyclus/src/xml_file_loader.h"
    "/workspaces/congenial-waddle/cyclus/src/xml_flat_loader.h"
    "/workspaces/congenial-waddle/cyclus/src/xml_parser.h"
    "/workspaces/congenial-waddle/cyclus/src/OsiCbcSolverInterface.hpp"
    "/workspaces/congenial-waddle/cyclus/src/OsiCbcSolverInterface_2_10.hpp"
    "/workspaces/congenial-waddle/cyclus/src/any.hpp"
    "/workspaces/congenial-waddle/cyclus/src/cram.hpp"
    "/workspaces/congenial-waddle/cyclus/src/prettyprint.hpp"
    "/workspaces/congenial-waddle/cyclus/include/indicators.hpp"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/congenial-waddle/build/src/toolkit/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "cyclus" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcyclus.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcyclus.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcyclus.so"
         RPATH "/home/codespace/.local/lib:/usr/lib/x86_64-linux-gnu/hdf5/serial")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/workspaces/congenial-waddle/build/lib/libcyclus.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcyclus.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcyclus.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcyclus.so"
         OLD_RPATH "/usr/lib/x86_64-linux-gnu/hdf5/serial:::::::::::::::::::::::::::"
         NEW_RPATH "/home/codespace/.local/lib:/usr/lib/x86_64-linux-gnu/hdf5/serial")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcyclus.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "cyclus" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

