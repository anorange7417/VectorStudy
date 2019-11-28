CMAKE_MINIMUM_REQUIRED(VERSION 3.0.0)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_BUILD_TYPE Debug)

include_directories(
    /home/yhcho/Desktop/ShinSung/Eigen
    ../Eigen/
)

add_executable(
    testdf
    test.cpp
)