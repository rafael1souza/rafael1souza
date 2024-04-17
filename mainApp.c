#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main() {

    TEstudante* a;
    int i, numEstudante, numProvas;

    printf("Digite o numero de Estudante que serao cadastrados: ");
    scanf("%d", &numEstudante);
    TEstudante vet[numEstudante];

    printf("Digite o numero de provas que os alunos fizeram: ");
    scanf("%d", &numProvas);
    getchar();

    for(i = 0; i < numEstudante; i++)
    {
        a = criarEstudante(a, numProvas);
        lerDadosEstudante(a, numProvas);
        vet[i] = *a;
    }

    for(i = 0; i < numEstudante; i++)
    {
        imprimeDadosEstudante(vet[i], numProvas);
    }

    liberarDadosEstudante(a);

    return 0;
}
