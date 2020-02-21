#include "gtest/gtest.h"
#include "vscf_sha512.h"
#include "vscf_hash.h"

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <virgil/purekit/Pure.h>
#include <virgil/purekit/PureContext.h>
#include <virgil/purekit/exceptions/NotImplementedException.h>
#include <virgil/purekit/VirgilCrypto/VirgilBase64.h>
#include <string>
#include <virgil/purekit/storage/RamPureStorage.h>

class PureTest : public ::testing::Test {

public:
//private
    PureContext context;
    VirgilKeyPair bupkp;
    VirgilByteArray nmsData;
    VirgilCrypto crypto;

    enum StorageType {
        RAM, VirgilCloud, MariaDB
    };
    class PureSetupResult {
    public:
        PureSetupResult(const PureContext& pureContext, const VirgilKeyPair& bupkp, const VirgilByteArray& nmsData) {

        }
        PureContext getContext() {
            throw NotImplementedException();
        }

    };

    PureSetupResult setupPure(VirgilByteArray nms,
                              std::string pheServerAddress,
                              std::string pureServerAddress,
                              std::string kmsServerAddress,
                              std::string appToken,
                              std::string publicKey,
                              std::string secretKey,
                              std::string updateToken,
                              std::map<std::string, std::vector<std::string>> externalPublicKeys,
                              StorageType storageType,
                              bool skipClean) {

        VirgilKeyPair keyPair = this->crypto.generateKeyPair(KeyPairType::ED25519);

        nmsData = nms;

        if (nmsData.empty()) {
            nmsData = this->crypto.generateRandomData(32);
        }

        std::string nmsString = "NM." + VirgilBase64::encode(nmsData);
        std::string bupkpString = "BU." + VirgilBase64::encode(this->crypto.exportPublicKey(bupkp.getPublicKey()));

        PureContext context;

        RamPureStorage ramPureStorage;

        PureStorage pureStorage;

        switch (storageType) {
            case RAM:
                context = PureContext::createContext(appToken, nmsString, bupkpString,
                                                     secretKey, publicKey, ramPureStorage, externalPublicKeys,
                                                     pheServerAddress, kmsServerAddress);
                break;
            case VirgilCloud:
                context = PureContext::createContext(appToken, nmsString, bupkpString,
                                                     secretKey, publicKey, externalPublicKeys,
                                                     pheServerAddress, pureServerAddress, kmsServerAddress);
                break;
            case MariaDB:
                //todo
                break;
        }

        if (updateToken.empty()) {
            context.setUpdateToken(updateToken);
        }

        return PureSetupResult(context, bupkp, nmsData);

        throw NotImplementedException();
    }

    PureSetupResult setupPure() {
        throw NotImplementedException();
    }

    PureSetupResult setupPure( std::string pheServerAddress,
                                std::string pureServerAddress,
                                std::string kmsServerAddress,
                                std::string appToken,
                                std::string publicKey,
                                std::string secretKey,
                                std::map<std::string, std::vector<std::string>> externalPublicKeys,
                                StorageType storageType) {
        VirgilByteArray nms;

        std::string utoken;
        //throw NotImplementedException();


        return setupPure(nms,
                pheServerAddress,
                pureServerAddress,
                kmsServerAddress,
                appToken,
                publicKey,
                secretKey,
        utoken,
        externalPublicKeys,
        storageType,
        false);


    }



    static std::vector<StorageType> createStorages() {
        std::vector<StorageType> storages;
        storages.push_back(RAM);
//        storages.push_back(VirgilCloud);
//        storages.push_back(MariaDB);

        return storages;
    }


public:

    PureTest() {
        //throw NotImplementedException();
        //setupPure();
    }

    ~PureTest() override {}



    // Override this to define how to set up the environment.
    void SetUp() override {

    }

    // Override this to define how to tear down the environment.
    void TearDown() override {}

protected:
    std::string pheServerAddress = "https://api-dev.virgilsecurity.com/phe/v1";
    std::string pureServerAddress = "https://api-dev.virgilsecurity.com/pure/v1";
    std::string kmsServerAddress = "https://api-dev.virgilsecurity.com/kms/v1";
    std::string appToken = "AT.znqRZcOdzybj62Rzer897pX2DZ9KZoYF";
    std::string publicKey = "PK.2.BCIeyCW9xDfbuYQb6CIJ7dMqujrjBlIysJs6dXxV+9FU9kxC60fD1dl/P/6TT2wJN8p9E16IPNt5OdJ6Tq3S6L0=.BGjcd5b4wzuGapBQXcUxVXnHWvscYMDbTWk1zxqejSruppcoVWzeYlF0z7GTT3HUdejdrFtbL6sRxD/wOu5jYAs=";
    std::string secretKey = "SK.2.3JE4SAOXGC95nDOjOhCyTXZqdQmjaqz9mtZhIN9s/2g=.cFGlNRis9FQ77DW2fCpBcx+EI4SHv7guS1sPCnSRmx0=.rKEuUZePvcr6CdOTJkk0kd0kUAq1rSx0x2A9lUegQHo=";
    std::string updateToken = "";
};

TEST_F(PureTest, registration__new_user__should_succeed) {
    auto storages = createStorages();
    for (StorageType storage: storages) {
        std::map<std::string, std::vector<std::string>> externalPublicKeys;
        PureSetupResult pureResult = this->setupPure(pheServerAddress, pureServerAddress, kmsServerAddress, appToken, publicKey, secretKey, externalPublicKeys, storage);
        Pure pure = Pure(pureResult.getContext());

        std::string userId = Utils::generateUUID();

        std::string password = Utils::generateUUID();

        pure.registerUser(userId, password);
    }
}

TEST_F(PureTest, authentication__new_user__should_succeed) {
    auto storages = createStorages();
    for (StorageType storage: storages) {
        std::map<std::string, std::vector<std::string>> externalPublicKeys;
        PureSetupResult pureResult = this->setupPure(pheServerAddress, pureServerAddress, kmsServerAddress, appToken, publicKey, secretKey, externalPublicKeys, storage);
        Pure pure = Pure(pureResult.getContext());

        std::string userId = Utils::generateUUID();
        std::string password = Utils::generateUUID();
        std::string dataId = Utils::generateUUID();
        VirgilByteArray text = Utils::generateData(32);

        pure.registerUser(userId, password);

        AuthResult authResult = pure.authenticateUser(userId, password);

        VirgilByteArray cipherText = pure.encrypt(userId, dataId, text);

        VirgilByteArray plainText = pure.decrypt(authResult.getGrant(), "", dataId, cipherText);

        EXPECT_EQ(cipherText, plainText);
    }
}

TEST_F(PureTest, encryption__random_data__should_match) {
    throw NotImplementedException();
}

TEST_F(PureTest, sharing__2_users__should_decrypt) {
    throw NotImplementedException();
}

TEST_F(PureTest, sharing__revoke_access__should_not_decrypt) {
    throw NotImplementedException();
}
TEST_F(PureTest, grant__change_password__should_not_decrypt) {
    throw NotImplementedException();
}

TEST_F(PureTest, grant__expire__should_not_decrypt) {
    throw NotImplementedException();
}

TEST_F(PureTest, grant__admin_access__should_decrypt) {
    throw NotImplementedException();
}
TEST_F(PureTest, reset_pwd__new_user__should_not_decrypt) {
    throw NotImplementedException();
}
TEST_F(PureTest, restore_pwd__new_user__should_decrypt) {
    throw NotImplementedException();
}
TEST_F(PureTest, rotation__local_storage__decrypt_and_recover_works) {
    throw NotImplementedException();
}

TEST_F(PureTest, rotation__local_storage__grant_works) {
    throw NotImplementedException();
}
TEST_F(PureTest, encryption__additional_keys__should_decrypt) {
    throw NotImplementedException();
}
TEST_F(PureTest, encryption__external_keys__should_decrypt) {
    throw NotImplementedException();
}
TEST_F(PureTest, delete_user__cascade__should_delete_user_and_keys) {
    throw NotImplementedException();
}

TEST_F(PureTest, delete_user__no_cascade__should_delete_user) {
    throw NotImplementedException();
}

TEST_F(PureTest, delete_key__new_key__should_delete) {
    throw NotImplementedException();
}

TEST_F(PureTest, registration__new_user__backups_pwd_hash) {
    throw NotImplementedException();
}

TEST_F(PureTest, rencryption__roles__should_decrypt) {
    throw NotImplementedException();
}

TEST_F(PureTest, recovery__new_user__should_recover) {
    throw NotImplementedException();
}