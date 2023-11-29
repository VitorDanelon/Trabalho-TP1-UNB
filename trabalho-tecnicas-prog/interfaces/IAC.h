#include <string>

// Interface entre Módulo Principal e a Classe Conta
class IAConta {
public:
    virtual std::string visualizarConta() const = 0;
    virtual void editarConta(const std::string& novoNome, const std::string& novaSenha) = 0;
    virtual void eliminarConta() = 0;
    virtual ~IAConta() = default; // Definindo um destrutor virtual
};
