#include <iostream>
#include "stubs.h"
#include "controladoras.h"
#include "IAA.h"
#include "IAC.h"
#include "IAG.h"
#include <iostream>
#include "dominios.h"
#include "stubs.h"
using namespace std;

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
    //delete controladoraAutenticacao;
    //delete stubISAutenticacao;
    cout << endl << "Modulo Conta" << endl;

    ControladoraISConta conta;
    conta.setDadosConta(email.getEmail(), "Jose", senha.getSenha());

    IAConta *apresentacaoConta = &conta;
    apresentacaoConta->exibirMenuContaApresentacao;

   return 0;



}
