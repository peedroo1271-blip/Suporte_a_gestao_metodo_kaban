/**
 * @file entidades.hpp
 * @brief Declara as entidades do sistema.
 *
 * @details Define as classes Pessoa, CartaoDeAtividade, Quadro e Projeto,
 * utilizando os tipos definidos na biblioteca dominios.hpp.
 */

#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.hpp"

/**
 * @brief Representa uma pessoa no sistema.
 *
 * @details Armazena o e-mail, o nome, a senha e o papel da pessoa.
 * O e-mail é utilizado como chave primária.
 */
class Pessoa {
    private:
        Email email; /**< Chave primária da pessoa. */
        Nome nome;   /**< Nome da pessoa. */
        Senha senha; /**< Senha da pessoa. */
        Papel papel; /**< Papel atribuído à pessoa no sistema. */

    public:
        /**
         * @brief Define o e-mail da pessoa.
         * @param email E-mail a ser atribuído.
         */
        void setEmail(Email);

        /**
         * @brief Define o nome da pessoa.
         * @param nome Nome a ser atribuído.
         */
        void setNome(Nome);

        /**
         * @brief Define a senha da pessoa.
         * @param senha Senha a ser atribuída.
         */
        void setSenha(Senha);

        /**
         * @brief Define o papel da pessoa.
         * @param papel Papel a ser atribuído.
         */
        void setPapel(Papel);

        /**
         * @brief Obtém o e-mail da pessoa.
         * @return E-mail armazenado.
         */
        Email getEmail();

        /**
         * @brief Obtém o nome da pessoa.
         * @return Nome armazenado.
         */
        Nome getNome();

        /**
         * @brief Obtém a senha da pessoa.
         * @return Senha armazenada.
         */
        Senha getSenha();

        /**
         * @brief Obtém o papel da pessoa.
         * @return Papel armazenado.
         */
        Papel getPapel();
};

/**
 * @brief Representa um cartão de atividade.
 *
 * @details Armazena os dados de identificação, descrição, prioridade,
 * estado, tamanho e os registros temporais relacionados à atividade.
 * O identificador é utilizado como chave primária.
 */
class CartaoDeAtividade {
    private:
        Identificador identificador; /**< Chave primária do cartão de atividade. */
        Nome nome;                   /**< Nome da atividade. */
        Texto descricao;             /**< Descrição da atividade. */
        Prioridade prioridade;       /**< Prioridade da atividade. */
        Estado estado;               /**< Estado atual da atividade. */
        Tamanho tamanho;             /**< Tamanho atribuído à atividade. */
        Timestamp entrada,           /**< Data e hora de entrada da atividade. */
                  inicio,            /**< Data e hora de início da atividade. */
                  termino;           /**< Data e hora de término da atividade. */

    public:
        /**
         * @brief Define o identificador do cartão.
         * @param identificador Identificador a ser atribuído.
         */
        void setIdentificador(Identificador);

        /**
         * @brief Define o nome da atividade.
         * @param nome Nome a ser atribuído.
         */
        void setNome(Nome);

        /**
         * @brief Define a descrição da atividade.
         * @param descricao Descrição a ser atribuída.
         */
        void setDescricao(Texto);

        /**
         * @brief Define a prioridade da atividade.
         * @param prioridade Prioridade a ser atribuída.
         */
        void setPrioridade(Prioridade);

        /**
         * @brief Define o estado da atividade.
         * @param estado Estado a ser atribuído.
         */
        void setEstado(Estado);

        /**
         * @brief Define o tamanho da atividade.
         * @param tamanho Tamanho a ser atribuído.
         */
        void setTamanho(Tamanho);

        /**
         * @brief Define o registro temporal de entrada.
         * @param entrada Registro temporal a ser atribuído.
         */
        void setEntrada(Timestamp);

        /**
         * @brief Define o registro temporal de início.
         * @param inicio Registro temporal a ser atribuído.
         */
        void setInicio(Timestamp);

        /**
         * @brief Define o registro temporal de término.
         * @param termino Registro temporal a ser atribuído.
         */
        void setTermino(Timestamp);

        /**
         * @brief Obtém o identificador do cartão.
         * @return Identificador armazenado.
         */
        Identificador getIdentificador();

        /**
         * @brief Obtém o nome da atividade.
         * @return Nome armazenado.
         */
        Nome getNome();

        /**
         * @brief Obtém a descrição da atividade.
         * @return Descrição armazenada.
         */
        Texto getDescricao();

        /**
         * @brief Obtém a prioridade da atividade.
         * @return Prioridade armazenada.
         */
        Prioridade getPrioridade();

        /**
         * @brief Obtém o estado da atividade.
         * @return Estado armazenado.
         */
        Estado getEstado();

        /**
         * @brief Obtém o tamanho da atividade.
         * @return Tamanho armazenado.
         */
        Tamanho getTamanho();

        /**
         * @brief Obtém o registro temporal de entrada.
         * @return Registro temporal armazenado.
         */
        Timestamp getEntrada();

        /**
         * @brief Obtém o registro temporal de início.
         * @return Registro temporal armazenado.
         */
        Timestamp getInicio();

        /**
         * @brief Obtém o registro temporal de término.
         * @return Registro temporal armazenado.
         */
        Timestamp getTermino();
};

/**
 * @brief Representa um quadro no sistema.
 *
 * @details Armazena o identificador, o nome e o limite do quadro.
 * O identificador é utilizado como chave primária.
 */
class Quadro {
    private:
        Identificador identificador; /**< Chave primária do quadro. */
        Nome nome;                   /**< Nome do quadro. */
        Limite limite;               /**< Limite associado ao quadro. */

    public:
        /**
         * @brief Define o identificador do quadro.
         * @param identificador Identificador a ser atribuído.
         */
        void setIdentificador(Identificador);

        /**
         * @brief Define o nome do quadro.
         * @param nome Nome a ser atribuído.
         */
        void setNome(Nome);

        /**
         * @brief Define o limite do quadro.
         * @param limite Limite a ser atribuído.
         */
        void setLimite(Limite);

        /**
         * @brief Obtém o identificador do quadro.
         * @return Identificador armazenado.
         */
        Identificador getIdentificador();

        /**
         * @brief Obtém o nome do quadro.
         * @return Nome armazenado.
         */
        Nome getNome();

        /**
         * @brief Obtém o limite do quadro.
         * @return Limite armazenado.
         */
        Limite getLimite();
};

/**
 * @brief Representa um projeto no sistema.
 *
 * @details Armazena o identificador, a descrição e os registros
 * temporais de início e término do projeto.
 * O identificador é utilizado como chave primária.
 */
class Projeto {
    private:
        Identificador identificador; /**< Chave primária do projeto. */
        Texto descricao;             /**< Descrição do projeto. */
        Timestamp inicio;             /**< Data e hora de início do projeto. */
        Timestamp termino;            /**< Data e hora de término do projeto. */

    public:
        /**
         * @brief Define o identificador do projeto.
         * @param identificador Identificador a ser atribuído.
         */
        void setIdentificador(Identificador);

        /**
         * @brief Define a descrição do projeto.
         * @param descricao Descrição a ser atribuída.
         */
        void setDescricao(Texto);

        /**
         * @brief Define o registro temporal de início do projeto.
         * @param inicio Registro temporal a ser atribuído.
         */
        void setInicio(Timestamp);

        /**
         * @brief Define o registro temporal de término do projeto.
         * @param termino Registro temporal a ser atribuído.
         */
        void setTermino(Timestamp);

        /**
         * @brief Obtém o identificador do projeto.
         * @return Identificador armazenado.
         */
        Identificador getIdentificador();

        /**
         * @brief Obtém a descrição do projeto.
         * @return Descrição armazenada.
         */
        Texto getDescricao();

        /**
         * @brief Obtém o registro temporal de início do projeto.
         * @return Registro temporal armazenado.
         */
        Timestamp getInicio();

        /**
         * @brief Obtém o registro temporal de término do projeto.
         * @return Registro temporal armazenado.
         */
        Timestamp getTermino();
};

#endif // ENTIDADES_H_INCLUDED
