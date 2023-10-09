#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

/* -----------------------------------------------------------------------
// Estrutura de código para declaração de classe entidade.
//
// Essa estrutura de código pode ser aproveitada na declaração de entidade.
//
// Seguem as atividades para adaptação:
//
// Substituir Entidade por nome da classe.
//
// Substituir Dominio.
//
// Substituir nomeAtributo.

class Entidade {
    private:
            Dominio nomeAtributo;                   // Declarar cada atributo da classe.
    public:
            void setnomeAtributo(const Dominio&);   // Declarar método set para cada atributo.
            Dominio getnomeAtributo() const;        // Declarar método get para cada atributo.
};

inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}

----------------------------------------------------------------------- */

// -----------------------------------------------------------------------
// Exemplos de uso da estrutura de código anterior.

// -----------------------------------------------------------------------
// Exemplo de declaração de classe entidade e implementações de métodos.

/*class Projeto {
private:
    Codigo      codigo;
    Prioridade  prioridade;
public:
    void setCodigo(const Codigo&);
    Codigo getCodigo() const;
    void setPrioridade(const Prioridade&);
    Prioridade getPrioridade() const;
};

inline void Projeto::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}

inline Codigo Projeto::getCodigo() const {
    return codigo;
}

inline void Projeto::setPrioridade(const Prioridade& prioridade){
    this->prioridade = prioridade;
}

inline Prioridade Projeto::getPrioridade() const {
    return prioridade;
}*/



class Usuario {
private:
    Conta conta;
    Quadro quadro;
    vector<Cartao> cartoes;

public:
    void criarConta(string email, string senha);
    Conta getConta();
    void criarQuadro();
    Quadro getQuadro();
    void criarCartao();
    vector<Cartao> getCartoes();
};


#endif // ENTIDADES_H_INCLUDED
