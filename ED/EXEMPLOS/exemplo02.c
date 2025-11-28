#include <stdio.h>
#include <stdlib.h>

// Nó de uma árvore binária (nó tem 2 filhos, no máximo)

typedef struct No {

    char Chave;
    struct No * Esquerda;
    struct No * Direita;
    
} No;

No * criarNo(char Chave) {

    No * N = (No *) malloc(sizeof(No));
    if(N == NULL) {
        printf("ERRO: não há memória para o nó!\n");
        return NULL;
    }

    N->Chave = Chave;
    N->Esquerda = NULL;
    N->Direita = NULL;

    return N;

}

int main() {    

    system("cls");
    
    No * A = criarNo('a');
    No * B = criarNo('b');
    No * C = criarNo('c');
    No * D = criarNo('d');

    A->Esquerda = B; // B é o filho da esquerda de A
    A->Direita = C; // C é o filho da direita de A
    C->Direita = D; // D é o filho da direita de C

    printf("%c", A->Direita->Direita->Chave);

}