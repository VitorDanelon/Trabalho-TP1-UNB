#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "dominios.h"
#include "IAC.h"
#include "IAG.h"
#include "IAA.h"
#include <stdexcept>
#include <string>

using namespace std;

class ControladoraAutenticacao : public IAAutenticacao {
private:
    ISAutenticacao *controladoraISAuth;

public:
    bool autenticar(Email *);
    void setCntrISAutenticacao(ISAutenticacao *);
};

class ControladoraGestor : public ISGestor {
private:
    ISGestor *controladoraISGestor;
public:
    void setCntrISGestor(ISGestor*);
    bool autenticar(Email* email) override;
    void exibirQuadrosECartoes(const Email& email) override;

    // Implementação dos métodos virtuais puros de ISGestor
    void criarQuadro(const std::string& codigo, const std::string& nome, const std::string& descricao, const std::string& limite) override;
    void visualizarQuadro(const std::string& codigo) override;
    void eliminarQuadro(const std::string& codigo) override;
    void criarCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& nome, const std::string& descricao, const std::string& coluna) override;
    void visualizarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) override;
    void moverCartao(const std::string& codigoQuadro, const std::string& codigoCartao, const std::string& novaColuna) override;
    void eliminarCartao(const std::string& codigoQuadro, const std::string& codigoCartao) override;
};
class Quadro {
private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Limite limite;

public:
    Quadro(const string &codigo, const string &nome, const string &descricao, const string &limite);
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
    Cartao(const string &codigo, const string &nome, const string &descricao, const string &coluna);
    string visualizarCartao();
    void moverCartao(const string &coluna);
    void eliminarCartao();
};

class IAQuadro;

class CntrIAQuadro : public ISGestor {
private:
    IAQuadro *cntrIAQuadro;

public:
    void criarQuadro(const string &codigo, const string &nome, const string &descricao, const string &limite) override;
    void visualizarQuadro(const string &codigo) override;
    void eliminarQuadro(const string &codigo) override;
    void setCntrISQuadro(IAQuadro *cntrIAQuadro);
};

class CntrIACartao : public ISGestor {
private:
    IACartao *cntrIACartao;

public:
    void criarCartao(const string &codigoQuadro, const string &codigoCartao, const string &nome, const string &descricao, const string &coluna) override;
    void visualizarCartao(const string &codigoQuadro, const string &codigoCartao) override;
    void moverCartao(const string &codigoQuadro, const string &codigoCartao, const string &novaColuna) override;
    void eliminarCartao(const string &codigoQuadro, const string &codigoCartao) override;
    void setCntrISQuadro(IAQuadro *cntrIAQuadro);
};

class CntrISGestor : public ISGestor {
private:
    CntrIAQuadro *cntrIAQuadro;
    CntrIACartao *cntrIACartao;

public:
    void setCntrIAQuadro(CntrIAQuadro *cntrIAQuadro);
    void setCntrIACartao(CntrIACartao *cntrIACartao);

    void criarQuadro(const string &codigo, const string &nome, const string &descricao, const string &limite) override;
    void visualizarQuadro(const string &codigo) override;
    void eliminarQuadro(const string &codigo) override;
    void criarCartao(const string &codigoQuadro, const string &codigoCartao, const string &nome, const string &descricao, const string &coluna) override;
    void visualizarCartao(const string &codigoQuadro, const string &codigoCartao) override;
    void moverCartao(const string &codigoQuadro, const string &codigoCartao, const string &novaColuna) override;
    void eliminarCartao(const string &codigoQuadro, const string &codigoCartao) override;
};

#endif // CONTROLADORAS_H_INCLUDED
