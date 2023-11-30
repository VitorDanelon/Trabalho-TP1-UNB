#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"

#include "interfaces/IAA.h"
#include "interfaces/IAC.h"
#include <stdexcept>
#include <string>

using namespace std;


class ControladoraConta : public IAAutenticacao {
    private:
        Email email; /**< Email associado à conta. */
        Texto nome; /**< Nome associado à conta. */
        Senha senha; /**< Senha associada à conta. */
        IAAutenticacao *controladoraContaAu;
    public:
        ControladoraConta(const string& email, const string& nome, const string& senha);
        string visualizarConta() const;
        void editarConta(const string& novoNome, const string& novaSenha);
        void eliminarConta();
        bool autenticar(Email*);
        void setControladoraAutenticacao(IAAutenticacao*);
};


//222031822
/**
 * @brief Classe que representa o quadro Kanban.
 */
class Quadro{
    private:
        Codigo codigo; /**< Código associado ao quadro. */
        Texto nome; /**< Nome dado ao quadro. */
        Texto descricao; /**< Descrição do quadro. */
        Limite limite; /**< Limite de cartões do quadro. */

    public:
         /**
     * @brief Metodo que constroi a classe Quadro.
     * @param codigo Código do quadro.
     * @param nome Nome do quadro.
     * @param descricao Descrição do quadro.
     * @param limite Limite de cartoes.
     */

        Quadro(const string& codigo, const string& nome, const string& descricao, const string& limite);
        /**
     * @brief Visualiza os dados do quadro.
     * @return Uma string que contém os dados do quadro formatados para exibição.
     */
        string visualizarQuadro() const;
        /**
     * @brief Elimina o quadro.
     */
        void eliminarQuadro();

};
//202023940
/**
 * @brief Classe que representa um Cartão.
 */
class Cartao {
private:
    Codigo codigo;/**< Código do cartao. */
    Texto nome; /**< Nome cartao . */
    Texto descricao/**< Texto do cartao. */;
    Coluna coluna;/**< Código associado ao cartao. */


public:
    /**
     * @brief Metodo que constroi a classe Cartao.
     * @param codigo O código do cartão.
     * @param nome O nome do cartão.
     * @param descricao A descrição do cartão.
     * @param coluna A coluna à qual o cartão pertence.
     */
    Cartao(const string& codigo, const string& nome, const string& descricao, const string& coluna);

    /**
     * @brief Visualiza os detalhes do cartão.
     * @param codigo O codigo do cartao a ser visualizado.
     * @return Uma string contendo os detalhes do cartão.
     */
    string visualizarCartao(); //codigo c

    /**
     * @brief Metodo que move o cartão para uma nova coluna.
     *
     * @param coluna A nova coluna para qual o cartão deve ser movido.
     */
    void moverCartao(const string& coluna);; //codigo ,coluna

    /**
     * @brief Metodo que elimina o cartão do quadro.
     *
     *
     */
    void eliminarCartao();
};


//Luca classe cartao

#endif
