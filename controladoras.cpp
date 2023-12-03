#include "controladoras.h"
#include "dominios.h"
#include "IAA.h"
#include "IAC.h"
#include "IAG.h"
#include <iostream>
#include <string>

using namespace std;

void ControladoraConta::setDadosConta(const string& email, const string& nome, const string& senha) {
    controladoraISConta->setDadosConta(email, nome, senha);
}

ControladoraISConta::~ControladoraISConta() {
    // Implementação do destrutor, se necessário.
}

string ControladoraISConta::visualizarConta() const {
    return "Email: " + email.getEmail() + "\nNome: " + nome.getTexto() + "\nSenha: " + senha.getSenha();
}

void ControladoraISConta::editarConta(const string& novoNome, const string& novaSenha) {
    nome.setTexto(novoNome);
    senha.setSenha(novaSenha);
}

void ControladoraISConta::eliminarConta() {
    email.setEmail("");
    nome.setTexto("");
    senha.setSenha("");
}

void ControladoraConta::exibirMenuConta() {
    int opcao;
    cout << "1. Visualizar Conta\n2. Editar Conta\n3. Eliminar Conta\nEscolha uma opção: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            controladoraISConta->visualizarConta();
            break;
        case 2:
            controladoraISConta->editarConta();
            break;
        case 3:
            controladoraISConta->eliminarConta();
            break;
        default:
            cout << "Opção inválida!" << endl;
            break;
    }
}

ControladoraConta::ControladoraConta(ControladoraISConta* cntrISConta) : controladoraISConta(cntrISConta) {}

void ControladoraConta::visualizarConta() {
    controladoraISConta->visualizarConta();
}

void ControladoraConta::editarConta() {
    controladoraISConta->editarConta();
}

void ControladoraConta::eliminarConta() {
    controladoraISConta->eliminarConta();
}

void ControladoraConta::exibirMenuContaApresentacao() {
    controladoraISConta->exibirMenuContaApresentacao();
}

bool ControladoraAutenticacao::autenticar(Email *email) {
    //Senha senha;
    Senha* senha = new Senha();
    string entrada;

    // Solicitar Email e senha.

    while(true) {

        std::cout << std::endl << "Autenticacao de usuario." << std::endl << std::endl;

        try {
            std::cout << "Digite o Email : ";
            std::cin >> entrada;
            email->setEmail(entrada); // Converte o int para string
            std::cout << "Digite a senha : ";
            std::cin >> entrada;
            senha->setSenha(entrada); // Converte o int para string
            break;
        }
        catch (const std::invalid_argument &exp) {
            std::cout << std::endl << "Dado em formato incorreto." << std::endl;
        }
    }

    // Solicitar autentica��o.

    bool resultado = controladoraISAuth->autenticar(*email, *senha);

    // Retornar resultado da autentica��o.

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
// ---------------------------------------------------------------------------------]



void CntrIAG::criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) {
    try {
        // Chamada do método do serviço do sistema para criar um quadro.
        cntrISSistema->criarQuadro(codigo, nome, descricao, limite);
        cout << "Quadro criado com sucesso!" << endl;

    } catch (const exception& exp) {
        cout << "Erro ao criar quadro: " << exp.what() << endl;
    }
}

void CntrIAG::visualizarQuadro(const string& codigo) {
    try {
        // 1. Verificar se o código do quadro é válido.
        Codigo codigoObjeto;
        if (!codigoObjeto.validarCodigo(codigo)) {
            cout << "Erro ao ver o quadro: ";
        }

        // 2. Chamar o método do serviço do sistema para visualizar o quadro.
        Quadro quadro = cntrISSistema->visualizarQuadro(codigo);

        // 3. Exibir as informações do quadro.
        cout << "Detalhes do Quadro:" << endl;
        cout << "Código: " << quadro.getCodigo().getCodigo() << endl;
        cout << "Nome: " << quadro.getNome().getTexto() << endl;
        cout << "Descrição: " << quadro.getDescricao().getTexto() << endl;
        cout << "Limite: " << quadro.getLimite().getLimite() << endl;

    } catch (const exception& exp) {
        cout << "Erro ao visualizar quadro: " << exp.what() << endl;
    }
}

void CntrIAG::eliminarQuadro(const string& codigo) {
    try {
        // 1. Verificar se o código do quadro é válido.
        if (!Codigo::validarCodigo(codigo)) {
            throw invalid_argument("Código de quadro inválido.");
        }

        // 2. Chamar o método do serviço do sistema para eliminar o quadro.
        cntrISSistema->eliminarQuadro(codigo);
        cout << "Quadro eliminado com sucesso!" << endl;

    } catch (const exception& exp) {
        cout << "Erro ao eliminar quadro: " << exp.what() << endl;
    }
}

void CntrIAG::visualizarCartao(const string& codigoQuadro, const string& codigoCartao) {
    try {
        // 1. Verificar se os códigos são válidos.
        if (!Codigo::validarCodigo(codigoQuadro) || !Codigo::validarCodigo(codigoCartao)) {
            throw invalid_argument("Códigos inválidos para visualizar o cartão.");
        }

        // 2. Chamar o método do serviço do sistema para visualizar o cartão.
        cntrISSistema->visualizarCartao(codigoQuadro, codigoCartao);
        // Exiba as informações do cartão conforme necessário.

    } catch (const exception& exp) {
        cout << "Erro ao visualizar cartão: " << exp.what() << endl;
    }
}

void CntrIAG::moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) {
    try {
        // 1. Verificar se os códigos e a nova coluna são válidos.
        if (!Codigo::validarCodigo(codigoQuadro) || !Codigo::validarCodigo(codigoCartao) || !Coluna::validarColuna(novaColuna)) {
            throw invalid_argument("Códigos ou coluna inválidos para mover o cartão.");
        }

        // 2. Chamar o método do serviço do sistema para mover o cartão.
        cntrISSistema->moverCartao(codigoQuadro, codigoCartao, novaColuna);
        cout << "Cartão movido com sucesso para a coluna " << novaColuna << endl;

    } catch (const exception& exp) {
        cout << "Erro ao mover cartão: " << exp.what() << endl;
    }
}

void CntrISGestor::eliminarCartao(const string& codigoQuadro, const string& codigoCartao) {
    try {
        // 1. Verificar se os códigos são válidos.
        if (!Codigo::validarCodigo(codigoQuadro) || !Codigo::validarCodigo(codigoCartao)) {
            throw invalid_argument("Códigos inválidos para eliminar o cartão.");
        }

        // 2. Chamar o método do serviço do sistema para eliminar o cartão.
        cntrISSistema->eliminarCartao(codigoQuadro, codigoCartao);
        cout << "Cartão eliminado com sucesso!" << endl;

    } catch (const exception& exp) {
        cout << "Erro ao eliminar cartão: " << exp.what() << endl;
    }
}
/*
void CntrGestor::apresentarQuadrosECartoes(const std::string& email) {
    // Aqui você pode chamar os métodos necessários do controlador para criar quadros e cartões.
    // Certifique-se de adaptar isso às suas necessidades específicas.

    // Criar quadro
    criarQuadro("Q001", "Quadro 1", "Descrição Quadro 1", "10");

    // Criar cartão
    criarCartao("Q001", "C001", "Cartão 1", "Descrição Cartão 1", "TO_DO");

    // Visualizar quadro
    visualizarQuadro("Q001");

    // Visualizar cartão
    visualizarCartao("Q001", "C001");
}
}
 */

