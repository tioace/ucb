#include <stdio.h>
#include <stdlib.h>

// Nó de uma árvore genérica

typedef struct No {

    char Chave;

    // F1, F2 e F3 pois a árvore tem grau 3 (existe nó com 3 filhos)

    struct No * F1;
    struct No * F2;
    struct No * F3;

    // ou

    struct No * F[3]; // Índices 0, 1 e 2
    
} No;

No * criarNo(char Chave) {

    No * N = (No *) malloc(sizeof(No));
    if(N == NULL) {
        printf("ERRO: não há memória para o nó!\n");
        return NULL;
    }

    N->Chave = Chave;
    N->F1 = NULL;
    N->F2 = NULL;
    N->F3 = NULL;

    for(int i = 0; i < 3; i++) N->F[i] = NULL;

    return N;

}