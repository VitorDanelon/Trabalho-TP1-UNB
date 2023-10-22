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

//Vitor classe quadro
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
        //void criarQuadro(const std::string&, const std::string&, const std::string&,const std::string& );
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
//Luca classe cartao

#endif
