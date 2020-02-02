

#ifndef VIRGIL_PUREKIT_CPP_HTTPPHECLIENT_H
#define VIRGIL_PUREKIT_CPP_HTTPPHECLIENT_H
#include <string>
#include <map>
#include <purekit.pb.h>


class HttpPheClient {


public:
    HttpPheClient(const std::string &appToken, const std::string &serviceAddress);

public:
    void enrollAccount(build::EnrollmentRequest enrollmentRequest);

private:
    std::string appToken;
    std::string serviceAddress;
};

#endif //VIRGIL_PUREKIT_CPP_HTTPPHECLIENT_H
