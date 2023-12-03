#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "dominios.h"
#include "IAA.h"
#include "IAG.h"
#include "IAC.h"
#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

class StubISAutenticacao : public ISAutenticacao {
private:
    const static std::string TRIGGER_FALHA;
    const static std::string TRIGGER_ERRO_SISTEMA;

public:
    bool autenticar(const Email&, const Senha&) override;
};

class StubISGestor : public ISGestor {
public:
    bool autenticar(Email* email) override {
        // Implemente a lógica do stub para autenticação
        return true; // Substitua isso pela lógica real
    }

    void exibirQuadrosECartoes(const Email& email) override {
        // Implemente a lógica do stub para exibição de quadros e cartões
    }

    // Implementação dos métodos virtuais puros de ISGestor
    void criarQuadro(const std::string& codigo, const std::string& nome, const std::string& descricao, const std::string& limite) override {
        // Implemente a lógica do stub para criar quadro
    }

    void visualizarQuadro(const std::string& codigo) override {
        // Implemente a lógica do stub para visualizar quadro
    }

    void eliminarQuadro(const std::string& codigo) override {
        // Implemente a lógica do stub para eliminar quadro
    }

    void criarCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& nome, const std::string& descricao, const std::string& coluna) override {
        // Implemente a lógica do stub para criar cartão
    }

    void visualizarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) override {
        // Implemente a lógica do stub para visualizar cartão
    }

    void moverCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& novaColuna) override {
        // Implemente a lógica do stub para mover cartão
    }

    void eliminarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) override {
        // Implemente a lógica do stub para eliminar cartão
    }
};

#endif // STUBS_H_INCLUDED
