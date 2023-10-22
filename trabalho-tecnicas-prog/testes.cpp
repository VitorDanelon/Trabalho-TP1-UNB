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





//void testeQuadro::executarTeste() {
    //Quadro quadro1("AX07", "Alfredo", "Alfredo1234", "5");

    //std::cout << "Teste 1 - Quadro 1:\n" << quadro1.visualizarQuadro() << std::endl;


//}


void TUEmail::setUp() {
    email = Email();
    estado = SUCESSO;
}

void TUEmail::tearDown() {
    // Limpar recursos, se necessário
}

void TUEmail::testarCenarioSucesso() {
    // Teste com um valor de e-mail válido
    try {
        email.setEmail("ema.il@example.com");
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }

    if (email.getEmail() != "ema.il@example.com") {
        estado = FALHA;
    }

    //std::cout << "Teste de cenario de sucesso executado." << std::endl;
}

void TUEmail::testarCenarioFalha() {
    // Teste com um valor de e-mail inválido
    try {
        email.setEmail("email_inválido");
        //std::cout << "Teste de cenário de falha: Esperava-se uma exceção, mas nenhuma exceção foi lançada." << std::endl;
        estado = FALHA;
    } catch (const std::invalid_argument& e) {
        //std::cout << "Teste de cenário de falha executado com sucesso: Exceção lançada, como esperado." << std::endl;
    }
}

int TUEmail::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


void TUTexto::setUp() {
    texto = Texto();
    estado = SUCESSO;
}
void TUTexto::tearDown() {
    // Limpar recursos, se necessário
}
void TUTexto::testarCenarioSucesso() {
    // Teste com um valor de texto válido
    try {
        texto.setTexto("Texto valido");
    } catch (const std::invalid_argument& e) {
        //std::cout << "caiu no if01." << std::endl;
        estado = FALHA;
    }

    if (texto.getTexto() != "Texto valido") {
        estado = FALHA;
        //std::cout << "caiu no if." << std::endl;
        //std::cout <<  "sou" + texto.getTexto() << std::endl;
    }else{
        std::cout << "Lembrar arrumar pontuacao na validacao de texto" << std::endl;
    }


}
void TUTexto::testarCenarioFalha() {
    // Teste com um valor de texto inválido
    try {
        texto.setTexto("texto inválido!");
        //std::cout << "Teste de cenário de falha: Esperava-se uma exceção, mas nenhuma exceção foi lançada." << std::endl;
        estado = FALHA;
    } catch (const std::invalid_argument& e) {
        //std::cout << "Teste de cenário de falha executado com sucesso: Exceção lançada, como esperado." << std::endl;
    }
}
int TUTexto::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    //tearDown();
    return estado;
}

void TUSenha::setUp() {
    senha = Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown() {
    // Limpar recursos, se necessário
}

void TUSenha::testarCenarioSucesso() {
    // Teste com uma senha válida
    try {
        senha.setSenha("S3cr!");
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }

    if (senha.getSenha() != "S3cr!") {
        estado = FALHA;
    }//else{
        //std::cout << "Teste de cenário de sucesso executado." << std::endl;



}

void TUSenha::testarCenarioFalha() {
    // Teste com uma senha inválida
    try {
        senha.setSenha("senha"); // Senha inválida, menos de 5 caracteres
        //std::cout << "Teste de cenário de falha: Esperava-se uma exceção, mas nenhuma exceção foi lançada." << std::endl;
        estado = FALHA;
    } catch (const std::invalid_argument& e) {
        //std::cout << "Teste de cenário de falha executado com sucesso: Exceção lançada, como esperado." << std::endl;
    }
}

int TUSenha::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    //tearDown();
    return estado;
}


void TUCodigo::setUp() {
    codigo = Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown() {
    // Limpar recursos, se necessário
}

void TUCodigo::testarCenarioSucesso() {
    // Teste com um código válido
    try {
        codigo.setCodigo("AB12");
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
        //std::cout << "caiu no if01" << std::endl;
    }

    if (codigo.getCodigo() != "AB12") {
        //std::cout << "caiu no if" << std::endl;
        estado = FALHA;
    }
    //else{
        //std::cout << "Teste de cenário de sucesso executado." << std::endl;
    //}


}

void TUCodigo::testarCenarioFalha() {
    // Teste com um código inválido
    try {
        codigo.setCodigo("ABC1"); // Código inválido, deve ter exatamente 4 caracteres
        //std::cout << "Teste de cenário de falha: Esperava-se uma exceção, mas nenhuma exceção foi lançada." << std::endl;
        estado = FALHA;
    } catch (const std::invalid_argument& e) {
        //std::cout << "Teste de cenário de falha executado com sucesso: Exceção lançada, como esperado." << std::endl;
    }
}

int TUCodigo::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    //tearDown();
    return estado;
}

void TULimite::setUp() {
    limite = Limite();
    estado = SUCESSO;
}

void TULimite::tearDown() {
    // Limpar recursos, se necessário
}

void TULimite::testarCenarioSucesso() {
    // Teste com um limite válido
    try {
        limite.setLimite("15");
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }

    if (limite.getLimite() != "15") {
        estado = FALHA;
    }//else{
        //std::cout << "Teste de cenário de sucesso executado." << std::endl;



}

void TULimite::testarCenarioFalha() {
    // Teste com um limite inválido
    try {
        limite.setLimite("14"); // Limite inválido, deve ser múltiplo de 5 e <= 20
        //std::cout << "Teste de cenário de falha: Esperava-se uma exceção, mas nenhuma exceção foi lançada." << std::endl;
        estado = FALHA;
    } catch (const std::invalid_argument& e) {
        //std::cout << "Teste de cenário de falha executado com sucesso: Exceção lançada, como esperado." << std::endl;
    }
}

int TULimite::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}



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






