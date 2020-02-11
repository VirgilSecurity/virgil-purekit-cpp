#include <virgil/purekit/PureCrypto/PureCrypto.h>
#include <virgil/purekit/exceptions/NotImplementedException.h>


PureCryptoData PureCrypto::encryptCellKey(const VirgilByteArray& plainTextData,
                              std::vector<VirgilPublicKey> recipients,
                              const VirgilPrivateKey& signingKey) {
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::decryptCellKey(const PureCryptoData& data, const VirgilPrivateKey& privateKey, const VirgilPublicKey& publicKey) {
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::addRecipientsToCellKey(const VirgilByteArray& cms,
                                       const VirgilPrivateKey& privateKey,
                                       const std::vector<VirgilPublicKey>& publicKeys){
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::deleteRecipientsFromCellKeys(const VirgilByteArray& cms,
                                             const std::vector<VirgilPublicKey>& publicKeys) {
    throw NotImplementedException();
}

std::set<VirgilByteArray> PureCrypto::extractPublicKeysIdsFromCellKey(const VirgilByteArray& cms){
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::generateSymmetricOneTimeKey() {
    throw NotImplementedException();
}
VirgilByteArray PureCrypto::computeSummetricKeyId(const VirgilByteArray& key){
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::encryptSymmetricOneTimeKey(const VirgilByteArray& plainText,
                                           const VirgilByteArray& ad,
                                           const VirgilByteArray& key) {
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::decryptSymmetricOneTimeKey(const VirgilByteArray& plainText,
                                           const VirgilByteArray& ad,
                                           const VirgilByteArray& key) {
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::encryptSymmetricNewNonce(const VirgilByteArray& plainText,
                                         const VirgilByteArray& ad,
                                         const VirgilByteArray& key){
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::decryptSymmetricNewNonce(const VirgilByteArray& plainText,
                                         const VirgilByteArray& ad,
                                         const VirgilByteArray& key) {
    throw NotImplementedException();
}


VirgilKeyPair PureCrypto::generateUserKey() {
    throw NotImplementedException();
}
VirgilKeyPair PureCrypto::generateRoleKey() {
    throw NotImplementedException();
}
VirgilKeyPair PureCrypto::generateCellKey() {
    throw NotImplementedException();
}

VirgilKeyPair PureCrypto::importPrivateKey(const VirgilByteArray& privateKey) {
    throw NotImplementedException();
}
VirgilPublicKey PureCrypto::importPublicKey(const VirgilByteArray& publicKey) {
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::exportPublicKey(const VirgilPublicKey& publicKey) {
    throw NotImplementedException();
}
VirgilByteArray PureCrypto::exportPrivateKey(const VirgilPrivateKey& privateKey) {
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::encryptForBackup(
        const VirgilByteArray& plainText,
        const VirgilPublicKey& publicKey,
        const VirgilPrivateKey& privateKey) {
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::decryptBackup(const VirgilByteArray& cipherText,
                              const VirgilPrivateKey& privateKey,
                              const VirgilPublicKey& publicKey) {
    throw NotImplementedException();
}


VirgilByteArray PureCrypto::encryptData(const VirgilByteArray& plainText,
                            const std::vector<VirgilPublicKey> publicKeys,
                            const VirgilPrivateKey) {
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::decryptData(const VirgilByteArray& cipherText,
                            const VirgilPrivateKey& privateKey,
                            const VirgilPublicKey& publicKey) {
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::encryptRolePrivateKey(const VirgilByteArray& plainText,
                                      const VirgilPublicKey& virgilPublicKey,
                                      const VirgilPrivateKey& virgilPrivateKey) {
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::decryptRolePrivateKey(const VirgilByteArray& plainText,
                                      const VirgilPublicKey& virgilPublicKey,
                                      const VirgilPrivateKey& virgilPrivateKey) {
    throw NotImplementedException();
}

VirgilByteArray PureCrypto::computePasswordHash(const std::string& password) {
    throw NotImplementedException();
}




VirgilByteArray PureCrypto::concat(const VirgilByteArray& body1, const VirgilByteArray& body2) {
    throw NotImplementedException();
}

