#include "entidades.h"
#include <iostream>


//raphael

Conta::Conta(const string& email, const string& nome, const string& senha)
    : email(email), nome(nome), senha(senha) {}

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

