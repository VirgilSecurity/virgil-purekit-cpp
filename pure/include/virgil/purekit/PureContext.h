
#ifndef VIRGIL_PUREKIT_CPP_PURECONTEXT_H
#define VIRGIL_PUREKIT_CPP_PURECONTEXT_H

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
#include <virgil/purekit/NonRotatableSecrets.h>
#include <virgil/purekit/HttpKmsClient.h>

#include <string>
#include <map>

class PureContext {
    class Credentials {

    private:
//        VirgilByteArray payload1;
//        VirgilByteArray payload2;
//        int version;

        //private Credentials(const VirgilByteArray& payload1, VirgilByteArray& payload2, int version);

        VirgilByteArray getPayload1();

        VirgilByteArray getPayload2();

        int getVersion();

    };

private:
//    VirgilCrypto crypto;
//    VirgilPublicKey buppk;
//    Credentials secretKey;
//    Credentials publicKey;
//    NonRotatableSecrets nonrotatableSecrets;
//    PureStorage storage;
//    client pheClient;
//    PureStorage storage;
//    client pheClient;
//
//    HttpKmsClient kmsClient;
//    Credentials updateToken;
//
//    std::map<std::string, std::vector<VirgilPublicKey>> externalPublicKeys


public:

    HttpKmsClient getKmsClient();


// static std::string NMS_PREFIX = "NM";
// static std::string tring BUPPK_PREFIX = "BU";
// static std::string SECRET_KEY_PREFIX = "SK";
// static std::string PUBLIC_KEY_PREFIX = "PK";

public:
    static PureContext createContext(const std::string& appToken,
                                     const std::string& nms,
                                     const std::string& bu,
                                     const std::string& sk,
                                     const std::string& pk,
                                     const std::map<std::string, std::vector<std::string>>& externalPublicKeys);

    static PureContext createContext(const std::string& appToken,
                                     const std::string& nms,
                                     const std::string& bu,
                                     const std::string& sk,
                                     const std::string& pk,
                                     const std::map<std::string, std::vector<std::string>>& externalPublicKeys,
                                     const std::string& pheServiceAddress,
                                     const std::string& pureServiceAddress,
                                     const std::string& kmsServiceAddress);

    static PureContext createContext(const std::string& appToken,
                                     const std::string& nms,
                                     const std::string& bu,
                                     const PureStorage& storage,
                                     const std::string& secretKey,
                                     const std::string& publicKey,
                                     const std::map<std::string, std::vector<std::string>>& externalPublicKeys);

    static PureContext createContext(const std::string& appToken,
                                     const std::string& nms,
                                     const std::string& bu,
                                     const PureStorage& storage,
                                     const std::string& secretKey,
                                     const std::string& publicKey,
                                     const std::map<std::string, std::vector<std::string>>& externalPublicKeys,
                                     const std::string& pheServiceAddress,
                                     const std::string& kmsServiceAddress);

    static PureContext createContext(const std::string& at,
                                        const std::string& nm,
                                        const std::string& bu,
                                        const std::string& sk,
                                        const std::string& pk,
                                        const PureStorage& storage,
                                        const std::map<std::string, std::vector<std::string>>& externalPublicKeys,
                                        const std::string& pheServiceAddress,
                                        const std::string& kmsServiceAddress);

    static Credentials parseCredentials(const std::string& prefix,
                                        const std::string& credentials,
                                        bool isVersioned,
                                        bool isTwofold);

    PureStorage getStorage();

    Credentials getUpdateToken();

    void setUpdateToken(const std::string& updateToken);

    void setStorage(PureStorage storage);

    VirgilPublicKey getBuppk();

    Credentials getSecretKey();

    Credentials getPublicKey();

    HttpPheClient getPheClient();

    std::map<std::string, std::vector<VirgilPublicKey>> getExternalPublicKeys();


    VirgilCrypto getCrypto();

    NonRotatableSecrets getNonrotatableSecrets();




};

#endif //VIRGIL_PUREKIT_CPP_PURECONTEXT_H
