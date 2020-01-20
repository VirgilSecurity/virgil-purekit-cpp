cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(virgil-purekit-cpp)


add_library(pure)


add_subdirectory(HttpClientProtobuf)
add_subdirectory(HttpPheClient)

target_sources(pure
        PRIVATE

        ${CMAKE_CURRENT_LIST_DIR}/include/Pure.h
        ${CMAKE_CURRENT_LIST_DIR}/src/Pure.cpp
        )

target_include_directories(pure
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
)

target_link_libraries(pure
        PUBLIC
            httpPheClient
            #httpClientProtobuf
            protobuf_models
        PRIVATE
            nlohmann_json::nlohmann_json
        )

