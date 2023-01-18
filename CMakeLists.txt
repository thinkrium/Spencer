cmake_minimum_required(VERSION 3.24)
project(Spencer)

set(CMAKE_CXX_STANDARD 17)

add_executable(Spencer  Spencer.cpp Systems/Base/Headers/Base.h Systems/Base/Sources/Base.cpp Systems/Brain/Headers/Activity.h Systems/Brain/Sources/Activity.cpp)

target_include_directories(Spencer PUBLIC Systems/Base/Headers Systems/Brain/Headers)