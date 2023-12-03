#include "controladoras.h"
#include "dominios.h"
#include "IAA.h"
#include <iostream>
#include <string>

using namespace std;

void ControladoraConta::setDadosConta(const string email, const string nome, const string senha) {
    this->email.setEmail(email);
    this->nome.setTexto(nome);
    this->senha.setSenha(senha);
}

void ControladoraConta::exibirMenuContaApresentacao(){
    int opcao;
        std::cout << "1. Visualizar Conta\n2. Editar Conta\n3. Eliminar Conta\n Escolha uma opcao: ";
        std::cin >> opcao;

        switch (opcao) {
        case 1:
            visualizarConta();
            break;
        case 2:
            editarConta();
            break
        case 3:
            eliminarConta();
            break
        default:
            std::cout << "Opcao Invalida!" << std::endl;
            break;
        }
}

void ControladoraConta::editarContaApresentacao() {
    ControladoraISConta.editarConta();

}

void ControladoraConta::visualizarConta() {
    ControladoraISConta.visualizarConta();

}

void ControladoraConta::eliminarConta() {
    ControladoraISConta.eliminarConta();

}

string ControladoraISConta::visualizarContaServico() {
    return "Email: " + email.getEmail() + "\nNome: " + nome.getTexto() + "\nSenha: " + senha.getSenha();

}

void ControladoraISConta::editarContaServico(const string novoNome, const string novaSenha) {
    nome.setTexto(novoNome);
    senha.setSenha(novaSenha);

}

void ControladoraISConta::eliminarContaServico() {
    email.setEmail("");
    nome.setTexto("");
    senha.setSenha("");

}


void ControladoraAutenticacao::setCntrISAutenticacao(ISAutenticacao *controladoraISAuth){
        this->controladoraISAuth = controladoraISAuth;
}

bool ControladoraAutenticacao::autenticar(Email *email) {
    Senha senha;
    string entrada;

    // Solicitar Email e senha.

    while(true) {

        std::cout << std::endl << "Autenticacao de usuario." << std::endl << std::endl;

        try {
            std::cout << "Digite o Email : ";
            std::cin >> entrada;
            email->setEmail(entrada); // Converte o int para string
            std::cout << "Digite a senha     : ";
            std::cin >> entrada;
            senha.setSenha(entrada); // Converte o int para string
            break;
        }
        catch (const std::invalid_argument &exp) {
            std::cout << std::endl << "Dado em formato incorreto." << std::endl;
        }
    }

    // Solicitar autenticacaoo.

    bool resultado = controladoraISAuth->autenticar(*email, senha);

    // Retornar resultado da autenticacao.

    return resultado;
}



Quadro::Quadro(const string& codigo, const string& nome, const string& descricao, const string& limite) {
    this->codigo.setCodigo(codigo);
    this->nome.setTexto(nome);
    this->descricao.setTexto(descricao);
    this->limite.setLimite(limite);
}



string Quadro::visualizarQuadro() const {
    return "Quadro: " + codigo.getCodigo() + "\nNome: " + nome.getTexto() + "\nDescri��o: " + descricao.getTexto() + "\nLimite: " + limite.getLimite();

}

void Quadro::eliminarQuadro(){
    codigo.setCodigo("");
    nome.setTexto("");
    descricao.setTexto("");
    limite.setLimite("");
}

Cartao::Cartao(const string& codigo, const string& nome, const string& descricao, const string& coluna){
    this->codigo.setCodigo(codigo);
    this->nome.setTexto(nome);
    this->descricao.setTexto(descricao);
    this->coluna.setColuna(coluna);

}

string Cartao::visualizarCartao() {

    return "Codigo: " + codigo.getCodigo() + "\nNome: " + nome.getTexto() + "\nDescricao: " + descricao.getTexto() + "\nColuna: " + coluna.getColuna();


}

void Cartao::moverCartao(const string& coluna) {
    this->coluna.setColuna(coluna);
}

void Cartao::eliminarCartao() {
    codigo.setCodigo("");
    nome.setTexto("");
    descricao.setTexto("");
    coluna.setColuna("SOLICITADO");

}

