#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

/* -----------------------------------------------------------------------
// Estrutura de c�digo para declara��o de classe dom�nio.
//
// Essa estrutura de c�digo pode ser aproveitada na declara��o de dom�nio.
//
// Seguem as atividades para adapta��o:
//
// Substituir Dominio por nome da classe.
//
// Substituir Tipo pelo nome do tipo adequado.

class Dominio {
    private:
        Tipo valor;                      // Atributo para armazenar valor.
        void validar(Tipo);              // M�todo para validar valor.
    public:
        void setValor(Tipo);             // M�todo para atribuir valor.
        Tipo getValor() const;           // M�todo para recuperar valor.
};

inline Tipo Dominio::getValor() const{
    return valor;
}

----------------------------------------------------------------------- */

// -----------------------------------------------------------------------
// Exemplos de uso da estrutura de c�digo anterior.

// -----------------------------------------------------------------------
// Exemplo de declara��o de classe dom�nio e implementa��o de m�todo.

/*class Codigo {
private:
        static const int LIMITE = 25;       // Declara��o para evitar n�meros m�gicos.
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
// Exemplo de declara��o de classe dom�nio e implementa��o de m�todo.

/*class Prioridade {
    private:
        static const int INVALIDO = 0;      // Declara��o para evitar n�meros m�gicos.
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
// M�todo para validar valor.
    public:
        void setValor(Tipo);             // M�todo para atribuir valor.
        Tipo getValor() const;           // M�todo para recuperar valor.
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
        void setDescri��o(string);
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
        void setDescri��o(string);
        string getDescricao();
        void setColuna(string));
        string getColuna();
};





#endif // DOMINIOS_H_INCLUDED
