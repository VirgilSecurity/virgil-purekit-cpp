
#ifndef VIRGIL_PUREKIT_CPP_VIRGILCRYPTO_H
#define VIRGIL_PUREKIT_CPP_VIRGILCRYPTO_H

#include <vector>
#include "Common.h"
#include "KeyPair.h"



class VirgilCrypto {
public:

    VirgilByteArray computeHash(VirgilByteArray data); // For now just sha512

    KeyPair generateKeyPair();
private:
    std::vector<unsigned int> computePublicKeyIdentifier(vscf_impl_t* publicKeyIdentifier);
};
#endif //VIRGIL_PUREKIT_CPP_VIRGILCRYPTO_H
