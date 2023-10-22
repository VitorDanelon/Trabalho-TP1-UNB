#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

//matricula: 222033157
/**
 * @brief A classe Conta representa uma conta de usuário.
 *
 * Esta classe contém informações sobre a conta, como email, nome e senha, e fornece
 * métodos para visualização, edição e exclusão da conta.
 */
class Conta{
    private:
        Email email; /**< Email associado à conta. */
        Texto nome; /**< Nome associado à conta. */
        Senha senha; /**< Senha associada à conta. */

    public:
        /**
     * @brief Método que constrói uma unidade da classe.
     *
     *
     */
        Conta(const string& email, const string& nome, const string& senha);
        /**
     * @brief Visualiza os dados da conta.
     *
     * @return Uma string que contém os dados da conta formatados para exibição.
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

//Vitor classe quadro
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
        //void criarQuadro(const std::string&, const std::string&, const std::string&,const std::string& );
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

/**
 * @brief Classe que representa um Cartão.
 */
class Cartao {
private:
    Codigo codigo;/**< Código do cartao. */
    Texto nome; /**< Nome cartao . */
    Texto descricao/**< Texto do cartao. */;
    Coluna coluna;/**< Código associado ao cartao. */
    //bool excluido;/**< Status do cartao excluido. */

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
     * @param novaColuna A nova coluna para qual o cartão deve ser movido.
     */
    void moverCartao(const string& coluna);; //codigo ,coluna

    /**
     * @brief Metodo que elimina o cartão do quadro.
     *
     * @param codigo O codigo do cartao a ser eliminado
     * @param coluna Coluna destino do cartao
     */
    void eliminarCartao();
};


//Luca classe cartao

#endif
