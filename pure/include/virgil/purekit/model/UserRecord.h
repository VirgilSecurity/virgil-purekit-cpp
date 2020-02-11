
#ifndef VIRGIL_PUREKIT_CPP_USERRECORD_H
#define VIRGIL_PUREKIT_CPP_USERRECORD_H

#include <virgil/purekit/VirgilCrypto/Common.h>
#include <string>

class UserRecord {

public:
    std::string getUserId();
    VirgilByteArray getPheRecord();
    int getRecordVersion();
    VirgilByteArray getUpk();
    VirgilByteArray getEncryptedUsk();
    VirgilByteArray getEncryptedUskBackup();
    VirgilByteArray getBackupPwdHash();
    VirgilByteArray getPasswordRecoveryWrap();
    VirgilByteArray getPasswordRecoveryBlob();
};

#endif //VIRGIL_PUREKIT_CPP_USERRECORD_H
