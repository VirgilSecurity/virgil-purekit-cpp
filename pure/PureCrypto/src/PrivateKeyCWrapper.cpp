#include "PrivateKeyCWrapper.h"

#include "virgil/crypto/foundation/vscf_private_key.h"
#include "virgil/crypto/foundation/vscf_key_provider.h"

vscf_impl_t * PrivateKeyCWrapper::createPrivateKey() {

    vscf_error_t error;
    vscf_error_reset(&error);
    vscf_key_provider_t *key_provider = vscf_key_provider_new();
    vscf_status_t status = vscf_key_provider_setup_defaults(key_provider);

    vscf_impl_t* private_key = vscf_key_provider_generate_private_key(key_provider, vscf_alg_id_ED25519, &error);
    vscf_key_provider_destroy(&key_provider);
    return private_key;
}

PrivateKeyCWrapper::PrivateKeyCWrapper():privateKeyCrypto(createPrivateKey(), destroyPrivateKey) {
    
}
