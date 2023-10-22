#include "dominios.h"
#include <regex>
#include <stdexcept>
#include <cctype>
#include <set>

using namespace std;

/**
 * @brief Obtém o valor do email.
 * @return Valor do email.
 */
string Email::getEmail() const {
    return email;
}

/**
 * @brief Define o valor do email.
 * @param email O valor do email a ser definido.
 * @throw std::invalid_argument se o email for inválido.
 */
void Email::setEmail(const std::string email) {
    if (!validarEmail(email)) {
        throw std::invalid_argument("Email inválido.");
    }
    this->email = email;
}

/**
 * @brief Valida se o email é válido.
 * @param email O email a ser validado.
 * @return true se o email for válido, false caso contrário.
 */
bool Email::validarEmail(const std::string& email) {
    const std::regex emailRegex(R"([a-zA-Z0-9._%+-]{2,10}@[a-zA-Z0-9.-]{2,20})");
    if (!std::regex_match(email, emailRegex)) {
        return false;
    }

    size_t atPos = email.find('@');
    if (atPos != std::string::npos) {
        if (atPos > 0 && email[atPos - 1] == '.') {
            return false;
        }
        if (atPos < email.length() - 1 && email[atPos + 1] == '.') {
            return false;
        }
    }

    size_t dotPos = email.find("..");
    if (dotPos != std::string::npos) {
        return false;
    }

    return true;
}

/**
 * @brief Obtém o valor da senha.
 * @return Valor da senha.
 */
string Senha::getSenha() const {
    return senha;
}

/**
 * @brief Define o valor da senha.
 * @param senha O valor da senha a ser definido.
 * @throw std::invalid_argument se a senha for inválida.
 */
void Senha::setSenha(const std::string& senha) {
    if (!validarSenha(senha)) {
        throw std::invalid_argument("Senha inválida.");
    }
    this->senha = senha;
}

/**
 * @brief Valida se a senha é válida.
 * @param senha A senha a ser validada.
 * @return true se a senha for válida, false caso contrário.
 */
bool Senha::validarSenha(const std::string& senha) {
    // Verifica se a senha tem exatamente 5 caracteres
    if (senha.length() != 5) {
        return false;
    }

    bool temMaiúscula = false;
    bool temMinúscula = false;
    bool temDígito = false;
    bool temPonto = false;

    std::set<char> caracteresDuplicados;

    for (char c : senha) {
        if (isupper(c)) {
            temMaiúscula = true;
        } else if (islower(c)) {
            temMinúscula = true;
        } else if (isdigit(c)) {
            temDígito = true;
        } else if (c == '.' || c == ',' || c == ';' || c == '?' || c == '!') {
            temPonto = true;
        } else {
            return false; // Caractere inválido encontrado
        }

        if (caracteresDuplicados.count(c) > 0) {
            return false;  // Caractere duplicado encontrado
        }

        caracteresDuplicados.insert(c);
    }

    // Verifica se atende a todos os requisitos
    return temMaiúscula && temMinúscula && temDígito && temPonto;
}

/**
 * @brief Obtém o valor do texto.
 * @return Valor do texto.
 */
string Texto::getTexto() const {
    return texto;
}

/**
 * @brief Define o valor do texto.
 * @param texto O valor do texto a ser definido.
 * @throw std::invalid_argument se o texto for inválido.
 */
void Texto::setTexto(const string& texto) {
    if (!validarTexto(texto)) {
        throw std::invalid_argument("Texto inválido.");
    }
    this->texto = texto;
}

/**
 * @brief Valida se o texto é válido.
 * @param texto O texto a ser validado.
 * @return true se o texto for válido, false caso contrário.
 */
bool Texto::validarTexto(const std::string& texto) {
    if (texto.length() < 5 || texto.length() > 30) {
        return false;
    }

    bool prevSpace = false;
    bool prevPunctuation = false;

    for (size_t i = 0; i < texto.length(); i++) {
        char c = texto[i];

        if (i == 0) {
            if (!isupper(c)) {
                return false;
            }
        } else {
            if (isalnum(c) || c == ' ') {
                prevSpace = (c == ' ');
                prevPunctuation = false;
            } else if (c == '.' || c == ';' || c == '?' || c == '!') {
                if (prevPunctuation || i == texto.length() - 1 || !isupper(texto[i + 1])) {
                    return false;
                }
                prevSpace = false;
                prevPunctuation = true;
            } else {
                return false;
            }
        }
    }

    return true;
}

/**
 * @brief Obtém o valor do código.
 * @return Valor do código.
 */
string Codigo::getCodigo() const {
    return codigo;
}

/**
 * @brief Define o valor do código.
 * @param codigo O valor do código a ser definido.
 * @throw std::invalid_argument se o código for inválido.
 */
void Codigo::setCodigo(const std::string& codigo) {
    if (!validarCodigo(codigo)) {
        throw std::invalid_argument("Código inválido.");
    }
    this->codigo = codigo;
}

/**
 * @brief Valida se o código é válido.
 * @param codigo O código a ser validado.
 * @return true se o código for válido, false caso contrário.
 */
bool Codigo::validarCodigo(const std::string& codigo) {
    if (codigo.length() != 4)
        return false;
    for (int i = 0; i < 4; ++i) {
        if (i < 2) {
            if (!isupper(codigo[i]) || codigo[i] < 'A' || codigo[i] > 'Z') {
                return false;
            } else {
                if (!isdigit(codigo[i]) || codigo[i] < '0' || codigo[i] > '9') {
                    return false;
                }
            }
        }
    }
    return true;
}

/**
 * @brief Obtém o valor do limite.
 * @return Valor do limite.
 */
string Limite::getLimite() const {
    return limite;
}

/**
 * @brief Define o valor do limite.
 * @param limite O valor do limite a ser definido.
 * @throw std::invalid_argument se o limite for inválido.
 */
void Limite::setLimite(const std::string& limite) {
    if (!validarLimite(limite)) {
        throw std::invalid_argument("Limite inválido.");
    }
    this->limite = limite;
}

/**
 * @brief Valida se o limite é válido.
 * @param limite O limite a ser validado.
 * @return true se o limite for válido, false caso contrário.
 */
bool Limite::validarLimite(const std::string& limite) {
    try {
        int numero = std::stoi(limite);
        if (numero % 5 == 0 && numero <= 20) {
            return true;
        }
    } catch (const std::invalid_argument& e) {
        // A conversão falhou, a string não é um número.
    }
    return false;
}

/**
 * @brief Classe que representa um Cartão.
 */
class Cartao {
private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Coluna coluna;
    Limite limite;
    bool excluido;

public:
    Cartao(const Codigo& codigo, const Texto& nome, const Texto& descricao, const Coluna& coluna, const Limite& limite)
        : codigo(codigo), nome(nome), descricao(descricao), coluna(coluna), limite(limite), excluido(false) {}

    /**
     * @brief Define o nome do cartão.
     * @param nome O novo nome do cartão.
     */
    void setNome(const Texto& nome) {
        this->nome = nome;
    }

    /**
     * @brief Define a descrição do cartão.
     * @param descricao A nova descrição do cartão.
     */
    void setDescricao(const Texto& descricao) {
        this->descricao = descricao;
    }

    /**
     * @brief Define o código do cartão.
     * @param codigo O novo código do cartão.
     */
    void setCodigo(const Codigo& codigo) {
        this->codigo = codigo;
    }

    /**
     * @brief Define o estado de exclusão do cartão.
     * @param excluido true se o cartão deve ser marcado como excluído, false caso contrário.
     */
    void setExcluido(bool excluido) {
        this->excluido = excluido;
    }

    /**
     * @brief Obtém o nome do cartão.
     * @return O nome do cartão.
     */
    Texto getNome() const {
        return nome;
    }

    /**
     * @brief Obtém a descrição do cartão.
     * @return A descrição do cartão.
     */
    Texto getDescricao() const {
        return descricao;
    }

    /**
     * @brief Obtém o código do cartão.
     * @return O código do cartão.
     */
    Codigo getCodigo() const {
        return codigo;
    }

    /**
     * @brief Obtém a coluna à qual o cartão pertence.
     * @return A coluna do cartão.
     */
    Coluna getColuna() const {
        return coluna;
    }

    /**
     * @brief Verifica se o cartão foi marcado como excluído.
     * @return true se o cartão foi excluído, false caso contrário.
     */
    bool isExcluido() const {
        return excluido;
    }

    /**
     * @brief Visualiza os detalhes do cartão.
     */
    void visualizarCartao() {
        std::cout << "Código: " << codigo.getCodigo() << std::endl;
        std::cout << "Nome: " << nome.getTexto() << std::endl;
        std::cout << "Descrição: " << descricao.getTexto() << std::endl;
        std::cout << "Coluna: " << coluna.getColuna() << std::endl;
        std::cout << "Limite: " << limite.getLimite() << std::endl;
    }

    /**
     * @brief Move o cartão para uma nova coluna.
     * @param novaColuna A nova coluna à qual o cartão deve ser movido.
     */
    void moverCartao(Coluna novaColuna) {
        if (novaColuna.getColuna() != coluna.getColuna()) {
            if (novaColuna.getColuna() == "Concluído" && !limitePermitido()) {
                std::cout << "Não é possível mover o cartão para a coluna 'Concluído' devido ao limite." << std::endl;
            } else {
                coluna = novaColuna;
                std::cout << "Cartão movido para a coluna: " << novaColuna.getColuna() << std::endl;
            }
        } else {
            std::cout << "Não é possível mover o cartão para a mesma coluna." << std::endl;
        }
    }

    /**
     * @brief Elimina o cartão do quadro.
     * @param quadro O quadro do qual o cartão deve ser eliminado.
     */
    void eliminarCartao(Quadro& quadro) {
        if (quadro.contémCartao(*this)) {
            if (coluna.getColuna() == "Concluído" && !limitePermitido()) {
                std::cout << "Não é possível eliminar o cartão da coluna 'Concluído' devido ao limite." << std::endl;
            } else {
                setExcluido(true);
                std::cout << "Cartão eliminado com sucesso." << std::endl;
            }
        } else {
            std::cout << "Não é possível eliminar o cartão, pois ele não pertence a este quadro." << std::endl;
        }
    }

private:
    bool limitePermitido() const {
        return coluna.getColuna() == "Concluído" && std::stoi(limite.getLimite()) > 0;
    }
};
