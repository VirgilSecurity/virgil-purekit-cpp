//
// Created by Oleksandr Fryziuk on 03.02.2020.
//

#ifndef VIRGIL_PUREKIT_CPP_NONROTATABLESECRETS_H
#define VIRGIL_PUREKIT_CPP_NONROTATABLESECRETS_H

#include <virgil/purekit/VirgilCrypto/Common.h>
#include <virgil/purekit/VirgilCrypto/VirgilKeyPair.h>

class NonRotatableSecrets {

public:
    VirgilByteArray getAk();

    VirgilKeyPair getVskp();

    VirgilKeyPair getOskp();

};

#endif //VIRGIL_PUREKIT_CPP_NONROTATABLESECRETS_H
