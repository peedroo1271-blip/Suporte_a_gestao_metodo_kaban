#include "entidades.h"

/* ENTIDADE PESSOA */

void Pessoa::setEmail(Email email){
    this->email = email;
}
void Pessoa::setNome(Nome nome){
    this->nome = nome;
}
void Pessoa::setPapel(Papel papel){
    this->papel = papel;
}
void Pessoa::setSenha(Senha senha){
    this->senha = senha;
}

Email Pessoa::getEmail(){
    return email;
}
Nome Pessoa::getNome(){
    return nome;
}
Papel Pessoa::getPapel(){
    return papel;
}
Senha Pessoa::getSenha(){
    return senha;
}

/* ENTIDADE CARTAO DE ATIVIDADE */

void CartaoDeAtividade::setDescricao(Texto descricao){
    this->descricao = descricao;
}
void CartaoDeAtividade::setEntrada(Timestamp entrada){
    this->entrada = entrada;
}
void CartaoDeAtividade::setEstado(Estado estado){
    this->estado = estado;
}
void CartaoDeAtividade::setIdentificador(Identificador Identificador){
    this->identificador = identificador;
}
void CartaoDeAtividade::setInicio(Timestamp inicio){
    this->inicio = inicio;
}
void CartaoDeAtividade::setNome(Nome nome){
    this->nome = nome;
}
void CartaoDeAtividade::setPrioridade(Prioridade prioridade){
    this->prioridade = prioridade;
}
void CartaoDeAtividade::setTamanho(Tamanho tamanho){
    this->tamanho = tamanho;
}
void CartaoDeAtividade::setTermino(Timestamp termino){
    this->termino = termino;
}

Texto CartaoDeAtividade::getDescricao(){
    return descricao;
}
Timestamp CartaoDeAtividade::getEntrada(){
    return entrada;
}
Estado CartaoDeAtividade::getEstado(){
    return estado;
}
Identificador CartaoDeAtividade::getIdentificador(){
    return identificador;
}
Timestamp CartaoDeAtividade::getInicio(){
    return inicio;
}
Nome CartaoDeAtividade::getNome(){
    return nome;
}
Prioridade CartaoDeAtividade::getPrioridade(){
    return prioridade;
}
Tamanho CartaoDeAtividade::getTamanho(){
    return tamanho;
}
Timestamp CartaoDeAtividade::getTermino(){
    return termino;
}

/* ENTIDADE QUADRO */

void Quadro::setIdentificador(Identificador Identificador){
    this->identificador = identificador;
}
void Quadro::setLimite(Limite limite){
    this->limite = limite;
}
void Quadro::setNome(Nome nome){
    this->nome = nome;
}

Identificador Quadro::getIdentificador(){
    return identificador;
}
Limite Quadro::getLimite(){
    return limite;
}
Nome Quadro::getNome(){
    return nome;
}


/* ENTIDADE PROJETO */
void Projeto::setDescricao(Texto descricao){
    this->descricao = descricao;
}
void Projeto::setIdentificador(Identificador identificador){
    this->identificador = identificador;
}
void Projeto::setInicio(Timestamp inicio){
    this->inicio = inicio;
}
void Projeto::setTermino(Timestamp termino){
    this->termino = termino;
}

Texto Projeto::getDescricao(){
    return descricao;
}
Identificador Projeto::getIdentificador(){
    return identificador;
}
Timestamp Projeto::getInicio(){
    return inicio;
}
Timestamp Projeto::getTermino(){
    return termino;
}


