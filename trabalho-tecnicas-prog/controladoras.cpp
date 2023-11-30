#include "controladoras.h"
#include <iostream>
#include <string>




ControladoraConta::ControladoraConta(const string& email, const string& nome, const string& senha) {
    this->email.setEmail(email);
    this->nome.setTexto(nome);
    this->senha.setSenha(senha);
}

string ControladoraConta::visualizarConta() const {
    return "Email: " + email.getEmail() + "\nNome: " + nome.getTexto() + "\nSenha: " + senha.getSenha();
}

void ControladoraConta::editarConta(const string& novoNome, const string& novaSenha) {
    nome.setTexto(novoNome);
    senha.setSenha(novaSenha);
}

void ControladoraConta::eliminarConta(){
    email.setEmail("");
    nome.setTexto("");
    senha.setSenha("");
}
bool ControladoraConta::autenticar(Email *email) {
    Senha senha;
    int entrada;

    // Solicitar Email e senha.

    while(true) {

        std::cout << std::endl << "Autenticacao de usuario." << std::endl << std::endl;

        try {
            std::cout << "Digite o Email : ";
            std::cin >> entrada;
            email->setEmail(std::to_string(entrada)); // Converte o int para string
            std::cout << "Digite a senha     : ";
            std::cin >> entrada;
            senha.setSenha(std::to_string(entrada)); // Converte o int para string
            break;
        }
        catch (const std::invalid_argument &exp) {
            std::cout << std::endl << "Dado em formato incorreto." << std::endl;
        }
    }

    // Solicitar autenticação.

    bool resultado = controladoraContaAu->autenticar(*email, senha);

    // Retornar resultado da autenticação.

    return resultado;
}

Quadro::Quadro(const string& codigo, const string& nome, const string& descricao, const string& limite) {
    this->codigo.setCodigo(codigo);
    this->nome.setTexto(nome);
    this->descricao.setTexto(descricao);
    this->limite.setLimite(limite);
}



string Quadro::visualizarQuadro() const {
    return "Quadro: " + codigo.getCodigo() + "\nNome: " + nome.getTexto() + "\nDescrição: " + descricao.getTexto() + "\nLimite: " + limite.getLimite();

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

