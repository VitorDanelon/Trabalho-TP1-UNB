#include "stubs.h"

// Implementa��o do m�todo do stub para visualizar um cart�o.
void StubLNCartao::visualizarCartao(const string& codigoQuadro, const string& codigoCartao) {
    cout << "StubLNCartao::visualizarCartao" << endl;



    try {
        // Verificar se o c�digo do cart�o � v�lido (por exemplo, se existe).
        if (codigoCartao.empty()) {
            throw invalid_argument("C�digo do cart�o inv�lido.");
        }


        cout << "Visualizando informa��es do cart�o com c�digo " << codigoCartao << " do quadro " << codigoQuadro << endl;
    } catch (const exception& exp) {
        cout << "Erro ao visualizar cart�o: " << exp.what() << endl;
    }
}

// Implementa��o do m�todo do stub para mover um cart�o.
void StubLNCartao::moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) {
    cout << "StubLNCartao::moverCartao" << endl;



    try {
        // Verificar se o c�digo do cart�o � v�lido (por exemplo, se existe).
        if (codigoCartao.empty()) {
            throw invalid_argument("C�digo do cart�o inv�lido.");
        }


        cout << "Movendo cart�o com c�digo " << codigoCartao << " para a coluna " << novaColuna << " no quadro " << codigoQuadro << endl;
    } catch (const exception& exp) {
        cout << "Erro ao mover cart�o: " << exp.what() << endl;
    }
}

// Implementa��o do m�todo do stub para criar um cart�o.
void StubLNCartao::criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) {
    cout << "StubLNCartao::criarCartao" << endl;

    try {
        // Verificar se o c�digo do cart�o � v�lido (por exemplo, se � �nico).
        if (codigoCartao.empty()) {
            throw invalid_argument("C�digo do cart�o inv�lido.");
        }


        cout << "Cart�o com c�digo " << codigoCartao << " criado com sucesso no quadro " << codigoQuadro << endl;
    } catch (const exception& exp) {
        cout << "Erro ao criar cart�o: " << exp.what() << endl;
    }
}

// Implementa��o do m�todo do stub para eliminar um cart�o.
void StubLNCartao::eliminarCartao(const string& codigoQuadro, const string& codigoCartao) {
    cout << "StubLNCartao::eliminarCartao" << endl;


    try {
        // Verificar se o c�digo do cart�o � v�lido (por exemplo, se existe).
        if (codigoCartao.empty()) {
            throw invalid_argument("C�digo do cart�o inv�lido.");
        }

        cout << "Cart�o com c�digo " << codigoCartao << " eliminado com sucesso do quadro " << codigoQuadro << endl;
    } catch (const exception& exp) {
        cout << "Erro ao eliminar cart�o: " << exp.what() << endl;
    }
}
