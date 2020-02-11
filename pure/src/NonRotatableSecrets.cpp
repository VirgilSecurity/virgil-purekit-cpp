#include <virgil/purekit/NonRotatableSecrets.h>
#include <virgil/purekit/exceptions/NotImplementedException.h>


VirgilByteArray NonRotatableSecrets::getAk() {
    throw NotImplementedException();

}

VirgilKeyPair NonRotatableSecrets::getVskp() {
    throw NotImplementedException();
}

VirgilKeyPair NonRotatableSecrets::getOskp() {
    throw NotImplementedException();
}

