#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

/**
 * @brief Classe para representar uma coluna.
 *
 * Esta classe fornece métodos para configurar e obter o valor de uma coluna.
 */
class Coluna {
public:
    /**
     * @brief Define o valor da coluna.
     *
     * @param valor O valor da coluna a ser definido.
     */
    void setColuna(string valor);

    /**
     * @brief Obtém o valor da coluna.
     *
     * @return O valor atual da coluna.
     */
    string getColuna();

    /**
     * @brief Construtor da classe Coluna.
     *
     * @param valor O valor inicial da coluna.
     */
    Coluna(string valor);
};

#endif
