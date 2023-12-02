
// Arquivo interfaces\IAA.h
#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include <string>
#include "dominios.h"


class ISAutenticacao;

class IAAutenticacao {
public:
    virtual bool autenticar(Email *) = 0;
    virtual void setCntrISAutenticacao(ISAutenticacao *) = 0;
    virtual ~IAAutenticacao() = default;
};

class ISAutenticacao{
public:
    virtual bool autenticar(const Email&, const Senha&) = 0;    // M�todo por meio do qual � solicitado servi�o.
    virtual ~ISAutenticacao() = default;
};



#endif // INTERFACES_H_INCLUDED
