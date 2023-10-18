#include "entidades.h"
#include <iostream>


//raphael

Usuario::Usuario(std::string nome, std::string email, std::string senha) {
    conta.setNome(nome);
    conta.setEmail(email);
    conta.setSenha(senha);
}

std::string Usuario::getNome() {
    return conta.getNome();
}

std::string Usuario::getEmail() {
    return conta.getEmail();
}

bool Usuario::validarSenha(std::string senha) {
    return conta.validarSenha(senha);
}

void Usuario::criarQuadro(char codigo, std::string nome, std::string descricao, int limite) {
    Quadro quadro;
    quadro.setCodigo(codigo);
    quadro.setNome(nome);
    quadro.setDescricao(descricao);
    quadro.setLimite(limite);
    quadros.push_back(quadro);
}

//void Usuario::listarQuadros() {
    //for (const Quadro& quadro : quadros) {
        //std::cout << "Código: " << quadro.getCodigo() << std::endl;
        //std::cout << "Nome: " << quadro.getNome() << std::endl;
        //std::cout << "Descrição: " << quadro.getDescricao() << std::endl;
        //std::cout << "Limite: " << quadro.getLimite() << std::endl;
        //std::cout << "-------------------------" << std::endl;
    //}
//}
