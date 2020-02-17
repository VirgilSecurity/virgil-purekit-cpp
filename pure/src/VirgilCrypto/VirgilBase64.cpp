#include <virgil/purekit/VirgilCrypto/VirgilBase64.h>
#include <virgil/purekit/exceptions/NotImplementedException.h>

std::string VirgilBase64::encode(const VirgilByteArray& data) {
    throw NotImplementedException();
    // use vscf base64 encode

}


VirgilByteArray VirgilBase64::decode(const std::string& base64str) {
    throw NotImplementedException();
}

