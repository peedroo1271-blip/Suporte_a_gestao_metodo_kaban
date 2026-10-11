#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

// Includindo cabecarios
#include "dominios.hpp"
#include "entidades.h"

class TUEmail{
    private:
        const static string PARTE_LOCAL_VALIDA;
        const static string PARTE_LOCAL_INVALIDA;
        const static string DOMINIO_VALIDO;
        const static string DOMINIO_INVALIDO;
        Email *email;
        int status;
        void setUP();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();

};

class TUEstado{
    private:
        const static string NOME_VALIDO;
        const static string NOME_INVALIDO;
        Estado *estado;
        int status;
        void setUP();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};
class TUIdentificador{
    private:
        const static string LETRAS_VALIDAS;
        const static string LETRAS_INVALIDAS;
        const static string DIGITOS_VALIDOS;
        const static string DIGITOS_INVALIDOS;
        Identificador *identificador;
        int status;
        void setUP();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TULimite{
    private:
        const static int LIMITE_VALIDO = 24;
        const static int LIMITE_INVALIDO = -1;
        Limite *limite;
        int status;
        void setUP();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUNome{
    private:
        const static string NOME_VALIDO;
        const static string NOME_INVALIDO;
        Nome *nome;
        int status;
        void setUP();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUPapel{
    private:
        const static string PAPEL_VALIDO;
        const static string PAPEL_INVALIDO;
        Papel *papel;
        int status;
        void setUP();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUPrioridade{
    private:
        const static string PRIORIDADE_VALIDA;
        const static string PRIORIDADE_INVALIDA;
        Prioridade *prioridade;
        int status;
        void setUP();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUSenha{
    private:
        const static string SENHA_VALIDA;
        const static string SENHA_INVALIDA;
        Senha *senha;
        int status;
        void setUP();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUTamanho{
    private:
        const static string TAMANHO_VALIDO;
        const static string TAMANHO_INVALIDO;
        Tamanho *tamanho;
        int status;
        void setUP();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUTexto{
    private:
        const static string TEXTO_VALIDO;
        const static string TEXTO_INVALIDO;
        Texto *texto;
        int status;
        void setUP();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUTimestamp{
    private:
        const static int DIA_VALIDO;
        const static int DIA_INVALIDO;
        const static string MES_VALIDO;
        const static string MES_INVALIDO;
        const static int ANO_VALIDO;
        const static int ANO_INVALIDO;
        const static string HORARIO_VALIDO;
        const static string HORARIO_INVALIDO;
        Timestamp *timestamp;
        int status;
        void setUP();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};
#endif // TESTES_H_INCLUDED
