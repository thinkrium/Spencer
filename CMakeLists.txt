cmake_minimum_required(VERSION 3.0.0)
project(Robot VERSION 0.1.0)

# set(Robot_Libraries  Libraries/CMakeLists.txt)
########Include Pigpio##############
# include(${Robot_Libraries})

add_subdirectory("Libraries")
add_subdirectory("Systems")

include(CTest)
enable_testing()

add_executable(Robot main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
