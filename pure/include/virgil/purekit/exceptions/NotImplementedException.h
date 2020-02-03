
#ifndef VIRGIL_PUREKIT_CPP_NOTIMPLEMENTEDEXCEPTION_H
#define VIRGIL_PUREKIT_CPP_NOTIMPLEMENTEDEXCEPTION_H

#include <exception>

class NotImplementedException : public std::logic_error
{
public:
    NotImplementedException () : std::logic_error{"Function not yet implemented."} {}
};


#endif //VIRGIL_PUREKIT_CPP_NOTIMPLEMENTEDEXCEPTION_H
