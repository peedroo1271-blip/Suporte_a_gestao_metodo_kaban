/**
 * @file dominios.hpp
 * @brief Declara os domínios do sistema.
 *
 * @details Define os Domínios: Email, Estado, Identificador, Limite, Nome, Papel, Prioridade, Senha, Tamanho, Texto, Timestamp.
 */


#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>
#include <cctype>
#include <iostream>
#include <stdexcept>

using namespace std;

/**

* @brief Representa um endereço de e-mail.
*
* @details
* Um endereço de e-mail é composto por uma parte local e uma parte de domínio,
* separadas pelo caractere '@'.
*
* A parte local:
* * pode conter letras (a-z), dígitos (0-9), ponto (.) e hífen (-);
* * não pode começar ou terminar com ponto ou hífen;
* * um ponto ou hífen deve ser seguido por uma letra ou dígitos;
* * possui comprimento máximo de 64 caracteres.
*
* O domínio:
* * é composto por uma ou mais partes separadas por ponto (.);
* * cada parte pode conter letras (a-z), dígitos (0-9) e hífen (-);
* * não pode começar ou terminar com hífen;
* * possui comprimento máximo de 255 caracteres.
*/

class Email{
    private:
        string parte_local;
        string dominio;
        static const int LIMITE_parte_local = 64;
        static const int LIMITE_dominio = 255;
        void validar_parte_local(string);
        void validar_dominio(string);

    public:
/**
* @brief Atribuí valores aos atributos da classe Email.
* @param recebe uma string parte_local e uma string domínio.
* @throws invalid_argument caso parte local ou domínio estejam fora do padrão estabalecido.
*/
        void setEmail(string, string);
/**
* @brief Atribuí valor ao atributo parte_local.
* @param recebe uma string parte_local.
* @throws invalid_argument caso parte_local esteja fora do padrão
*/
        void setParteLocal(string);
/**
* @brief Atribuí valor ao atributo dominio
* @param recebe uma string domínio.
* @throws invalid_argument caso parte_local esteja fora do padrão
*/
        void setDominio(string);
/**
* @brief Retorna um endereço de e-mail.
* @return string no formato parte_local@dominio
*/
        string getEmail();
/**
* @brief Retorna parte_local do Email.
* @return string parte_local armazenada.
*/
        string getParteLocal();
/**
* @brief Retorna domínio do Email.
* @return string domínio armazenada.
*/
        string getDominio();
};
/**
* @brief Representa estados diferentes em um processo.
*
* @details
** A FAZER: Representa um processo a ser iniciado.
** FAZENDO: Representa um processo em andamento.
** FEITO: Representa um processo finalizado.
*/
class Estado{
    private:
        string nome;
    public:
/**
* @brief Atribuí estado atual do processo.
* @param recebe uma string com o nome do estado atual.
* @note aceita apenas as strings "FEITO", "FAZENDO" e "A FAZER".
* @throws invalid_argument caso estado seja invalido.
*/
        void setEstado(string);
/**
* @brief Retorna o estado atual de um processo.
* @return string com o estado.
*/
        string getEstado();
};
/**
* @brief Representa um código de indentificação formado por letras e números.
*
* @details
* cada identificador possui 6 caracteres
* Sendo letras (a-z ou A-Z) os três primeiros caracteres.
* Sendo dígitos (0-9) os três últimos caracteres.
*
*/
class Identificador{
    private:
        string letras;
        string digitos;
        static const int LIMITE_letras = 3;
        static const int LIMITE_digitos = 3;
        void validar_letras(string);
        void validar_digitos(string);
    public:
/**
* @brief Atribuí valores aos atributos da classe Identificador
* @param recebe uma string letras e uma string digitos.
* @throws invalid_argument caso letras ou  digitos estejam fora do padrão estabalecido.
*/
        void setIdentificador(string, string);
/**
* @brief Atribuí valor ao atributo letras.
* @param recebe uma string letras.
* @throws invalid_argument caso letras esteja fora do padrão estabalecido.
*/
        void setLetras(string);
/**
* @brief Atribuí valor ao atributo digitos.
* @param recebe uma string digitos.
* @throws invalid_argument caso digitos esteja fora do padrão estabalecido.
*/
        void setDigitos(string);
/**
* @brief Retorna o identificador completo.
* @return string com o código identificador.
*/
        string getIdentificador();

/**
* @brief Retorna as letras do Identificador.
* @return string letras armazenada.
*/
        string getLetras();

/**
* @brief Retorna os digitos do Identificador.
* @return string digitos armazenada.
*/
        string getDigitos();
};
/**
* @brief Classe representa um número de 1 a 25.

*/
class Limite{
    private:
        int LIMITE;
        void validar(int);
    public:
/**
* @brief Atribuí o núemro do Limite.
* @param recebe um inteiro contendo o número do limite.
* @throws out_of_range caso digito estaja fora do limite de 1 a 25.
*/
        void setLimite(int);
/**
* @brief Retorna o Limite.
* @return Retorna número int com o limite.
*/
        int getLimite();
};

/**
* @brief Representa um Nome composto ou não
*
* @details Possui formatação especifica:
* O Nome possui até 30 caracteres. cada caractere pode ser letra (a-z ou A-Z), dígito (0-9), espaço em branco ou sinal de pontuação*;
* Sinal de pontuação não é seguido por sinal de pontuação;
* Primeiro caractere é letra maiúscula;
* Último caractere é ponto.
*
* @note *potuação: vírgula, ponto-e-vírgula, ponto, dois pontos, ponto de interrogação, ponto de exclamação.
*/

class Nome{
    private:
        string NOME;
        static const int LIMITE_nome = 15;
        void validar(string);
    public:
/**
* @brief Atribuí um Nome.
* @param recebe uma string com o texto do nome.
* @throws invalid_argument caso nome estaja fora da formatação aceita pela classe.
*/
        void setNome(string);
/**
* @brief Retorna o nome.
* @return retorna string com o nome.
*/
        string getNome();
};
/**
* @brief Representa papel/função de um agente. o Papel pode ser o de GESTOR ou DESENVOLVEDOR.
*/
class Papel{
    private:
        string PAPEL;
    public:
/**
* @brief Atribuí o papel do agente.
* @param recebe uma string com o nome do papel.
* @note aceita apenas as strings "GESTOR" ou "DESENVOLVEDOR".
* @throws invalid_argument caso papel seja invalido.
*/
        void setPapel(string);
/**
* @brief Retorna o papel do agente.
* @return string com o nome do papel.
*/
        string getPapel();
};
/**
* @brief Representa o nível de prioridade de um processo.
*
* @details
** ALTA: Representa um processo de grande prioridade.
** MEDIA: Representa um processo com prioridade normal.
** BAIXA: Representa um processo de baixa prioridade.
*/
class Prioridade{
    private:
        string PRIORIDADE;
    public:
/**
* @brief Atribuí a prioridade atual do processo.
* @param recebe uma string com o nível de prioridade.
* @note aceita apenas as strings "ALTA", "MEDIA" e "BAIXA".
* @throws invalid_argument caso prioridade seja invalida.
*/
        void setPrioridade(string);
/**
* @brief Retorna a prioridade atual de um processo.
* @return string com a prioridade.
*/
        string getPrioridade();
};

/**
* @brief Representa de uma Senha para o acesso de um sistema
*/
class Senha{
    private:
        string SENHA;
        static const int LIMITE_senha = 5;
        void validar(string);
    public:/**
* @brief Atribuí uma senha ao sistema.
* @param recebe uma string com a senha desejada.
* @note 5 caracteres; Cada caractere pode ser letra (a-z ou A-Z) ou dígito (0-9); existe pelo menos uma letra e um dígito
* @throws invalid_argument caso formato de senha seja invalido.
*/

        void setSenha(string);
/**
* @brief Retorna a senha do sistema.
* @return string com a senha.
*/
        string getSenha();
};
/**
* @brief Representa uma faixa de tamanho, podendo ser GRANDE, MEDIO ou PEQUENO.
*
*/
class Tamanho{
    private:
        string TAMANHO;
    public:
/**
* @brief Atribuí o tamanho.
* @param recebe uma string com o tamanho.
* @note aceita apenas as strings "GRANDE", "MEDIO" ou "PEQUENO".
* @throws invalid_argument caso tamanho seja invalido.
*/
        void setTamanho(string);
/**
* @brief Retorna o tamanho.
* @param retorna uma string com o tamanho.

*/
        string getTamanho();
};
/**
* @brief Representa um texto com uma formatação específica.
*
* @details
* Texto com até 30 caracteres.
* Caractere pode ser letra (a-z ou A-Z), dígito (0-9), espaço em branco ou sinal de pontuação*;
* Snal de pontuação não é seguido por sinal de pontuação;
* Primeiro caractere é letra maiúscula;
* Último caractere é ponto.
* @note *pontuação: vírgula, ponto-e-vírgula, ponto, dois pontos, ponto de interrogação, ponto de exclamação.
*/
class Texto{
    private:
        string TEXTO;
        static const int LIMITE_texto = 30;
        void validar(string);
        bool ehPontuacao(char);
    public:
/**
* @brief Atribuí o texto a classe.
* @param recebe uma string com o texto.
* @throw invalid_argument caso formato do texto esteja inadequado.
*/
        void setTexto(string);
/**
* @brief Retorna o Texto.
* @return retorna string com o texto.
*/
        string getTexto();
};
/**
* @brief Representa um formato de Data/Horário na forma DIA-MÊS-ANO-HORÁRIO
* @details
** DIA é número 1 a 31.
** MÊS é sigla JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ
** ANO é número de 2000 a 2099.
** HORÁRIO é valor de 00:00 a 23:59
* @note A data deve ser válida considerando anos bissextos.
* @note A data deve ser um dia que possível.
*/
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
/**
* @brief Atruibuí o DIA, o MÊS, o ANO, e o HORÁRIO no Timestamp.*
* @param Recebe um int DIA, uma string MES, um int ANO e uma string HORARIO.
* @throw invalid_argumet caso formato de DIA, MÊS, ANO ou HORÀRIO estejam incorretou ou data não seja valida/possível.
*/
        void setTimestamp(int, string, int, string);
/**
* @brief Atribui um DIA ao Timestamp.
* @param recebe um int com o DIA.
* @throw invalid_argument caso dia seja inexistente.
*/
        void setDia(int);
/**
* @brief Atribui um MÊS ao Timestamp.
* @param recebe uma string com o MES.
* @note aceita apenas as strings "JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ".
* @throw invalid_argument caso MES esteja no formato inadequado.
*/
        void setMes(string);
/**
* @brief Atribui um ANO ao Timestamp.
* @param recebe um int com um ANO.
* @throw invalid_argument caso ano esteja fora do limite adequado.
*/
        void setAno(int);
/**
* @brief Atribui um HORARIO ao Timestamp.
*
* HORARIO é composto por 5 caracteres os dois primeiros sendo as HORAS e os dois últimos MINUTOS e separados por ":".
* @param recebe uma string com o HORÀRIO.
* @throw invalid_argument caso formato seja inválido ou HORÁRIO não exista.
*/
        void setHorario(string);
/**
* @brief Retorna o Timestamp no formato DIA-MÊS-ANO-HORÁRIO.
* @return retorna uma string com o Timestamp.
*/

        string getTimestamp();
/**
* @brief Retorna o DIA do Timestamp.
* @param retorna um int com o DIA do Timestamp.
*/
        int getDia();
/**
* @brief Retorna o MES do Timestamp.
* @param retorna uma string com o MES do Timestamp.
*/

        string getMes();
/**
* @brief Retorna o ANO do Timestamp.
* @param retorna um int com o ANO do Timestamp.
*/

        int getAno();
/**
* @brief Retorna o HORARIO do Timestamp.
* @param retorna uma string com o HORARIO do Timestamp.
*/
        string getHorario();

};



#endif // DOMINIOS_H_INCLUDED
