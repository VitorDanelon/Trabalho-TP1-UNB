#include "entidades.h"
#include <iostream>

//raphael


Conta::Conta(const string& email, const string& nome, const string& senha) {
    this->email.setEmail(email);
    this->nome.setTexto(nome);
    this->senha.setSenha(senha);
}

string Conta::visualizarConta() const {
    return "Email: " + email.getEmail() + "\nNome: " + nome.getTexto() + "\nSenha: " + senha.getSenha();
}

void Conta::editarConta(const string& novoNome, const string& novaSenha) {
    nome.setTexto(novoNome);
    senha.setSenha(novaSenha);
}

void Conta::eliminarConta(){
    email.setEmail("");
    nome.setTexto("");
    senha.setSenha("");
}

Quadro::Quadro(const string& codigo, const string& nome, const string& descricao, const string& limite) {
    this->codigo.setCodigo(codigo);
    this->nome.setTexto(nome);
    this->descricao.setTexto(descricao);
    this->limite.setLimite(limite);
}

//void Quadro::criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite){
    //this->codigo.setCodigo(codigo);
    //this->nome.setTexto(nome);
    //this->descricao.setTexto(descricao);
    //this->limite.setLimite(limite);
//}


string Quadro::visualizarQuadro() const {
    return "Quadro: " + codigo.getCodigo() + "\nNome :" + nome.getTexto() + "\nDescrição: " + descricao.getTexto() + "\nLimite: " + limite.getLimite();

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
    std::cout << "Código: " + codigo.getCodigo() << std::endl;
    std::cout << "Nome: " + nome.getTexto() << std::endl;
    std::cout << "Descrição: " + descricao.getTexto() << std::endl;
    std::cout << "Coluna: " + coluna.getColuna() << std::endl;
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

