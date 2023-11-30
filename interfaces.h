#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"

#include <stdexcept>
// Declara��o de interface para servi�o de quadro provido pela camada de apresenta��o.
class IUQuadro {
public:
    virtual void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) = 0;
    virtual void visualizarQuadro(const string& codigo) = 0;
    virtual void eliminarQuadro(const string& codigo) = 0;
    virtual void setCntrLNQuadro(ILNQuadro *cntrLNQuadro) = 0;
     virtual void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) = 0;
    virtual void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) = 0;
    virtual void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual ~IUQuadro() {}  // M�todo destrutor virtual.
};

class ILNQuadro {
public:
    virtual void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) = 0;
    virtual void visualizarQuadro(const string& codigo) = 0;
    virtual void eliminarQuadro(const string& codigo) = 0;
    virtual void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) = 0;
    virtual void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) = 0;
    virtual void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual ~ILNQuadro() {}  // M�todo destrutor virtual.
};


#endif // INTERFACES_H_INCLUDED
