cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


project(fcm3-3 CXX)

link_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(math/include)

file(GLOB MATH_LIB_SRC "math/src/*.cpp")
add_library(mathlib STATIC ${MATH_LIB_SRC})

add_executable(test src/main.cpp)

target_link_libraries(test mathlib)