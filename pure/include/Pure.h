//
// Created by Oleksandr Fryziuk on 2020-01-13.
//

#ifndef VIRGIL_PUREKIT_CPP_PURE_H
#define VIRGIL_PUREKIT_CPP_PURE_H

#include <string>
#include "HttpPheClient.h"

class Pure {

public:
    void registerUser(std::string userID, std::string password) throw();


private:
    HttpPheClient pheClient;

};

#endif //VIRGIL_PUREKIT_CPP_PURE_H
