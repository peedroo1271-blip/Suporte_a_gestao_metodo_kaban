#include "dominios.hpp"
#include "entidades.h"
#include "testes.h"

using namespace std;


int main(){
    TUEmail teste;
    switch(teste.run()){
        case TUEmail::SUCESSO:
            cout << "SUCESSO - EMAIL" << endl;
            break;
        case TUEmail::FALHA:
            cout << "FALHA - EMAIL" << endl;
            break;
    }
    TUEstado testeA;
    switch(testeA.run()){
        case TUEstado::SUCESSO:
            cout << "SUCESSO - ESTADO" << endl;
            break;
        case TUEstado::FALHA:
            cout << "FALHA - ESTADO" << endl;
            break;
    }

   TUIdentificador testeB;
    switch(testeB.run()){
        case TUIdentificador::SUCESSO:
            cout << "SUCESSO - IDENTIFICADOR" << endl;
            break;
        case TUIdentificador::FALHA:
            cout << "FALHA - INDENTIFICADOR" << endl;
            break;
    }

    TULimite testeC;
    switch(testeC.run()){
        case TULimite::SUCESSO:
            cout << "SUCESSO - LIMITE" << endl;
            break;
        case TULimite::FALHA:
            cout << "FALHA - LIMITE" << endl;
            break;
    }

    TUNome testeD;
    switch(testeD.run()){
        case TUNome::SUCESSO:
            cout << "SUCESSO - NOME" << endl;
            break;
        case TUNome::FALHA:
            cout << "FALHA - NOME" << endl;
            break;
    }

    TUPapel testeE;
    switch(testeE.run()){
        case TUPapel::SUCESSO:
            cout << "SUCESSO - PAPEL" << endl;
            break;
        case TUPapel::FALHA:
            cout << "FALHA - PAPEL" << endl;
            break;
    }
    TUPrioridade testeF;
    switch(testeF.run()){
        case TUPrioridade::SUCESSO:
            cout << "SUCESSO - PRIORIDADE" << endl;
            break;
        case TUPrioridade::FALHA:
            cout << "FALHA - PRIORIDADE" << endl;
            break;
    }
    TUSenha testeG;
    switch(testeG.run()){
        case TUSenha::SUCESSO:
            cout << "SUCESSO - SENHA" << endl;
            break;
        case TUSenha::FALHA:
            cout << "FALHA - SENHA" << endl;
            break;
    }
    TUTamanho testeH;
    switch(testeH.run()){
        case TUTamanho::SUCESSO:
            cout << "SUCESSO - TAMANHO" << endl;
            break;
        case TUTamanho::FALHA:
            cout << "FALHA - TAMANHO" << endl;
            break;
    }
    TUTexto testeI;
    switch(testeI.run()){
        case TUTexto::SUCESSO:
            cout << "SUCESSO - TEXTO" << endl;
            break;
        case TUTexto::FALHA:
            cout << "FALHA - TEXTO" << endl;
            break;
    }
    TUTimestamp testeJ;
    switch(testeJ.run()){
        case TUTimestamp::SUCESSO:
            cout << "SUCESSO - TIMESTAMP" << endl;
            break;
        case TUTimestamp::FALHA:
            cout << "FALHA - TIMESTAMP" << endl;
            break;
    }
    return 0;

}


