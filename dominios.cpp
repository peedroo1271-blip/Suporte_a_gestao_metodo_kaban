#include "dominios.hpp"

/* CLASSE EMAIL */

void Email::validar_parte_local(string local){
    // testa limite
    if(local.size() > LIMITE_parte_local){
        throw invalid_argument("Email Invalido! Parte Local Inadequadak e.");
    }
    // testa caracter inicial
    if(local[0] == '-' || local[0] == '.'){
        throw invalid_argument("Email Invalido! Parte Local Inadequada.");
    }
    // testa caracter final
    if(local[local.size()-1] == '-' || local[local.size()-1] == '.'){
        throw invalid_argument("Email Invalido! Parte Local Inadequada.");
    }


    for(int i = 0; local[i] != '\0'; i++){
        if(!isalnum(local[i]) && local[i] != '-' && local[i] != '.'){
            throw invalid_argument("Email Invalido! Parte Local Inadequada.");
        }
        if(local[i] == '.' || local[i] == '-'){
            if(!isalnum(local[i+1])){
                throw invalid_argument("Email Invalido! Parte Local Inadequada.");
            }
        }
    }
}
void Email::validar_dominio(string dominio){

    // testa limite
    if(dominio.size() > LIMITE_dominio){
        throw invalid_argument("Email Invalido! Dominio Inadequado.");
    }
    // testa caracter
    if(dominio[0] == '-' || dominio[0] == '.'){
        throw invalid_argument("Email Invalido! Dominio Inadequado.");
    }
    // testa ultimo caracter
    if(dominio[dominio.size()-1] == '.' || dominio[dominio.size()-1] == '-'){
        throw invalid_argument("Email Invalido! Dominio Inadequado.");
    }
    //testa o restantante
    for(int i = 0; dominio[i] != '\0'; i++){
        if(!isalnum(dominio[i]) && dominio[i] != '-' && dominio[i] != '.'){
            throw invalid_argument("Email Invalido! Dominio Inadequado.");
        }
        // cada parte deve comecar e terminar com letras ou numeros
        if(dominio[i] == '.'){
            if(!isalnum(dominio[i+1]) || !isalnum(dominio[i-1])){
                throw invalid_argument("Email Invalido! Dominio Inadequado.");
            }
        }
    }
}
void Email::setParteLocal(string parte_local){
    validar_parte_local(parte_local);
    this->parte_local = parte_local;
}
void Email::setDominio(string dominio){
    validar_dominio(dominio);
    this->dominio = dominio;
}
void Email::setEmail(string parte_local, string dominio){
    setParteLocal(parte_local);
    setDominio(dominio);
}

string Email::getParteLocal(){
    return parte_local;
}
string Email::getDominio(){
    return dominio;
}
string Email::getEmail(){
    return parte_local + '@' + dominio;
}

/* CLASSE ESTADO */
void Estado::setEstado(string nome){
    if(nome == "A FAZER" || nome == "FAZENDO" || nome == "FEITO"){
        this->nome = nome;
    }
    else{
        throw invalid_argument("Erro: Estado fora do escopo!");
    }
}
string Estado::getEstado(){
    return nome;
}

/* CLASSE IDENTIFICADOR */

void Identificador::validar_letras(string letras){
    if(letras.size() > LIMITE_letras){
        throw invalid_argument("Identificador Invalido!");
    }
    for(int i = 0; letras[i] != '\0'; i++){
        if(!isalpha(letras[i])){
            throw invalid_argument("Identificador Invalido!");
        }
    }
}
void Identificador::validar_digitos(string digitos){
    if(digitos.size() > LIMITE_digitos){
        throw invalid_argument("Identificador Invalido!");
    }
    for(int i = 0; digitos[i] != '\0'; i++){
        if(!isdigit(digitos[i])){
            throw invalid_argument("Identificador Invalido!");
        }
    }
}

void Identificador::setDigitos(string digitos){
    validar_digitos(digitos);
    this->digitos = digitos;
}
void Identificador::setLetras(string letras){
    validar_letras(letras);
    this->letras = letras;
}
void Identificador::setIdentificador(string letras, string digitos){
    setDigitos(digitos);
    setLetras(letras);
}
string Identificador::getDigitos(){
    return digitos;
}
string Identificador::getLetras(){
    return letras;
}
string Identificador::getIdentificador(){
    return letras + digitos;
}

/* CLASSE LIMITE */
void Limite::validar(int LIMITE){
    if(LIMITE < 1 || LIMITE > 25){
        throw out_of_range("LIMITE deve estar entre 1 e 25");
    }
}
void Limite::setLimite(int LIMITE){
    validar(LIMITE);
    this->LIMITE = LIMITE;
}
int Limite::getLimite(){
    return  LIMITE;
}

/* CLASSE NOME */
void Nome::validar(string nome){

    // testa se utrapassa limite
    if(nome.size() > LIMITE_nome) {
        throw invalid_argument("Nome invalido!");
    }
    // testa se primeiro caractere eh espaco em branco
    if(nome[0] == ' '){
        throw invalid_argument("Nome invalido!");
    }
    // testa se ultimo caractere eh espaco em branco
    if(nome[nome.size()-1] == ' '){
        throw invalid_argument("Nome invalido!");
    }
    // testa demais caracteres
    for(int i = 0; nome[i] != '\0'; i++){
        if(!isalpha(nome[i]) && nome[i] != ' '){
            throw invalid_argument("Nome invalido!");
        }
        // testa se caractere depois de espaco vazio eh letra
        if(nome[i] == ' ' && i != nome.size()-1){
            if(!isalpha(nome[i+1])){
                throw invalid_argument("Nome invalido!");
            }
        }
    }
}
void Nome::setNome(string nome){
    validar(nome);
    this->nome = nome;
}
string Nome::getNome(){

    return nome;
}

/* CLASSE PAPEL */
void Papel::setPapel(string papel){
    if(papel == "GESTOR" || papel == "DESENVOLVEDOR"){
        this->papel = papel;
    }else{
        throw invalid_argument("Papel fora do escopo!");
    }
}
string Papel::getPapel(){
    return papel;
}

/* CLASSE PRIORIDADE */
void Prioridade::setPrioridade(string prioridade){
    if(prioridade == "ALTA" || prioridade == "BAIXA" || prioridade == "MEDIA"){
        this->prioridade = prioridade;
    } else{
        throw invalid_argument("Prioridade fora do escopo!");
    }
}
string Prioridade::getPrioridade(){
    return prioridade;
}

/* CLASSE SENHA */
void Senha::validar(string senha){

    // verifica quantidade de caracteres
    if(senha.size() != LIMITE_senha){
        throw invalid_argument("Senha Invalida!");
    }
    // flags para saber se tem ao menos uma letra\numero
    bool tem_digito = false, tem_letra = false;
    // verifica se todos sao letras ou numeros
    for(int i = 0; senha[i] != '\0'; i++){
        if(isalnum(senha[i])){
            if(isdigit(senha[i])){
                tem_digito = true;
            }
            else if(isalpha(senha[i])){
                tem_letra = true;
            }
        }else{
            throw invalid_argument("Senha Invalida!");
        }
    }
    // verifica se tem ao menos uma letra\numero
    if(!tem_digito){
        throw invalid_argument("Senha Invalida!");
    }
    if(!tem_letra){
        throw invalid_argument("Senha Invalida!");
    }

}
void Senha::setSenha(string senha){
    validar(senha);
    this->senha = senha;
}
string Senha::getSenha(){
    return senha;
}

/* CLASSE TAMANHO */
void Tamanho::setTamanho(string tamanho){
    if(tamanho == "GRANDE" || tamanho == "MEDIO" || tamanho == "PEQUENO"){
        this->tamanho = tamanho;
    } else{
        throw invalid_argument("Tamanho fora do escopo!");
    }
}

string Tamanho::getTamanho(){
    return tamanho;
}

/* CLASSE TEXTO */
bool Texto::ehPontuacao(char c){
    return c == ',' || c == ';' || c == '.' || c == ':' || c == '?' || c == '!';
}

void Texto::validar(string texto){

    // verifica tamanho
    if(texto.size() > LIMITE_texto){
        throw invalid_argument("Texto Invalido!");
    }
    // verifica ultimo caracter do texto
    if(texto[texto.size()-1] != '.'){
        throw invalid_argument("Texto Invalido!");
    }
    // verifica primeiro caracter do texto
    if(!isalpha(texto[0]) ){
        throw invalid_argument("Texto Invalido!");
    }
    // verifica se primeiro caracter esta em maiuscula
    if(!isupper(texto[0])){
        throw invalid_argument("Texto Invalido!");
    }
    // verifica restante dos caracteres
    for(int i = 0; texto[i] != '\0'; i++){
        // verifica se eh numero\letra ou espaco vazio ou pontuacao
        if(!isalnum(texto[i]) && texto[i] != ' ' && !ehPontuacao(texto[i])){
            throw invalid_argument("Texto Invalido!");
        }
        // verifica se tem pontuacao seguida de pontuacao
        if(i != texto.size()-1){
            if(ehPontuacao(texto[i])){
                if(ehPontuacao(texto[i+1])){
                    throw invalid_argument("Texto Invalido!");
                }
            }
        }
    }
}
void Texto::setTexto(string texto){
    validar(texto);
    this->texto = texto;
}

string Texto::getTexto(){
    return texto;
}

/* CLASSE TIMESTAMP */

bool Timestamp::ehAnoBissexto(int ano){
    if((ano % 4 == 0) && (ano % 100 != 0)){
        return true;
    }
    if((ano % 4 == 0) && (ano % 100 == 0) && (ano & 400 == 0)){
        return true;
    }
    return false;
}
bool Timestamp::mesValido(string mes){
    return (mes == "JAN") || (mes == "FEV") || (mes == "MAR") || (mes == "ABR") || (mes == "MAI") || (mes == "JUN") || (mes == "JUL") || (mes == "AGO") || (mes == "SET") || (mes == "OUT") || (mes == "NOV") || (mes == "DEZ");
}
bool Timestamp::mesTrintaDias(string mes){
    return (mes == "ABR") || (mes == "JUN") || (mes == "ABR") || (mes == "SET") || (mes == "NOV");
}

void Timestamp::validar_dia(int dia){
    if(dia < 1 || dia > 31){
        throw invalid_argument("Formato de data invalido! Dia invalido.");
    }
}
void Timestamp::validar_mes(string mes){
    if(!mesValido(mes)){
        throw invalid_argument("Formato de data invalido! Mes invalido.");
    }
}
void Timestamp::validar_ano(int ano){
    if(ano < 2000 || ano > 2099){
        throw invalid_argument("Formato de data invalido! Ano invalido.");
    }
}
void Timestamp::validar_data(int dia, string mes, int ano){
    validar_dia(dia);
    validar_mes(mes);
    validar_ano(ano);

    if(mesTrintaDias(mes) && dia > 30){
        throw invalid_argument("Formato da data invalido! Dia inexistente.");
    }

    if(mes == "FEV"){
        if(!ehAnoBissexto(ano) && dia > 28){
            throw invalid_argument("Formato de data invalido! Dia inexistente.");
        }
        if(ehAnoBissexto(ano) && dia > 29){
            throw invalid_argument("Formato de data invalido! Dia inexistente.");
        }
    }
}
void Timestamp::validar_horario(string horario){

    if(horario.size() != 5){
        throw invalid_argument("Formato de horario invalido!");
    }
    if(!isdigit(horario[0]) && !isdigit(horario[1]) && horario[2] != ':' && !isdigit(horario[3]) && !isdigit(horario[4])){
        throw invalid_argument("Formato de horario invalido!");
    }
    int horas = stoi(horario.substr(0,2));
    int minutos = stoi(horario.substr(3,2));
    if((horas > 23 || horas < 0) || (minutos > 59 || minutos < 0)){
        throw invalid_argument("Horario inexistente!");
    }
}

void Timestamp::setAno(int ano){
    validar_ano(ano);
    this->ano = ano;
}
void Timestamp::setDia(int dia){
    validar_dia(dia);
    this->dia = dia;
}
void Timestamp::setMes(string mes){
    validar_mes(mes);
    this->mes = mes;
}

void Timestamp::setTimestamp(int dia, string mes, int ano, string horario){
    validar_data(dia,mes,ano);
    setDia(dia);
    setMes(mes);
    setAno(ano);
    validar_horario(horario);
    this->horario = horario;
}

string Timestamp::getHorario(){
    return horario;
}
string Timestamp::getMes(){
    return mes;
}
int Timestamp::getDia(){
    return dia;
}
int Timestamp::getAno(){
    return ano;
}
string Timestamp::getTimestamp(){
    return to_string(dia) + '-' + mes + '-' + to_string(ano) + '-' + horario;
}
