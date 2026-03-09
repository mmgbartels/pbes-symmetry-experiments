# Install script for directory: /home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/add_binding.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/algorithms.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/builder.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/constelm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/find_free_variables.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/has_propositional_variables.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/instantiate_global_variables.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/is_well_typed.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/lps2pres_e.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/lps2pres_par.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/lps2pres_rhs.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/lps2pres_sat.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/lps2pres_utility.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/lts2pres_e.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/lts2pres_lts.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/lts2pres_rhs.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/occurring_variable_visitor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/parse.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/pres_context.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/pres_io.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/pres_parameter_map.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/pres_property_map.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/res_equation_limit.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/detail" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/detail/term_traits_optimized.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/enumerator.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/find.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/find_equalities.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/io.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/is_monotonous.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/is_res.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/join.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/lps2pres.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/lts2pres.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/normalize.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/normalize_sorts.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/parelm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/parse.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/parse_impl.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/pres.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/pres2res.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/pres_equation.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/pres_expression.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/pres_input_output_tool.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/pres_input_tool.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/pres_output_tool.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/pres_rewriter_tool.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/pres_rewriter_type.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/presinst_algorithm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/presinst_finite_algorithm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/presinst_strategy.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/pressolve_options.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/print.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/remove_equations.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/remove_parameters.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/replace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/replace_capture_avoiding.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/replace_capture_avoiding_with_an_identifier_generator.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/resalgorithm_type.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/ressolve_gauss_elimination.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/ressolve_numerical.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/ressolve_numerical_directed.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/rewrite.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/rewriter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/rewriters" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/rewriters/data_rewriter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/rewriters" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/rewriters/dataspec_prune_rewriter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/rewriters" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/rewriters/enumerate_quantifiers_rewriter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/rewriters" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/rewriters/one_point_rule_rewriter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/rewriters" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/rewriters/quantifiers_inside_rewriter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/rewriters" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/rewriters/simplify_quantifiers_rewriter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres/rewriters" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/rewriters/simplify_rewriter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/significant_variables.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/substitutions.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/translate_user_notation.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/traverser.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/txt2pres.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/typecheck.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xHeadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pres" TYPE FILE FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/include/mcrl2/pres/untyped_pres.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xLibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pres.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pres.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pres.so"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/stage/lib/libmcrl2_pres.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pres.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pres.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pres.so"
         OLD_RPATH "/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/stage/lib:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pres.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xLibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/libraries/pres/example/cmake_install.cmake")
endif()

