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


//Luca classe cartao

#endif
