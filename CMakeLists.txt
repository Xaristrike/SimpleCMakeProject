# Specify minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Project
project(ptrswitch)

# SET OUTPUTS

# Put the executable in the source directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

# Add the executable
add_executable(ptrswitch ptrswitch.c)

# Custom target to run the executable
add_custom_target(
  run
  COMMAND ptrswitch
  DEPENDS ptrswitch
  WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
  COMMENT "Running the ptrswitch executable")