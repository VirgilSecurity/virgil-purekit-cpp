//
// Created by Oleksandr Fryziuk on 2020-01-13.
//

#include <Pure.h>
#include "purekit.pb.h"




void Pure::registerUser(std::string userID, std::string password) throw() {
    using namespace build;

    EnrollmentRequest enrollmentRequest;
    enrollmentRequest.set_version(2);

    HttpPheClient pheClient;

    pheClient.enrollAcount(enrollmentRequest);

}