#include <virgil/purekit/VirgilCrypto/VirgilPrivateKey.h>


VirgilPrivateKey::VirgilPrivateKey(std::unique_ptr<vscf_impl_t, std::function<void(vscf_impl_t*)>> key,
                                 std::vector<unsigned int> id, KeyPairType keyPairType) : privateKey(std::move(key)) {
    identifier = id;
    type = keyPairType;
}