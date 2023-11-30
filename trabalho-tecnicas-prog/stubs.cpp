#include "stubs.h"

using namespace std;
// -------------------------------------------------------------------------------------------
// Defini��es de constantes.

const std::string StubISAutenticacao::TRIGGER_FALHA = "erro@email.com";
const std::string StubISAutenticacao::TRIGGER_ERRO_SISTEMA = "erro.syst@email.com" ;

// -------------------------------------------------------------------------------------------
// Implementa��o de m�todo.

bool StubISAutenticacao::autenticar(const Email &email, const Senha &senha) {

    // Apresentar dados recebidos.

    cout << endl << "StubISAutenticacao::autenticar" << endl ;
    cout << "Email = " << email.getEmail()   << endl ;
    cout << "Senha = " << senha.getSenha()   << endl ;

    // Diferentes comportamentos dependendo do valor do Email

    if(email.getEmail() == TRIGGER_FALHA){
        return false;
    };
    if(email.getEmail() == TRIGGER_ERRO_SISTEMA){
      throw runtime_error("Erro de sistema");
    };



    return true;
}


