#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED
#include "dominios.h"
#include "IAG.h"
#include <stdexcept>
#include <iostream>
#include <typeinfo>
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

#endif // STUBS_H_INCLUDED
