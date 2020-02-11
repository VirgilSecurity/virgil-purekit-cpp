
#ifndef VIRGIL_PUREKIT_CPP_ROLEASSIGNMENT_H
#define VIRGIL_PUREKIT_CPP_ROLEASSIGNMENT_H

#include <string>
#include <virgil/purekit/VirgilCrypto/Common.h>

class RoleAssignment {
public:
    std::string getRoleName();
    VirgilByteArray getPublicKeyId();
    VirgilByteArray getEncryptedRsk();
    std::string getUserId();
};

#endif //VIRGIL_PUREKIT_CPP_ROLEASSIGNMENT_H
