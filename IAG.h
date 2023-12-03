// IAG.h
#ifndef IAG_H_INCLUDED
#define IAG_H_INCLUDED

#include "dominios.h"


// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de quadro provido pela camada de serviço.

class ISGestor;

class IAG {
public:

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
