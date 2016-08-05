cmake_minimum_required(VERSION 3.1)
project(Counters)


find_package(Boost)
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIR})
endif ()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libstdc++")

set(SOURCE_FILES main.cpp)
SET(EXECUTABLE_OUTPUT_PATH /Users/anastasiakazakova/prj/Counters/bin)
add_executable(counter_main ${SOURCE_FILES})

include_directories(counters_utils)
add_subdirectory(counters_utils)

target_link_libraries(counter_main counters_utils)

if ($ENV{CLION_IDE})
    message ("CMake command was started from CLion IDE!")
endif ()