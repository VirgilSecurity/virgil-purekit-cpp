cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(virgil-purekit-cpp)


add_library(httpPheClient)

target_sources(httpPheClient
        PRIVATE

        ${CMAKE_CURRENT_LIST_DIR}/include/HttpPheClient.h
        ${CMAKE_CURRENT_LIST_DIR}/src/HttpPheClient.cpp
        )

target_include_directories(httpPheClient
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        )

target_link_libraries(httpPheClient
        PUBLIC
        httpClientProtobuf
        )
