//
// Created by Oleksandr Fryziuk on 2020-01-13.
//

#ifndef VIRGIL_PUREKIT_CPP_PURECRYPTO_H
#define VIRGIL_PUREKIT_CPP_PURECRYPTO_H

#include <vector>
#include "Common.h"
#include "KeyPair.h"



class PureCrypto {
public:

    VirgilByteArray computeHash(VirgilByteArray data); // For now just sha512

    KeyPair generateKeyPair();
};
#endif //VIRGIL_PUREKIT_CPP_PURECRYPTO_H
