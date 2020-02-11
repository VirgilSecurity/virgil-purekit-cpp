#include <virgil/purekit/AuthResult.h>
#include <virgil/purekit/exceptions/NotImplementedException.h>

PureGrant AuthResult::getGrand() {
    throw NotImplementedException();
}
std::string AuthResult::getEncryptedGrant() {
    throw NotImplementedException();
}

