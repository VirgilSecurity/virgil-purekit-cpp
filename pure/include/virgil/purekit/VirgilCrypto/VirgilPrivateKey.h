
#ifndef VIRGIL_PUREKIT_CPP_VIRGILPRIVATEKEY_H
#define VIRGIL_PUREKIT_CPP_VIRGILPRIVATEKEY_H
#include <vector>
#include "virgil/crypto/foundation/vscf_impl.h"
#include "Utils.h"
#include "KeyPairType.h"
#include <functional>
#include <memory>

class VirgilPrivateKey {
    VirgilPrivateKey(std::unique_ptr<vscf_impl_t, std::function<void(vscf_impl_t*)>>key,
    std::vector<unsigned int> id, KeyPairType keyPairType);

    VirgilPrivateKey() = default;

    std::vector<unsigned int> identifier;
    std::unique_ptr<vscf_impl_t, std::function<void(vscf_impl_t*)>> privateKey;
    KeyPairType type;

};

#endif //VIRGIL_PUREKIT_CPP_VIRGILPRIVATEKEY_H
