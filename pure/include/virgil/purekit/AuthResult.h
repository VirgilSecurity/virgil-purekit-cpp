
#ifndef VIRGIL_PUREKIT_CPP_AUTHRESULT_H
#define VIRGIL_PUREKIT_CPP_AUTHRESULT_H

#include <virgil/purekit/model/PureGrant.h>
#include <string>

class AuthResult {
    PureGrant getGrand();
    std::string getEncryptedGrant();

};

#endif //VIRGIL_PUREKIT_CPP_AUTHRESULT_H
