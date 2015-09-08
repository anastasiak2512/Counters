cmake_minimum_required(VERSION 3.1)

project(counters_utils)

add_definitions(-std=c++11)

set(SOURCE_FILES
    CountSet.cpp
    Count.cpp
    SMA.cpp
    DSMA.cpp
    ParserSamples.cpp
    Human.cpp)

add_library(counters_utils STATIC ${SOURCE_FILES})

