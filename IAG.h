// IAG.h
#ifndef IAG_H_INCLUDED
#define IAG_H_INCLUDED

#include "dominios.h"

// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de autenticação provido pela camada de serviço.

class ISAutenticacao {
public:
    virtual bool autenticar(const Email&, const Senha&) = 0;
    virtual ~ISAutenticacao() {}  // Destrutor virtual.
};

// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de quadro provido pela camada de serviço.

class ISGestor;

class IAG {
public:
    virtual bool autenticar(Email& email, Senha& senha) = 0;
    virtual void exibirQuadrosECartoes(const Email& email) = 0;
    virtual void criarQuadro(const std::string& codigo, const std::string& nome, const std::string& descricao, const std::string& limite) = 0;
    virtual void visualizarQuadro(const std::string& codigo) = 0;
    virtual void eliminarQuadro(const std::string& codigo) = 0;
    virtual void criarCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& nome, const std::string& descricao, const std::string& coluna) = 0;
    virtual void visualizarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) = 0;
    virtual void moverCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& novaColuna) = 0;
    virtual void eliminarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) = 0;
    virtual ~IAG() = default;
};

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
    virtual ~ISGestor() = default;
};

#endif // IAG_H_INCLUDEDD

















/*
// -------------------------------------------------------------------------------------------

class ISQuadro;
class ISCartao;

// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de quadro provido pela camada de apresentação.

class IAGestor {
public:
    virtual void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) = 0;
    virtual void visualizarQuadro(const string& codigo) = 0;
    virtual void eliminarQuadro(const string& codigo) = 0;
    virtual void setCntrISQuadro(ISQuadro *cntrISQuadro) = 0;
    virtual void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) = 0;
    virtual void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) = 0;
    virtual void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual void setCntrLNCartao(ISCartao *cntrISCartao) = 0;
    virtual ~IAGestor() {}  // Método destrutor virtual.
};

// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de quadro provido pela camada de serviço.

class ISQuadro {
public:
    virtual void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) = 0;
    virtual void visualizarQuadro(const string& codigo) = 0;
    virtual void eliminarQuadro(const string& codigo) = 0;
    virtual ~ISQuadro() {}  // Método destrutor virtual.
};

// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de cartao provido pela camada de serviço.

class ISCartao {
public:
    virtual void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) = 0;
    virtual void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) = 0;
    virtual void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual ~ISCartao(){}  // Método destrutor virtual.
};

#endif */
