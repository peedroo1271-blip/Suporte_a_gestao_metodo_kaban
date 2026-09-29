#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED
#include "dominios.hpp"


class Pessoa{
    private:
        Email email; // Chave Primaria
        Nome nome;
        Senha senha;
        Papel papel;
    public:
        void setEmail(Email);
        void setNome(Nome);
        void setSenha(Senha);
        void setPapel(Papel);
        Email getEmail();
        Nome getNome();
        Senha getSenha();
        Papel getPapel();
};
class CartaoDeAtividade{
    private:
        Identificador identificador; // Chave Primaria
        Nome nome;
        Texto descricao;
        Prioridade prioridade;
        Estado estado;
        Tamanho tamanho;
        Timestamp entrada, inicio, termino;
    public:
        void setIdentificador(Identificador);
        void setNome(Nome);
        void setDescricao(Texto);
        void setPrioridade(Prioridade);
        void setEstado(Estado);
        void setTamanho(Tamanho);
        void setEntrada(Timestamp);
        void setInicio(Timestamp);
        void setTermino(Timestamp);
        Identificador getIdentificador();
        Nome getNome();
        Texto getDescricao();
        Prioridade getPrioridade();
        Estado getEstado();
        Tamanho getTamanho();
        Timestamp getEntrada();
        Timestamp getInicio();
        Timestamp getTermino();
};

class Quadro{
    private:
        Identificador identificador; // Chave Primaria
        Nome nome;
        Limite limite;
    public:
        void setIdentificador(Identificador);
        void setNome(Nome);
        void setLimite(Limite);
        Identificador getIdentificador();
        Nome getNome();
        Limite getLimite();

};

class Projeto{
    private:
        Identificador identificador; // Chave Primaria
        Texto descricao;
        Timestamp inicio;
        Timestamp termino;
    public:
        void setIdentificador(Identificador);
        void setDescricao(Texto);
        void setInicio(Timestamp);
        void setTermino(Timestamp);
        Identificador getIdentificador();
        Texto getDescricao();
        Timestamp getInicio();
        Timestamp getTermino();
};

#endif //
ENTIDADES_H_INCLUDED
