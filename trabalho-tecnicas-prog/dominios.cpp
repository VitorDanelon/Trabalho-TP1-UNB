#include "dominios.h"
#include <stdexcept>
using namespace std;
// --------------------------------------------------------------------------
// Implementa��es de m�todos de classe dom�nio.

// --------------------------------------------------------------------------
// M�todo para valida��o de valor.

//void Codigo::validar(int codigo){
//    if (codigo > LIMITE)
//        throw invalid_argument("Argumento invalido.");
//}

void Conta::setEmail(const std::string& email) {
    if (!validarEmail(email)) {
        throw std::invalid_argument("Email inv�lido.");
    }
    this->email = email;
}

void Conta::setSenha(const std::string& senha) {
    if (!validarSenha(senha)) {
        throw std::invalid_argument("Senha inv�lida.");
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
    // Pelo menos um caractere � letra mai�scula
    bool temMaiuscula = false;
    // Pelo menos um caractere � letra min�scula
    bool temMinuscula = false;
    // Pelo menos um caractere � d�gito
    bool temDigito = false;
    // Pelo menos um caracter � sinal de pontua��o
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
};
