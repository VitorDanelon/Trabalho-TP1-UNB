// Exemplos de classes dom�nio, classe entidade e testes de unidade.

// Incluir cabe�alhos.

#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{

//---------------------------------------------------------------------------
// Estrutura de c�digo para instanciar e executar teste de unidade.
//
// Esse c�digo pode ser adaptado para instanciar e executar testes.

/* --------------------------------------------------------------------------

    // Instanciar classe de teste de unidade.

    TUnidade teste;

    // Invocar m�todo e apresentar mensagem acerca do resultado.

    switch(teste.run()){
        case TUnidade::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUnidade::FALHA  : cout << "FALHA" << endl;
                                break;
    }

-------------------------------------------------------------------------- */

    //-----------------------------------------------------------------------
    // Exemplo de c�digo constru�do a partir da estrutura de c�digo anterior.

    //-----------------------------------------------------------------------
    // Exemplo de teste de classe dom�nio.

    // Instanciar classe de teste de dom�nio.

    // TUCodigo testeA;

    // Invocar m�todo e apresentar mensagem acerca do resultado do teste.

    // switch(testeA.run()){
    //     case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
    //                             break;
    //     case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
    //                             break;
    // }

    //-----------------------------------------------------------------------
    // Exemplo de teste de classe entidade.

    // Instanciar classe de teste de entidade.

    // TUProjeto testeB;

    // Invocar m�todo e apresentar mensagem acerca do resultado do teste.

    // switch(testeB.run()){
    //     case TUProjeto::SUCESSO: cout << "SUCESSO - PROJETO" << endl;
    //                             break;
    //     case TUProjeto::FALHA  : cout << "FALHA - PROJETO" << endl;
    //                             break;
    // }

    TUConta testeConta;

    switch(testeConta.run()){
        case TUConta::SUCESSO: cout << "TESTE: CONTA - SUCESSO" << endl;
                                break;
        case TUConta::FALHA  : cout << "TESTE : CONTA - FALHOU" << endl;
                                break;
    }

    //testeQuadro teste;
    //teste.executarTeste();


    TUEmail testeEmail;

    int resultadoEmail = testeEmail.run();
    if (resultadoEmail == TUEmail::SUCESSO) {
        std::cout << "TESTE: EMAIL - SUCESSO" << std::endl;
    } else {
        std::cout << "TESTE: EMAIL - FALHOU." << std::endl;
    }

    TUTexto testeTexto;

    int resultadoTexto = testeTexto.run();
    //std::cout << resultadoTexto << std::endl;
    //std::cout << TUTexto::SUCESSO << std::endl;
    if (resultadoTexto == TUTexto::SUCESSO) {
        std::cout << "TESTE: TEXTO - SUCESSO" << std::endl;
    } else {
        std::cout << "TESTE: TEXTO - FALHOU." << std::endl;
    }



    TUSenha testeSenha;

    int resultadoSenha = testeSenha.run();
    if (resultadoSenha == TUSenha::SUCESSO) {
        std::cout << "TESTE: SENHA - SUCESSO" << std::endl;
    } else {
        std::cout << "TESTE: SENHA - FALHOU." << std::endl;
    }

    TUCodigo testeCodigo;
    int resultadoCodigo = testeCodigo.run();
    if (resultadoCodigo == TUCodigo::SUCESSO) {
        std::cout << "TESTE: CODIGO - SUCESSO" << std::endl;
    } else {
        std::cout << "TESTE: CODIGO - FALHOU." << std::endl;
    }

    TULimite testeLimite;
    int resultadoLimite = testeLimite.run();
    if (resultadoLimite == TULimite::SUCESSO) {
        std::cout << "TESTE: LIMITE - SUCESSO" << std::endl;
    } else {
        std::cout << "TESTE: LIMITE - FALHOU." << std::endl;
    }



    // TUEmail testeB;
    //  switch(testeB.run()){
    //     case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
    //                             break;
    //     case TUEmail::FALHA  : cout << "FALHA - EMAIL" << endl;
    //                             break;
    // }

    // TUTexto teste;
    // int resultado = teste.run();

    // if (resultado == TUTexto::SUCESSO) {
    //     std::cout << "Esse é o teste de sucesso de texto." << std::endl;
    // } else {
    //     std::cout << "Esse é o teste de falha de texto." << std::endl;
    // }




    return 0;
}
