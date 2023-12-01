#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED


#include "dominios.h"
#include "IAG.h"
#include <stdexcept>
#include <iostream>

using namespace std;

class ControladoraConta : public IAAutenticacao {
private:
    Email email;
    Texto nome;
    Senha senha;
    IAAutenticacao *controladoraContaAu;

public:
    ControladoraConta(const string& email, const string& nome, const string& senha);
    string visualizarConta() const;
    void editarConta(const string& novoNome, const string& novaSenha);
    void eliminarConta();
    bool autenticar(Email*);
    void setControladoraAutenticacao(IAAutenticacao*);
};

class CntrIAQuadro : public IAGestor {
private:
    ISQuadro* cntrISQuadro;

public:
    void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) override;
    void visualizarQuadro(const string& codigo) override;
    void eliminarQuadro(const string& codigo) override;
    void setCntrISQuadro(ISQuadro* cntrISQuadro) override;
};

class CntrIACartao : public IAGestor {
private:
    ISCartao* cntrISCartao;

public:
    void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) override;
    void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) override;
    void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) override;
    void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) override;
    void setCntrISQuadro(ISQuadro* cntrISQuadro) override;
};

#endif // CONTROLADORAS_H_INCLUDED
