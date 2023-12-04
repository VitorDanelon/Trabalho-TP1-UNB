#include "stubs.h"

using namespace std;
//222031822
//222033157
//202023940
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
/*
202023940
// Implementação de métodos de quadro
void StubIAG::criarQuadro(const std::string& codigo, const std::string& nome, const std::string& descricao, const std::string& limite) {
    std::cout << "Criando quadro com código: " << codigo << std::endl;
    // Lógica para criar quadro...
}

void StubIAG::visualizarQuadro(const std::string& codigo) {
    std::cout << "Visualizando quadro com código: " << codigo << std::endl;
    // Lógica para visualizar quadro...
}

void StubIAG::eliminarQuadro(const std::string& codigo) {
    std::cout << "Eliminando quadro com código: " << codigo << std::endl;
    // Lógica para eliminar quadro...
}

// Implementação de métodos de cartão
void StubIAG::criarCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& nome, const std::string& descricao, const std::string& coluna) {
    std::cout << "Criando cartão com código: " << codigoCartao << " no quadro com código: " << codigoQuadro << std::endl;
    // Lógica para criar cartão...
}

void StubIAG::visualizarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) {
    std::cout << "Visualizando cartão com código: " << codigoCartao << " no quadro com código: " << codigoQuadro << std::endl;
    // Lógica para visualizar cartão...
}

void StubIAG::moverCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& novaColuna) {
    std::cout << "Movendo cartão com código: " << codigoCartao << " para a coluna: " << novaColuna << " no quadro com código: " << codigoQuadro << std::endl;
    // Lógica para mover cartão...
}

void StubIAG::eliminarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) {
    std::cout << "Eliminando cartão com código: " << codigoCartao << " no quadro com código: " << codigoQuadro << std::endl;
    // Lógica para eliminar cartão...
}
*/

