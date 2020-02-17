//
// Created by Oleksandr Fryziuk on 2020-01-13.
//

#ifndef VIRGIL_PUREKIT_CPP_PURE_H
#define VIRGIL_PUREKIT_CPP_PURE_H

#include <virgil/purekit/client/HttpPheClient.h>
#include <virgil/purekit/PureCrypto/PureCrypto.h>
#include <virgil/purekit/VirgilCrypto/VirgilCrypto.h>
#include <virgil/purekit/VirgilCrypto/PheCipher.h>
#include <virgil/purekit/PureStorage.h>
#include <virgil/purekit/VirgilCrypto/Common.h>
#include <virgil/purekit/VirgilCrypto/VirgilPublicKey.h>
#include <virgil/purekit/VirgilCrypto/VirgilPrivateKey.h>
#include <virgil/purekit/VirgilCrypto/VirgilKeyPair.h>

#include <virgil/purekit/PheManager.h>
#include <virgil/purekit/KmsManager.h>
#include <virgil/purekit/AuthResult.h>

#include <virgil/purekit/model/PureGrant.h>
#include <virgil/purekit/model/UserRecord.h>

#include <string>
#include <map>
#include "PureContext.h"


class Pure {
private:
    // TODO thing about smartPointer class members

//    int currentVersion;
        VirgilCrypto virgilCrypto;
        PureCrypto pureCrypto;
//    PheCipher cipher;
//    PureStorage storage;
//    VirgilByteArray ak;
//    //VirgilPublicKey buppk;
//    VirgilKeyPair oskp;
//
//    //std::map<std::string, std::vector<VirgilPublicKey>> externalPublicKeys;
//
//    PheManager pheManager;
//    KmsManger kmsManger;

public:
    Pure();

    void registerUser(std::string userID, std::string password);
    AuthResult authenticateUser(const std::string& userId,const std::string& password,const std::string& sessionId);

    AuthResult authenticateUser(const std::string& userId, const std::string& password);

    PureGrant createUserGrantAsAdmin(const std::string& userId, const VirgilPrivateKey& bupsk);

    PureGrant decryptGrantFromUser(const std::string& encryptedGrantString);

    void changeUserPassword(const std::string& userId, const std::string& oldPassword, const std::string& newPassword);

    void changeUserPassword(const PureGrant& grant, const std::string& newPassword);

    void recoverUser(const std::string& userId, const std::string& newPassword);

    void resetUserPassword(const std::string& userId, const std::string& newPassword);

    void deleteUser(const std::string& userId, bool cascade);

    long performRotation();

    VirgilByteArray encrypt(const std::string& userId, const std::string& dataId, const VirgilByteArray& plainText);

    VirgilByteArray encrypt(const std::string& userId,
        const std::string& dataId,
        const std::set<std::string>& otherUserIds,
        const std::set<std::string>& roleNames,
        const std::vector<VirgilPublicKey>& publicKeys,
        const VirgilByteArray& plainText);

    VirgilByteArray decrypt(const PureGrant& grant, const std::string& ownerUserId, const std::string& dataId, const VirgilByteArray& cipherText);

    VirgilByteArray decrypt(const VirgilPrivateKey& privateKey,
        const std::string& ownerUserId,
        const std::string& dataId,
        const VirgilByteArray& cipherText);

    void share(const PureGrant& grant, const std::string& dataId, const std::string& otherUserId);

    void share(const PureGrant& grant,
                  const std::string& dataId,
                  const std::set<std::string>& otherUserIds,
                  const std::vector<VirgilPublicKey>& publicKeys);

    void unshare(const std::string& ownerUserId, const std::string& dataId, const std::string& otherUserId);

    void unshare(std::string ownerUserId,
                    std::string dataId,
                    std::set<std::string> otherUserIds,
                    std::vector<VirgilPublicKey> publicKeys);

    void deleteKey(const std::string& userId, const std::string& dataId);

    void createRole(const std::string& roleName, const std::set<std::string>& userIds);

    void assignRole(const std::string& roleToAssign, const PureGrant& grant,const std::set<std::string>& userIds);

    void assignRole(const std::string& roleName, const VirgilByteArray& publicKeyId, const VirgilByteArray& rskData, const std::set<std::string>& userIds);


    void unassignRole(const std::string& roleName, const std::set<std::string>& userIds);

    void registerUser(const std::string& userId, const std::string& password, bool isUserNew);

    void changeUserPassword(const UserRecord& userRecord,
                                const VirgilByteArray& privateKeyData,
                                const std::string& newPassword);

    std::vector<VirgilPublicKey> keysWithOthers(const std::vector<VirgilPublicKey>& publicKeys,
                                                  const std::set<std::string>& otherUserIds);

    int getCurrentVersion();

    VirgilCrypto getCrypto();

    PureStorage getStorage();

    VirgilByteArray getAk();

    VirgilPublicKey getBuppk();

    VirgilKeyPair getOskp();

    std::map<std::string, std::vector<VirgilPublicKey>> getExternalPublicKeys();



    //my staff delete
    void readEnvironments();
    void computeHash();


    Pure(const PureContext& context);

private:
   //HttpPheClient httpPheClient;
};

#endif //VIRGIL_PUREKIT_CPP_PURE_H
