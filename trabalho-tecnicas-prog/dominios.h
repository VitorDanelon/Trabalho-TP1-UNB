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
     * @brief Método que obtem o endereco de email atual.
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
 * Esta classe contém um texto e fornece métodos para definição, obtenção e validação do texto.
 */
class Texto{;
private:
    string texto; /**< O conteúdo do texto. */
public:
    /**
     * @brief Método que define o conteúdo do texto.
     *
     * @param texto O texto a ser definido.
     */
    void setTexto(const std::string& texto);
    /**
     * @brief Método que obtém o conteúdo do texto atual.
     *
     * @return O conteúdo do texto atual.
     */
    string getTexto() const;
    /**
     * @brief Método que valida o texto.
     *
     * @return True se o texto for válido, False caso contrário.
     */
    //bool validarTexto();
    bool validarTexto(const std::string& texto);

};
//222033157
/**
 * @brief A classe Senha representa uma senha.
 *
 * Esta classe contém uma senha e fornece métodos para definição, obtenção e validação da senha.
 */
class Senha{
private:
    string senha; /**< A senha. */
public:
     /**
     * @brief Método que define a senha.
     *
     * @param senha A senha a ser definida.
     */
    //void setSenha(const string);
    void setSenha(const std::string senha);
    /**
     * @brief Método que obtém a senha atual.
     *
     * @return A senha atual.
     */
    string getSenha() const;
      /**
     * @brief Método que valida a senha.
     *
     * @return True se a senha for válida, False caso contrário.
     */
    //bool validarSenha();
    bool validarSenha(const std::string& senha);

};
//222031822
/**
 * @brief Classe que representa a entidade código presente nos quadros e cartoes.
 */
class Codigo{
private:

    string codigo; /**< Código a ser utilizado. */

public:
    /**
     * @brief Metodo que define o codigo.
     * @param codigo O código a ser definido.
     */

    void setCodigo(const std::string& codigo);
     /**
     * @brief  Metodo que obtem o codigo atual.
     * @return O código atual.
     */

    string getCodigo() const;
    /**
     * @brief Metodo que valida o codigo.
     * @param codigo O codigo a ser validado.
     * @return True se o código for válido, False caso contrário.
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
     * @brief Obtém o valor da coluna.
     *
     * @return O valor atual da coluna.
     */
    string getColuna();

    //bool validarColuna(const std::string& coluna);

};





#endif
