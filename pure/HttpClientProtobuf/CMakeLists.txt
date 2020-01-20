cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(virgil-purekit-cpp)


add_library(httpClientProtobuf)

target_sources(httpClientProtobuf
        PRIVATE

        ${CMAKE_CURRENT_LIST_DIR}/include/HttpClientProtobuf.h
        ${CMAKE_CURRENT_LIST_DIR}/src/HttpClientProtobuf.cpp
        )

target_include_directories(httpClientProtobuf
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
)

target_link_libraries(httpClientProtobuf
        PUBLIC
            protobuf_models
            curlpp
        )

