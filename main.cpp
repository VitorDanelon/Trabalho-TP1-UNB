#include <iostream>
#include "dominios.h"
#include "stubs.h"
#include "controladoras.h"
#include "IAG.h"
#include "IAC.h"
#include "IAA.h"

using namespace std;

int main() {
    // Criação e configuração da controladora de autenticação e stub correspondente
    ControladoraAutenticacao controladoraAutenticacao;
    StubISAutenticacao stubISAutenticacao;
    controladoraAutenticacao.setCntrISAutenticacao(&stubISAutenticacao);

    // Simulação de autenticação
    bool resultado;
    Email email;
    Senha senha;

    while (true) {
        // Simular apresentação de tela inicial do sistema.
        cout << endl << "Tela inicial de sistema." << endl;

        try {
            // Solicitar serviço de autenticação.
            resultado = controladoraAutenticacao.autenticar(&email);
        } catch (const runtime_error &exp) {
            cout << "Erro de sistema." << endl;
            break;
        }

        // Criticar resultado da autenticação.
        if (resultado) {
            cout << endl << "Sucesso autenticação." << endl;
            cout << endl << "Email = " << email.getEmail() << endl;
            break;
        } else {
            cout << endl << "Erro autenticação." << endl;
            break;
        }
    }

    // Criação e configuração da controladora de gestão (quadros e cartões) e stub correspondente
    ControladoraGestor controladoraGestor;
    StubISGestor stubISGestor;
    controladoraGestor.setCntrISGestor(&stubISGestor);

    // Simular operações de gestão (quadros e cartões) após a autenticação bem-sucedida
    // Você pode adicionar aqui as chamadas aos métodos da controladoraGestor para criar, visualizar, eliminar quadros, cartões, etc.

    return 0;
}
