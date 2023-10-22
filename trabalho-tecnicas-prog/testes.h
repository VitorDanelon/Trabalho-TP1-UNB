// Diretivas de compilação para controlar processo de inclusão.

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

// Incluir cabeçalhos.

#include "dominios.h"
#include "entidades.h"

using namespace std;

// --------------------------------------------------------------------------
// Exemplo de declaração de classe para teste de unidade de classe domínio.

/*class TUCodigo {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    const static int VALOR_INVALIDO = 30;   // Definição de constante para evitar número mágico.
    Codigo *codigo;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

// --------------------------------------------------------------------------
// Exemplo de declaração de classe para teste de unidade de classe entidade.

/*class TUProjeto {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    Projeto *projeto;                       // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};*/
class TUColuna {
public:
    static const int SUCESSO = 0;
    static const int FALHA = 1;

    int run();

private:
    void testarCenarioValido();
    void testarCenarioInvalido();
};
#endif // TESTES_H_INCLUDED
