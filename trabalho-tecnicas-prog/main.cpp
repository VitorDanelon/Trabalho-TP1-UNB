#include <iostream>
#include "dominios.h"
#include "stubs.h"
#include "controladoras.h"
#include "IAA.h"

using namespace std;
// 222033157
// 222031822

int main() {

    IAAutenticacao *controladoraAutenticacao = new ControladoraAutenticacao();
    ISAutenticacao *stubISAutenticacao = new StubISAutenticacao();

    // Ligar instância de controladora a instância de stub.
    controladoraAutenticacao->setCntrISAutenticacao(stubISAutenticacao);


    bool resultado;
    Email email;
    Senha senha;

    while (true) {
        // Simular apresentação de tela inicial do sistema.
        cout << endl << "Tela inicial de sistema." << endl;

        try {
            // Solicitar serviço de autenticação.
            resultado = controladoraAutenticacao->autenticar(&email);
        } catch (const runtime_error &exp) {
            cout << "Erro de sistema." << endl;
            break;
        }

        // Criticar resultado da autenticação.
        if (resultado) {
            cout << endl << "Sucesso autenticacao." << endl;
            cout << endl << "Email = " << email.getEmail() << endl;
            break;
        } else {
            cout << endl << "Erro autenticacao." << endl;
            break;
        }
    }

    // Destruir instância de controladora e instância de stub.
    delete controladoraAutenticacao;
    delete stubISAutenticacao;

    return 0;
}

// 202023940
/*Criação de Quadros e Cartões
    ControladoraGestor controladoraGestor;
    StubISGestor stubISGestor;
    controladoraGestor.setCntrISGestor(&stubISGestor);

    // Criar quadro
    controladoraGestor.criarQuadro("Q001", "Quadro 1", "Descrição do Quadro 1", "Limite do Quadro 1");

    // Criar cartão
    controladoraGestor.criarCartao("Q001", "C001", "Cartão 1", "Descrição do Cartão 1", "A fazer");

    // Exibir quadros e cartões
    controladoraGestor.exibirQuadrosECartoes(email);

    // Destruir instâncias
    delete controladoraAutenticacao;
    delete stubISAutenticacao;

    return 0;
}
*/
