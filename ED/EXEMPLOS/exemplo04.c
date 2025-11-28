#include <stdio.h>
#include <stdlib.h>

// Nó de uma árvore binária (nó tem 2 filhos, no máximo)

typedef struct No {

    int Chave;

    struct No * Esquerda;
    struct No * Direita;
    
} No;


No * criarNo(int Valor) {
    No * novoNo = (No *) malloc(sizeof(No));
    if (novoNo == NULL) return NULL;
    novoNo->Chave = Valor;
    novoNo->Esquerda = NULL;
    novoNo->Direita = NULL;
    return novoNo;
}

/*
No * A = criarNo(10);
No * B = criarNo(12);
No * C = criarNo(15);
No * D = criarNo(16);
No * F = criarNo(18);
No * G = criarNo(20);
No * H = criarNo(17);
No * I = criarNo(19);

A->Direita = C; 
C->Direita = G; 
G->Direita = I;
G->Esquerda = H;*/