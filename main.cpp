#include <stdexcept>
#include <iostream>
#include <string>
#include "dominios.h"
#include "controladoras.h"
#include "IAG.h"
#include "stubs.h"

using namespace std;

int main() {
    // ---------------------------------------------------------------------------------
    // Instanciar classe controladora e classe stub.

    IUQuadro* cntrIUQuadro = new CntrIUQuadro();
    ILNQuadro* stubLNQuadro = new StubLNQuadro();

    // Ligar instância de controladora a instância de stub.

    cntrIUQuadro->setCntrLNQuadro(stubLNQuadro);

    // Simular a apresentação de tela inicial do sistema.
    // Vamos assumir que a autenticação já foi realizada.

    string codigoQuadro;
    string codigoCartao;
    string nome;
    string descricao;
    string limite;

    // Exemplo de criação de quadro.
    try {
        cout << "Criar Quadro:" << endl;
        cout << "Digite o código do quadro: ";
        cin >> codigoQuadro;
        cout << "Digite o nome do quadro: ";
        cin >> nome;
        cout << "Digite a descrição do quadro: ";
        cin >> descricao;
        cout << "Digite o limite do quadro: ";
        cin >> limite;

        cntrIUQuadro->criarQuadro(codigoQuadro, nome, descricao, limite);
    } catch (const invalid_argument& exp) {
        cout << "Erro ao criar quadro: " << exp.what() << endl;
    }

    // Outras operações podem ser adicionadas conforme necessário.

    // Destruir instância de controladora e instância de stub.

    delete cntrIUQuadro;
    delete stubLNQuadro;

    return 0;
}
