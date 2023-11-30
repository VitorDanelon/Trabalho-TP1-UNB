#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include "controladoras.h"
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
