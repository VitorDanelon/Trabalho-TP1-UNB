#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

//Raphael
class Conta{
    private:
        Email email;
        Texto nome;
        Senha senha;

    public:
        string visualizarConta() const;
        void editarConta(const string& novoNome, const string& novaSenha);
        void eliminarConta();


};

//Vitor classe quadro


//Luca classe cartao

#endif
