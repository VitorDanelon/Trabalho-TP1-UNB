#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

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
        bool validarEmail(string);
        bool validarSenha(string);

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
