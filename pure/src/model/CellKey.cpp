#include <virgil/purekit/model/CellKey.h>
#include <virgil/purekit/exceptions/NotImplementedException.h>

std::string CellKey::getUserId() {

}
std::string CellKey::getDataId() {
    throw NotImplementedException();
}
VirgilByteArray CellKey::getCpk() {
    throw NotImplementedException();
}
VirgilByteArray CellKey::getEncryptedCskCms() {
    throw NotImplementedException();
}
VirgilByteArray CellKey::getEncryptedCskBody() {
    throw NotImplementedException();
}
