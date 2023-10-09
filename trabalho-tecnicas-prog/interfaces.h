#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "comandos.h"
#include <stdexcept>

using namespace std;

// Declara��es adiantadas.

class ILNAutenticacao;
class ILNProjeto;
class ILNGerente;
class ILNDesenvolvedor;

// Declara��es de servi�os na camada de apresenta��o
// -----------------------------------------------------------------

// Declara��o de interface para servi�o de autentica��o na camada de apresenta��o.

class IUAutenticacao {
public:

    // M�todo por meio do qual � solicitada autenticacao.

    virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora de neg�cio.

    virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;
};

// Declara��o de interface para servi�o de projeto na camada de apresenta��o.

class IUProjeto {
public:

    // M�todo por meio do qual � solicitada autenticacao.

    virtual void executar(const Matricula&) throw(runtime_error) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora de neg�cio.

    virtual void setCntrLNProjeto(ILNProjeto *) = 0;
};

// Declara��o de interface para servi�o de gerente na camada de apresenta��o.

class IUGerente {
public:

    // M�todo por meio do qual � solicitada autenticacao.

    virtual void executar(const Matricula&) throw(runtime_error) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora de neg�cio.

    virtual void setCntrLNGerente(ILNGerente *) = 0;
};

// Declara��o de interface para servi�o de desenvolvedor na camada de apresenta��o.

class IUDesenvolvedor {
public:

    // M�todo por meio do qual � solicitada autenticacao.

    virtual void executar(const Matricula&) throw(runtime_error) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora de neg�cio.

    virtual void setCntrLNDesenvolvedor(ILNDesenvolvedor*) = 0;
};

// Declara��es de servi�os na camada de neg�cio
// ------------------------------------------------------------------

// Declara��es de interfaces para servi�os na camada de neg�cio.

// Declara��o de interface para o servi�o de autentica��o na camada de neg�cio.

class ILNAutenticacao {
public:
    virtual ResultadoAutenticacao autenticar(const Matricula&, const Senha&) throw(runtime_error)= 0;
};

// Declara��o de interface para o servi�o de projeto na camada de neg�cio.

class ILNProjeto {
public:
    virtual ResultadoProjeto incluir(const Projeto&) throw(runtime_error) = 0;
    virtual ResultadoProjeto remover(const Codigo&) throw(runtime_error) = 0;
    virtual ResultadoProjeto pesquisar(const Codigo&) throw(runtime_error) = 0;
    virtual ResultadoProjeto editar(const Projeto&) throw(runtime_error) = 0;
};

// Declara��o de interface para o servi�o de gerente na camada de neg�cio.

class ILNGerente {
public:
    virtual ResultadoGerente incluir(const Gerente&) throw(runtime_error) = 0;
    virtual ResultadoGerente remover(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerente pesquisar(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerente editar(const Gerente&) throw(runtime_error) = 0;
};

// Declara��o de interface para o servi�o de desenvolvedor na camada de neg�cio.

class ILNDesenvolvedor {
public:
    virtual ResultadoGerente incluir(const Desenvolvedor&) throw(runtime_error) = 0;
    virtual ResultadoGerente remover(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerente pesquisar(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerente editar(const Desenvolvedor&) throw(runtime_error) = 0;
};

// Declra��es de servi�os na camada de persist�ncia.
// ------------------------------------------------------------------

class IPersistencia {

public:
    // M�todo por meio do qual � solicitada execu��o de comando.

    // Observe que o par�metro � um ponteiro para a classe no topo da hierarquia de comandos.

    virtual void executar(const ComandoBancoDados*) throw(runtime_error) = 0;

};


#endif // INTERFACES_H_INCLUDED
