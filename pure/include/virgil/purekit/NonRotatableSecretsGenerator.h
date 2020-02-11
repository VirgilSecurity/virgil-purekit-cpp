//
// Created by Oleksandr Fryziuk on 04.02.2020.
//

#ifndef VIRGIL_PUREKIT_CPP_NONROTATABLESECRETSGENERATOR_H
#define VIRGIL_PUREKIT_CPP_NONROTATABLESECRETSGENERATOR_H

#include "NonRotatableSecrets.h"

class NonRotatableSecretsGenerator {

public:
    static NonRotatableSecrets generateSecrets(VirgilByteArray masterSecret);

};

#endif //VIRGIL_PUREKIT_CPP_NONROTATABLESECRETSGENERATOR_H
