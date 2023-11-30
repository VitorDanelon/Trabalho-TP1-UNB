#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "IAA.h"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

// -------------------------------------------------------------------------------------------
// Declaração de classe stub.
//
// Classe StubIAAutenticação implementa a interface IAAutenticação.

class StubIAAntenticação:public IAAutenticacao{

private:

    // Definições de valores a serem usados como gatilhos para notificações de erros.

    const static int TRIGGER_FALHA        = 67890;
    const static int TRIGGER_ERRO_SISTEMA = 78901;

public:

    // Declaração de método previsto em interface.

    bool autenticar(const Email&, const Senha&);
};


#endif // STUBS_H_INCLUDED

