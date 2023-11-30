#include "interfaces.h"
#include "controladoras.h"
#include "dominios.h"
#include "dominios.h"
#include <iostream>
#include <string>

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
// ---------------------------------------------------------------------------------
// Implementações de métodos de classe controladora.

void CntrIUQuadro::criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) {
    try {

        // Chamada do método da camada de lógica de negócios para criar um quadro.
        cntrLNQuadro->criarQuadro(codigo, nome, descricao, limite);

        cout << "Quadro criado com sucesso!" << endl;

    } catch (const exception& exp) {
        cout << "Erro ao criar quadro: " << exp.what() << endl;
    }
}

void CntrIUQuadro::visualizarQuadro(const string& codigo) {
    try {
        // 1. Verificar se o código do quadro é válido.
        Codigo codigoObjeto;
            if (!codigoObjeto.validarCodigo(codigo)) {

            cout << "Erro ao ver o quadro: ";
            }


        // 2. Chamar o método da camada de lógica de negócios para visualizar o quadro.
        Quadro quadro = cntrLNQuadro-> visualizarQuadro(codigo);

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


void CntrIUQuadro::eliminarQuadro(const string& codigo) {
    try {
        // 1. Verificar se o código do quadro é válido.
        if (!Codigo::validarCodigo(codigo)) {
            throw invalid_argument("Código de quadro inválido.");
        }

        // 2. Chamar o método da camada de lógica de negócios para eliminar o quadro.
        cntrLNQuadro->eliminarQuadro(codigo);

        cout << "Quadro eliminado com sucesso!" << endl;

    } catch (const exception& exp) {
        cout << "Erro ao eliminar quadro: " << exp.what() << endl;
    }
}


void CntrIUQuadro::criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) {
    try {
        // 1. Verificar se os códigos e parâmetros são válidos.
        if (!Codigo::validarCodigo(codigoQuadro) || !Codigo::validarCodigo(codigoCartao) ||
            !Texto::validarTexto(nome) || !Texto::validarTexto(descricao) || !Coluna::validarColuna(coluna)) {
            throw invalid_argument("Parâmetros inválidos para criar o cartão.");
        }

        // 2. Chamar o método da camada de lógica de negócios para criar o cartão.
        cntrLNQuadro->criarCartao(codigoQuadro, codigoCartao, nome, descricao, coluna);
        cout << "Cartão criado com sucesso!" << endl;

    } catch (const exception& exp) {
        cout << "Erro ao criar cartão: " << exp.what() << endl;
    }
}


void CntrIUQuadro::visualizarCartao(const string& codigoQuadro, const string& codigoCartao) {
    try {
        // 1. Verificar se os códigos são válidos.
        if (!Codigo::validarCodigo(codigoQuadro) || !Codigo::validarCodigo(codigoCartao)) {
            throw invalid_argument("Códigos inválidos para visualizar o cartão.");
        }

        // 2. Chamar o método da camada de lógica de negócios para visualizar o cartão.
        cntrLNQuadro->visualizarCartao(codigoQuadro, codigoCartao);
        // Exiba as informações do cartão conforme necessário.

    } catch (const exception& exp) {
        cout << "Erro ao visualizar cartão: " << exp.what() << endl;
    }
}


void CntrIUQuadro::moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) {
    try {
        // 1. Verificar se os códigos e a nova coluna são válidos.
        if (!Codigo::validarCodigo(codigoQuadro) || !Codigo::validarCodigo(codigoCartao) || !Coluna::validarColuna(novaColuna)) {
            throw invalid_argument("Códigos ou coluna inválidos para mover o cartão.");
        }

        // 2. Chamar o método da camada de lógica de negócios para mover o cartão.
        cntrLNQuadro->moverCartao(codigoQuadro, codigoCartao, novaColuna);
        cout << "Cartão movido com sucesso para a coluna " << novaColuna << endl;

    } catch (const exception& exp) {
        cout << "Erro ao mover cartão: " << exp.what() << endl;
    }
}


void CntrIUQuadro::eliminarCartao(const string& codigoQuadro, const string& codigoCartao) {
    try {
        // 1. Verificar se os códigos são válidos.
        if (!Codigo::validarCodigo(codigoQuadro) || !Codigo::validarCodigo(codigoCartao)) {
            throw invalid_argument("Códigos inválidos para eliminar o cartão.");
        }

        // 2. Chamar o método da camada de lógica de negócios para eliminar o cartão.
        cntrLNQuadro->eliminarCartao(codigoQuadro, codigoCartao);
        cout << "Cartão eliminado com sucesso!" << endl;

    } catch (const exception& exp) {
        cout << "Erro ao eliminar cartão: " << exp.what() << endl;
    }
    // CntrLNQuadro.cpp



class CntrLNQuadro : public ILNQuadro {
public:
    void visualizarQuadro(const std::string& codigo) override {
        // Implementação do método visualizarQuadro
    }

    // Implementações dos outros métodos da interface
};
class CntrIUQuadro : public IUQuadro {
private:
    ILNQuadro* cntrLNQuadro;

public:
   
    void visualizarQuadro(const string& codigo) override {
        cntrLNQuadro->visualizarQuadro(codigo);
    }
};
}

