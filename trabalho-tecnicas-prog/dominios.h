#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

class Email{
private:
    string email;
public:
    void setEmail(string);
    string getEmail() const;
    bool validarEmail();

};

class Texto{;
private:
    string texto;
public:
    void setTexto(string);
    string getTexto() const;
    bool validarTexto();

};

class Senha{
private:
    string senha;
public:
    void setSenha(string);
    string getSenha() const;
    bool validarSenha();
};



// //Senha (Raphael)
//     bool validarSenha(string);
//     void setSenha(string);
//     string getSenha() const;

// //Texto (Raphael Luca Vitor)
//         bool validarTexto(const std::string& texto);
//         //GET TEXTO

#endif
