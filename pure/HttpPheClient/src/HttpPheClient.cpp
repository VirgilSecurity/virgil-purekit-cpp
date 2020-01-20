//
// Created by Oleksandr Fryziuk on 2020-01-15.
//
#include "HttpPheClient.h"
#include "HttpClientProtobuf.h"


build::EnrollmentResponse HttpPheClient::enrollAcount(build::EnrollmentRequest request) {

    HttpClientProtobuf httpClientProtobuf;
    httpClientProtobuf.fireGet(request);
}


