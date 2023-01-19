cmake_minimum_required(VERSION 3.24)
project(Spencer)

set(CMAKE_CXX_STANDARD 17)

add_executable(Spencer  Spencer.cpp Systems/Base/Headers/System_Base.h Systems/Base/Sources/System_Base.cpp Systems/Brain/Headers/Activity.h Systems/Brain/Sources/Activity.cpp Systems/Vision/Headers/Vision.h Systems/Vision/Sources/Vision.cpp Systems/Motion/Headers/Motion.h Systems/Motion/Sources/Motion.cpp Tests/BaseTests.cpp Systems/Motion/Headers/Joint.h Systems/Motion/Headers/Motor.h Systems/Motion/Sources/Joint.cpp Systems/Motion/Sources/Motor.cpp Systems/Motion/Headers/Motion_Base.h Systems/Motion/Sources/Motion_Base.cpp Systems/Motion/Headers/Body_Part.h Systems/Motion/Sources/Body_Part.cpp)

target_include_directories(Spencer PUBLIC  Systems)


include(FetchContent)

FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

 target_link_libraries(${PROJECT_NAME} gtest_main)

enable_testing()
# TODO: Add tests and install targets if needed.



#add_test(NAME ${Project_Test_Name} COMMAND ${Project_Test_Name} )