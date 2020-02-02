
#ifndef VIRGIL_PUREKIT_CPP_VIRGILPUBLICKEY_H
#define VIRGIL_PUREKIT_CPP_VIRGILPUBLICKEY_H
#include <vector>
#include "virgil/crypto/foundation/vscf_impl.h"
#include "Utils.h"

class VirgilPublicKey {
public:
    //VirgilPublicKey();

    std::vector<unsigned int> identifier;
    std::unique_ptr<vscf_impl_t, decltype(&Utils::destroyPrivateKey)> publicKey;
};

#endif //VIRGIL_PUREKIT_CPP_VIRGILPUBLICKEY_H
