cmake_minimum_required(VERSION 3.27)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(includes)

project(btcpp
        VERSION 0.0.1
        LANGUAGES CXX)


set(SRC
    main.cpp
    src/helper.cpp)

add_executable(btcpp ${SRC})
