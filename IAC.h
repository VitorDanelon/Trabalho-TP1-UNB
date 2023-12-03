#ifndef IAC_H
#define IAC_H

#include <iostream>
#include <string>

class ISConta {
public:
    virtual ~ISConta() = default;

    // Métodos da interface principal...
    virtual std::string visualizarConta() const = 0;
    virtual void editarConta() = 0;
    virtual void eliminarConta() = 0;
};

class IServicoConta : public ISConta {
public:
    virtual ~IServicoConta() = default;

    // Métodos da interface de serviço...
    virtual void editarConta() override = 0;
    virtual void eliminarConta() override = 0;
};

class IAConta : public ISConta {
public:
    virtual ~IAConta() = default;

    // Métodos da interface de apresentação...
    virtual void exibirMenuContaApresentacao() = 0;
};

class IApresentacaoConta : public IAConta {
public:
    virtual ~IApresentacaoConta() = default;

    // Métodos adicionais de apresentação...
    virtual void exibirMenuConta() = 0;
    virtual void editarContaApresentacao() = 0;
    virtual std::string visualizarContaApresentacao() const = 0;
    virtual void eliminarContaApresentacao() = 0;
};

#endif
