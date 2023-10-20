#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

//Raphael
class Conta{
    private:
        Email email;
        Texto nome;
        Senha senha;

    public:
        //Criar conta
        //Visualizar conta
        //Editar conta
        //Eliminar conta

};

//Vitor
class Quadro{
    private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Limite limite;

    public:
    //Criar Quadro
    //Visualizar Quadro
    //Eliminar Quadro

};

//Luca
class Cartao{
    private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Coluna coluna;

    public:
        //Criar cartão
        //Visualizar cartão
        //Mover cartão
        //Eliminar cartão
};
//Alo
#endif
