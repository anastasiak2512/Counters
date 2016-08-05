CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

PROJECT(counters_utils)

SET(SOURCE_FILES
        CountSet.cpp
        Count.cpp
        SMA.cpp
        DSMA.cpp Person.cpp Person.h House.cpp House.h Human.cpp)



add_library(counters_utils STATIC ${SOURCE_FILES})


# see https://cmake.org/cmake/help/v3.5/module/FindBoost.html
find_package(Boost REQUIRED COMPONENTS regex)

include_directories(${Boost_INCLUDE_DIR})
# Note: a target should be already defined using 'add_executable' or 'add_library'
target_link_libraries(counters_utils ${Boost_LIBRARIES})
