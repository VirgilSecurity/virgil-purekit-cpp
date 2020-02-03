cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(virgil-purekit-cpp)


add_library(pure)

# add_subdirectory(HttpPheClient)

target_sources(pure
        PRIVATE

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/Pure.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/KmsManager.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/PheManager.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/PureContext.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/exceptions/NotImplementedException.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/VirgilCrypto.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/PureCrypto/PureCrypto.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/KeyPair.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/Utils.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/VirgilPublicKey.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/Common.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/KeyProvider.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/HttpPheClient/HttpPheClient.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/VirgilPrivateKey.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/PheCipher.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/model/PureGrant.h

        ${CMAKE_CURRENT_LIST_DIR}/src/HttpPheClient/HttpPheClient.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/Pure.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/PureCrypto/VirgilCrypto.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/PureCrypto/KeyPair.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/PureCrypto/KeyProvider.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/PureCrypto/Utils.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/PureCrypto/VirgilPublicKey.cpp

        ${CMAKE_CURRENT_LIST_DIR}/src/PureContext.cpp
        )

target_include_directories(pure
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
)

target_link_libraries(pure
        PRIVATE
            protobuf_models
            nlohmann_json::nlohmann_json
            curlpp
            vsc::foundation
        )

