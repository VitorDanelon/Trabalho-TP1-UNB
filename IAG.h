#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED
#include <string>
#include "dominios.h"



using namespace std;

// -------------------------------------------------------------------------------------------

class ISQuadro;
class ISCartao;
// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de quadro provido pela camada de apresentação.

class IAGestor {
public:
    virtual void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) = 0;
    virtual void visualizarQuadro(const string& codigo) = 0;
    virtual void eliminarQuadro(const string& codigo) = 0;
    virtual void setCntrISQuadro(ISQuadro *cntrISQuadro) = 0;
    virtual void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) = 0;
    virtual void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) = 0;
    virtual void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual void setCntrLNCartao(ISCartao *cntrISCartao) = 0;
    virtual ~IAGestor() {}  // Método destrutor virtual.

};

// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de quadro provido pela camada de serviço.

class ISQuadro {
public:
    virtual void criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) = 0;
    virtual void visualizarQuadro(const string& codigo) = 0;
    virtual void eliminarQuadro(const string& codigo) = 0;
    virtual ~ISQuadro() {}  // Método destrutor virtual.
};


// -------------------------------------------------------------------------------------------
// Declaração de interface para serviço de cartao provido pela camada de serviço.

class ISCartao {
public:
    virtual void criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) = 0;
    virtual void visualizarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual void moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) = 0;
    virtual void eliminarCartao(const string& codigoQuadro, const string& codigoCartao) = 0;
    virtual ~ISCartao(){}  // Método destrutor virtual.
};


class Apresentacao : public IAApresentacao {
private:
    IAGestor* cntrIAGestor;

public:
    Apresentacao(IAGestor* cntrIAGestor) : cntrIAGestor(cntrIAGestor) {}

    void apresentarQuadrosECartoes(const std::string& email) {
        // Aqui você pode chamar os métodos necessários do controlador para criar quadros e cartões.
        // Certifique-se de adaptar isso às suas necessidades específicas.

        // Criar quadro
        cntrIAGestor->criarQuadro("Q001", "Quadro 1", "Descrição Quadro 1", "10");

        // Criar cartão
        cntrIAGestor->criarCartao("Q001", "C001", "Cartão 1", "Descrição Cartão 1", "TO_DO");

        // Visualizar quadro
        cntrIAGestor->visualizarQuadro("Q001");

        // Visualizar cartão
        cntrIAGestor->visualizarCartao("Q001", "C001");
    }
};

#endif
