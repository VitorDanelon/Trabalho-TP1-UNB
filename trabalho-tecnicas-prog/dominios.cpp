#include "dominios.h"

// --------------------------------------------------------------------------
// Implementa��es de m�todos de classe dom�nio.

// --------------------------------------------------------------------------
// M�todo para valida��o de valor.

void Codigo::validar(int codigo){
    if (codigo > LIMITE)
        throw invalid_argument("Argumento invalido.");
}

// --------------------------------------------------------------------------
// M�todo para armazenamento de valor.

void Codigo::setValor(int valor){
    validar(valor);
    this->valor = valor;
}

// --------------------------------------------------------------------------
// Implementa��es de m�todos de classe dom�nio.

// --------------------------------------------------------------------------
// M�todo para valida��o de valor.

void Prioridade::validar(int valor){
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

// --------------------------------------------------------------------------
// M�todo para armazenamento de valor.

void Prioridade::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}
