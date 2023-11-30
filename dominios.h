#include "controladoras.h"
#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <stdexcept>

using namespace std;


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
class Coluna {
private:
    enum Status{
        SOLICITADO,
        EM_EXECUCAO,
        CONCLUIDO};

    string coluna;


public:
    void setColuna(const std::string& coluna); //

    string getColuna();

    //bool validarColuna(const std::string& coluna);

};

void Coluna::setColuna(const std::string& coluna) {
        if (coluna == "SOLICITADO" || coluna == "EM_EXECUCAO" || coluna == "CONCLUIDO") {
            this->coluna = coluna;
        } else {
            throw std::invalid_argument("Valor de coluna inválido, dever ser SOLICITADO, EM_EXECUCAO, CONCLUIDO");
        }
}
 string Coluna::getColuna() {
        return coluna;
}
#endif
