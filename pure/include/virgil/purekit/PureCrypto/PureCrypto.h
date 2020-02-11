
#ifndef VIRGIL_PUREKIT_CPP_PURECRYPTO_H
#define VIRGIL_PUREKIT_CPP_PURECRYPTO_H

#include <virgil/purekit/PureCrypto/PureCryptoData.h>
#include <virgil/purekit/VirgilCrypto/Common.h>
#include <virgil/purekit/VirgilCrypto/VirgilPublicKey.h>
#include <virgil/purekit/VirgilCrypto/VirgilPrivateKey.h>
#include <set>
#include <virgil/purekit/VirgilCrypto/VirgilKeyPair.h>

class PureCrypto {
public:

    PureCryptoData encryptCellKey(const VirgilByteArray& plainTextData,
                                  std::vector<VirgilPublicKey> recipients,
                                  const VirgilPrivateKey& signingKey);

    VirgilByteArray decryptCellKey(const PureCryptoData& data, const VirgilPrivateKey& privateKey, const VirgilPublicKey& publicKey);

    VirgilByteArray addRecipientsToCellKey(const VirgilByteArray& cms,
                                                const VirgilPrivateKey& privateKey,
                                                const std::vector<VirgilPublicKey>& publicKeys);

    VirgilByteArray deleteRecipientsFromCellKeys(const VirgilByteArray& cms,
                                                 const std::vector<VirgilPublicKey>& publicKeys);

    std::set<VirgilByteArray> extractPublicKeysIdsFromCellKey(const VirgilByteArray& cms);

    VirgilByteArray generateSymmetricOneTimeKey();
    VirgilByteArray computeSummetricKeyId(const VirgilByteArray& key);

    VirgilByteArray encryptSymmetricOneTimeKey(const VirgilByteArray& plainText,
                                                const VirgilByteArray& ad,
                                                const VirgilByteArray& key);

    VirgilByteArray decryptSymmetricOneTimeKey(const VirgilByteArray& plainText,
                                                const VirgilByteArray& ad,
                                                const VirgilByteArray& key);

    VirgilByteArray encryptSymmetricNewNonce(const VirgilByteArray& plainText,
                                               const VirgilByteArray& ad,
                                               const VirgilByteArray& key);

    VirgilByteArray decryptSymmetricNewNonce(const VirgilByteArray& plainText,
                                             const VirgilByteArray& ad,
                                             const VirgilByteArray& key);


    VirgilKeyPair generateUserKey();
    VirgilKeyPair generateRoleKey();
    VirgilKeyPair generateCellKey();

    VirgilKeyPair importPrivateKey(const VirgilByteArray& privateKey);
    VirgilPublicKey importPublicKey(const VirgilByteArray& publicKey);

    VirgilByteArray exportPublicKey(const VirgilPublicKey& publicKey);
    VirgilByteArray exportPrivateKey(const VirgilPrivateKey& privateKey);

    VirgilByteArray encryptForBackup(
                        const VirgilByteArray& plainText,
                        const VirgilPublicKey& publicKey,
                        const VirgilPrivateKey& privateKey);

    VirgilByteArray decryptBackup(const VirgilByteArray& cipherText,
                                  const VirgilPrivateKey& privateKey,
                                  const VirgilPublicKey& publicKey);


    VirgilByteArray encryptData(const VirgilByteArray& plainText,
                                const std::vector<VirgilPublicKey> publicKeys,
                                const VirgilPrivateKey);

    VirgilByteArray decryptData(const VirgilByteArray& cipherText,
                                const VirgilPrivateKey& privateKey,
                                const VirgilPublicKey& publicKey);

    VirgilByteArray encryptRolePrivateKey(const VirgilByteArray& plainText,
                                          const VirgilPublicKey& virgilPublicKey,
                                          const VirgilPrivateKey& virgilPrivateKey);

    VirgilByteArray decryptRolePrivateKey(const VirgilByteArray& plainText,
                                          const VirgilPublicKey& virgilPublicKey,
                                          const VirgilPrivateKey& virgilPrivateKey);

    VirgilByteArray computePasswordHash(const std::string& password);




private:
    VirgilByteArray concat(const VirgilByteArray& body1, const VirgilByteArray& body2);


};

#endif //VIRGIL_PUREKIT_CPP_PURECRYPTO_H
