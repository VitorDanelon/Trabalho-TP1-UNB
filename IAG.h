#include "dominios.cpp"
#ifndef IAG.h_INCLUDED
#define IAG.h_INCLUDED
#include "dominios.h"

#include "controladoras.h"
#include "IAG.h"
#include <stdexcept>

using namespace std;

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
    virtual Quadro visualizarQuadro(const string& codigo) = 0;
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
    virtual ~ISCartao() {}  // Método destrutor virtual.
};

#endif
