
#include <virgil/purekit/VirgilCrypto/VirgilCrypto.h>

#include <virgil/crypto/foundation/vscf_sha512.h>
#include <virgil/crypto/foundation/vscf_hash.h>

#include <virgil/crypto/foundation/vscf_key_provider.h>
#include <virgil/crypto/foundation/vscf_private_key.h>
#include <virgil/crypto/foundation/vscf_public_key.h>
#include <virgil/crypto/foundation/vscf_key_asn1_serializer.h>
#include <virgil/crypto/common/private/vsc_buffer_defs.h>


#include <virgil/purekit/VirgilCrypto/KeyProvider.h>


#include <virgil/purekit/VirgilCrypto/Common.h>
#include <virgil/purekit/VirgilCrypto/Utils.h>
#include <virgil/purekit/VirgilCrypto/VirgilKeyPair.h>
#include <virgil/purekit/exceptions/NotImplementedException.h>

VirgilByteArray VirgilCrypto::computeHash(VirgilByteArray data) {
    VirgilByteArray result (vscf_sha512_DIGEST_LEN);

    vsc_buffer_t digest;
    vsc_buffer_init(&digest);
    vsc_buffer_use(&digest, result.data(), result.size());
    vsc_data_t vsc_array_wrap { data.data(), data.size() };
    vscf_sha512_hash(vsc_array_wrap, &digest);

    vsc_buffer_cleanup(&digest);
    return result ;
}

VirgilKeyPair VirgilCrypto::generateKeyPair() {
    KeyProvider provider;
    std::unique_ptr<vscf_impl_t, decltype(&Utils::destroyPrivateKey)> privateKey = provider.generatePrivateKey();
    std::unique_ptr<vscf_impl_t, decltype(&Utils::destroyPublicKey)> publicKey = provider.extractPublicKey(privateKey.get());
    std::vector<unsigned int> array;
    VirgilPublicKey virgilPublicKey (std::move(publicKey), array);
    KeyPair keyPair(std::move(privateKey), std::move(publicKey));

    VirgilKeyPair vkp;
    throw NotImplementedException();
    return vkp;
}

std::vector<unsigned int>VirgilCrypto::computePublicKeyIdentifier(vscf_impl_t* publicKeyIdentifier) {
    vscf_key_asn1_serializer_t* keyAsn1Serializer = vscf_key_asn1_serializer_new();
    vscf_key_asn1_serializer_setup_defaults(keyAsn1Serializer);

    std::vector<unsigned int> vec;
    return vec;
}

VirgilByteArray VirgilCrypto::generateRandomData(size_t size) {
    throw NotImplementedException();
}

VirgilByteArray VirgilCrypto::exportPublicKey(const VirgilPublicKey& key) {
    throw NotImplementedException();
}



