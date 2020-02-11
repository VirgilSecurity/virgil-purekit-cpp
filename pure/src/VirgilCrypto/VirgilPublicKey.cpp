#include <virgil/purekit/VirgilCrypto/VirgilPublicKey.h>


VirgilPublicKey::VirgilPublicKey(std::unique_ptr<vscf_impl_t, decltype(&Utils::destroyPublicKey)> key,
std::vector<unsigned int> id) : publicKey(std::move(key))
{
    identifier = id;
}

