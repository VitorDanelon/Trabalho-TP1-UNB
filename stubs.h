#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "dominios.h"
#include "interfaces/IAA.h"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

// -------------------------------------------------------------------------------------------
// Declara��o de classe stub.
//
// Classe StubIAAutentica��o implementa a interface IAAutentica��o.

class StubISAutenticacao:public ISAutenticacao{

private:

    // Defini��es de valores a serem usados como gatilhos para notifica��es de erros.

    const static std::string TRIGGER_FALHA;
    const static std::string TRIGGER_ERRO_SISTEMA;

public:

    // Declara��o de m�todo previsto em interface.

    bool autenticar(const Email&, const Senha&);
};











/*
class StubISGestor : public ISGestor {
public:
    bool autenticar(Email* email) ; // JA TEM METODO PRA ISSO
    void exibirQuadrosECartoes(const Email& email) ;
    void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) ;
    void visualizarQuadro(const string& codigo) ;
    void eliminarQuadro(const string& codigo) ;
    void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) ;
    void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) ;
    void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) ;
    void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) ;
};

#endif // STUB_H_INCLUDED













// Stubs para as interfaces de Quadro e Cartao.

class StubISQuadro : public ISQuadro {
public:
    void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) override;
    void visualizarQuadro(const string& codigo) override;
    void eliminarQuadro(const string& codigo) override;
};

class StubISCartao : public ISCartao {
public:
    void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) override;
    void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) override;
    void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) override;
    void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) override;
};
class StubISQuadro : public ISQuadro {
public:
    void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) override {
        std::cout << "StubLNQuadro: criarQuadro chamado" << std::endl;
    }

    void visualizarQuadro(const string& codigo) override {
        std::cout << "StubLNQuadro: visualizarQuadro chamado" << std::endl;
    }

    void eliminarQuadro(const string& codigo) override {
        std::cout << "StubLNQuadro: eliminarQuadro chamado" << std::endl;
    }
};

class StubISCartao : public ISCartao {
public:
    void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) override {
        std::cout << "StubLNCartao: criarCartao chamado" << std::endl;
    }

    void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) override {
        std::cout << "StubLNCartao: visualizarCartao chamado" << std::endl;
    }

    void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) override {
        std::cout << "StubLNCartao: moverCartao chamado" << std::endl;
    }

    void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) override {
        std::cout << "StubLNCartao: eliminarCartao chamado" << std::endl;
    }
};

#endif // STUBS_H_INCLUDED*/
