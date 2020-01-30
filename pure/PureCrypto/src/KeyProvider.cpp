
#include "KeyProvider.h"
#include "virgil/crypto/foundation/vscf_key_provider.h"

#include "virgil/crypto/foundation/vscf_private_key.h"
#include "Utils.h"

KeyProvider::KeyProvider(){
    keyProviderCtx = vscf_key_provider_new();
    vscf_status_t status = vscf_key_provider_setup_defaults(keyProviderCtx);
    if (status != vscf_status_SUCCESS) {

    }
}

KeyProvider::~KeyProvider() {
    vscf_key_provider_destroy(&keyProviderCtx);
}

vscf_key_provider_t* KeyProvider::getKeyProvider() {
    return keyProviderCtx;
}

std::unique_ptr<vscf_impl_t, decltype(&Utils::destroyPrivateKey)> KeyProvider::generatePrivateKey() {
    vscf_error_t error;
    vscf_impl_t *private_key = vscf_key_provider_generate_private_key(keyProviderCtx, vscf_alg_id_ED25519, &error);
    std::unique_ptr<vscf_impl_t, decltype(&Utils::destroyPrivateKey)> privateKeyPtr(private_key, Utils::destroyPrivateKey);
    return std::move(privateKeyPtr);
}

std::unique_ptr<vscf_impl_t, decltype(&Utils::destroyPublicKey)>
KeyProvider::extractPublicKey(vscf_impl_t* privateKey) {
    vscf_error_t error;
    vscf_impl_t *publicKey = vscf_private_key_extract_public_key(privateKey);
    std::unique_ptr<vscf_impl_t, decltype(&Utils::destroyPublicKey)> publicKeyPtr(publicKey, Utils::destroyPublicKey);
    return std::move(publicKeyPtr);
}
