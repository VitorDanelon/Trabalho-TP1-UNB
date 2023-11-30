// Arquivo interfaces\IAA.h
#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include <string>

class IAAutenticacao {
public:
    virtual bool autenticar(const Email&, const Senha&) = 0;
    virtual ~IAAutenticacao() {}
};

#endif // INTERFACES_H_INCLUDED

