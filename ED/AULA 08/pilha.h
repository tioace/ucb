#ifndef PILHA_H
#define PILHA_H

typedef struct {
    /* data */
    int chave;
    struct Item * anterior; 
    
} Item;

typedef struct{
    /* data */
    int tamanho; 
    Item * topo; 
} Pilha;


Item * criarItem(int chave);
Pilha * criarPilha();

#endif