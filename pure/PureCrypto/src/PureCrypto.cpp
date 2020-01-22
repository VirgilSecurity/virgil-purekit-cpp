
#include "PureCrypto.h"

#include "vscf_sha512.h"
#include "vscf_hash.h"
#include "vscf_assert.h"
#include <cstdlib>
#include <virgil/crypto/foundation/vscf_key_provider.h>


#include "Common.h"

VirgilByteArray PureCrypto::computeHash(VirgilByteArray data) {
    VirgilByteArray result (vscf_sha512_DIGEST_LEN);

    vsc_buffer_t *digest = vsc_buffer_new();
    vsc_buffer_use(digest, result.data(), result.size());

    vsc_data_t vsc_array_wrap { data.data(), data.size() };
    vscf_sha512_hash(vsc_array_wrap, digest);

    vsc_buffer_destroy(&digest);
    return result ;
}

KeyPair PureCrypto::generateKeyPair() {

    vscf_key_provider_t *key_provider = vscf_key_provider_new();
    vscf_status_t status = vscf_key_provider_setup_defaults(key_provider);

    vscf_error_t error;
    vscf_error_reset(&error);

    vscf_impl_t *private_key = vscf_key_provider_generate_private_key(key_provider, vscf_alg_id_ED25519, &error);

    VirgilByteArray result (vscf_key_provider_exported_private_key_len(key_provider, private_key));




    //  Cleanup
    vscf_impl_destroy(&private_key);
    vscf_key_provider_destroy(&key_provider);

}



