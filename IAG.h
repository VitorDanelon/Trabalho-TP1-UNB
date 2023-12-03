#ifndef IAG_H_INCLUDED
#define IAG_H_INCLUDED
#include "IAA.h"
#include <string>
#include "dominios.h"


// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de quadro provido pela camada de serviço.

class IAQuadro {
public:
    virtual void criarQuadro(const std::string&, const std::string&, const std::string&, const std::string&) = 0;
    virtual void visualizarQuadro(const std::string&) = 0;
    virtual void eliminarQuadro(const std::string&) = 0;
    virtual ~IAQuadro() {}  // Destrutor virtual.
};

// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de cartao provido pela camada de serviço.

class IACartao {
public:
    virtual void criarCartao(const std::string&, const std::string&, const std::string&, const std::string&, const std::string&) = 0;
    virtual void visualizarCartao(const std::string&, const std::string&) = 0;
    virtual void moverCartao(const std::string&, const std::string&, const std::string&) = 0;
    virtual void eliminarCartao(const std::string&, const std::string&) = 0;
    virtual ~IACartao(){}  // Destrutor virtual.
};

// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de gestor provido pela camada de serviço.

class ISGestor {
public:
    virtual bool autenticar(Email* email) = 0;
    virtual void exibirQuadrosECartoes(const Email& email) = 0;
    virtual void criarQuadro(const std::string& codigo, const std::string& nome, const std::string& descricao, const std::string& limite) = 0;
    virtual void visualizarQuadro(const std::string& codigo) = 0;
    virtual void eliminarQuadro(const std::string& codigo) = 0;
    virtual void criarCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& nome, const std::string& descricao, const std::string& coluna) = 0;
    virtual void visualizarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) = 0;
    virtual void moverCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& novaColuna) = 0;
    virtual void eliminarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) = 0;
    virtual ~ISGestor() {} ; // Destrutor virtual.
};

// -------------------------------------------------------------------------------------------
// Declaração de interface principal (IAG) que herda todas as interfaces específicas.

class IAG : public ISAutenticacao, public IAQuadro, public IACartao, public ISGestor {
public:
    // Nenhum método específico é adicionado aqui.
    // A interface IAG herda os métodos de todas as interfaces específicas.
    virtual ~IAG() {}  // Destrutor virtual.
};

#endif // IAG_H_INCLUDED

