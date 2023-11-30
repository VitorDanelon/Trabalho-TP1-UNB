// ---------------------------------------------------------------------------------
// Incluir cabe�alhos.

#include <stdexcept>
#include <iostream>
#include <string>

#include "dominios.h"  // Certifique-se de incluir os cabe�alhos corretos.
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"

using namespace std;

int main() {
    // ---------------------------------------------------------------------------------
    // Instanciar classe controladora e classe stub.

    IUQuadro  *cntrIUQuadro = new CntrIUQuadro();
    ILNQuadro *stubLNQuadro = new StubLNQuadro();

    // Ligar inst�ncia de controladora a inst�ncia de stub.

    cntrIUQuadro->setCntrLNQuadro(stubLNQuadro);

    // Simular a apresenta��o de tela inicial do sistema.
    // Vamos assumir que a autentica��o j� foi realizada.

    string codigoQuadro;
    string codigoCartao;
    string nome;
    string descricao;
    string limite;

    // Exemplo de cria��o de quadro.
    try {
        cout << "Criar Quadro:" << endl;
        cout << "Digite o c�digo do quadro: ";
        cin >> codigoQuadro;
        cout << "Digite o nome do quadro: ";
        cin >> nome;
        cout << "Digite a descri��o do quadro: ";
        cin >> descricao;
        cout << "Digite o limite do quadro: ";
        cin >> limite;

        cntrIUQuadro->criarQuadro(codigoQuadro, nome, descricao, limite);
    } catch (const runtime_error &exp) {
        cout << "Erro ao criar quadro: " << exp.what() << endl;
    }

    // Outras opera��es podem ser adicionadas conforme necess�rio.

    // Destruir inst�ncia de controladora e inst�ncia de stub.

    delete cntrIUQuadro;
    delete stubLNQuadro;

    return 0;
}
