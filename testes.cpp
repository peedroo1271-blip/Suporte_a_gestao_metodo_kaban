#include "testes.h"


// Definicoes dos membros estaticos da classe TUEmail

const string TUEmail::PARTE_LOCAL_VALIDA   = "jose-luis.12";
const string TUEmail::PARTE_LOCAL_INVALIDA = "jose.luis.12.";
const string TUEmail::DOMINIO_VALIDO       = "professor.universidade-chilena.ch";
const string TUEmail::DOMINIO_INVALIDO     = "professor.universidade_chilena-.ch";

void TUEmail::setUP(){
    email = new Email();
    status = SUCESSO;
}
void TUEmail::tearDown(){
    delete email;
}
void TUEmail::testarCenarioSucesso(){
    try{
        email->setParteLocal(PARTE_LOCAL_VALIDA);
        if(email->getParteLocal() != PARTE_LOCAL_VALIDA){

            status = FALHA;
        }
        email->setDominio(DOMINIO_VALIDO);
        if(email->getDominio() != DOMINIO_VALIDO){
            status = FALHA;
        }
    }
    catch(invalid_argument &e){
        status = FALHA;
    }
}
void TUEmail::testarCenarioFalha(){
    try{
        email->setParteLocal(PARTE_LOCAL_INVALIDA);
        email->setDominio(DOMINIO_INVALIDO);
        status = FALHA;

    }
    catch(invalid_argument &e){
        if(email->getParteLocal() == PARTE_LOCAL_INVALIDA){
            status = FALHA;
        }
        if(email->getDominio() == DOMINIO_INVALIDO){
            status = FALHA;
        }
    }
}
int TUEmail::run(){
    setUP();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return status;
}

// Definicao dos membros estaticos da classe TUEstado

const string TUEstado::NOME_VALIDO = "FEITO";
const string TUEstado::NOME_INVALIDO = "quase pronto";

void TUEstado::setUP(){
    estado = new Estado();
    status = SUCESSO;
}
void TUEstado::tearDown(){
    delete estado;
}
void TUEstado::testarCenarioSucesso(){
    try{
        estado->setEstado(NOME_VALIDO);
        if(estado->getEstado() != NOME_VALIDO){
            status = FALHA;
        }
    }
    catch(invalid_argument &e){
        status = FALHA;
    }
}
void TUEstado::testarCenarioFalha(){
    try{
        estado->setEstado(NOME_INVALIDO);
        status = FALHA;
    }
    catch(invalid_argument &e){
        if(estado->getEstado() == NOME_INVALIDO){
            status = FALHA;
        }
    }
}
int TUEstado::run(){
    setUP();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return status;
}

// Definicao dos membros estaticos da classe TUIdentificador

const string TUIdentificador::LETRAS_VALIDAS = "LuA";
const string TUIdentificador::LETRAS_INVALIDAS = "fasdfA";
const string TUIdentificador::DIGITOS_VALIDOS = "123";
const string TUIdentificador::DIGITOS_INVALIDOS = "1234";

void TUIdentificador::setUP(){
    identificador = new Identificador();
    status = SUCESSO;
}
void TUIdentificador::tearDown(){
    delete identificador;
}
void TUIdentificador::testarCenarioSucesso(){
    try{
        identificador->setLetras(LETRAS_VALIDAS);
        if(identificador->getLetras() != LETRAS_VALIDAS){
            status = FALHA;
        }
        identificador->setDigitos(DIGITOS_VALIDOS);
        if(identificador->getDigitos() != DIGITOS_VALIDOS){
            status = FALHA;
        }
    }
    catch(invalid_argument &e){
        status = FALHA;
    }
}
void TUIdentificador::testarCenarioFalha(){
    try{
        identificador->setLetras(LETRAS_INVALIDAS);
        identificador->setDigitos(DIGITOS_INVALIDOS);
        status = FALHA;

    }
    catch(invalid_argument &e){
        if(identificador->getLetras() == LETRAS_INVALIDAS){
            status = FALHA;
        }
        if(identificador->getDigitos() == DIGITOS_INVALIDOS){
            status = FALHA;
        }
    }
}
int TUIdentificador::run(){
    setUP();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return status;
}

// Teste de Unidade para classe Limite

void TULimite::setUP(){
    limite = new Limite();
    status = SUCESSO;
}
void TULimite::tearDown(){
    delete limite;
}
void TULimite::testarCenarioSucesso(){
    try{
        limite->setLimite(LIMITE_VALIDO);
        if(limite->getLimite() != LIMITE_VALIDO){
            status = FALHA;
        }
    }
    catch(out_of_range &e){
        status = FALHA;
    }
}
void TULimite::testarCenarioFalha(){
    try{
        limite->setLimite(LIMITE_INVALIDO);
        status = FALHA;
    }
    catch(out_of_range &e){
        if(limite->getLimite() == LIMITE_INVALIDO){
            status = FALHA;
        }
    }
}
int TULimite::run(){
    setUP();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return status;
}

// Definicao dos membros estaticos da classe TUNome
const string TUNome::NOME_VALIDO = "Ana Julia";
const string TUNome::NOME_INVALIDO = "Ana Julia ";

void TUNome::setUP(){
    nome = new Nome();
    status = SUCESSO;
}
void TUNome::tearDown(){
    delete nome;
}
void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(NOME_VALIDO);
        if(nome->getNome() != NOME_VALIDO){
            status = FALHA;
        }
    }
    catch(invalid_argument &e){
        status = FALHA;
    }
}
void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(NOME_INVALIDO);
        status = FALHA;
    }
    catch(invalid_argument &e){
        if(nome->getNome() == NOME_INVALIDO){
            status = FALHA;
        }
    }
}
int TUNome::run(){
    setUP();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return status;
}

// Definicao dos memebros estaticos da classe TUPapel
const string TUPapel::PAPEL_VALIDO = "DESENVOLVEDOR";
const string TUPapel::PAPEL_INVALIDO = "GESTORES";

void TUPapel::setUP(){
    papel = new Papel();
    status = SUCESSO;
}
void TUPapel::tearDown(){
    delete papel;
}
void TUPapel::testarCenarioSucesso(){
    try{
        papel->setPapel(PAPEL_VALIDO);
        if(papel->getPapel() != PAPEL_VALIDO){
            status = FALHA;
        }
    }
    catch(invalid_argument &e){
        status = FALHA;
    }
}
void TUPapel::testarCenarioFalha(){
    try{
        papel->setPapel(PAPEL_INVALIDO);
        status = FALHA;
    }
    catch(invalid_argument &e){
        if(papel->getPapel() == PAPEL_INVALIDO){
            status = FALHA;
        }
    }
}
int TUPapel::run(){
    setUP();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return status;
}
// Definicao dos memebros estaticos da classe TUPrioridade
const string TUPrioridade::PRIORIDADE_VALIDA = "BAIXA";
const string TUPrioridade::PRIORIDADE_INVALIDA = "media";

void TUPrioridade::setUP(){
    prioridade = new Prioridade();
    status = SUCESSO;
}
void TUPrioridade::tearDown(){
    delete prioridade;
}
void TUPrioridade::testarCenarioSucesso(){
    try{
        prioridade->setPrioridade(PRIORIDADE_VALIDA);
        if(prioridade->getPrioridade() != PRIORIDADE_VALIDA){
            status = FALHA;
        }
    }
    catch(invalid_argument &e){
        status = FALHA;
    }
}
void TUPrioridade::testarCenarioFalha(){
    try{
        prioridade->setPrioridade(PRIORIDADE_INVALIDA);
        status = FALHA;
    }
    catch(invalid_argument &e){
        if(prioridade->getPrioridade() == PRIORIDADE_INVALIDA){
            status = FALHA;
        }
    }
}
int TUPrioridade::run(){
    setUP();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return status;
}
// Definicao dos membros estaticos da classe TUSenha
const string TUSenha::SENHA_VALIDA = "abcd1";
const string TUSenha::SENHA_INVALIDA = "13148v";

void TUSenha::setUP(){
    senha = new Senha();
    status = SUCESSO;
}
void TUSenha::tearDown(){
    delete senha;
}
void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(SENHA_VALIDA);
        if(senha->getSenha() != SENHA_VALIDA){
            status = FALHA;
        }
    }
    catch(invalid_argument &e){
        status = FALHA;
    }
}
void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(SENHA_INVALIDA);
        status = FALHA;
    }
    catch(invalid_argument &e){
        if(senha->getSenha() == SENHA_INVALIDA){
            status = FALHA;
        }
    }
}
int TUSenha::run(){
    setUP();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return status;
}

// Definicao dos membros estaticos da classe TUTamanho
const string TUTamanho::TAMANHO_VALIDO = "MEDIO";
const string TUTamanho::TAMANHO_INVALIDO = "pequeno";
void TUTamanho::setUP(){
    tamanho = new Tamanho();
    status = SUCESSO;
}
void TUTamanho::tearDown(){
    delete tamanho;
}
void TUTamanho::testarCenarioSucesso(){
    try{
        tamanho->setTamanho(TAMANHO_VALIDO);
        if(tamanho->getTamanho() != TAMANHO_VALIDO){
            status = FALHA;
        }
    }
    catch(invalid_argument &e){
        status = FALHA;
    }
}
void TUTamanho::testarCenarioFalha(){
    try{
        tamanho->setTamanho(TAMANHO_INVALIDO);
        status = FALHA;
    }
    catch(invalid_argument &e){
        if(tamanho->getTamanho() == TAMANHO_INVALIDO){
            status = FALHA;
        }
    }
}
int TUTamanho::run(){
    setUP();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return status;
}

// Definicao dos membros estaticos da classe TUTexto
const string TUTexto::TEXTO_VALIDO = "O !0, K Tudo bem contigo. A.";
const string TUTexto::TEXTO_INVALIDO = "Mais ou menos!";
void TUTexto::setUP(){
    texto = new Texto();
    status = SUCESSO;
}
void TUTexto::tearDown(){
    delete texto;
}
void TUTexto::testarCenarioSucesso(){
    try{
        texto->setTexto(TEXTO_VALIDO);
        if(texto->getTexto() != TEXTO_VALIDO){
            status = FALHA;
        }
    }
    catch(invalid_argument &e){
        status = FALHA;
    }
}
void TUTexto::testarCenarioFalha(){
    try{
        texto->setTexto(TEXTO_INVALIDO);
        status = FALHA;
    }
    catch(invalid_argument &e){
        if(texto->getTexto() == TEXTO_INVALIDO){
            status = FALHA;
        }
    }
}
int TUTexto::run(){
    setUP();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return status;
}

// Definicao dos membros estaticos da Classe TUTimestamp

const int TUTimestamp::DIA_VALIDO = 29;
const int TUTimestamp::DIA_INVALIDO = 32;
const string TUTimestamp::MES_VALIDO = "FEV";
const string TUTimestamp::MES_INVALIDO = "fevereiro";
const int TUTimestamp::ANO_VALIDO = 2024;
const int TUTimestamp::ANO_INVALIDO = 0000;
const string TUTimestamp::HORARIO_VALIDO = "00:00";
const string TUTimestamp::HORARIO_INVALIDO  = "23:99";

void TUTimestamp::setUP(){
    timestamp = new Timestamp();
    status = SUCESSO;
}
void TUTimestamp::tearDown(){
    delete timestamp;
}
void TUTimestamp::testarCenarioSucesso(){
    try{
        timestamp->setDia(DIA_VALIDO);
        if(timestamp->getDia() != DIA_VALIDO){
            status = FALHA;
        }
        timestamp->setMes(MES_VALIDO);
        if(timestamp->getMes() != MES_VALIDO){
            status = FALHA;
        }
        timestamp->setAno(ANO_VALIDO);
        if(timestamp->getAno() != ANO_VALIDO){
            status = FALHA;
        }
        timestamp->setHorario(HORARIO_VALIDO);
        if(timestamp->getHorario() != HORARIO_VALIDO){
            status = FALHA;
        }
    timestamp->setTimestamp(DIA_VALIDO,MES_VALIDO,ANO_VALIDO,HORARIO_VALIDO);
    }
    catch(invalid_argument &e){
        status = FALHA;
    }
}
void TUTimestamp::testarCenarioFalha(){
    try{
        timestamp->setDia(DIA_INVALIDO);
        timestamp->setMes(MES_INVALIDO);
        timestamp->setAno(ANO_INVALIDO);
        timestamp->setHorario(HORARIO_INVALIDO);
        timestamp->setTimestamp(DIA_INVALIDO,MES_INVALIDO,ANO_INVALIDO,HORARIO_INVALIDO);
        status = FALHA;
    }
    catch(invalid_argument &e){
        if(timestamp->getDia() == DIA_INVALIDO){
            status = FALHA;
        }
        if(timestamp->getMes() == MES_INVALIDO){
            status = FALHA;
        }
        if(timestamp->getAno() == ANO_INVALIDO){
            status = FALHA;
        }
        if(timestamp->getHorario() == HORARIO_INVALIDO){
            status = FALHA;
        }
        try{
            timestamp->getTimestamp();
        }
        catch(invalid_argument &e2){
            status = FALHA;
        }
    }
}

int TUTimestamp::run(){
    setUP();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return status;
}
