//
// Created by Oleksandr Fryziuk on 24.01.2020.
//

#ifndef VIRGIL_PUREKIT_CPP_KEYPROVIDER_H
#define VIRGIL_PUREKIT_CPP_KEYPROVIDER_H

#include <virgil/crypto/foundation/vscf_key_provider.h>
#include <virgil/crypto/foundation/vscf_private_key.h>
#include <memory>
#include "Utils.h"

class KeyProvider {

    static void destroyKeyProvider(vscf_key_provider_t* keyProvider) {
        vscf_key_provider_destroy(&keyProvider);
    }

public:
    KeyProvider();
    ~KeyProvider();

    vscf_key_provider_t* getKeyProvider();

    std::unique_ptr<vscf_impl_t, decltype(&Utils::destroyPrivateKey)>
    generatePrivateKey();

    std::unique_ptr<vscf_impl_t, decltype(&Utils::destroyPublicKey)>
    extractPublicKey(vscf_impl_t* privateKey);

private:
    vscf_key_provider_t* keyProviderCtx;
};

#endif //VIRGIL_PUREKIT_CPP_KEYPROVIDER_H
