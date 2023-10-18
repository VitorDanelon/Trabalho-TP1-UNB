#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>
#include <vector>

using namespace std;

/* -----------------------------------------------------------------------
// Estrutura de c�digo para declara��o de classe entidade.
//
// Essa estrutura de c�digo pode ser aproveitada na declara��o de entidade.
//
// Seguem as atividades para adapta��o:
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
            void setnomeAtributo(const Dominio&);   // Declarar m�todo set para cada atributo.
            Dominio getnomeAtributo() const;        // Declarar m�todo get para cada atributo.
};

inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}

----------------------------------------------------------------------- */

// -----------------------------------------------------------------------
// Exemplos de uso da estrutura de c�digo anterior.

// -----------------------------------------------------------------------
// Exemplo de declara��o de classe entidade e implementa��es de m�todos.

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



//class Usuario {
//private:
    //Conta conta;
    //Quadro quadro;
    //vector<Cartao> cartoes;

//public:
    //void criarUsuario();
   // Conta getConta();
    //void criarQuadro();
    //Quadro getQuadro();
    //void criarCartao();
    //vector<Cartao> getCartoes();


//};


class Usuario {
private:
    Conta conta;
    Quadro quadro;
    std::vector<Cartao> cartoes;

public:
    Usuario(std::string nome, std::string email, std::string senha);

    std::string getNome();
    std::string getEmail();

    vector visualizarConta();
    void editarConta();
    void eliminarConta();

    bool validarSenha(std::string senha);

    void criarQuadro(char codigo, std::string nome, std::string descricao, int limite);
    vector visualizarQuadro(char codigo);
    void eliminarQuadro();

    void criarCartao(char codigo, std::string nome, std::string descricao, int limite, std::string coluna);
    vector visualizarCartao(char codigo)
    void eliminarCartao(char codigo);
    void editarCartao(char codigo);
    void moverCartao(char codigo);
    void listarCartoes();
};


#endif // ENTIDADES_H_INCLUDED
