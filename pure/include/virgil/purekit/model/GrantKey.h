

#ifndef VIRGIL_PUREKIT_CPP_GRANTKEY_H
#define VIRGIL_PUREKIT_CPP_GRANTKEY_H

#include <ctime>
#include <string>
#include <virgil/purekit/VirgilCrypto/Common.h>
class GrantKey {

public:
    std::string getUserId();
    VirgilByteArray getKeyId();
    VirgilByteArray getEncryptedGrantKey();
    time_t getExpirationDate();
    time_t getCreationDate();
};


#endif //VIRGIL_PUREKIT_CPP_GRANTKEY_H
