#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;
//22033157

class Email{
private:
    string email; /**< O endereco de email. */
public:
    //Email(const string& email) : email(email) {}

    void setEmail(const std::string);

    string getEmail() const;

    //bool validarEmail(string)
        bool validarEmail(const std::string& email);

};
//222033157

class Texto{;
private:
    string texto; /**< O conteúdo do texto. */
public:

    void setTexto(const std::string& texto);

    string getTexto() const;

    //bool validarTexto();
    bool validarTexto(const std::string& texto);

};
//222033157

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
//222031822

class Codigo{
private:

    string codigo; /**< Código a ser utilizado. */

public:


    void setCodigo(const std::string& codigo);


    string getCodigo() const;

    bool validarCodigo(const std::string& codigo);

};
//222031822

class Limite{
private:

    string limite; /**< Limite a ser definido. */

public:

    void setLimite(const std::string& limite);

    string getLimite() const;

    bool validarLimite(const std::string& limite);

};


//202023940
class Coluna {
private:
    //enum Status{
        //SOLICITADO,
        //EM_EXECUCAO,
        //CONCLUIDO};

    string coluna;


public:

    void setColuna(const std::string& coluna); //

    string getColuna();

    //bool validarColuna(const std::string& coluna);

};



#endif
