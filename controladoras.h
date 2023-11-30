#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"

#include <stdexcept>
#include <iostream>

// Declaração de classe controladora e implementação de método.
class CntrIUQuadro : public IUQuadro {
private:
    ILNQuadro *cntrLNQuadro;  // Referência para o servidor.
public:
    void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite);
    void visualizarQuadro(const string& codigo);
    void eliminarQuadro(const string& codigo);
    void setCntrLNQuadro(ILNQuadro *cntrLNQuadro);
    void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna);
    void visualizarCartao(const string& codigoQuadro, const string& codigoCartao);
    void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna);
    void eliminarCartao(const string& codigoQuadro, const string& codigoCartao);
    void setCntrLNCartao(ILNCartao *cntrLNCartao);
};

void inline CntrIUQuadro::setCntrLNQuadro(ILNQuadro *cntrLNQuadro) {
    this->cntrLNQuadro = cntrLNQuadro;
}


#endif // CONTROLADORAS_H_INCLUDED
