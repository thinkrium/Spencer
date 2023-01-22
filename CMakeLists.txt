cmake_minimum_required(VERSION 3.24)
project(Spencer)

set(CMAKE_CXX_STANDARD 17)

add_executable(Spencer  Spencer.cpp Systems/Base/Headers/System_Base.h Systems/Base/Sources/System_Base.cpp Systems/Brain/Headers/Activity.h Systems/Brain/Sources/Activity.cpp Systems/Vision/Headers/Vision.h Systems/Vision/Sources/Vision.cpp Systems/Motion/Headers/Motion.h Systems/Motion/Sources/Motion.cpp Tests/BaseTests.cpp Systems/Body/Headers/Joint.h Systems/Body/Headers/Motor.h Systems/Body/Sources/Joint.cpp Systems/Body/Sources/Motor.cpp Systems/Base/Headers/Motion_Base.h Systems/Base/Sources/Motion_Base.cpp Systems/Body/Headers/Body_Part.h Systems/Body/Sources/Body_Part.cpp Systems/Utililties/Headers/Logging.h Systems/Utililties/Sources/Logging.cpp Systems/Body/Sources/Robot_Body.cpp Systems/Body/Headers/Robot_Body.h Systems/Utililties/Headers/Enumerations.h Systems/Brain/Headers/Sensor.h Systems/Brain/Sources/Sensor.cpp Systems/Base/Headers/Brain_Base.h Systems/Base/Sources/Brain_Base.cpp Systems/Base/Headers/Base.h Systems/Base/Sources/Base.cpp)

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