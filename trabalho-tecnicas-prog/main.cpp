// Exemplos de classes domínio, classe entidade e testes de unidade.

// Incluir cabeçalhos.

#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{

//---------------------------------------------------------------------------
// Estrutura de código para instanciar e executar teste de unidade.
//
// Esse código pode ser adaptado para instanciar e executar testes.

/* --------------------------------------------------------------------------

    // Instanciar classe de teste de unidade.

    TUnidade teste;

    // Invocar método e apresentar mensagem acerca do resultado.

    switch(teste.run()){
        case TUnidade::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUnidade::FALHA  : cout << "FALHA" << endl;
                                break;
    }

-------------------------------------------------------------------------- */

    //-----------------------------------------------------------------------
    // Exemplo de código construído a partir da estrutura de código anterior.

    //-----------------------------------------------------------------------
    // Exemplo de teste de classe domínio.

    // Instanciar classe de teste de domínio.

    TUCodigo testeA;

    // Invocar método e apresentar mensagem acerca do resultado do teste.

    switch(testeA.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

    //-----------------------------------------------------------------------
    // Exemplo de teste de classe entidade.

    // Instanciar classe de teste de entidade.

    TUProjeto testeB;

    // Invocar método e apresentar mensagem acerca do resultado do teste.

    switch(testeB.run()){
        case TUProjeto::SUCESSO: cout << "SUCESSO - PROJETO" << endl;
                                break;
        case TUProjeto::FALHA  : cout << "FALHA   - PROJETO" << endl;
                                break;
    }

    return 0;
}
