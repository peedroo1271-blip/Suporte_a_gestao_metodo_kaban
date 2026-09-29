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
        int estado;
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
