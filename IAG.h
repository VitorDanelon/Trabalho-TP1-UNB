#ifndef IAG.h_INCLUDED
#define IAG.h_INCLUDED
#include "dominios.h"
#include "dominios.cpp"
#include "controladoras.h"
#include "IAG.h"
#include <stdexcept>

using namespace std;

// -------------------------------------------------------------------------------------------

class ILNQuadro;
class ILNCartao;
// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de quadro provido pela camada de apresentação.

class IUQuadro {
public:
    virtual void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) = 0;
    virtual void visualizarQuadro(const string& codigo) = 0;
    virtual void eliminarQuadro(const string& codigo) = 0;
    virtual void setCntrLNQuadro(ILNQuadro *cntrLNQuadro) = 0;
    virtual ~IUQuadro() {}  // Método destrutor virtual.
};

// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de quadro provido pela camada de serviço.

class ILNQuadro {
public:
    virtual void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) = 0;
    virtual Quadro visualizarQuadro(const string& codigo) = 0;
    virtual void eliminarQuadro(const string& codigo) = 0;
    virtual ~ILNQuadro() {}  // Método destrutor virtual.
};


// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de cartao provido pela camada de apresentação.

class IUCartao {
public:
    virtual void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) = 0;
    virtual void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) = 0;
    virtual void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual void setCntrLNCartao(ILNCartao *cntrLNCartao) = 0;
    virtual ~IUCartao() {}  // Método destrutor virtual.
};

// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de cartao provido pela camada de serviço.

class ILNCartao {
public:
    virtual void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) = 0;
    virtual void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) = 0;
    virtual void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual ~ILNCartao() {}  // Método destrutor virtual.
};

#endif
