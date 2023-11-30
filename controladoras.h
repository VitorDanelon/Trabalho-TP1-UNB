#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED
#include "dominios.h"
#include <stdexcept>
#include <string>
#include "IAG.h"
#include "dominios.h"
#include <stdexcept>
#include <iostream>

using namespace std;



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
// Declaração de classe controladora e implementação de método.
class CntrIUQuadro : public IUQuadro {
private:
    ILNQuadro *cntrLNQuadro;

public:
    void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) override;
    void visualizarQuadro(const string& codigo) override;
    void eliminarQuadro(const string& codigo) override;
    void setCntrLNQuadro(ILNQuadro *cntrLNQuadro) override;
};

void inline CntrIUQuadro::setCntrLNQuadro(ILNQuadro *cntrLNQuadro) {
    this->cntrLNQuadro = cntrLNQuadro;
}
class CntrIUCartao : public IUCartao {
private:
    ILNCartao *cntrLNCartao;

public:
    void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) override;
    void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) override;
    void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) override;
    void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) override;
    void setCntrLNCartao(ILNCartao *cntrLNCartao) override;
};

void inline CntrIUCartao::setCntrLNCartao(ILNCartao *cntrLNCartao) {
    this->cntrLNCartao = cntrLNCartao;
}



#endif // CONTROLADORAS_H_INCLUDED
