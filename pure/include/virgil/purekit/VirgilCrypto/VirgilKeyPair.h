
#ifndef VIRGIL_PUREKIT_CPP_VIRGILKEYPAIR_H
#define VIRGIL_PUREKIT_CPP_VIRGILKEYPAIR_H
#include <virgil/purekit/VirgilCrypto/VirgilPublicKey.h>
class VirgilKeyPair {

public:
    VirgilKeyPair();
    VirgilKeyPair(VirgilPublicKey virgilPublicKey);
    VirgilPublicKey getPublicKey();

private:
    VirgilPublicKey publicKey;

};

#endif //VIRGIL_PUREKIT_CPP_VIRGILKEYPAIR_H
