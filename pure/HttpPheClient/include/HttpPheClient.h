#include "purekit.pb.h"
#include "HttpClientProtobuf.h"

class HttpPheClient {

public:
    build::EnrollmentResponse enrollAcount(build::EnrollmentRequest request);

    HttpClientProtobuf httpClientProtobuf;
};