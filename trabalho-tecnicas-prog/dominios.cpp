#include "dominios.h"
#include <stdexcept>
#include <cctype>
#include <string>
using namespace std;
// --------------------------------------------------------------------------
// Implementações de métodos de classe domínio.

// --------------------------------------------------------------------------
// Método para validação de valor.

//void Codigo::validar(int codigo){
//    if (codigo > LIMITE)
//        throw invalid_argument("Argumento invalido.");
//}

void Conta::setEmail(const std::string& email) {
    if (!validarEmail(email)) {
        throw std::invalid_argument("Email inválido.");
    }
    this->email = email;
}

void Conta::setSenha(const std::string& senha) {
    if (!validarSenha(senha)) {
        throw std::invalid_argument("Senha inválida.");
    }
    this->senha = senha;
}

string Conta::getEmail() const {
    return email;
}

string Conta::getSenha() const {
    return senha;
}

bool Conta::validarEmail(const std::string& email) {
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

bool Conta::validarSenha(const std::string& senha) {
    // Pelo menos um caractere é letra maiúscula
    bool temMaiuscula = false;
    // Pelo menos um caractere é letra minúscula
    bool temMinuscula = false;
    // Pelo menos um caractere é dígito
    bool temDigito = false;
    // Pelo menos um caracter é sinal de pontuação
    bool temPonto = false;

    std::set<char> caracteresDuplicados;

    for (char c : senha) {
        if (isupper(c)) {
            temMaiuscula = true;
        } else if (islower(c)) {
            temMinuscula = true;
        } else if (isdigit(c)) {
            temDigito = true;
        } else if (ispunct(c)) {
            temPonto = true;
        }

        if (caracteresDuplicados.count(c) > 0) {
            return false;  // Caractere duplicado encontrado
        }

        caracteresDuplicados.insert(c);
    }

    return temMaiuscula && temMinuscula && temDigito && temPonto;
}

bool Quadro::validarTexto(const std::string& texto) {
    if (texto.length() < 5 || texto.length() > 30){
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
        }
        else {
            if (isalnum(c) || c == ' ') {
                prevSpace = (c == ' ');
                prevPunctuation = false;
            } else if (c == '.' || c == ';' || c == '?' || c == '!') {
                if (prevPunctuation || i == texto.length() - 1 || !isupper(texto[i + 1])) {
                    return false;
                }
                prevSpace = false;
                prevPunctuation = true;
            }
            else {
                return false;
            }
        }
    }

    return true;
}

void Quadro::setNome(const std::string& nome) {
    if (!validarTexto(nome)) {
        throw std::invalid_argument("Texto Inválido.");
    }
    this->nome = nome;
}

void Quadro::setDescricao(const std::string& descricao) {
    if (!validarTexto(descricao)) {
        throw std::invalid_argument("Texto Inválido.");
    }
    this->descricao = descricao;
}

bool Quadro::validarCodigo(const std::string& codigo) {
    if (codigo.length() != 4) {
        return false;
    }

    for (int i = 0; i < 4; i++) {
        if (i < 2) {
            if (!isupper(codigo[i])) {
                return false;
            }
        } else {
            if (!isdigit(codigo[i])) {
                return false;
            }
        }
    }

    return true;
}

void Quadro::setCodigo(const std::string& codigo) {
    if (!validarCodigo(codigo)) {
        throw std::invalid_argument("Formato inválido.");
    }
    this->codigo = codigo;
}

void Quadro::setLimite(const std::string& limite) {
    if (!validarLimite(limite)) {
        throw std::invalid_argument("Limite")
    }
}


