#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

/**
 * @brief A classe Email representa um endere�o de email.
 *
 * Esta classe cont�m um email e fornece m�todos para defini��o, obten��o e valida��o do email.
 */
class Email{
private:
    string email; /**< O endere�o de email. */
public:
    //Email(const string& email) : email(email) {}
     /**
     * @brief M�todo que define o endere�o de email.
     *
     * @param email O email a ser definido.
     */
    void setEmail(const std::string);
    /**
     * @brief M�todo que obt�m o endere�o de email atual.
     *
     * @return O endere�o de email atual.
     */
    string getEmail() const;
    /**
     * @brief M�todo que valida o formato do endere�o de email.
     *
     * @return True se o email for v�lido, False caso contr�rio.
     */
    //bool validarEmail(string)
        bool validarEmail(const std::string& email);

};

/**
 * @brief A classe Texto representa um texto.
 *
 * Esta classe cont�m um texto e fornece m�todos para defini��o, obten��o e valida��o do texto.
 */
class Texto{;
private:
    string texto; /**< O conte�do do texto. */
public:
    /**
     * @brief M�todo que define o conte�do do texto.
     *
     * @param texto O texto a ser definido.
     */
    void setTexto(const std::string& texto);
    /**
     * @brief M�todo que obt�m o conte�do do texto atual.
     *
     * @return O conte�do do texto atual.
     */
    string getTexto() const;
    /**
     * @brief M�todo que valida o texto.
     *
     * @return True se o texto for v�lido, False caso contr�rio.
     */
    //bool validarTexto();
    bool validarTexto(const std::string& texto);

};
/**
 * @brief A classe Senha representa uma senha.
 *
 * Esta classe cont�m uma senha e fornece m�todos para defini��o, obten��o e valida��o da senha.
 */
class Senha{
private:
    string senha; /**< A senha. */
public:
     /**
     * @brief M�todo que define a senha.
     *
     * @param senha A senha a ser definida.
     */
    //void setSenha(const string);
    void setSenha(const std::string& senha);
    /**
     * @brief M�todo que obt�m a senha atual.
     *
     * @return A senha atual.
     */
    string getSenha() const;
      /**
     * @brief M�todo que valida a senha.
     *
     * @return True se a senha for v�lida, False caso contr�rio.
     */
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


// //Senha (Raphael)
//     bool validarSenha(string);
//     void setSenha(string);
//     string getSenha() const;

// //Texto (Raphael Luca Vitor)
//         bool validarTexto(const std::string& texto);
//         //GET TEXTO

#endif
