#include "stubs.h"

// Implementação do método do stub para visualizar um cartão.
void StubLNCartao::visualizarCartao(const string& codigoQuadro, const string& codigoCartao) {
    cout << "StubLNCartao::visualizarCartao" << endl;



    try {
        // Verificar se o código do cartão é válido (por exemplo, se existe).
        if (codigoCartao.empty()) {
            throw invalid_argument("Código do cartão inválido.");
        }


        cout << "Visualizando informações do cartão com código " << codigoCartao << " do quadro " << codigoQuadro << endl;
    } catch (const exception& exp) {
        cout << "Erro ao visualizar cartão: " << exp.what() << endl;
    }
}

// Implementação do método do stub para mover um cartão.
void StubLNCartao::moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) {
    cout << "StubLNCartao::moverCartao" << endl;



    try {
        // Verificar se o código do cartão é válido (por exemplo, se existe).
        if (codigoCartao.empty()) {
            throw invalid_argument("Código do cartão inválido.");
        }


        cout << "Movendo cartão com código " << codigoCartao << " para a coluna " << novaColuna << " no quadro " << codigoQuadro << endl;
    } catch (const exception& exp) {
        cout << "Erro ao mover cartão: " << exp.what() << endl;
    }
}

// Implementação do método do stub para criar um cartão.
void StubLNCartao::criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) {
    cout << "StubLNCartao::criarCartao" << endl;

    try {
        // Verificar se o código do cartão é válido (por exemplo, se é único).
        if (codigoCartao.empty()) {
            throw invalid_argument("Código do cartão inválido.");
        }


        cout << "Cartão com código " << codigoCartao << " criado com sucesso no quadro " << codigoQuadro << endl;
    } catch (const exception& exp) {
        cout << "Erro ao criar cartão: " << exp.what() << endl;
    }
}

// Implementação do método do stub para eliminar um cartão.
void StubLNCartao::eliminarCartao(const string& codigoQuadro, const string& codigoCartao) {
    cout << "StubLNCartao::eliminarCartao" << endl;


    try {
        // Verificar se o código do cartão é válido (por exemplo, se existe).
        if (codigoCartao.empty()) {
            throw invalid_argument("Código do cartão inválido.");
        }

        cout << "Cartão com código " << codigoCartao << " eliminado com sucesso do quadro " << codigoQuadro << endl;
    } catch (const exception& exp) {
        cout << "Erro ao eliminar cartão: " << exp.what() << endl;
    }
}
