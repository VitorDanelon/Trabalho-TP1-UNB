#include "controladoras.h"
#include "dominios.h"
#include <regex>
#include <stdexcept>
#include <cctype>
#include<set>

using namespace std;


std::string Email::getEmail() const {
    return email;
}

void Email::setEmail(const std::string& email) {
    if (!validarEmail(email)) {
        throw std::invalid_argument("Email inválido.");
    }
    this->email = email;
}
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



string Senha::getSenha() const {
    return senha;
}
void Senha::setSenha(const std::string& senha) {
    if (!validarSenha(senha)) {
        throw std::invalid_argument("Senha invalida.");
    }
    this->senha = senha;
}

bool Senha::validarSenha(const std::string& senha) {
    // Verifica se a senha tem exatamente 5 caracteres
    if (senha.length() != 5) {
        return false;
    }

    bool temMaiuscula = false;
    bool temMinuscula = false;
    bool temDigito = false;
    bool temPonto = false;

    std::set<char> caracteresDuplicados;

    for (char c : senha) {
        if (isupper(c)) {
            temMaiuscula = true;
        } else if (islower(c)) {
            temMinuscula = true;
        } else if (isdigit(c)) {
            temDigito = true;
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
    return temMaiuscula && temMinuscula && temDigito && temPonto;
}

string Texto::getTexto() const {
    return texto;
}

void Texto::setTexto(const std::string& texto) {
    if (!validarTexto(texto)) {
        throw std::invalid_argument("Texto invalido.");
    }
    this->texto = texto;
}

bool Texto::validarTexto(const std::string& texto) {
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

// GET CÓDIGO
string Codigo::getCodigo() const {
    return codigo;
}
//SET CÓDIGO
void Codigo::setCodigo(const std::string& codigo) {
    if (!validarCodigo(codigo)) {
        throw std::invalid_argument("Codigo invalido.");
    }
    this->codigo = codigo;
}
//VERIFICAR CÓDIGO

bool Codigo::validarCodigo(const std::string& codigo) {
    try{
            if (codigo.length() != 4){
                return false;
            }


            if (!isupper(codigo[0]) || !isupper(codigo[1]) || !isdigit(codigo[2]) || !isdigit(codigo[3])){
                return false;
            }

    }catch(const std::invalid_argument& e){
         throw std::invalid_argument("A senha deve possui 4 caracteres");
    }


    return true;
}

//GET LIMITE
string Limite::getLimite() const {
    return limite;
}
//SET LIMITE
void Limite::setLimite(const std::string& limite) {
    if (!validarLimite(limite)) {
        throw std::invalid_argument("Limite invalido.");
    }
    this->limite = limite;
}

//VERIFICAR LIMITE
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






