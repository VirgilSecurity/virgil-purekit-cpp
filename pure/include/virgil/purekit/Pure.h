//
// Created by Oleksandr Fryziuk on 2020-01-13.
//

#ifndef VIRGIL_PUREKIT_CPP_PURE_H
#define VIRGIL_PUREKIT_CPP_PURE_H

#include <virgil/purekit/HttpPheClient/HttpPheClient.h>
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


class Pure {
private:
    // TODO thing about smartPointer class members

    int currentVersion;
    VirgilCrypto virgilCrypto;
    PureCrypto pureCrypto;
    PheCipher cipher;
    PureStorage storage;
    VirgilByteArray ak;
    //VirgilPublicKey buppk;
    VirgilKeyPair oskp;

    //std::map<std::string, std::vector<VirgilPublicKey>> externalPublicKeys;

    PheManager pheManager;
    KmsManger kmsManger;

public:
    Pure();

    void registerUser(std::string userID, std::string password) throw();
    AuthResult authenticateUser(const std::string& userId,const std::string& password,const std::string& sessionId) throw();

    AuthResult authenticateUser(const std::string& userId, const std::string& password) throw();

    PureGrant createUserGrantAsAdmin(const std::string& userId, const VirgilPrivateKey& bupsk) throw();

    PureGrant decryptGrantFromUser(const std::string& encryptedGrantString) throw();

    void changeUserPassword(const std::string& userId, const std::string& oldPassword, const std::string& newPassword) throw();

    void changeUserPassword(const PureGrant& grant, const std::string& newPassword) throw();

    void recoverUser(const std::string& userId, const std::string& newPassword) throw();

    void resetUserPassword(const std::string& userId, const std::string& newPassword) throw();

    void deleteUser(const std::string& userId, bool cascade) throw();

    long performRotation() throw();

    VirgilByteArray encrypt(const std::string& userId, const std::string& dataId, const VirgilByteArray& plainText) throw();

    VirgilByteArray encrypt(const std::string& userId,
        const std::string& dataId,
        const std::set<std::string>& otherUserIds,
        const std::set<std::string>& roleNames,
        const std::vector<VirgilPublicKey>& publicKeys,
        const VirgilByteArray& plainText) throw();

    VirgilByteArray decrypt(const PureGrant& grant, const std::string& ownerUserId, const std::string& dataId, const VirgilByteArray& cipherText) throw();

    VirgilByteArray decrypt(const VirgilPrivateKey& privateKey,
        const std::string& ownerUserId,
        const std::string& dataId,
        const VirgilByteArray& cipherText);

    void share(const PureGrant& grant, const std::string& dataId, const std::string& otherUserId) throw();

    void share(const PureGrant& grant,
                  const std::string& dataId,
                  const std::set<std::string>& otherUserIds,
                  const std::vector<VirgilPublicKey>& publicKeys) throw();

    void unshare(const std::string& ownerUserId, const std::string& dataId, const std::string& otherUserId) throw();

    void unshare(std::string ownerUserId,
                    std::string dataId,
                    std::set<std::string> otherUserIds,
                    std::vector<VirgilPublicKey> publicKeys);

    void deleteKey(const std::string& userId, const std::string& dataId) throw();

    void createRole(const std::string& roleName, const std::set<std::string>& userIds) throw();

    void assignRole(const std::string& roleToAssign, const PureGrant& grant,const std::set<std::string>& userIds) throw();

    void assignRole(const std::string& roleName, const VirgilByteArray& publicKeyId, const VirgilByteArray& rskData, const std::set<std::string>& userIds) throw();


    void unassignRole(const std::string& roleName, const std::set<std::string>& userIds) throw();

    void registerUser(const std::string& userId, const std::string& password, bool isUserNew) throw();

    void changeUserPassword(const UserRecord& userRecord,
                                const VirgilByteArray& privateKeyData,
                                const std::string& newPassword);

    std::vector<VirgilPublicKey> keysWithOthers(const std::vector<VirgilPublicKey>& publicKeys,
                                                  const std::set<std::string>& otherUserIds) throw();

    int getCurrentVersion();

    VirgilCrypto getCrypto();

    PureStorage getStorage();

    VirgilByteArray getAk();

    VirgilPublicKey getBuppk();

    VirgilKeyPair getOskp();

    std::map<std::string, std::vector<VirgilPublicKey>> getExternalPublicKeys() throw();



    //my staff
    void readEnvironments();
    void computeHash();


private:
   HttpPheClient httpPheClient;
};

#endif //VIRGIL_PUREKIT_CPP_PURE_H
