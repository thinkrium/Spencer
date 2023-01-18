cmake_minimum_required(VERSION 3.24)
project(Spencer)

set(CMAKE_CXX_STANDARD 17)

add_executable(Spencer  Spencer.cpp Systems/Base/Headers/Base.h Systems/Base/Sources/Base.cpp Systems/Brain/Headers/Activity.h Systems/Brain/Sources/Activity.cpp Systems/Vision/Headers/Vision.h Systems/Vision/Sources/Vision.cpp Systems/Motion/Headers/Motion.h Systems/Motion/Sources/Motion.cpp)

target_include_directories(Spencer PUBLIC  Systems)