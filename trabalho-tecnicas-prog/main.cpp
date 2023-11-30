// Exemplos de classes dom�nio, classe entidade e testes de unidade.

// Incluir cabe�alhos.

#include <iostream>

#include "dominios.h"
#include "controladoras.h"
#include "testes.h"
#include "interfaces/IAA.h"

using namespace std;

// int main()
// {

// //---------------------------------------------------------------------------

//     TUConta testeConta;

//     switch(testeConta.run()){
//         case TUConta::SUCESSO: cout << "TESTE: CONTA - SUCESSO" << endl;
//                                 break;
//         case TUConta::FALHA  : cout << "TESTE : CONTA - FALHOU" << endl;
//                                 break;
//     }

//     TUConta testeCartao;

//     switch(testeCartao.run()){
//         case TUCartao::SUCESSO: cout << "TESTE: CARTAO - SUCESSO" << endl;
//                                 break;
//         case TUCartao::FALHA  : cout << "TESTE: CARTAO - FALHOU" << endl;
//                                 break;
//     }

//     //TUQuadro testeQuadro;

//     //switch(testeQuadro.run()){
//         //case TUQuadro::SUCESSO: cout << "TESTE: Quadro - SUCESSO" << endl;
//                                 //break;
//         //case TUQuadro::FALHA  : cout << "TESTE : Quadro - FALHOU" << endl;
//                                 //break;
//     //}







//     std::cout << "--------------Testes de Dominio--------------" << std::endl;


//     TUEmail testeEmail;

//     int resultadoEmail = testeEmail.run();
//     if (resultadoEmail == TUEmail::SUCESSO) {
//         std::cout << "TESTE: EMAIL - SUCESSO" << std::endl;
//     } else {
//         std::cout << "TESTE: EMAIL - FALHOU." << std::endl;
//     }

//     TUTexto testeTexto;

//     int resultadoTexto = testeTexto.run();
//     //std::cout << resultadoTexto << std::endl;
//     //std::cout << TUTexto::SUCESSO << std::endl;
//     if (resultadoTexto == TUTexto::SUCESSO) {
//         std::cout << "TESTE: TEXTO - SUCESSO" << std::endl;
//     } else {
//         std::cout << "TESTE: TEXTO - FALHOU." << std::endl;
//     }


//     TUSenha testeSenha;

//     int resultadoSenha = testeSenha.run();
//     if (resultadoSenha == TUSenha::SUCESSO) {
//         std::cout << "TESTE: SENHA - SUCESSO" << std::endl;
//     } else {
//         std::cout << "TESTE: SENHA - FALHOU." << std::endl;
//     }

//     TUCodigo testeCodigo;
//     int resultadoCodigo = testeCodigo.run();
//     if (resultadoCodigo == TUCodigo::SUCESSO) {
//         std::cout << "TESTE: CODIGO - SUCESSO" << std::endl;
//     } else {
//         std::cout << "TESTE: CODIGO - FALHOU." << std::endl;
//     }

//     TULimite testeLimite;
//     int resultadoLimite = testeLimite.run();
//     if (resultadoLimite == TULimite::SUCESSO) {
//         std::cout << "TESTE: LIMITE - SUCESSO" << std::endl;
//     } else {
//         std::cout << "TESTE: LIMITE - FALHOU." << std::endl;
//     }

//     TUColuna testeColuna;
//     int resultadoColuna = testeColuna.run();
//     if (resultadoColuna == TUColuna::SUCESSO) {
//         std::cout << "TESTE: COLUNA - SUCESSO" << std::endl;
//     } else {
//         std::cout << "TESTE: COLUNA - FALHOU." << std::endl;
//     }





//     return 0;
// }

int main() {
    IAAutenticacao *StubAAutenticacao = new StubAAutenticacao();

    // Ligar instância de controladora a instância de stub.
    ControladoraConta->setCntrAAutenticacao(stubAAutenticacao);

    bool resultado;
    Email email;
    Senha senha;

    while (true) {
        // Simular apresentação de tela inicial do sistema.
        cout << endl << "Tela inicial de sistema." << endl;

        try {
            // Solicitar serviço de autenticação.
            resultado = cntrIAAutenticacao->autenticar(email, senha);
        } catch (const runtime_error &exp) {
            cout << "Erro de sistema." << endl;
            break;
        }

        // Criticar resultado da autenticação.
        if (resultado) {
            cout << endl << "Sucesso autenticacao." << endl;
            cout << endl << "Email = " << email.getEmail() << endl;
            break;
        } else {
            cout << endl << "Erro autenticacao." << endl;
            break;
        }
    }

    // Destruir instância de controladora e instância de stub.
    delete cntrIAAutenticacao;
    delete stubAAutenticacao;

    return 0;
}
