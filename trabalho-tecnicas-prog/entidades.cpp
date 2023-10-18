#include "entidades.h"
#include "dominios.h"
#include <iostream>
#include <vector>
#include <stdexcept>
#include <regex>
#include <set>

// Implementação dos métodos da classe Usuario

void Usuario::criarConta(string email, string senha) {
    Conta novaConta;

    try {
        // Validação do email
        Email emailDominio;
        emailDominio.setValor(email);

        // Validação da senha
        Senha senhaDominio;
        senhaDominio.setValor(senha);

        novaConta.setEmail(email);
        novaConta.setSenha(senha);

        conta = novaConta;

  
    } catch (const std::invalid_argument &e) {
        
        std::cerr << "Erro ao criar conta: " << e.what() << std::endl;
    }
}

Conta Usuario::getConta() {
    return conta;
}



