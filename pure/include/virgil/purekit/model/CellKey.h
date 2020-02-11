

#ifndef VIRGIL_PUREKIT_CPP_CELLKEY_H
#define VIRGIL_PUREKIT_CPP_CELLKEY_H

#include <string>
#include <virgil/purekit/VirgilCrypto/Common.h>

class CellKey {

private:
    std::string userId;
    std::string dataId;
    VirgilByteArray cpk;

public:
    std::string getUserId();
    std::string getDataId();
    VirgilByteArray getCpk();
    VirgilByteArray getEncryptedCskCms();
    VirgilByteArray getEncryptedCskBody();


};

#endif //VIRGIL_PUREKIT_CPP_CELLKEY_H
