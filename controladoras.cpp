#include "controladoras.h"
#include "dominios.h"
#include <iostream>

using namespace std;

// Métodos de ControladoraAutenticacao
void ControladoraAutenticacao::setCntrISAutenticacao(ISAutenticacao *controladoraISAuth) {
    this->controladoraISAuth = controladoraISAuth;
}

bool ControladoraAutenticacao::autenticar(Email *email) {
    Senha senha;
    string entrada;

    while (true) {
        cout << endl << "Autenticacao de usuario." << endl << endl;

        try {
            cout << "Digite o Email : ";
            cin >> entrada;
            email->setEmail(entrada);
            cout << "Digite a senha     : ";
            cin >> entrada;
            senha.setSenha(entrada);
            break;
        } catch (const std::invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto." << endl;
        }
    }

    bool resultado = controladoraISAuth->autenticar(*email, senha);

    return resultado;
}

// Métodos de ControladoraGestor
void ControladoraGestor::setCntrISGestor(ISGestor* cntrISGestor) {
    this->controladoraISGestor = cntrISGestor;
}

bool ControladoraGestor::autenticar(Email* email) {
    // Implementação
    return false;
}

void ControladoraGestor::exibirQuadrosECartoes(const Email& email) {
    // Implementação
    cout << "Exibindo quadros e cartões..." << endl;
}

// Métodos de Quadro
Quadro::Quadro(const string& codigo, const string& nome, const string& descricao, const string& limite) {
    this->codigo.setCodigo(codigo);
    this->nome.setTexto(nome);
    this->descricao.setTexto(descricao);
    this->limite.setLimite(limite);
}

string Quadro::visualizarQuadro() const {
    return "Quadro: " + codigo.getCodigo() + "\nNome: " + nome.getTexto() + "\nDescrição: " + descricao.getTexto() + "\nLimite: " + limite.getLimite();
}

void Quadro::eliminarQuadro() {
    codigo.setCodigo("");
    nome.setTexto("");
    descricao.setTexto("");
    limite.setLimite("");
}

// Métodos de Cartao
Cartao::Cartao(const string& codigo, const string& nome, const string& descricao, const string& coluna) {
    this->codigo.setCodigo(codigo);
    this->nome.setTexto(nome);
    this->descricao.setTexto(descricao);
    this->coluna.setColuna(coluna);
}

string Cartao::visualizarCartao() {
    return "Codigo: " + codigo.getCodigo() + "\nNome: " + nome.getTexto() + "\nDescricao: " + descricao.getTexto() + "\nColuna: " + coluna.getColuna();
}

void Cartao::moverCartao(const string& coluna) {
    this->coluna.setColuna(coluna);
}

void Cartao::eliminarCartao() {
    codigo.setCodigo("");
    nome.setTexto("");
    descricao.setTexto("");
    coluna.setColuna("SOLICITADO");
}

// Métodos de CntrIAQuadro
void CntrIAQuadro::criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) {
    try {
        // Chamada do método do serviço do sistema para criar um quadro.
        cntrISSistema->criarQuadro(codigo, nome, descricao, limite);
        cout << "Quadro criado com sucesso!" << endl;
    } catch (const exception& exp) {
        cout << "Erro ao criar quadro: " << exp.what() << endl;
    }
}

void CntrIAQuadro::visualizarQuadro(const string& codigo) {
    try {
        // Implementação para visualizar o quadro
        // Chame o método do serviço do sistema, por exemplo: cntrISSistema->visualizarQuadro(codigo);
    } catch (const exception& exp) {
        cout << "Erro ao visualizar quadro: " << exp.what() << endl;
    }
}

void CntrIAQuadro::eliminarQuadro(const string& codigo) {
    try {
        // Implementação para eliminar o quadro
        // Chame o método do serviço do sistema, por exemplo: cntrISSistema->eliminarQuadro(codigo);
    } catch (const exception& exp) {
        cout << "Erro ao eliminar quadro: " << exp.what() << endl;
    }
}

// Métodos de CntrIACartao
void CntrIACartao::criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) {
    try {
        // Chamada do método do serviço do sistema para criar um cartao.
        cntrISSistema->criarCartao(codigoQuadro, codigoCartao, nome, descricao, coluna);
        cout << "Cartao criado com sucesso!" << endl;
    } catch (const exception& exp) {
        cout << "Erro ao criar cartao: " << exp.what() << endl;
    }
}

void CntrIACartao::visualizarCartao(const string& codigoQuadro, const string& codigoCartao) {
    try {
        // Implementação para visualizar o cartao
        // Chame o método do serviço do sistema, por exemplo: cntrISSistema->visualizarCartao(codigoQuadro, codigoCartao);
    } catch (const exception& exp) {
        cout << "Erro ao visualizar cartao: " << exp.what() << endl;
    }
}

void CntrIACartao::moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) {
    try {
        // Implementação para mover o cartao
        // Chame o método do serviço do sistema, por exemplo: cntrISSistema->moverCartao(codigoQuadro, codigoCartao, novaColuna);
    } catch (const exception& exp) {
        cout << "Erro ao mover cartao: " << exp.what() << endl;
    }
}

// Métodos de CntrISGestor
void CntrISGestor::eliminarCartao(const string& codigoQuadro, const string& codigoCartao) {
    try {
        // Implementação para eliminar o cartao
        // Chame o método do serviço do sistema, por exemplo: cntrISSistema->eliminarCartao(codigoQuadro, codigoCartao);
    } catch (const exception& exp) {
        cout << "Erro ao eliminar cartao: " << exp.what() << endl;
    }
}
