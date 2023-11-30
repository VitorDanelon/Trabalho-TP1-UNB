#include <stdexcept>
#include <iostream>
#include <string>
#include "dominios.h"
#include "controladoras.h"
#include "IAG.h"
#include "stubs.h"

using namespace std;

int main() {



    // Aqui você precisará criar instâncias necessárias, incluindo o controlador.
    IAGestor* cntrIAGestor = new CntrIAGestor();  // Substitua com a implementação real.
    IApresentacao* apresentacao = new Apresentacao(cntrIAGestor);

    // Chame o método para apresentar quadros e cartões com um email genérico.
    apresentacao->apresentarQuadrosECartoes("testw@exemplo.com");


    delete apresentacao;
    delete cntrIAGestor;

    return 0;




    // ---------------------------------------------------------------------------------
    // Instanciar classe controladora e classe stub.

    IUQuadro* cntrIAQuadro = new CntrIAQuadro();
    ILNQuadro* stubISQuadro = new StubISQuadro();

    // Ligar instância de controladora a instância de stub.

    cntrIAQuadro->setCntrLNQuadro(stubISQuadro);

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

        cntrIAGestor->criarQuadro(codigoQuadro, nome, descricao, limite);
    } catch (const invalid_argument& exp) {
        cout << "Erro ao criar quadro: " << exp.what() << endl;
    }

    // Outras operações podem ser adicionadas conforme necessário.

    // Destruir instância de controladora e instância de stub.

    delete cntrIAGestor;
    delete stubISQuadro;

    return 0;
}
