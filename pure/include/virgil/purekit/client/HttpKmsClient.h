//
// Created by Oleksandr Fryziuk on 11.02.2020.
//

#ifndef VIRGIL_PUREKIT_CPP_HTTPKMSCLIENT_H
#define VIRGIL_PUREKIT_CPP_HTTPKMSCLIENT_H
#include <purekitV3_client.pb.h>


class HttpKmsClient {
    build::DecryptResponse decrypt(const build::DecryptRequest& request);
};

#endif //VIRGIL_PUREKIT_CPP_HTTPKMSCLIENT_H
