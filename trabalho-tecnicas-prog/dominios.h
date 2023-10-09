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

/*class Conta {
    private:
        ;                      // Atributo para armazenar valor.
        void validar(Tipo);
        string senha;
// Método para validar valor.
    public:
        void setValor(Tipo);             // Método para atribuir valor.
        Tipo getValor() const;           // Método para recuperar valor.
};*/

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
