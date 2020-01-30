#include "PrivateKeyCWrapper.h"


PrivateKeyCWrapper::PrivateKeyCWrapper(std::unique_ptr<vscf_impl_t, decltype(&destroyPrivateKey)> ptr):privateKeyCrypto(std::move(ptr)) {

}

vscf_impl_t * PrivateKeyCWrapper::getPrivateKey() {
    privateKeyCrypto.get();
}
