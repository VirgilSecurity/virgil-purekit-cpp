
#ifndef VIRGIL_PUREKIT_CPP_UTILS_H
#define VIRGIL_PUREKIT_CPP_UTILS_H
#include "virgil/crypto/foundation/vscf_impl.h"
#include "virgil/crypto/foundation/vscf_key_provider.h"
#include <virgil/purekit/VirgilCrypto/Common.h>
#include <string>
#include <cstdlib>

namespace Utils {

    void destroyPrivateKey(vscf_impl_t *private_key);
    vscf_impl_t *createPrivateKey();

    void destroyPublicKey(vscf_impl_t* public_key);



    std::string generateUUID();

    VirgilByteArray generateData(size_t size);
}

#endif //VIRGIL_PUREKIT_CPP_UTILS_H
