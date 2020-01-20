//
// Created by Oleksandr Fryziuk on 2020-01-15.
//
#include "HttpPheClient.h"


build::EnrollmentResponse HttpPheClient::enrollAcount(build::EnrollmentRequest request) {


    httpClientProtobuf.fireGet(request);
}


