#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "comandos.h"
#include <stdexcept>

using namespace std;

// Declarações adiantadas.

class ILNAutenticacao;
class ILNProjeto;
class ILNGerente;
class ILNDesenvolvedor;

// Declarações de serviços na camada de apresentação
// -----------------------------------------------------------------

// Declaração de interface para serviço de autenticação na camada de apresentação.

class IUAutenticacao {
public:

    // Método por meio do qual é solicitada autenticacao.

    virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora de negócio.

    virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;
};

// Declaração de interface para serviço de projeto na camada de apresentação.

class IUProjeto {
public:

    // Método por meio do qual é solicitada autenticacao.

    virtual void executar(const Matricula&) throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora de negócio.

    virtual void setCntrLNProjeto(ILNProjeto *) = 0;
};

// Declaração de interface para serviço de gerente na camada de apresentação.

class IUGerente {
public:

    // Método por meio do qual é solicitada autenticacao.

    virtual void executar(const Matricula&) throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora de negócio.

    virtual void setCntrLNGerente(ILNGerente *) = 0;
};

// Declaração de interface para serviço de desenvolvedor na camada de apresentação.

class IUDesenvolvedor {
public:

    // Método por meio do qual é solicitada autenticacao.

    virtual void executar(const Matricula&) throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora de negócio.

    virtual void setCntrLNDesenvolvedor(ILNDesenvolvedor*) = 0;
};

// Declarações de serviços na camada de negócio
// ------------------------------------------------------------------

// Declarações de interfaces para serviços na camada de negócio.

// Declaração de interface para o serviço de autenticação na camada de negócio.

class ILNAutenticacao {
public:
    virtual ResultadoAutenticacao autenticar(const Matricula&, const Senha&) throw(runtime_error)= 0;
};

// Declaração de interface para o serviço de projeto na camada de negócio.

class ILNProjeto {
public:
    virtual ResultadoProjeto incluir(const Projeto&) throw(runtime_error) = 0;
    virtual ResultadoProjeto remover(const Codigo&) throw(runtime_error) = 0;
    virtual ResultadoProjeto pesquisar(const Codigo&) throw(runtime_error) = 0;
    virtual ResultadoProjeto editar(const Projeto&) throw(runtime_error) = 0;
};

// Declaração de interface para o serviço de gerente na camada de negócio.

class ILNGerente {
public:
    virtual ResultadoGerente incluir(const Gerente&) throw(runtime_error) = 0;
    virtual ResultadoGerente remover(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerente pesquisar(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerente editar(const Gerente&) throw(runtime_error) = 0;
};

// Declaração de interface para o serviço de desenvolvedor na camada de negócio.

class ILNDesenvolvedor {
public:
    virtual ResultadoGerente incluir(const Desenvolvedor&) throw(runtime_error) = 0;
    virtual ResultadoGerente remover(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerente pesquisar(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerente editar(const Desenvolvedor&) throw(runtime_error) = 0;
};

// Declrações de serviços na camada de persistência.
// ------------------------------------------------------------------

class IPersistencia {

public:
    // Método por meio do qual é solicitada execução de comando.

    // Observe que o parâmetro é um ponteiro para a classe no topo da hierarquia de comandos.

    virtual void executar(const ComandoBancoDados*) throw(runtime_error) = 0;

};


#endif // INTERFACES_H_INCLUDED
