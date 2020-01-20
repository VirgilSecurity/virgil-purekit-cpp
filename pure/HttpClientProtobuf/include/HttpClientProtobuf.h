    //
// Created by Oleksandr Fryziuk on 2020-01-15.
//

#ifndef VIRGIL_PUREKIT_CPP_HTTPCLIENTPROTOBUF_H
#define VIRGIL_PUREKIT_CPP_HTTPCLIENTPROTOBUF_H
#include <string>
#include <map>
#include <purekit.pb.h>


class HttpClientProtobuf {
public:
    void fireGet(build::EnrollmentRequest request);
};

#endif //VIRGIL_PUREKIT_CPP_HTTPCLIENTPROTOBUF_H
