#include <virgil/purekit/VirgilCrypto/VirgilKeyPair.h>
#include <virgil/purekit/exceptions/NotImplementedException.h>

VirgilKeyPair::VirgilKeyPair(VirgilPublicKey virgilPublicKey) : publicKey(std::move(virgilPublicKey)) {
}
VirgilKeyPair::VirgilKeyPair() {

}

VirgilPublicKey VirgilKeyPair::getPublicKey() {
    throw NotImplementedException();
}

