cmake_minimum_required(VERSION 2.8)

project(counters_utils)

add_definitions(-std=c++11)

include_directories(..)


set(SOURCE_FILES
    CountSet.cpp
    Count.cpp
    SMA.cpp
    DSMA.cpp)

add_library(counters_utils STATIC ${SOURCE_FILES})

