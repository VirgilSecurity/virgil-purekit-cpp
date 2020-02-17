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

    PureSetupResult setupPure(const std::string& pheServerAddress,
                                const std::string& pureServerAddress,
                                const std::string& kmsServerAddress,
                                const std::string& appToken,
                                const std::string& publicKey,
                                const std::string& secretKey,
                                const std::map<std::string, std::vector<std::string>>& externalPublicKeys,
                                StorageType storageType) {
        throw NotImplementedException();

    }

    PureSetupResult setupPure(VirgilByteArray& nms,
                                  const std::string& pheServerAddress,
                                  const std::string& pureServerAddress,
                                  const std::string& kmsServerAddress,
                                  const std::string& appToken,
                                  const std::string& publicKey,
                                  const std::string& secretKey,
                                  const std::string& updateToken,
                                  const std::map<std::string, std::vector<std::string>>& externalPublicKeys,
                                  StorageType storageType,
                                  bool skipClean) {

        VirgilKeyPair keyPair = this->crypto.generateKeyPair();

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
    std::string pheServerAddress = "";
    std::string pureServerAddress = "";
    std::string kmsServerAddress = "";
    std::string appToken = "";
    std::string publicKey = "";
    std::string secretKey = "";

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
    throw NotImplementedException();
}

TEST_F(PureTest, authentication__new_user__should_succeed) {
    throw NotImplementedException();
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