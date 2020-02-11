#ifndef VIRGIL_PUREKIT_CPP_PURECRYPTODATA_H
#define VIRGIL_PUREKIT_CPP_PURECRYPTODATA_H

#include <virgil/purekit/VirgilCrypto/Common.h>

class PureCryptoData {

    VirgilByteArray getCms();
    VirgilByteArray getBody();
};

#endif //VIRGIL_PUREKIT_CPP_PURECRYPTODATA_H
