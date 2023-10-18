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

void Usuario::criarQuadro() {
    Quadro novoQuadro;

    try {
      
        std::string nomeQuadro;
        std::cout << "Digite o nome do novo quadro: ";
        std::cin >> nomeQuadro;

        Nome nomeDominio;
        nomeDominio.setValor(nomeQuadro);

        
        std::cout << "Digite a descrição do novo quadro: ";
        std::string descricaoQuadro;
        std::cin.ignore(); // Limpa o buffer do teclado
        getline(std::cin, descricaoQuadro);
        Texto descricaoDominio;
        descricaoDominio.setValor(descricaoQuadro);

        
        int limiteQuadro;
        std::cout << "Digite o limite do quadro: ";
        std::cin >> limiteQuadro;
        Limite limiteDominio;
        limiteDominio.setValor(limiteQuadro);

        novoQuadro.setNome(nomeQuadro);
        novoQuadro.setDescricao(descricaoQuadro);
        novoQuadro.setLimite(limiteQuadro);

        quadro = novoQuadro;

        
    } catch (const std::invalid_argument &e) {
        
        std::cerr << "Erro ao criar quadro: " << e.what() << std::endl;
    }
}


