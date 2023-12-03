#include "stubs.h"

using namespace std;

const std::string StubISAutenticacao::TRIGGER_FALHA = "erro@email.com";
const std::string StubISAutenticacao::TRIGGER_ERRO_SISTEMA = "erro.syst@email.com";

bool StubISAutenticacao::autenticar(const Email &email, const Senha &senha) {
    cout << endl << "StubISAutenticacao::autenticar" << endl;
    cout << "Email = " << email.getEmail() << endl;
    cout << "Senha = " << senha.getSenha() << endl;

    if (email.getEmail() == TRIGGER_FALHA) {
        return false;
    }

    if (email.getEmail() == TRIGGER_ERRO_SISTEMA) {
        throw runtime_error("Erro de sistema");
    }

    return true;
}

void StubIAGestor::criarQuadro(const std::string& codigo, const std::string& nome, const std::string& descricao, const std::string& limite) {
    std::cout << "Criando quadro com código: " << codigo << std::endl;
    // Lógica para criar quadro...
}

void StubIAGestor::visualizarQuadro(const std::string& codigo) {
    std::cout << "Visualizando quadro com código: " << codigo << std::endl;
    // Lógica para visualizar quadro...
}

void StubIAGestor::eliminarQuadro(const std::string& codigo) {
    std::cout << "Eliminando quadro com código: " << codigo << std::endl;
    // Lógica para eliminar quadro...
}

// Implementação dos métodos da interface IACartao para mostrar cartões (se necessário)
void StubIAGestor::criarCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& nome, const std::string& descricao, const std::string& coluna) {
    std::cout << "Criando cartão com código: " << codigoCartao << " no quadro com código: " << codigoQuadro << std::endl;
    // Lógica para criar cartão...
}

void StubIAGestor::visualizarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) {
    std::cout << "Visualizando cartão com código: " << codigoCartao << " no quadro com código: " << codigoQuadro << std::endl;
    // Lógica para visualizar cartão...
}

void StubIAGestor::moverCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& novaColuna) {
    std::cout << "Movendo cartão com código: " << codigoCartao << " para a coluna: " << novaColuna << " no quadro com código: " << codigoQuadro << std::endl;
    // Lógica para mover cartão...
}

void StubIAGestor::eliminarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) {
    std::cout << "Eliminando cartão com código: " << codigoCartao << " no quadro com código: " << codigoQuadro << std::endl;
    // Lógica para eliminar cartão...
}
