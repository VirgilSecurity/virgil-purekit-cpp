
#ifndef VIRGIL_PUREKIT_CPP_VIRGILPUBLICKEY_H
#define VIRGIL_PUREKIT_CPP_VIRGILPUBLICKEY_H
#include <vector>
#include "virgil/crypto/foundation/vscf_impl.h"
#include "Utils.h"
#include "KeyPairType.h"
#include <functional>

class VirgilPublicKey {
public:
    VirgilPublicKey(std::unique_ptr<vscf_impl_t, std::function<void(vscf_impl_t*)>>key,
                std::vector<unsigned int> id, KeyPairType keyPairType);

    VirgilPublicKey() = default;

    std::vector<unsigned int> identifier;
    std::unique_ptr<vscf_impl_t, std::function<void(vscf_impl_t*)>> publicKey;
    KeyPairType type;
};

#endif //VIRGIL_PUREKIT_CPP_VIRGILPUBLICKEY_H
