#include "stubs.h"

// -------------------------------------------------------------------------------------------
// Definições de constantes.

const int StubAAutenticacao::TRIGGER_FALHA;
const int StubAAutenticacao::TRIGGER_ERRO_SISTEMA;

// -------------------------------------------------------------------------------------------
// Implementação de método.

bool StubAAutenticacao::autenticar(const Email &email, const Senha &senha) {

    // Apresentar dados recebidos.

    cout << endl << "StubAAutenticacao::autenticar" << endl ;
    cout << "Email = " << email.getEmail()   << endl ;
    cout << "Senha     = " << senha.getEmail()       << endl ;

    // Diferentes comportamentos dependendo do valor do Email

    switch(email.getEmail()){
        case TRIGGER_FALHA:
            return false;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de sistema");
    }

    return true;
}


