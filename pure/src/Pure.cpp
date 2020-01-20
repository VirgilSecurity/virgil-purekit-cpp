//
// Created by Oleksandr Fryziuk on 2020-01-13.
//

#include <Pure.h>
#include "purekit.pb.h"
#include "HttpClientProtobuf.h"
#include <fstream>
#include <nlohmann/json.hpp>



void Pure::registerUser(std::string userID, std::string password) throw() {
    using namespace build;

    EnrollmentRequest enrollmentRequest;
    enrollmentRequest.set_version(2);
    readEnvironments();

    HttpClientProtobuf httpClientProtobuf;
    httpClientProtobuf.fireGet(enrollmentRequest);


}

void Pure::readEnvironments() {
    
    std::ifstream i("env.json");
    nlohmann::json j;
    i >> j;
    std::cout << j["dev"]["PHE_SERVER_ADDRESS"] << std::endl;
}