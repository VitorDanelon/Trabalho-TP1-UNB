#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED
#include "dominios.h"
#include "IAG.h"
#include "IAA.h"
#include "IAC.h"
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


class StubIAG : public ISGestor {
private:
    const static std::string TRIGGER_FALHA;
    const static std::string TRIGGER_ERRO_SISTEMA;

public:
    void exibirQuadrosECartoes(const Email& email);
    void criarQuadro(const std::string& codigo, const std::string& nome, const std::string& descricao, const std::string& limite) override;
    void visualizarQuadro(const std::string& codigo) override;
    void eliminarQuadro(const std::string& codigo) override;
    void criarCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& nome, const std::string& descricao, const std::string& coluna) override;
    void visualizarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) override;
    void moverCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& novaColuna) override;
    void eliminarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) override;
};

#endif // STUBS_H_INCLUDED

