
#ifndef VIRGIL_PUREKIT_CPP_VIRGILCRYPTO_H
#define VIRGIL_PUREKIT_CPP_VIRGILCRYPTO_H

#include <vector>
#include "Common.h"
#include "KeyPair.h"
#include "VirgilKeyPair.h"

enum KeyPairType {

    /**
     * Diffie–Hellman X25519.
     */
            CURVE25519,

    /**
     * EdDSA Ed25519.
     */
            ED25519,

    /**
     * SECP256R1 (NIST P-256).
     */
            SECP256R1,

    /**
     * RSA 2048 bit.
     */
            RSA_2048,

    /**
     * RSA 4096 bit.
     */
            RSA_4096,

    /**
     * RSA 8192 bit.
     */
            RSA_8192,

    /**
     * Compound key CURVE25519 ROUND5 ED25519 FALCON
     */
            CURVE25519_ROUND5_ED25519_FALCON,

    /**
     * Compound key CURVE25519 ED25519
     */
            CURVE25519_ED25519
};

class VirgilCrypto {
public:

    VirgilByteArray computeHash(VirgilByteArray data); // For now just sha512

    VirgilByteArray generateRandomData(size_t size);

    VirgilKeyPair generateKeyPair(KeyPairType type);

    VirgilByteArray exportPublicKey(const VirgilPublicKey& key);
private:
    std::vector<unsigned int> computePublicKeyIdentifier(vscf_impl_t* publicKeyIdentifier);
};
#endif //VIRGIL_PUREKIT_CPP_VIRGILCRYPTO_H
