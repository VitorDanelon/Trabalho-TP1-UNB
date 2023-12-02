#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;
//22033157
/**
 * @brief A classe Email representa um endereco de email.
 *
 * Esta classe contem um email e fornece metodos para definicao, obtencao e validacao do email.
 */
class Email{
private:
    string email; /**< O endereco de email. */
public:
    //Email(const string& email) : email(email) {}
     /**
     * @brief Metodo que define o endereco de email.
     *
     * @param email O email a ser definido.
     */
    void setEmail(const std::string);
    /**
     * @brief M�todo que obtem o endereco de email atual.
     *
     * @return O endereco de email atual.
     */
    string getEmail() const;
    /**
     * @brief Metodo que valida o formato do endereco de email.
     *
     * @return True se o email for valido, False caso contrario.
     */
    //bool validarEmail(string)
        bool validarEmail(const std::string& email);

};
//222033157
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
//222033157
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
    void setSenha(const std::string senha);
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
//222031822
/**
 * @brief Classe que representa a entidade c�digo presente nos quadros e cartoes.
 */
class Codigo{
private:

    string codigo; /**< C�digo a ser utilizado. */

public:
    /**
     * @brief Metodo que define o codigo.
     * @param codigo O c�digo a ser definido.
     */

    void setCodigo(const std::string& codigo);
     /**
     * @brief  Metodo que obtem o codigo atual.
     * @return O c�digo atual.
     */

    string getCodigo() const;
    /**
     * @brief Metodo que valida o codigo.
     * @param codigo O codigo a ser validado.
     * @return True se o c�digo for v�lido, False caso contr�rio.
     */

    bool validarCodigo(const std::string& codigo);

};
//222031822
/**
 * @brief Classe que representa o limite definido para cartoes no quadro Kanban.
 */

class Limite{
private:

    string limite; /**< Limite a ser definido. */

public:
     /**
     * @brief Metodo que define o limite.
     * @param limite O limite a ser definido (5,10,15 ou 20).
     */
    void setLimite(const std::string& limite);
    /**
     * @brief Metodo que obtem o limite atual.
     * @return O limite atual.
     */

    string getLimite() const;
    /**
     * @brief Metodo que valida o limite.
     * @param limite O limite a ser validado.
     * @return True se o limite for valido, False caso contrario.
     */
    bool validarLimite(const std::string& limite);

};

/**
 * @brief Classe que representa a coluna de status definida no cartoes.
 */
//202023940
class Coluna {
private:
    //enum Status{
        //SOLICITADO,
        //EM_EXECUCAO,
        //CONCLUIDO};

    string coluna;


public:

    /**
     * @brief Define o valor da coluna.
     *
     * @param valor O valor da coluna a ser definido.
     */
    void setColuna(const std::string& coluna); //

    /**
     * @brief Obt�m o valor da coluna.
     *
     * @return O valor atual da coluna.
     */
    string getColuna();

    //bool validarColuna(const std::string& coluna);

};





#endif
