cmake_minimum_required(VERSION 2.8)
project(Counters)

add_definitions(-std=c++11)


set(SOURCE_FILES main.cpp)
SET(EXECUTABLE_OUTPUT_PATH /Users/anastasiakazakova/prj/Counters/bin)
add_executable(counter_main ${SOURCE_FILES})

include_directories(counters_utils)

add_subdirectory(counters_utils)

target_link_libraries(counter_main counters_utils)
