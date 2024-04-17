#ifndef _ALUNO_H_
#define _ALUNO_H_

struct Estudante {
    char nome[60]; // nome do Estudante
    float* notas; // três notas
    int matricula; // número de matrícula
    char situacao;// situação do Estudante A/R
    float media; // média aritmética
};

typedef struct Estudante TEstudante;

TEstudante* criarEstudante(TEstudante*, int);
void lerDadosEstudante (TEstudante* a, int);
void imprimeDadosEstudante (TEstudante a, int);
void liberarDadosEstudante (TEstudante*);

#endif

