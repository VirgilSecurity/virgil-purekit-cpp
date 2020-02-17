
#include "virgil/crypto/foundation/vscf_private_key.h"
#include "virgil/crypto/foundation/vscf_key_provider.h"
#include "virgil/purekit/VirgilCrypto/Utils.h"

namespace Utils {

    void destroyPrivateKey(vscf_impl_t *private_key) {
        vscf_impl_destroy(&private_key);
    }

    void destroyPublicKey(vscf_impl_t *public_key) {
        vscf_impl_destroy(&public_key);
    }

    vscf_impl_t *createPrivateKey() {
        vscf_error_t error;
        vscf_error_reset(&error);
        vscf_key_provider_t *key_provider = vscf_key_provider_new();
        vscf_status_t status = vscf_key_provider_setup_defaults(key_provider);

        vscf_impl_t *private_key = vscf_key_provider_generate_private_key(key_provider, vscf_alg_id_ED25519, &error);
        vscf_key_provider_destroy(&key_provider);
        return private_key;
    }

    // taken from https://gist.github.com/fernandomv3/46a6d7656f50ee8d39dc
    std::string generateUUID() {
        const std::string CHARS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        std::string uuid = std::string(36, ' ');
        int rnd = 0;
        int r = 0;

        uuid[8] = '-';
        uuid[13] = '-';
        uuid[18] = '-';
        uuid[23] = '-';

        uuid[14] = '4';

        for (int i = 0; i < 36; i++) {
            if (i != 8 && i != 13 && i != 18 && i != 14 && i != 23) {
                if (rnd <= 0x02) {
                    rnd = 0x2000000 + (std::rand() * 0x1000000) | 0;
                }
                rnd >>= 4;
                uuid[i] = CHARS[(i == 19) ? ((rnd & 0xf) & 0x3) | 0x8 : rnd & 0xf];
            }
        }
        return uuid;
    }
}

