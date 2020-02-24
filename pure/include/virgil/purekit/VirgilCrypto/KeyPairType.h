#ifndef VIRGIL_PUREKIT_CPP_KEYPAIRTYPE_H
#define VIRGIL_PUREKIT_CPP_KEYPAIRTYPE_H
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
#endif //VIRGIL_PUREKIT_CPP_KEYPAIRTYPE_H
