#include "dominios.h"

// --------------------------------------------------------------------------
// Implementações de métodos de classe domínio.

// --------------------------------------------------------------------------
// Método para validação de valor.

void Codigo::validar(int codigo){
    if (codigo > LIMITE)
        throw invalid_argument("Argumento invalido.");
}

// --------------------------------------------------------------------------
// Método para armazenamento de valor.

void Codigo::setValor(int valor){
    validar(valor);
    this->valor = valor;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe domínio.

// --------------------------------------------------------------------------
// Método para validação de valor.

void Prioridade::validar(int valor){
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

// --------------------------------------------------------------------------
// Método para armazenamento de valor.

void Prioridade::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}
