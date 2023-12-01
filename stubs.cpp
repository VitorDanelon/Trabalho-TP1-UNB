#include "stubs.h"




void StubGestor::criarQuadro(const std::string& codigo, const std::string& nome, const std::string& descricao, const std::string& limite) {
    std::cout << "Stub: Quadro criado - Código: " << codigo << ", Nome: " << nome << ", Descrição: " << descricao << ", Limite: " << limite << std::endl;
}

void StubGestor::visualizarQuadro(const std::string& codigo) {
    std::cout << "Stub: Visualizando quadro - Código: " << codigo << std::endl;
}

void StubGestor::eliminarQuadro(const std::string& codigo) {
    std::cout << "Stub: Quadro eliminado - Código: " << codigo << std::endl;
}

void StubGestor::setCntrISQuadro(ISQuadro* cntrISQuadro) {
    // Não é necessário no stub
}

void StubGestor::criarCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& nome, const std::string& descricao, const std::string& coluna) {
    std::cout << "Stub: Cartão criado - Quadro: " << codigoQuadro << ", Código: " << codigoCartao << ", Nome: " << nome << ", Descrição: " << descricao << ", Coluna: " << coluna << std::endl;
}

void StubGestor::visualizarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) {
    std::cout << "Stub: Visualizando cartão - Quadro: " << codigoQuadro << ", Código: " << codigoCartao << std::endl;
}

void StubGestor::moverCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& novaColuna) {
    std::cout << "Stub: Movendo cartão - Quadro: " << codigoQuadro << ", Código: " << codigoCartao << ", Nova Coluna: " << novaColuna << std::endl;
}

void StubGestor::eliminarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) {
    std::cout << "Stub: Cartão eliminado - Quadro: " << codigoQuadro << ", Código: " << codigoCartao << std::endl;
}

void StubGestor::setCntrISCartao(ISCartao* cntrISCartao) {
    // Não é necessário no stub
}









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


}*/
