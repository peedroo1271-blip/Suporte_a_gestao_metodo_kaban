#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>
#include <cctype>
#include <iostream>
#include <stdexcept>

using namespace std;

class Email{
    private:
        string parte_local;
        string dominio;
        static const int LIMITE_parte_local = 64;
        static const int LIMITE_dominio = 255;
        void validar_parte_local(string);
        void validar_dominio(string);

    public:
        void setEmail(string, string);
        void setParteLocal(string);
        void setDominio(string);
        string getEmail();
        string getParteLocal();
        string getDominio();
};

class Estado{
    private:
        string nome;
    public:
        void setEstado(string);
        string getEstado();
};

class Identificador{
    private:
        string letras;
        string digitos;
        static const int LIMITE_letras = 3;
        static const int LIMITE_digitos = 3;
        void validar_letras(string);
        void validar_digitos(string);
    public:
        void setIdentificador(string, string);
        void setLetras(string);
        void setDigitos(string);
        string getIdentificador();
        string getLetras();
        string getDigitos();
};

class Limite{
    private:
        int LIMITE;
        void validar(int);
    public:
        void setLimite(int);
        int getLimite();
};

class Nome{
    private:
        string nome;
        static const int LIMITE_nome = 15;
        void validar(string);
    public:
        void setNome(string);
        string getNome();
};

class Papel{
    private:
        string papel;
    public:
        void setPapel(string);
        string getPapel();
};

class Prioridade{
    private:
        string prioridade;
    public:
        void setPrioridade(string);
        string getPrioridade();
};

class Senha{
    private:
        string senha;
        static const int LIMITE_senha = 5;
        void validar(string);
    public:
        void setSenha(string);
        string getSenha();
};

class Tamanho{
    private:
        string tamanho;
    public:
        void setTamanho(string);
        string getTamanho();
};

class Texto{
    private:
        string texto;
        static const int LIMITE_texto = 30;
        void validar(string);
        bool ehPontuacao(char);
    public:
        void setTexto(string);
        string getTexto();
};

class Timestamp{
    private:
        // atributos
        int dia;
        string mes;
        int ano;
        string horario;

        // metodos auxiliares
        bool ehAnoBissexto(int);
        bool mesValido(string);
        bool mesTrintaDias(string);

        // validadores
        void validar_data(int, string, int);
        void validar_dia(int);
        void validar_mes(string);
        void validar_ano(int);
        void validar_horario(string);

    public:
        void setTimestamp(int, string, int, string);
        void setDia(int);
        void setMes(string);
        void setAno(int);
        void setHorario(string);
        string getTimestamp();
        int getDia();
        string getMes();
        int getAno();
        string getHorario();

};



#endif // DOMINIOS_H_INCLUDED
