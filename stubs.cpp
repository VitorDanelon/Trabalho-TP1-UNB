#include "stubs.h"
#include <iostream>
#include "dominios.h"
#include "controladoras.h"
#include "IAG.h"


class StubIAGestor : public IAGestor {
private:
    bool usuarioAutenticado = false;

public:
    bool autenticar(Email* email) override {
        // Implementa��o fict�cia de autentica��o
        // Simplesmente marcando o usu�rio como autenticado
        usuarioAutenticado = true;
        std::cout << "Usu�rio autenticado com sucesso." << std::endl;
        return true;
    }

    void exibirQuadrosECartoes(const Email& email) override {
        // Implementa��o fict�cia para exibir quadros e cart�es com base no email
        if (usuarioAutenticado) {
            std::cout << "Exibindo quadros e cart�es para o email: " << email.getEmail() << std::endl;
            // L�gica para exibir quadros e cart�es...
        } else {
            std::cout << "Usu�rio n�o autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) override {
        // Implementa��o fict�cia para criar um quadro
        if (usuarioAutenticado) {
            std::cout << "Criando quadro com c�digo: " << codigo << std::endl;
            // L�gica para criar quadro...
        } else {
            std::cout << "Usu�rio n�o autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void visualizarQuadro(const string& codigo) override {
        // Implementa��o fict�cia para visualizar um quadro
        if (usuarioAutenticado) {
            std::cout << "Visualizando quadro com c�digo: " << codigo << std::endl;
            // L�gica para visualizar quadro...
        } else {
            std::cout << "Usu�rio n�o autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void eliminarQuadro(const string& codigo) override {
        // Implementa��o fict�cia para eliminar um quadro
        if (usuarioAutenticado) {
            std::cout << "Eliminando quadro com c�digo: " << codigo << std::endl;
            // L�gica para eliminar quadro...
        } else {
            std::cout << "Usu�rio n�o autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) override {
        // Implementa��o fict�cia para criar um cart�o
        if (usuarioAutenticado) {
            std::cout << "Criando cart�o com c�digo: " << codigoCartao << " no quadro com c�digo: " << codigoQuadro << std::endl;
            // L�gica para criar cart�o...
        } else {
            std::cout << "Usu�rio n�o autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) override {
        // Implementa��o fict�cia para visualizar um cart�o
        if (usuarioAutenticado) {
            std::cout << "Visualizando cart�o com c�digo: " << codigoCartao << " no quadro com c�digo: " << codigoQuadro << std::endl;
            // L�gica para visualizar cart�o...
        } else {
            std::cout << "Usu�rio n�o autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) override {
        // Implementa��o fict�cia para mover um cart�o
        if (usuarioAutenticado) {
            std::cout << "Movendo cart�o com c�digo: " << codigoCartao << " para a coluna: " << novaColuna << " no quadro com c�digo: " << codigoQuadro << std::endl;
            // L�gica para mover cart�o...
        } else {
            std::cout << "Usu�rio n�o autenticado. Autentique-se primeiro." << std::endl;
        }
    }

    void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) override {
        // Implementa��o fict�cia para eliminar um cart�o
        if (usuarioAutenticado) {
            std::cout << "Eliminando cart�o com c�digo: " << codigoCartao << " no quadro com c�digo: " << codigoQuadro << std::endl;
            // L�gica para eliminar cart�o...
        } else {
            std::cout << "Usu�rio n�o autenticado. Autentique-se primeiro." << std::endl;
        }
    }
};


int main() {
    // Exemplo de uso do StubIAG
    StubIAGestor stub;
    Email email;
    email.setEmail("usuario@dominio.com");

    if (stub.autenticar(&email)) {
        stub.exibirQuadrosECartoes(email);
        stub.criarQuadro("Q001", "Quadro 1", "Descri��o Quadro 1", "10");
        stub.visualizarQuadro("Q001");
        stub.criarCartao("Q001", "C001", "Cartao 1", "Descri��o Cartao 1", "SOLICITADO");
        stub.visualizarCartao("Q001", "C001");
        stub.moverCartao("Q001", "C001", "EM_EXECUCAO");
        stub.eliminarCartao("Q001", "C001");
        stub.eliminarQuadro("Q001");
    }

    return 0;
}


/*

void StubGestor::criarQuadro(const std::string& codigo, const std::string& nome, const std::string& descricao, const std::string& limite) {
    std::cout << "Stub: Quadro criado - C�digo: " << codigo << ", Nome: " << nome << ", Descri��o: " << descricao << ", Limite: " << limite << std::endl;
}

void StubGestor::visualizarQuadro(const std::string& codigo) {
    std::cout << "Stub: Visualizando quadro - C�digo: " << codigo << std::endl;
}

void StubGestor::eliminarQuadro(const std::string& codigo) {
    std::cout << "Stub: Quadro eliminado - C�digo: " << codigo << std::endl;
}

void StubGestor::setCntrISQuadro(ISQuadro* cntrISQuadro) {
    // N�o � necess�rio no stub
}

void StubGestor::criarCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& nome, const std::string& descricao, const std::string& coluna) {
    std::cout << "Stub: Cart�o criado - Quadro: " << codigoQuadro << ", C�digo: " << codigoCartao << ", Nome: " << nome << ", Descri��o: " << descricao << ", Coluna: " << coluna << std::endl;
}

void StubGestor::visualizarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) {
    std::cout << "Stub: Visualizando cart�o - Quadro: " << codigoQuadro << ", C�digo: " << codigoCartao << std::endl;
}

void StubGestor::moverCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& novaColuna) {
    std::cout << "Stub: Movendo cart�o - Quadro: " << codigoQuadro << ", C�digo: " << codigoCartao << ", Nova Coluna: " << novaColuna << std::endl;
}

void StubGestor::eliminarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) {
    std::cout << "Stub: Cart�o eliminado - Quadro: " << codigoQuadro << ", C�digo: " << codigoCartao << std::endl;
}

void StubGestor::setCntrISCartao(ISCartao* cntrISCartao) {
    // N�o � necess�rio no stub
}









  /*
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


// TESTE COM "DRIVER"

    // Stub da camada de apresenta��o
class StubIAG : public IAG {
public:
    void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) override {
        // Implementa��o do stub para criar um quadro
        cout << "Quadro criado com c�digo: " << codigo << ", nome: " << nome << ", descri��o: " << descricao << ", limite: " << limite << endl;
    }

    void associarQuadroUsuario(const string& email, const string& codigo) override {
        // Implementa��o do stub para associar um quadro a um usu�rio
        cout << "Quadro " << codigo << " associado ao usu�rio com email: " << email << endl;
    }
};

// Driver para testar as funcionalidades
void testarFuncionalidades(IAG* iag) {
    // Criar quadro
    iag->criarQuadro("Q001", "Quadro Teste", "Descri��o do Quadro", "15");

    // Associar quadro ao usu�rio
    iag->associarQuadroUsuario("usuario@teste.com", "Q001");

    /
}

int main() {
    // Use o Stub no lugar da implementa��o real da camada de apresenta��o
    IAG* stub = new StubIAG();

    // Teste as funcionalidades usando o driver e o stub
    testarFuncionalidades(stub);


    delete stub;

    return 0;
}


}*/
