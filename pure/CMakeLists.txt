cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(virgil-purekit-cpp)


add_library(pure)

# add_subdirectory(client)

target_sources(pure
        PRIVATE

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/Pure.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/KmsManager.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/PheManager.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/PureContext.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/AuthResult.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/NonRotatableSecrets.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/NonRotatableSecretsGenerator.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/exceptions/NotImplementedException.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/VirgilCrypto.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/KeyPair.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/Utils.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/VirgilPublicKey.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/Common.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/KeyProvider.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/client/HttpPheClient.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/VirgilPrivateKey.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/PheCipher.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/model/PureGrant.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/client/HttpPureClient.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/model/CellKey.h


        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/PureCrypto/PureCrypto.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/PureCrypto/PureCryptoData.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/client/HttpKmsClient.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/PheClient.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/PheClientEnrollAccountResult.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/model/GrantKey.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/model/Role.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/model/RoleAssignment.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/UoKmsClient.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/VirgilCrypto/VirgilBase64.h

        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/storage/PureStorage.h
        ${CMAKE_CURRENT_LIST_DIR}/include/virgil/purekit/storage/RamPureStorage.h

        ${CMAKE_CURRENT_LIST_DIR}/src/PureCrypto/PureCrypto.cpp

        ${CMAKE_CURRENT_LIST_DIR}/src/client/HttpPheClient.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/Pure.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/VirgilCrypto/VirgilCrypto.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/VirgilCrypto/KeyPair.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/VirgilCrypto/KeyProvider.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/VirgilCrypto/Utils.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/VirgilCrypto/VirgilPublicKey.cpp

        ${CMAKE_CURRENT_LIST_DIR}/src/client/HttpKmsClient.cpp

        ${CMAKE_CURRENT_LIST_DIR}/src/PureContext.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/PheManager.cpp

        ${CMAKE_CURRENT_LIST_DIR}/src/NonRotatableSecrets.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/AuthResult.cpp

        ${CMAKE_CURRENT_LIST_DIR}/src/client/HttpPureClient.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/PureCrypto/PureCryptoData.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/model/CellKey.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/model/PureGrant.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/model/UserRecord.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/model/GrantKey.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/model/Role.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/model/RoleAssignment.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/KmsManager.cpp;
        ${CMAKE_CURRENT_LIST_DIR}/src/VirgilCrypto/VirgilBase64.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/VirgilCrypto/VirgilKeyPair.cpp

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

