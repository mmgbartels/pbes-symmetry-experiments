# Install script for directory: /home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/besinfo/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/bespp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/bessolve/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/diagraphica/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lps2lts/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lps2pbes/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lps2pres/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsactionrename/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsbinary/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsbisim2pbes/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsconfcheck/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsconstelm/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsfununfold/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsinfo/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsinvelm/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsparelm/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsparunfold/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpspp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsreach/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsrewr/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpssim/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsstategraph/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpssumelm/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpssuminst/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsuntime/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lpsxsim/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lts2lps/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lts2pbes/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/lts2pres/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/ltscompare/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/ltsconvert/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/ltsgraph/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/ltsinfo/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/ltspbisim/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/ltspcompare/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/ltsview/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/mcrl2-gui/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/mcrl22lps/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/mcrl2i/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/mcrl2ide/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/mcrl2xi/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/pbes2bes/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/pbes2bool/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/pbesconstelm/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/pbesinfo/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/pbesinst/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/pbesparelm/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/pbespgsolve/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/pbespp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/pbesrewr/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/pbessolve/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/pbessolvesymbolic/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/pbesstategraph/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/presconstelm/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/presinfo/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/presinst/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/presparelm/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/prespp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/presrewr/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/pressolve/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/resinfo/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/respp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/tracepp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/txt2bes/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/txt2lps/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/txt2pbes/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/txt2pres/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tue20244606/Documents/phd/mcrl2experimentalinstall/mCRL2/tools/release/txt2res/cmake_install.cmake")
endif()

