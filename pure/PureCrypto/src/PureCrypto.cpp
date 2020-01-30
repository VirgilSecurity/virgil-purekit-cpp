
#include "PureCrypto.h"

#include "vscf_sha512.h"
#include "vscf_hash.h"
#include "vscf_assert.h"
#include <cstdlib>

#include <virgil/crypto/foundation/vscf_key_provider.h>
#include "virgil/crypto/foundation/vscf_private_key.h"
#include "virgil/crypto/foundation/vscf_public_key.h"

#include "PrivateKeyCWrapper.h"

#include "KeyProvider.h"

#include "Common.h"
#include "Utils.h"

VirgilByteArray PureCrypto::computeHash(VirgilByteArray data) {
    VirgilByteArray result (vscf_sha512_DIGEST_LEN);

    vsc_buffer_t *digest = vsc_buffer_new();
    vsc_buffer_use(digest, result.data(), result.size());

    vsc_data_t vsc_array_wrap { data.data(), data.size() };
    vscf_sha512_hash(vsc_array_wrap, digest);

    vsc_buffer_destroy(&digest);

    KeyProvider provider;
    std::unique_ptr<vscf_impl_t, decltype(&Utils::destroyPrivateKey)> privateKey = provider.generatePrivateKey();
    std::unique_ptr<vscf_impl_t, decltype(&Utils::destroyPublicKey)> publicKey = provider.extractPublicKey(privateKey.get());
    //PrivateKeyCWrapper wrapper;
    return result ;
}

KeyPair PureCrypto::generateKeyPair() {

    std::unique_ptr<vscf_impl_t, decltype(&Utils::destroyPrivateKey)> privateKeyCrypto(Utils::createPrivateKey(), Utils::destroyPrivateKey);
    PrivateKeyCWrapper prKey (std::move(privateKeyCrypto));

    vscf_key_provider_t *key_provider = vscf_key_provider_new();
    vscf_status_t status = vscf_key_provider_setup_defaults(key_provider);

    vscf_error_t error;
    vscf_error_reset(&error);

    vscf_impl_t *private_key = vscf_key_provider_generate_private_key(key_provider, vscf_alg_id_ED25519, &error);

    VirgilByteArray privateKeyVector (vscf_key_provider_exported_private_key_len(key_provider, private_key));
    vsc_buffer_t *privateKeyBuffer = vsc_buffer_new();
    vsc_buffer_use(privateKeyBuffer, privateKeyVector.data(), privateKeyVector.size());

    vscf_key_provider_export_private_key(key_provider, private_key, privateKeyBuffer);
    PrivateKey privateKey = PrivateKey(privateKeyVector, computeHash(privateKeyVector));

    vscf_impl_t *public_key = vscf_private_key_extract_public_key(private_key);

    VirgilByteArray publicKeyVector (vscf_key_provider_exported_public_key_len(key_provider, public_key));
    vsc_buffer_t *publicKeyBuffer = vsc_buffer_new();
    vsc_buffer_use(publicKeyBuffer, publicKeyVector.data(), publicKeyVector.size());
    vscf_key_provider_export_public_key(key_provider, public_key, publicKeyBuffer);

    PublicKey publicKey = PublicKey(publicKeyVector, computeHash(publicKeyVector)); //is it ok?




    //  Cleanup
    vscf_impl_destroy(&private_key);
    vscf_impl_destroy(&public_key);
    vscf_key_provider_destroy(&key_provider);

    return KeyPair(std::move(privateKey), std::move(publicKey));
}



