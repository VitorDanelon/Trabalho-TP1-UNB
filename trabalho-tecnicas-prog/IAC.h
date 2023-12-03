#include <string>

class ISConta;
// Interface entre Módulo Principal e a Classe Conta
class IAConta {
public:
    virtual std::string visualizarConta() const = 0;
    virtual void editarConta(const std::string& novoNome, const std::string& novaSenha) = 0;
    virtual void eliminarConta() = 0;
    virtual ~IAConta() = default; // Definindo um destrutor virtual
};

class ISConta {
public:
    virtual void visualizarConta() = 0;
    virtual void editarConta() = 0;
    virtual void eliminarConta() = 0;
    virtual ~ISConta() = default;
};
