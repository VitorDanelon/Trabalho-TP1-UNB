#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

/* -----------------------------------------------------------------------
// Estrutura de código para declaração de classe domínio.
//
// Essa estrutura de código pode ser aproveitada na declaração de domínio.
//
// Seguem as atividades para adaptação:
//
// Substituir Dominio por nome da classe.
//
// Substituir Tipo pelo nome do tipo adequado.

class Dominio {
    private:
        Tipo valor;                      // Atributo para armazenar valor.
        void validar(Tipo);              // Método para validar valor.
    public:
        void setValor(Tipo);             // Método para atribuir valor.
        Tipo getValor() const;           // Método para recuperar valor.
};

inline Tipo Dominio::getValor() const{
    return valor;
}

----------------------------------------------------------------------- */

// -----------------------------------------------------------------------
// Exemplos de uso da estrutura de código anterior.

// -----------------------------------------------------------------------
// Exemplo de declaração de classe domínio e implementação de método.

/*class Codigo {
private:
        static const int LIMITE = 25;       // Declaração para evitar números mágicos.
        int valor;
        void validar(int);
public:
        void setValor(int);
        int getValor() const;
};

inline int Codigo::getValor() const{
    return valor;
}*/

// -----------------------------------------------------------------------
// Exemplo de declaração de classe domínio e implementação de método.

/*class Prioridade {
    private:
        static const int INVALIDO = 0;      // Declaração para evitar números mágicos.
        int valor;
        void validar(int);
    public:
        void setValor(int);
        int getValor() const;
};

inline int Prioridade::getValor() const{
    return valor;
}*/

class Conta {
private:
    std::string email;
    std::string senha;

public:
    void setEmail(const std::string& email) {
        if (!validarEmail(email)) {
            throw std::invalid_argument("Email inválido.");
        }
        this->email = email;
    }

    void setSenha(const std::string& senha) {
        if (!validarSenha(senha)) {
            throw std::invalid_argument("Senha inválida.");
        }
        this->senha = senha;
    }

    std::string getEmail() const {
        return email;
    }

    std::string getSenha() const {
        return senha;
    }

private:
    bool validarEmail(const std::string& email) {
        const std::regex emailRegex(R"([a-zA-Z0-9._%+-]{2,10}@[a-zA-Z0-9.-]{2,20})");
        if (!std::regex_match(email, emailRegex)) {
            return false;
        }

        size_t atPos = email.find('@');
        if (atPos != std::string::npos) {
            if (atPos > 0 && email[atPos - 1] == '.') {
                return false;
            }
            if (atPos < email.length() - 1 && email[atPos + 1] == '.') {
                return false;
            }
        }

        size_t dotPos = email.find("..");
        if (dotPos != std::string::npos) {
            return false;
        }

        return true;
    }

    bool validarSenha(const std::string& senha) {
        // Pelo menos um caractere é letra maiúscula
        bool temMaiuscula = false;
        // Pelo menos um caractere é letra minúscula
        bool temMinuscula = false;
        // Pelo menos um caractere é dígito
        bool temDigito = false;
        // Pelo menos um caracter é sinal de pontuação
        bool temPonto = false;

        std::set<char> caracteresDuplicados;

        for (char c : senha) {
            if (isupper(c)) {
                temMaiuscula = true;
            } else if (islower(c)) {
                temMinuscula = true;
            } else if (isdigit(c)) {
                temDigito = true;
            } else if (ispunct(c)) {
                temPonto = true;
            }

            if (caracteresDuplicados.count(c) > 0) {
                return false;  // Caractere duplicado encontrado
            }

            caracteresDuplicados.insert(c);
        }

        return temMaiuscula && temMinuscula && temDigito && temPonto;
    }
};

class Conta{
    private:
        string nome;
        string email;
        string senha;
        void validar(string);

    public:
        void setNome(string);
        string getNome();
        void setEmail(string);
        string getEmail() const;
        void setSenha(string);
        string getSenha() const;
        //void editarCredenciais();
        //string visualizarCredenciais();

};

class Quadro{
    private:
    char codigo;
    string nome;
    string descricao;
    int limite;

    public:
        void setCodigo(char);
        char getCodigo();
        void setNome(string);
        string getNome();
        void setDescrição(string);
        string getDescricao();
        void setLimite(int);
        int getLimite();
};

class Cartao{
    private:
    char codigo;
    string nome;
    string descricao;
    int limite;

    public:
        void setCodigo(char);
        char getCodigo();
        void setNome(string);
        string getNome();
        void setDescrição(string);
        string getDescricao();
        void setColuna(string));
        string getColuna();
};





#endif // DOMINIOS_H_INCLUDED
