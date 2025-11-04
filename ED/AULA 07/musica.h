#ifndef MUSICA_H
#define MUSICA_H

typedef struct{
    /* data */
    char Titulo [50];
    char Autor [100];
    int Ano; 

    struct Item * Anterior;
    struct Item * Posterior;
    
} Item;


typedef struct{
    int Tamanho; 
    struct Item * Inicio; 
    struct Item * Fim; 

} Lista;


Item * criarItem(char * Titulo, char * Autor, int Ano); 
void exibirInicio(Lista * L); 
void exibirMusicas(Lista * L, int ano);

#endif MUSICA_H