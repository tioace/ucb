#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cidade.h"

/*
RESTRIÇÕES 
    • 3 ≤ T ≤ 106 e 2 ≤ N ≤ 104
    • 0 < Xi < T, para 1 ≤ i ≤ N
    • Xi ≠ Xj, para todo par 1 ≤ i, j ≤ N.
*/

/*
OBSERVAÇÕES 
    - caso ocorra erro na inicialização, da estrada em Estrada *getEstrada(const char *nomeArquivo), esta deverá retornar ponteiro NULL.
    -  construa outros para verificar se sua solução para o problema proposto realmente está correta, observando os limites mínimos e
       máximos para cada variável.
    

*/


//funcao pra auxiliar no get estrada
Cidade *criarCidade(int posicao, const char *nome) {
    Cidade * novaCidade = (Cidade*) malloc(sizeof(Cidade));
    
    if (novaCidade == NULL){
        return NULL;  
    } 
    
    strcpy(novaCidade->Nome, nome);
    novaCidade->Posicao = posicao;
    novaCidade->Proximo = NULL;
    
    return novaCidade;
}



Estrada * getEstrada(const char * nomeArquivo){
    printf("Arquivo a ser aberto: %s\n", nomeArquivo); 
    FILE *fp = fopen(nomeArquivo, "r"); 
    
    if (fp == NULL){
        printf("ERRO: arquivo nao pode ser aberto!\n");
        exit(1); 
    }
    
    int N, T;
    if (fscanf(fp, "%d", &T) != 1 || fscanf(fp, "%d", &N) != 1) {
        fclose(fp);
        return NULL;
    }

    //validar restrições
    if (T < 3 || T > 1000000 || N < 2 || N > 10000) {
        fclose(fp);
        return NULL;
    }

    //alocação dinamica de memoria 
    Estrada * x = (Estrada*) malloc(sizeof(Estrada)); 
    if (x == NULL){
        exit(1); 
    }
    
    x->T = T;
    x->N = N;
    x->Inicio = NULL;

    // Ler as cidades
    Cidade *anterior = NULL;
    int posicoes[N];
    char nomes[N][256];


}



double calcularMenorVizinhanca(const char * nomeArquivo){


}


char * cidadeMenorVizinhanca(const char * nomeArquivo){


}

