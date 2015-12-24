CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

PROJECT(counters_utils)

ADD_DEFINITIONS(-std=c++11)

SET(SOURCE_FILES
        CountSet.cpp
        Count.cpp
        SMA.cpp
        DSMA.cpp
        ParserSamples.cpp Human.cpp Human.h)

ADD_LIBRARY(counters_utils STATIC ${SOURCE_FILES})

