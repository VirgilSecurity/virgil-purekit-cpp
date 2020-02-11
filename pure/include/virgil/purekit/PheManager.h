

#ifndef VIRGIL_PUREKIT_CPP_PHEMANAGER_H
#define VIRGIL_PUREKIT_CPP_PHEMANAGER_H

#include <virgil/purekit/VirgilCrypto/PheClient.h>
#include <virgil/purekit/model/PureGrant.h>
#include <string>
#include <virgil/purekit/VirgilCrypto/Common.h>
#include <virgil/purekit/model/UserRecord.h>
#include <virgil/purekit/VirgilCrypto/PheClientEnrollAccountResult.h>


class PheManager {
public:
//    PureGrant getGrant();
//    std::string getEncryptedGrant();

    VirgilByteArray computePheKey(const UserRecord& userRecord, const std::string& password);

    VirgilByteArray computePheKey(const UserRecord& userRecord, const VirgilByteArray& passwordHash);

    VirgilByteArray performRotation(const VirgilByteArray& enrollmentRecord);

    PheClientEnrollAccountResult getEnrollment(const VirgilByteArray &passwordHash);

private:
    PheClient getPheClient(int pheVersion);

};

#endif //VIRGIL_PUREKIT_CPP_PHEMANAGER_H
