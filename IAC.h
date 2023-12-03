#ifndef IAC_H
#define IAC_H
#include <iostream>
#include <string>

class ISConta {
public:
    virtual ~ISConta() = default;

    // Métodos da interface principal...
    virtual void visualizarConta() = 0;
    virtual void editarConta() = 0;
    virtual void eliminarConta() = 0;
};

class IServicoConta : public ISConta {
public:
    virtual ~IServicoConta() = default;

    // Métodos da interface de serviço...
    virtual void visualizarConta() override = 0;
    virtual void editarConta() override = 0;
    virtual void eliminarConta() override = 0;
};

class IAConta {
public:
    virtual ~IAConta() = default;

    // Métodos da interface de apresentação...
    virtual void visualizarConta() = 0;
    virtual void editarConta() = 0;
    virtual void eliminarConta() = 0;
    virtual void exibirMenuContaApresentacao() = 0;
};

class IApresentacaoConta {
public:
    virtual ~IApresentacaoConta() = default;

    // Métodos adicionais de apresentação...
    virtual void exibirMenuConta() = 0;
    virtual void editarContaApresentacao() = 0;
    virtual std::string visualizarContaApresentacao() const = 0;
    virtual void eliminarContaApresentacao() = 0;
};

#endif
