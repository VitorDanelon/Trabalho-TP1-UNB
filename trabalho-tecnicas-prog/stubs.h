#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "dominios.h"
#include "IAA.h"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

// -------------------------------------------------------------------------------------------
// Declara��o de classe stub.
//
// Classe StubIAAutentica��o implementa a interface IAAutentica��o.

class StubISAutenticacao:public ISAutenticacao{

private:

    // Defini��es de valores a serem usados como gatilhos para notifica��es de erros.

    const static std::string TRIGGER_FALHA;
    const static std::string TRIGGER_ERRO_SISTEMA;

public:

    // Declara��o de m�todo previsto em interface.

    bool autenticar(const Email&, const Senha&);
};


#endif // STUBS_H_INCLUDED

