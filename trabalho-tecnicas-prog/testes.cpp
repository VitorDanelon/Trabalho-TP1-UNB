#include "testes.h"
#include <iostream>

// --------------------------------------------------------------------------
// Implementacoes de metodos de classe de teste de unidade.

// void TUCodigo::setUp(){
//     codigo = new Codigo();
//     estado = SUCESSO;
// }

// void TUCodigo::tearDown(){
//     delete codigo;
// }

// void TUCodigo::testarCenarioSucesso(){
//     try{
//         codigo->setValor(VALOR_VALIDO);
//         if (codigo->getValor() != VALOR_VALIDO)
//             estado = FALHA;
//     }
//     catch(invalid_argument &excecao){
//         estado = FALHA;
//     }
// }

// void TUCodigo::testarCenarioFalha(){
//     try{
//         codigo->setValor(VALOR_INVALIDO);
//         estado = FALHA;
//     }
//     catch(invalid_argument &excecao){
//         if (codigo->getValor() == VALOR_INVALIDO)
//             estado = FALHA;
//     }
// }

// int TUCodigo::run(){
//     setUp();
//     testarCenarioSucesso();
//     testarCenarioFalha();
//     tearDown();
//     return estado;
// }

// --------------------------------------------------------------------------
// Implementa��es de m�todos de classe de teste de unidade.

// void TUProjeto::setUp(){
//     projeto = new Projeto();
//     estado = SUCESSO;
// }

// void TUProjeto::tearDown(){
//     delete projeto;
// }

// void TUProjeto::testarCenarioSucesso(){
//     Codigo codigo;
//     codigo.setValor(VALOR_VALIDO);
//     projeto->setCodigo(codigo);
//     if(projeto->getCodigo().getValor() != VALOR_VALIDO)
//         estado = FALHA;

//     Prioridade prioridade;
//     prioridade.setValor(VALOR_VALIDO);
//     projeto->setPrioridade(prioridade);
//     if(projeto->getPrioridade().getValor() != VALOR_VALIDO)
//         estado = FALHA;
// }

// int TUProjeto::run(){
//     setUp();
//     testarCenarioSucesso();
//     tearDown();
//     return estado;
// }

// void TUConta::setUp() {
//     conta = new Conta();
//     estado = SUCESSO;
// }

// void TUConta::tearDown() {
//     delete conta;
// }

// void TUConta::testarCenarioSucesso() {
//     // Configura a conta com valores válidos
//     conta->Conta("email.val@example.com","Nome","S3nh!")
//     //conta->setEmail("email.val@example.com");
//     //conta->setNome("Nome");
//     //conta->setSenha("S3nh!");

//     // Verifica se os valores são obtidos corretamente
//     //if (conta->Conta("email.val@example.com","Nome","S3nh!")
//         //conta->getEmail() != "email_valido@example.com" ||
//         //conta->getNome() != "Nome" ||
//         //conta->getSenha() != "S3nh!") {
//         //estado = FALHA;
//     //}
// }

// int TUConta::run() {
//     setUp();
//     testarCenarioSucesso();
//     tearDown();
//     return estado;
// }

// void TUEmail::setUp() {
//     email = new Email();
//     estado = SUCESSO;
// }

// void TUEmail::tearDown() {
//     delete email;
// }

// void TUEmail::testarCenarioSucesso() {
//     // Cenário de sucesso - email válido
//     try {
//         email->setEmail("usuario@example.com");
//         if (email->getEmail() != "usuario@example.com") {
//             estado = FALHA;
//         }
//     } catch (const std::invalid_argument& e) {
//         estado = FALHA;
//     }
// }

// void TUEmail::testarCenarioFalha() {
//     // Cenário de falha - email inválido
//     try {
//         email->setEmail("email-invalido");
//         estado = FALHA;
//     } catch (const std::invalid_argument& e) {
//         // Espera-se uma exceção, o teste passa se a exceção for lançada
//     }
// }

// int TUEmail::run() {
//     setUp();
//     testarCenarioSucesso();
//     testarCenarioFalha();
//     tearDown();
//     return estado;
// }

void TUConta::setUp() {
    conta = new Conta("Ema.il@example.com", "Alfredo", "S3cr!");
    estado = SUCESSO;
}

void TUConta::tearDown() {
    delete conta;
}

void TUConta::testarCenarioSucesso() {
    // Configura a conta com valores válidos
    conta->editarConta("Alfreda", "S3cr?");

    // Verifica se os valores foram atualizados corretamente
    if (conta->visualizarConta() != "Email: Ema.il@example.com\nNome: Alfreda\nSenha: S3cr?") {
         //std::cout << "Valor retornado por conta->visualizarConta(): " << conta->visualizarConta() << std::endl;

        estado = FALHA;
    }
}

int TUConta::run() {
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

// void TUTexto::setUp() {
//     texto = new Texto();
//     estado = SUCESSO;
// }

// void TUTexto::tearDown() {
//     delete texto;
// }

// void TUTexto::testarCenarioSucesso() {
//     // Configura a unidade em teste com um valor válido
//     texto->setTexto("Texto Válido");

//     // Verifica se a configuração foi bem-sucedida
//     if (texto->getTexto() != "Texto Válido") {
//         std::cout << "Cenário de sucesso: Configuração inválida." << std::endl;
//         estado = FALHA;
//     }
// }

// void TUTexto::testarCenarioFalha() {
//     // Configura a unidade em teste com um valor inválido
//     try {
//         texto->setTexto("Texto Inválido");

//         // Se a configuração não lançar uma exceção, falha no cenário de falha
//         std::cout << "Cenário de falha: Configuração deveria lançar uma exceção." << std::endl;
//         estado = FALHA;
//     } catch (const std::invalid_argument& e) {
//         // A configuração lançou uma exceção, o que é esperado no cenário de falha.
//     }
// }

// int TUTexto::run() {
//     setUp();

//     // Testa o cenário de sucesso
//     testarCenarioSucesso();

//     // Testa o cenário de falha
//     testarCenarioFalha();

//     tearDown();
//     return estado;
// }






