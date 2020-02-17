//
// Created by Oleksandr Fryziuk on 31.01.2020.
//

#ifndef VIRGIL_PUREKIT_CPP_KMSMANAGER_H
#define VIRGIL_PUREKIT_CPP_KMSMANAGER_H

#include <virgil/purekit/VirgilCrypto/Common.h>
#include <virgil/purekit/model/UserRecord.h>

class KmsManger {
private:
    //UoKmsClient getKmsClient(int kms version);

    VirgilByteArray recoverSecret(const UserRecord& userRecord);
    VirgilByteArray performRotation(const VirgilByteArray& wrap);


};

#endif //VIRGIL_PUREKIT_CPP_KMSMANAGER_H
