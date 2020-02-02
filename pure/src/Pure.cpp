//
// Created by Oleksandr Fryziuk on 2020-01-13.
//

#include <virgil/purekit/Pure.h>
#include "purekit.pb.h"
#include <virgil/purekit/HttpPheClient/HttpPheClient.h>
#include <fstream>
#include <nlohmann/json.hpp>



void Pure::registerUser(std::string userID, std::string password) throw() {
    using namespace build;

    EnrollmentRequest enrollmentRequest;
    enrollmentRequest.set_version(2);
    readEnvironments();

    httpPheClient.enrollAccount(enrollmentRequest);


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

Pure::Pure():httpPheClient("AT.AsqUpZfrWZkNFDxahHLzugOBtqkJYF3k",
        "https://api2-dev.virgilsecurity.com/phe/v1"), pureCrypto() {

}
