#include "entidades.h"
#include <iostream>

//raphael

//Conta::Conta(const string& email, const string& nome, const string& senha)
    //: email(email), nome(nome), senha(senha) {}


//Conta::Conta(const string& email, const string& nome, const string& senha)

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


string Quadro::visualizarQuadro() const {
    return "Quadro: " + codigo.getCodigo() + "\nNome :" + nome.getTexto() + "\nDescrição: " + descricao.getTexto() + "\nLimite: " + limite.getLimite();

}

void Quadro::eliminarQuadro(){
    codigo.setCodigo("");
    nome.setTexto("");
    descricao.setTexto("");
    limite.setLimite("");
}
Cartao::Cartao(const Codigo& codigo, const Texto& nome, const Texto& descricao, const Coluna& coluna)
    : codigo(codigo), nome(nome), descricao(descricao), coluna(coluna), excluido(false) {}

void Cartao::setNome(const Texto& nome) {
    this->nome = nome;
}

void Cartao::setDescricao(const Texto& descricao) {
    this->descricao = descricao;
}

void Cartao::setCodigo(const Codigo& codigo) {
    this->codigo = codigo;
}

void Cartao::setExcluido(bool excluido) {
    this->excluido = excluido;
}

Texto Cartao::getNome() const {
    return nome;
}

Texto Cartao::getDescricao() const {
    return descricao;
}

Codigo Cartao::getCodigo() const {
    return codigo;
}

Coluna Cartao::getColuna() const {
    return coluna;
}

bool Cartao::isExcluido() const {
    return excluido;
}

void Cartao::visualizarCartao() {
    std::cout << "Código: " + codigo.getValor() << std::endl;
    std::cout << "Nome: " + nome.getValor() << std::endl;
    std::cout << "Descrição: " + descricao.getValor() << std::endl;
    std::cout << "Coluna: " + coluna.getColuna() << std::endl;
}

void Cartao::moverCartao(Coluna novaColuna) {
    if (novaColuna.getColuna() != coluna.getColuna()) {
        coluna = novaColuna;
        std::cout << "Cartão movido para a coluna: " + novaColuna.getColuna() << std::endl;
    } else {
        std::cout << "Não é possível mover o cartão para a mesma coluna." << std::endl;
    }
}

void Cartao::eliminarCartao(Quadro& quadro) {
    // Verificar se o cartão pertence ao quadro antes de excluí-lo
    if (quadro.contemCartao(*this)) {
        // Neste exemplo, vamos marcar o cartão como excluído:
        setExcluido(true);
        std::cout << "Cartão eliminado com sucesso." << std::endl;
    } else {
        std::cout << "Não é possível eliminar o cartão, pois ele não pertence a este quadro." << std::endl;
    }
}
