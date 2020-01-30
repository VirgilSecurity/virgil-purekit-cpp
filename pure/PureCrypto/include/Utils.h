//
// Created by Oleksandr Fryziuk on 24.01.2020.
//

#ifndef VIRGIL_PUREKIT_CPP_UTILS_H
#define VIRGIL_PUREKIT_CPP_UTILS_H
#include "virgil/crypto/foundation/vscf_impl.h"
#include "virgil/crypto/foundation/vscf_key_provider.h"

namespace Utils {

    void destroyPrivateKey(vscf_impl_t *private_key);
    vscf_impl_t *createPrivateKey();

    void destroyPublicKey(vscf_impl_t* public_key);
}

#endif //VIRGIL_PUREKIT_CPP_UTILS_H
