#include <virgil/purekit/VirgilCrypto/VirgilPublicKey.h>


VirgilPublicKey::VirgilPublicKey(std::unique_ptr<vscf_impl_t, std::function<void(vscf_impl_t*)>> key,
std::vector<unsigned int> id, KeyPairType keyPairType) : publicKey(std::move(key)) {
    identifier = id;
    type = keyPairType;
}


