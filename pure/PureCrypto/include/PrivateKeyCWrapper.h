//
// Created by Oleksandr Fryziuk on 23.01.2020.
//

#ifndef VIRGIL_PUREKIT_CPP_PRIVATEKEYCWRAPPER_H
#define VIRGIL_PUREKIT_CPP_PRIVATEKEYCWRAPPER_H

#include "Utils.h"
#include <memory>

class PrivateKeyCWrapper{

private:
    vscf_impl_t * createPrivateKey();
    static void destroyPrivateKey(vscf_impl_t* private_key) {
        vscf_impl_destroy(&private_key);
    }

public:
    PrivateKeyCWrapper(std::unique_ptr<vscf_impl_t, decltype(&destroyPrivateKey)> ptr);
    vscf_impl_t * getPrivateKey();

private:
    std::unique_ptr<vscf_impl_t, decltype(&destroyPrivateKey)> privateKeyCrypto;
};

#endif //VIRGIL_PUREKIT_CPP_PRIVATEKEYCWRAPPER_H
