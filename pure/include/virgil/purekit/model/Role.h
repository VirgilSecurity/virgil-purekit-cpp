
#ifndef VIRGIL_PUREKIT_CPP_ROLE_H
#define VIRGIL_PUREKIT_CPP_ROLE_H
#include <string>
#include <virgil/purekit/VirgilCrypto/Common.h>

class Role {
public:
    std::string getRoleName();
    VirgilByteArray getRpk();
};

#endif //VIRGIL_PUREKIT_CPP_ROLE_H
