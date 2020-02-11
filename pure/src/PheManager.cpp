#include <virgil/purekit/PheManager.h>
#include <virgil/purekit/exceptions/NotImplementedException.h>

//PureGrant PheManager::getGrant() {
//    throw NotImplementedException();
//}
//std::string PheManager::getEncryptedGrant() {
//    throw NotImplementedException();
//}

VirgilByteArray PheManager::computePheKey(const UserRecord& userRecord, const std::string& password) {
    throw NotImplementedException();
}

VirgilByteArray PheManager::computePheKey(const UserRecord& userRecord, const VirgilByteArray& passwordHash) {
    throw NotImplementedException();
}

VirgilByteArray PheManager::performRotation(const VirgilByteArray& enrollmentRecord) {
    throw NotImplementedException();
}

PheClientEnrollAccountResult PheManager::getEnrollment(const VirgilByteArray &passwordHash) {
    throw NotImplementedException();
}

PheClient PheManager::getPheClient(int pheVersion) {
    throw NotImplementedException();
}
