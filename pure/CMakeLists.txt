cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(virgil-purekit-cpp)


add_library(pure)

# add_subdirectory(HttpPheClient)

target_sources(pure
        PRIVATE

        ${CMAKE_CURRENT_LIST_DIR}/include/Pure.h

        ${CMAKE_CURRENT_LIST_DIR}/PureCrypto/include/PureCrypto.h
        ${CMAKE_CURRENT_LIST_DIR}/HttpPheClient/include/HttpPheClient.h
        ${CMAKE_CURRENT_LIST_DIR}/PureCrypto/include/KeyPair.h
        ${CMAKE_CURRENT_LIST_DIR}/PureCrypto/include/Utils.h
        ${CMAKE_CURRENT_LIST_DIR}/PureCrypto/include/VirgilPublicKey.h


        ${CMAKE_CURRENT_LIST_DIR}/PureCrypto/include/Common.h

        ${CMAKE_CURRENT_LIST_DIR}/PureCrypto/include/KeyProvider.h

        ${CMAKE_CURRENT_LIST_DIR}/src/Pure.cpp
        ${CMAKE_CURRENT_LIST_DIR}/PureCrypto/src/PureCrypto.cpp
        ${CMAKE_CURRENT_LIST_DIR}/HttpPheClient/src/HttpPheClient.cpp

        ${CMAKE_CURRENT_LIST_DIR}/PureCrypto/src/KeyPair.cpp
        ${CMAKE_CURRENT_LIST_DIR}/PureCrypto/src/KeyProvider.cpp
        ${CMAKE_CURRENT_LIST_DIR}/PureCrypto/src/Utils.cpp
        ${CMAKE_CURRENT_LIST_DIR}/PureCrypto/src/VirgilPublicKey.cpp

        )

target_include_directories(pure
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/PureCrypto/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/HttpPheClient/include>
)

target_link_libraries(pure
        PRIVATE
            protobuf_models
            nlohmann_json::nlohmann_json
            curlpp
            vsc::foundation
        )

