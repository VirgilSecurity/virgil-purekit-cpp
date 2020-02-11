#include <virgil/purekit/model/GrantKey.h>
#include <virgil/purekit/exceptions/NotImplementedException.h>

std::string GrantKey::getUserId() {
    throw NotImplementedException();
}
VirgilByteArray GrantKey::getKeyId() {
    throw NotImplementedException();
}
VirgilByteArray GrantKey::getEncryptedGrantKey() {
    throw NotImplementedException();
}
time_t GrantKey::getExpirationDate() {
    throw NotImplementedException();
}
time_t GrantKey::getCreationDate() {
    throw NotImplementedException();
}

