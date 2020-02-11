#include <virgil/purekit/PureContext.h>
#include <virgil/purekit/exceptions/NotImplementedException.h>

PureContext PureContext::createContext(const std::string& appToken,
                                 const std::string& nms,
                                 const std::string& bu,
                                 const std::string& sk,
                                 const std::string& pk,
                                 const std::map<std::string, std::vector<std::string>>& externalPublicKeys) {
    throw NotImplementedException();
}

PureContext PureContext::createContext(const std::string& appToken,
                                 const std::string& nms,
                                 const std::string& bu,
                                 const std::string& sk,
                                 const std::string& pk,
                                 const std::map<std::string, std::vector<std::string>>& externalPublicKeys,
                                 const std::string& pheServiceAddress,
                                 const std::string& pureServiceAddress,
                                 const std::string& kmsServiceAddress) {
    throw NotImplementedException();
}

PureContext PureContext::createContext(const std::string& appToken,
                                 const std::string& nms,
                                 const std::string& bu,
                                 const PureStorage& storage,
                                 const std::string& secretKey,
                                 const std::string& publicKey,
                                 const std::map<std::string, std::vector<std::string>>& externalPublicKeys) {
    throw NotImplementedException();
}

PureContext PureContext::createContext(const std::string& appToken,
                                 const std::string& nms,
                                 const std::string& bu,
                                 const PureStorage& storage,
                                 const std::string& secretKey,
                                 const std::string& publicKey,
                                 const std::map<std::string, std::vector<std::string>>& externalPublicKeys,
                                 const std::string& pheServiceAddress,
                                 const std::string& kmsServiceAddress) {
    throw NotImplementedException();
}

PureContext::Credentials PureContext::parseCredentials(const std::string& prefix,
                                    const std::string& credentials,
                                    bool isVersioned,
                                    bool isTwofold) {
    throw NotImplementedException();
}

PureStorage PureContext::getStorage() {
    throw NotImplementedException();
}

PureContext::Credentials PureContext::getUpdateToken() {
    throw NotImplementedException();
}

void PureContext::setUpdateToken(std::string updateToken) {
    throw NotImplementedException();
}

void PureContext::setStorage(PureStorage storage) {
    throw NotImplementedException();
}

VirgilPublicKey PureContext::getBuppk() {
    throw NotImplementedException();
}

PureContext::Credentials PureContext::getSecretKey() {
    throw NotImplementedException();
}

PureContext::Credentials PureContext::getPublicKey() {
    throw NotImplementedException();
}

HttpPheClient PureContext::getPheClient() {
    throw NotImplementedException();
}

std::map<std::string, std::vector<VirgilPublicKey>> PureContext::getExternalPublicKeys() {
    throw NotImplementedException();
}

VirgilCrypto PureContext::getCrypto() {
    throw NotImplementedException();
}

NonRotatableSecrets getNonrotatableSecrets() {
    throw NotImplementedException();
}

