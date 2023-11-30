#include "controladoras.h"

// ---------------------------------------------------------------------------------
// Implementa��es de m�todos de classe controladora.

void CntrIUQuadro::criarQuadro(const string& codigo, const string& nome, const string& descricao, const string& limite) {
    try {

        // Chamada do m�todo da camada de l�gica de neg�cios para criar um quadro.
        cntrLNQuadro->criarQuadro(codigo, nome, descricao, limite);

        cout << "Quadro criado com sucesso!" << endl;

    } catch (const exception& exp) {
        cout << "Erro ao criar quadro: " << exp.what() << endl;
    }
}

void CntrIUQuadro::visualizarQuadro(const string& codigo) {
    try {
        // 1. Verificar se o c�digo do quadro � v�lido.
        if (!Codigo::validarCodigo(codigo)) {
            throw invalid_argument("C�digo de quadro inv�lido.");
        }

        // 2. Chamar o m�todo da camada de l�gica de neg�cios para visualizar o quadro.
        Quadro quadro = cntrLNQuadro->visualizarQuadro(codigo);

        // 3. Exibir as informa��es do quadro.
        cout << "Detalhes do Quadro:" << endl;
        cout << "C�digo: " << quadro.getCodigo().getCodigo() << endl;
        cout << "Nome: " << quadro.getNome().getTexto() << endl;
        cout << "Descri��o: " << quadro.getDescricao().getTexto() << endl;
        cout << "Limite: " << quadro.getLimite().getLimite() << endl;

    } catch (const exception& exp) {
        cout << "Erro ao visualizar quadro: " << exp.what() << endl;
    }
}


void CntrIUQuadro::eliminarQuadro(const string& codigo) {
    try {
        // 1. Verificar se o c�digo do quadro � v�lido.
        if (!Codigo::validarCodigo(codigo)) {
            throw invalid_argument("C�digo de quadro inv�lido.");
        }

        // 2. Chamar o m�todo da camada de l�gica de neg�cios para eliminar o quadro.
        cntrLNQuadro->eliminarQuadro(codigo);

        cout << "Quadro eliminado com sucesso!" << endl;

    } catch (const exception& exp) {
        cout << "Erro ao eliminar quadro: " << exp.what() << endl;
    }
}


void CntrIUQuadro::criarCartao(const string& codigoQuadro, const string& codigoCartao, const string& nome, const string& descricao, const string& coluna) {
    try {
        // 1. Verificar se os c�digos e par�metros s�o v�lidos.
        if (!Codigo::validarCodigo(codigoQuadro) || !Codigo::validarCodigo(codigoCartao) ||
            !Texto::validarTexto(nome) || !Texto::validarTexto(descricao) || !Coluna::validarColuna(coluna)) {
            throw invalid_argument("Par�metros inv�lidos para criar o cart�o.");
        }

        // 2. Chamar o m�todo da camada de l�gica de neg�cios para criar o cart�o.
        cntrLNQuadro->criarCartao(codigoQuadro, codigoCartao, nome, descricao, coluna);
        cout << "Cart�o criado com sucesso!" << endl;

    } catch (const exception& exp) {
        cout << "Erro ao criar cart�o: " << exp.what() << endl;
    }
}


void CntrIUQuadro::visualizarCartao(const string& codigoQuadro, const string& codigoCartao) {
    try {
        // 1. Verificar se os c�digos s�o v�lidos.
        if (!Codigo::validarCodigo(codigoQuadro) || !Codigo::validarCodigo(codigoCartao)) {
            throw invalid_argument("C�digos inv�lidos para visualizar o cart�o.");
        }

        // 2. Chamar o m�todo da camada de l�gica de neg�cios para visualizar o cart�o.
        cntrLNQuadro->visualizarCartao(codigoQuadro, codigoCartao);
        // Exiba as informa��es do cart�o conforme necess�rio.

    } catch (const exception& exp) {
        cout << "Erro ao visualizar cart�o: " << exp.what() << endl;
    }
}


void CntrIUQuadro::moverCartao(const string& codigoQuadro, const string& codigoCartao, const string& novaColuna) {
    try {
        // 1. Verificar se os c�digos e a nova coluna s�o v�lidos.
        if (!Codigo::validarCodigo(codigoQuadro) || !Codigo::validarCodigo(codigoCartao) || !Coluna::validarColuna(novaColuna)) {
            throw invalid_argument("C�digos ou coluna inv�lidos para mover o cart�o.");
        }

        // 2. Chamar o m�todo da camada de l�gica de neg�cios para mover o cart�o.
        cntrLNQuadro->moverCartao(codigoQuadro, codigoCartao, novaColuna);
        cout << "Cart�o movido com sucesso para a coluna " << novaColuna << endl;

    } catch (const exception& exp) {
        cout << "Erro ao mover cart�o: " << exp.what() << endl;
    }
}


void CntrIUQuadro::eliminarCartao(const string& codigoQuadro, const string& codigoCartao) {
    try {
        // 1. Verificar se os c�digos s�o v�lidos.
        if (!Codigo::validarCodigo(codigoQuadro) || !Codigo::validarCodigo(codigoCartao)) {
            throw invalid_argument("C�digos inv�lidos para eliminar o cart�o.");
        }

        // 2. Chamar o m�todo da camada de l�gica de neg�cios para eliminar o cart�o.
        cntrLNQuadro->eliminarCartao(codigoQuadro, codigoCartao);
        cout << "Cart�o eliminado com sucesso!" << endl;

    } catch (const exception& exp) {
        cout << "Erro ao eliminar cart�o: " << exp.what() << endl;
    }
}

