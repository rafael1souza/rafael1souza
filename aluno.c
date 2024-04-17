#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

TEstudante* criarEstudante(TEstudante* p, int n){
    p = (TEstudante*) malloc(sizeof(TEstudante));
    p->notas = (float*) malloc(sizeof(float) * n);

    if(p == NULL)
    {
        printf("Erro ao alocar memoria!!!\n");
    }
    return p;
}

float calRetMedia(float* notas, int tam){
    float soma = 0;
    int i;
    for (i = 0; i < tam; i++)
        soma += notas[i];

    return soma;
}

void leValidaNotas(float* notas, int n){
    int i;
    for(i = 0; i < n; i++)
    {
        do
        {
            printf("Nota %d: ", i + 1);
            scanf("%f", &notas[i]);
        }
        while(notas[i] < 0 || notas[i] > 100);
    }
}

void lerDadosEstudante (TEstudante* a, int n){
    printf("Nome: ");
    fgets(a->nome, 60, stdin);

    printf("Matricula: ");
    scanf("%d", &a->matricula);

    // le notas
    // le a nota da prova
    leValidaNotas(a->notas, n);
    // calculo da media
    a->media = calRetMedia(a->notas, n) / n;
    // set situação
    if (calRetMedia(a->notas, n) >= 60)
        a->situacao = 'A';
    else
        a->situacao = 'R';

    getchar();
}

void imprimeDadosEstudante (TEstudante a, int tam){
    printf("\nDados do Estudante\n");
    printf("Nome: %s\n", a.nome);
    printf("Matricula	: %d\n", a.matricula);

    int i;
    for (i = 0; i < tam; i++)
    {
        printf("Nota p%d		: %4.2f\n", i+1,a.notas[i]);
    }

        printf("Media		: %4.2f\n", a.media);
        printf("Situacao	: %c\n", a.situacao);

}

void liberarDadosEstudante (TEstudante* a)
{
    free(a);
    a = NULL;
}

