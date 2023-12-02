#include "stubs.h"

using namespace std;
// -------------------------------------------------------------------------------------------
// Defini��es de constantes.

const std::string StubISAutenticacao::TRIGGER_FALHA = "erro@email.com";
const std::string StubISAutenticacao::TRIGGER_ERRO_SISTEMA = "erro.syst@email.com" ;

// -------------------------------------------------------------------------------------------
// Implementa��o de m�todo.

bool StubISAutenticacao::autenticar(const Email &email, const Senha &senha) {

    // Apresentar dados recebidos.

    cout << endl << "StubISAutenticacao::autenticar" << endl ;
    cout << "Email = " << email.getEmail()   << endl ;
    cout << "Senha = " << senha.getSenha()   << endl ;

    // Diferentes comportamentos dependendo do valor do Email

    if(email.getEmail() == TRIGGER_FALHA){
        return false;
    };
    if(email.getEmail() == TRIGGER_ERRO_SISTEMA){
      throw runtime_error("Erro de sistema");
    };



    return true;
}

// Implementação de métodos de quadro
void StubIAQuadro::criarQuadro(const std::string& codigo, const std::string& nome, const std::string& descricao, const std::string& limite) {
    std::cout << "Criando quadro com código: " << codigo << std::endl;
    // Lógica para criar quadro...
}

void StubIAQuadro::visualizarQuadro(const std::string& codigo) {
    std::cout << "Visualizando quadro com código: " << codigo << std::endl;
    // Lógica para visualizar quadro...
}

void StubIAQuadro::eliminarQuadro(const std::string& codigo) {
    std::cout << "Eliminando quadro com código: " << codigo << std::endl;
    // Lógica para eliminar quadro...
}

// Implementação de métodos de cartão
void StubIACartao::criarCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& nome, const std::string& descricao, const std::string& coluna) {
    std::cout << "Criando cartão com código: " << codigoCartao << " no quadro com código: " << codigoQuadro << std::endl;
    // Lógica para criar cartão...
}

void StubIACartao::visualizarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) {
    std::cout << "Visualizando cartão com código: " << codigoCartao << " no quadro com código: " << codigoQuadro << std::endl;
    // Lógica para visualizar cartão...
}

void StubIACartao::moverCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& novaColuna) {
    std::cout << "Movendo cartão com código: " << codigoCartao << " para a coluna: " << novaColuna << " no quadro com código: " << codigoQuadro << std::endl;
    // Lógica para mover cartão...
}

void StubIACartao::eliminarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) {
    std::cout << "Eliminando cartão com código: " << codigoCartao << " no quadro com código: " << codigoQuadro << std::endl;
    // Lógica para eliminar cartão...
}





/*
class StubISGestor :: ISGestor {
private:
    bool usuarioAutenticado = false;

public:
    bool autenticar(Email* email) override {
        // Implementação fictícia de autenticação
        // Simplesmente marcando o usuário como autenticado
        usuarioAutenticado = true;
        std::cout << "Usuário autenticado com sucesso." << std::endl;
        return true;
    }

    void exibirQuadrosECartoes(const Email& email) override {
        // Implementação fictícia para exibir quadros e cartões com base no email
        if (usuarioAutenticado) {
            std::cout << "Exibindo quadros e cartões para o email: " << email.getEmail() << std::endl;
            // Lógica para exibir quadros e cartões...
        } else {
            std::cout << "Usuário não autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) override {
        // Implementação fictícia para criar um quadro
        if (usuarioAutenticado) {
            std::cout << "Criando quadro com código: " << codigo << std::endl;
            // Lógica para criar quadro...
        } else {
            std::cout << "Usuário não autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void visualizarQuadro(const string& codigo) override {
        // Implementação fictícia para visualizar um quadro
        if (usuarioAutenticado) {
            std::cout << "Visualizando quadro com código: " << codigo << std::endl;
            // Lógica para visualizar quadro...
        } else {
            std::cout << "Usuário não autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void eliminarQuadro(const string& codigo) override {
        // Implementação fictícia para eliminar um quadro
        if (usuarioAutenticado) {
            std::cout << "Eliminando quadro com código: " << codigo << std::endl;
            // Lógica para eliminar quadro...
        } else {
            std::cout << "Usuário não autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) override {
        // Implementação fictícia para criar um cartão
        if (usuarioAutenticado) {
            std::cout << "Criando cartão com código: " << codigoCartao << " no quadro com código: " << codigoQuadro << std::endl;
            // Lógica para criar cartão...
        } else {
            std::cout << "Usuário não autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) override {
        // Implementação fictícia para visualizar um cartão
        if (usuarioAutenticado) {
            std::cout << "Visualizando cartão com código: " << codigoCartao << " no quadro com código: " << codigoQuadro << std::endl;
            // Lógica para visualizar cartão...
        } else {
            std::cout << "Usuário não autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) override {
        // Implementação fictícia para mover um cartão
        if (usuarioAutenticado) {
            std::cout << "Movendo cartão com código: " << codigoCartao << " para a coluna: " << novaColuna << " no quadro com código: " << codigoQuadro << std::endl;
            // Lógica para mover cartão...
        } else {
            std::cout << "Usuário não autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) override {
        // Implementação fictícia para eliminar um cartão
        if (usuarioAutenticado) {
            std::cout << "Eliminando cartão com código: " << codigoCartao << " no quadro com código: " << codigoQuadro << std::endl;
            // Lógica para eliminar cartão...
        } else {
            std::cout << "Usuário não autenticado. Autentique-se primeiro." << std::endl;
        }
    }
};


int main() {
    // Exemplo de uso do StubIAG
    StubISGestor stub;
    Email email;
    email.setEmail("usuario@dominio.com");

    if (stub.autenticar(&email)) {
        stub.exibirQuadrosECartoes(email);
        stub.criarQuadro("Q001", "Quadro 1", "Descrição Quadro 1", "10");
        stub.visualizarQuadro("Q001");
        stub.criarCartao("Q001", "C001", "Cartao 1", "Descrição Cartao 1", "SOLICITADO");
        stub.visualizarCartao("Q001", "C001");
        stub.moverCartao("Q001", "C001", "EM_EXECUCAO");
        stub.eliminarCartao("Q001", "C001");
        stub.eliminarQuadro("Q001");
    }

    return 0;
}




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
