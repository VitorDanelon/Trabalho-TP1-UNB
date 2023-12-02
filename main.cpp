


/*#include "IAG.h"
#include "dominios.h"
#include "controladoras.h"
#include <iostream>
using namespace std;



int main() {
    StubGestor stub;

    // Exemplo de utilização do stub
    stub.criarQuadro("Q001", "Quadro 1", "Descrição Quadro 1", "10");
    stub.visualizarQuadro("Q001");
    stub.eliminarQuadro("Q001");

    stub.criarCartao("Q001", "C001", "Cartão 1", "Descrição Cartão 1", "TO_DO");
    stub.visualizarCartao("Q001", "C001");
    stub.moverCartao("Q001", "C001", "EM_EXECUCAO");
    stub.eliminarCartao("Q001", "C001");

    return 0;
}






   /*
int main() {



    // Aqui você precisará criar instâncias necessárias, incluindo o controlador.
    IAGestor* cntrIAGestor = new CntrIAGestor();  // Substitua com a implementação real.
    IApresentacao* apresentacao = new Apresentacao(cntrIAGestor);

    // Chame o método para apresentar quadros e cartões com um email genérico.
    apresentacao->apresentarQuadrosECartoes("testw@exemplo.com");


    //delete apresentacao;
   // delete cntrIAGestor;

    return 0;




    // ---------------------------------------------------------------------------------
    // Instanciar classe controladora e classe stub.

    IUQuadro* cntrIAQuadro = new CntrIAQuadro();
    ISQuadro* stubISQuadro = new StubISQuadro();

    // Ligar instância de controladora a instância de stub.

    cntrIAQuadro->setCntrISQuadro(stubISQuadro);

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
} */
