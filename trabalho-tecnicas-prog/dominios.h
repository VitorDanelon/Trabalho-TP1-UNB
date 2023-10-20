#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

//Código (Luca Vitor)
        void setCodigo(char);
        char getCodigo();
        static bool validarCodigo(const std::string& codigo);

//Coluna (Luca)
        void setColuna(string);
        string getColuna();
        setColuna(string);

//Email (Raphael)
    bool validarEmail(string);
    void setEmail(string);
    string getEmail() const;

//Limite (Vitor)
    void setLimite(int);
    int getLimite();
    //VALIDAR LIMITE

//Senha (Raphael)
    bool validarSenha(string);
    void setSenha(string);
    string getSenha() const;

//Texto (Raphael Luca Vitor)
        bool validarTexto(const std::string& texto);
        //GET TEXTO
        //SET TEXTO
//Alo
#endif // DOMINIOS_H_INCLUDED
