#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

/**
 * @brief A classe Email representa um endereço de email.
 *
 * Esta classe contém um email e fornece métodos para definição, obtenção e validação do email.
 */
class Email{
private:
    string email; /**< O endereço de email. */
public:
    //Email(const string& email) : email(email) {}
     /**
     * @brief Método que define o endereço de email.
     *
     * @param email O email a ser definido.
     */
    void setEmail(const std::string);
    /**
     * @brief Método que obtém o endereço de email atual.
     *
     * @return O endereço de email atual.
     */
    string getEmail() const;
    /**
     * @brief Método que valida o formato do endereço de email.
     *
     * @return True se o email for válido, False caso contrário.
     */
    //bool validarEmail(string)
        bool validarEmail(const std::string& email);

};

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
    void setSenha(const std::string& senha);
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
