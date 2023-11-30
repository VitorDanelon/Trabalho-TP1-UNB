#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include "controladoras.h"
#include <stdexcept>

using namespace std;
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

class Email {
private:
    std::string email;

public:
    std::string getEmail() const;
    void setEmail(const std::string& email);
    static bool validarEmail(const std::string& email);
};


class Texto{;
private:
    string texto;
public:

    void setTexto(const std::string& texto);

    string getTexto() const;

    //bool validarTexto();
    bool validarTexto(const std::string& texto);

};

class Senha{
private:
    string senha; /**< A senha. */
public:

    //void setSenha(const string);
    void setSenha(const std::string& senha);

    string getSenha() const;

    //bool validarSenha();
    bool validarSenha(const std::string& senha);

};

class Codigo{
private:
    string codigo;
public:
    void setCodigo(const std::string& codigo);
    string getCodigo() const;
    bool validarCodigo(const std::string& codigo);

};


class Limite{
private:

    string limite;

public:

    void setLimite(const std::string& limite);
    string getLimite() const;
    bool validarLimite(const std::string& limite);

};


void Coluna::setColuna(const std::string& valor) {
    if (!validarColuna(valor)) {
        throw std::invalid_argument("Valor de coluna inválido. Deve ser SOLICITADO, EM_EXECUCAO, CONCLUIDO");
    }

    if (valor == "SOLICITADO") {
        coluna = SOLICITADO;
    } else if (valor == "EM_EXECUCAO") {
        coluna = EM_EXECUCAO;
    } else if (valor == "CONCLUIDO") {
        coluna = CONCLUIDO;
    }
}

std::string Coluna::getColuna() const {
    switch (coluna) {
        case SOLICITADO:
            return "SOLICITADO";
        case EM_EXECUCAO:
            return "EM_EXECUCAO";
        case CONCLUIDO:
            return "CONCLUIDO";
    }
    return "";  // Retorno padrão, caso algo inesperado aconteça.
}

bool Coluna::validarColuna(const std::string& valor) {
    return (valor == "SOLICITADO" || valor == "EM_EXECUCAO" || valor == "CONCLUIDO");
}

#endif
