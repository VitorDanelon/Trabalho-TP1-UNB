#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "dominios.h"
#include "IAG.h"
#include <stdexcept>
#include <iostream>

// Evite inclusões redundantes
// #include <stdexcept>
// #include <string>

// Evite o uso de "using namespace std;" em arquivos de cabeçalho

class Quadro {
private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Limite limite;

public:
    Quadro(const string& codigo, const string& nome, const string& descricao, const string& limite);
    string visualizarQuadro() const;
    void eliminarQuadro();
};

class Cartao {
private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Coluna coluna;

public:
    Cartao(const string& codigo, const string& nome, const string& descricao, const string& coluna);
    string visualizarCartao();
    void moverCartao(const string& coluna);
    void eliminarCartao();
};

class CntrIUQuadro : public IUQuadro {
private:
    ILNQuadro* cntrLNQuadro;

public:
    void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) override;
    void visualizarQuadro(const string& codigo) override;
    void eliminarQuadro(const string& codigo) override;
    void setCntrLNQuadro(ILNQuadro* cntrLNQuadro) override;
};

class CntrIUCartao : public IUCartao {
private:
    ILNCartao* cntrLNCartao;

public:
    void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) override;
    void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) override;
    void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) override;
    void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) override;
    void setCntrLNCartao(ILNCartao* cntrLNCartao) override;
};

#endif // CONTROLADORAS_H_INCLUDED
