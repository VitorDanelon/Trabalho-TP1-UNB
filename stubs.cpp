#include "stubs.h"
  /*
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
*/

// TESTE COM "DRIVER"

    // Stub da camada de apresentação
class StubIAG : public IAG {
public:
    void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) override {
        // Implementação do stub para criar um quadro
        cout << "Quadro criado com código: " << codigo << ", nome: " << nome << ", descrição: " << descricao << ", limite: " << limite << endl;
    }

    void associarQuadroUsuario(const string& email, const string& codigo) override {
        // Implementação do stub para associar um quadro a um usuário
        cout << "Quadro " << codigo << " associado ao usuário com email: " << email << endl;
    }
};

// Driver para testar as funcionalidades
void testarFuncionalidades(IAG* iag) {
    // Criar quadro
    iag->criarQuadro("Q001", "Quadro Teste", "Descrição do Quadro", "15");

    // Associar quadro ao usuário
    iag->associarQuadroUsuario("usuario@teste.com", "Q001");

    /
}

int main() {
    // Use o Stub no lugar da implementação real da camada de apresentação
    IAG* stub = new StubIAG();

    // Teste as funcionalidades usando o driver e o stub
    testarFuncionalidades(stub);


    delete stub;

    return 0;
}


}
