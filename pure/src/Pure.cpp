//
// Created by Oleksandr Fryziuk on 2020-01-13.
//

#include <virgil/purekit/Pure.h>
#include "purekit.pb.h"
#include <virgil/purekit/client/HttpPheClient.h>
#include <fstream>
#include <nlohmann/json.hpp>
#include <virgil/purekit/exceptions/NotImplementedException.h>

Pure::Pure(const PureContext& context) {
    throw NotImplementedException();
}

void Pure::registerUser(std::string userID, std::string password) {
//    using namespace build;
//
//    EnrollmentRequest enrollmentRequest;
//    enrollmentRequest.set_version(2);
//    readEnvironments();
//
//    httpPheClient.enrollAccount(enrollmentRequest);
    throw NotImplementedException();
}

void Pure::readEnvironments() {

    std::ifstream i("env.json");
    nlohmann::json j;
    i >> j;
    std::cout << j["dev"]["PHE_SERVER_ADDRESS"] << std::endl;
}

void Pure::computeHash() {
    int* ptr = (int*)malloc(sizeof(int));

    free(ptr);

    VirgilByteArray array {1, 2 ,3 ,4};
    virgilCrypto.computeHash(array);

    auto result = virgilCrypto.generateKeyPair();
    //int a = 5;
}

//Pure::Pure():httpPheClient("AT.AsqUpZfrWZkNFDxahHLzugOBtqkJYF3k",
//        "https://api2-dev.virgilsecurity.com/phe/v1"), pureCrypto() {
//
//}


AuthResult Pure::authenticateUser(const std::string& userId,const std::string& password,const std::string& sessionId) {
    throw NotImplementedException();
}

AuthResult Pure::authenticateUser(const std::string& userId, const std::string& password) {
    throw NotImplementedException();
}

PureGrant Pure::createUserGrantAsAdmin(const std::string& userId, const VirgilPrivateKey& bupsk) {
    throw NotImplementedException();
}

PureGrant Pure::decryptGrantFromUser(const std::string& encryptedGrantString) {
    throw NotImplementedException();
}

void Pure::changeUserPassword(const std::string& userId, const std::string& oldPassword, const std::string& newPassword) {
    throw NotImplementedException();
}

void Pure::changeUserPassword(const PureGrant& grant, const std::string& newPassword) {
    throw NotImplementedException();
}

void Pure::recoverUser(const std::string& userId, const std::string& newPassword) {
    throw NotImplementedException();
}

void Pure::resetUserPassword(const std::string& userId, const std::string& newPassword) {
    throw NotImplementedException();
}

void Pure::deleteUser(const std::string& userId, bool cascade) {
    throw NotImplementedException();
}

long Pure::performRotation() {
    throw NotImplementedException();
}

VirgilByteArray Pure::encrypt(const std::string& userId, const std::string& dataId, const VirgilByteArray& plainText) {
    throw NotImplementedException();
}

VirgilByteArray Pure::encrypt(const std::string& userId,
                        const std::string& dataId,
                        const std::set<std::string>& otherUserIds,
                        const std::set<std::string>& roleNames,
                        const std::vector<VirgilPublicKey>& publicKeys,
                        const VirgilByteArray& plainText) {
    throw NotImplementedException();
}

VirgilByteArray Pure::decrypt(const PureGrant& grant, const std::string& ownerUserId, const std::string& dataId, const VirgilByteArray& cipherText) {
    throw NotImplementedException();
}

VirgilByteArray Pure::decrypt(const VirgilPrivateKey& privateKey,
                        const std::string& ownerUserId,
                        const std::string& dataId,
                        const VirgilByteArray& cipherText) {
    throw NotImplementedException();
}

void Pure::share(const PureGrant& grant, const std::string& dataId, const std::string& otherUserId) {
    throw NotImplementedException();
}

void Pure::share(const PureGrant& grant,
           const std::string& dataId,
           const std::set<std::string>& otherUserIds,
           const std::vector<VirgilPublicKey>& publicKeys) {
    throw NotImplementedException();
}

void Pure::unshare(const std::string& ownerUserId, const std::string& dataId, const std::string& otherUserId) {
    throw NotImplementedException();
}

void Pure::unshare(std::string ownerUserId,
             std::string dataId,
             std::set<std::string> otherUserIds,
             std::vector<VirgilPublicKey> publicKeys) {
    throw NotImplementedException();
}

void Pure::deleteKey(const std::string& userId, const std::string& dataId) {
    throw NotImplementedException();
}

void Pure::createRole(const std::string& roleName, const std::set<std::string>& userIds) {
    throw NotImplementedException();
}

void Pure::assignRole(const std::string& roleToAssign, const PureGrant& grant,const std::set<std::string>& userIds) {
    throw NotImplementedException();
}

void Pure::assignRole(const std::string& roleName, const VirgilByteArray& publicKeyId, const VirgilByteArray& rskData, const std::set<std::string>& userIds) {
    throw NotImplementedException();
}


void Pure::unassignRole(const std::string& roleName, const std::set<std::string>& userIds) {
    throw NotImplementedException();
}

void Pure::registerUser(const std::string& userId, const std::string& password, bool isUserNew) {
    throw NotImplementedException();
}

void Pure::changeUserPassword(const UserRecord& userRecord,
                        const VirgilByteArray& privateKeyData,
                        const std::string& newPassword) {
    throw NotImplementedException();
}

std::vector<VirgilPublicKey> Pure::keysWithOthers(const std::vector<VirgilPublicKey>& publicKeys,
                                            const std::set<std::string>& otherUserIds) {
    throw NotImplementedException();
}

int Pure::getCurrentVersion() {
    throw NotImplementedException();
}

VirgilCrypto Pure::getCrypto() {
    throw NotImplementedException();
}

PureStorage Pure::getStorage() {
    throw NotImplementedException();
}

VirgilByteArray Pure::getAk() {
    throw NotImplementedException();
}

VirgilPublicKey Pure::getBuppk() {
    throw NotImplementedException();
}

VirgilKeyPair Pure::getOskp() {
    throw NotImplementedException();
}

std::map<std::string, std::vector<VirgilPublicKey>> Pure::getExternalPublicKeys() {
    throw NotImplementedException();
}

