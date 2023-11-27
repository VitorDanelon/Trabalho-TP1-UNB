#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

//matricula: 222033157
/**
 * @brief A classe Conta representa uma conta de usu�rio.
 *
 * Esta classe cont�m informa��es sobre a conta, como email, nome e senha, e fornece
 * m�todos para visualiza��o, edi��o e exclus�o da conta.
 */
class Conta{
    private:
        Email email; /**< Email associado � conta. */
        Texto nome; /**< Nome associado � conta. */
        Senha senha; /**< Senha associada � conta. */

    public:
        /**
     * @brief M�todo que constr�i uma unidade da classe.
     *
     *
     */
        Conta(const string& email, const string& nome, const string& senha);
        /**
     * @brief Visualiza os dados da conta.
     *
     * @return Uma string que cont�m os dados da conta formatados para exibi��o.
     */
        string visualizarConta() const;
        /**
     * @brief Edita o nome e/ou a senha da conta.
     *
     * @param novoNome O novo nome a ser definido para a conta.
     * @param novaSenha A nova senha a ser definida para a conta.
     */
        void editarConta(const string& novoNome, const string& novaSenha);
         /**
     * @brief Elimina a conta, redefinindo seus atributos para valores vazios.
     */
        void eliminarConta();


};

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


//Luca classe cartao

#endif
