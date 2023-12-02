#include <string>

// Interface entre M�dulo Principal e a Classe Conta
class ISConta {
public:
    //virtual std::string visualizarConta() const = 0;
    //virtual void editarConta(const std::string& novoNome, const std::string& novaSenha) = 0;
    //virtual void eliminarConta() = 0;
    //virtual ~ISConta() = default; // Definindo um destrutor virtual
    virtual void visualizarConta() = 0;
    virtual void editarConta() = 0;
    virtual void eliminarConta() = 0;
    virtual ~IServicoConta() = default;
};
class IAConta{
    //virtual void exibirMenuConta(ISConta*) = 0;
    //virtual ~IAConta() = default;
    virtual void visualizarConta() = 0;
    virtual void editarConta() = 0;
    virtual void eliminarConta() = 0;
    void exibirMenuContaApresentacao();
    virtual ~IApresentacaoConta() = default;

};


