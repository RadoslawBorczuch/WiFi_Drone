# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "F:/Espressif/frameworks/esp-idf-v5.0.2/components/bootloader/subproject"
  "F:/Espressif/Workspace/WiFi_Drone/build/bootloader"
  "F:/Espressif/Workspace/WiFi_Drone/build/bootloader-prefix"
  "F:/Espressif/Workspace/WiFi_Drone/build/bootloader-prefix/tmp"
  "F:/Espressif/Workspace/WiFi_Drone/build/bootloader-prefix/src/bootloader-stamp"
  "F:/Espressif/Workspace/WiFi_Drone/build/bootloader-prefix/src"
  "F:/Espressif/Workspace/WiFi_Drone/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "F:/Espressif/Workspace/WiFi_Drone/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "F:/Espressif/Workspace/WiFi_Drone/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
