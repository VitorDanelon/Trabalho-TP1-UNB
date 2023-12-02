#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED
#include "dominios.h"
#include "interfaces/IAA.h"
#include "interfaces/IAC.h"
#include <stdexcept>
#include <string>

using namespace std;

class ControladoraISConta: public ISConta{
private
        Email email;
        Texto nome;
        Senha senha;

public:

    void setDadosConta(const string& email, const string& nome, const string& senha);
    string visualizarConta() const ;
    void editarConta(const string& novoNome, const string& novaSenha) ;
    void eliminarConta();

};

class ControladoraConta : public IAConta {
    private:
        //Email email; /**< Email associado à conta. */
        //Texto nome; /**< Nome associado à conta. */
        //Senha senha; /**< Senha associada à conta. */
        ISConta *controladoraISConta

    public:
        //ControladoraConta(const string& email, const string& nome, const string& senha);
        //string visualizarConta() const ;
        //void editarConta(const string& novoNome, const string& novaSenha) ;
        //void eliminarConta();
        //void setCntrISConta(ISConta*)
        string visualizarContaApresentacao() const ;
        void editarContaApresentacao() ;
        void eliminarContaApresentacao();
        void exibirMenuContaApresentacao();

};




class ControladoraAutenticacao : public IAAutenticacao {
    private:
        ISAutenticacao *controladoraISAuth;
    public:
        bool autenticar(Email *);
        void setCntrISAutenticacao(ISAutenticacao*);
};

// void inline ControladoraAutenticacao::setCntrISAutenticacao(ISAutenticacao *controladoraISAuth){
//         this->controladoraISAuth = controladoraISAuth;
// };

//222031822
/**
 * @brief Classe que representa o quadro Kanban.
 */
class Quadro{
    private:
        Codigo codigo; /**< C�digo associado ao quadro. */
        Texto nome; /**< Nome dado ao quadro. */
        Texto descricao; /**< Descri��o do quadro. */
        Limite limite; /**< Limite de cart�es do quadro. */

    public:
         /**
     * @brief Metodo que constroi a classe Quadro.
     * @param codigo C�digo do quadro.
     * @param nome Nome do quadro.
     * @param descricao Descri��o do quadro.
     * @param limite Limite de cartoes.
     */

        Quadro(const string& codigo, const string& nome, const string& descricao, const string& limite);
        /**
     * @brief Visualiza os dados do quadro.
     * @return Uma string que cont�m os dados do quadro formatados para exibi��o.
     */
        string visualizarQuadro() const;
        /**
     * @brief Elimina o quadro.
     */
        void eliminarQuadro();

};
//202023940
/**
 * @brief Classe que representa um Cart�o.
 */
class Cartao {
private:
    Codigo codigo;/**< C�digo do cartao. */
    Texto nome; /**< Nome cartao . */
    Texto descricao/**< Texto do cartao. */;
    Coluna coluna;/**< C�digo associado ao cartao. */


public:
    /**
     * @brief Metodo que constroi a classe Cartao.
     * @param codigo O c�digo do cart�o.
     * @param nome O nome do cart�o.
     * @param descricao A descri��o do cart�o.
     * @param coluna A coluna � qual o cart�o pertence.
     */
    Cartao(const string& codigo, const string& nome, const string& descricao, const string& coluna);

    /**
     * @brief Visualiza os detalhes do cart�o.
     * @param codigo O codigo do cartao a ser visualizado.
     * @return Uma string contendo os detalhes do cart�o.
     */
    string visualizarCartao(); //codigo c

    /**
     * @brief Metodo que move o cart�o para uma nova coluna.
     *
     * @param coluna A nova coluna para qual o cart�o deve ser movido.
     */
    void moverCartao(const string& coluna);; //codigo ,coluna

    /**
     * @brief Metodo que elimina o cart�o do quadro.
     *
     *
     */
    void eliminarCartao();
};




#endif
