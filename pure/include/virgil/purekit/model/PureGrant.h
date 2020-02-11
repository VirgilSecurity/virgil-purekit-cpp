
#ifndef VIRGIL_PUREKIT_CPP_PUREGRANT_H
#define VIRGIL_PUREKIT_CPP_PUREGRANT_H

#include <ctime>
#include <string>
#include <chrono>
#include <virgil/purekit/VirgilCrypto/VirgilKeyPair.h>

class PureGrant {

public:
    VirgilKeyPair getUkp();
    std::string getSessionId();

    std::time_t getCreationDate();
    std::string getUserId();
    std::time_t getExpirationDate();

};
#endif //VIRGIL_PUREKIT_CPP_PUREGRANT_H
