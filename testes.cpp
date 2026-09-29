#include "testes.h"


// Definicoes dos membros estaticos da classe TUEmail
const string TUEmail::PARTE_LOCAL_VALIDA   = "jose-luis.12";
const string TUEmail::PARTE_LOCAL_INVALIDA = ".j1234-";
const string TUEmail::DOMINIO_VALIDO       = "professor.unifalsa";
const string TUEmail::DOMINIO_INVALIDO     = "-1j234";

void TUEmail::setUP(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setParteLocal(PARTE_LOCAL_VALIDA);
        if(email->getParteLocal() != PARTE_LOCAL_VALIDA){
            estado = FALHA;
        }
        email->setDominio(DOMINIO_VALIDO);
        if(email->getDominio() != DOMINIO_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUEmail::testarCenarioFalha(){
    try{
        email->setParteLocal(PARTE_LOCAL_INVALIDA);
        email->setDominio(DOMINIO_INVALIDO);
        estado = FALHA;

    }
    catch(invalid_argument &e){
        if(email->getParteLocal() == PARTE_LOCAL_INVALIDA){
            estado = FALHA;
        }
        if(email->getDominio() == DOMINIO_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUEmail::run(){
    setUP();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
