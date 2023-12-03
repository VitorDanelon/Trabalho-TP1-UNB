#ifndef IAA_H_INCLUDED
#define IAA_H_INCLUDED
#include <string>
#include "dominios.h"
#include "stubs.h"

class ISAutenticacao;

class IAAutenticacao {
public:
    virtual bool autenticar(Email *) = 0;
    virtual void setCntrISAutenticacao(ISAutenticacao *) = 0;
    virtual ~IAAutenticacao() = default;
};

class ISAutenticacao{
public:
    virtual bool autenticar(const Email&, const Senha&) = 0;    // Metodo por meio do qual � solicitado servi�o.
    virtual ~ISAutenticacao() = default;
};



#endif // INTERFACES_H_INCLUDED
