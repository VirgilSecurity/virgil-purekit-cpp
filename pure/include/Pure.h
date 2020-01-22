//
// Created by Oleksandr Fryziuk on 2020-01-13.
//

#ifndef VIRGIL_PUREKIT_CPP_PURE_H
#define VIRGIL_PUREKIT_CPP_PURE_H

#include <string>
#include <HttpPheClient.h>
#include <PureCrypto.h>


class Pure {

public:
    Pure();

    void registerUser(std::string userID, std::string password) throw();
    void readEnvironments();
    void computeHash();


private:
   HttpPheClient httpPheClient;
   PureCrypto pureCrypto;

};

#endif //VIRGIL_PUREKIT_CPP_PURE_H
