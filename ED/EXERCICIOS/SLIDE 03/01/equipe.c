#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"

Time * lerDados(char * arquivo){

    //printf("Arquivo a ser aberto: %s\n", arquivo); 

    Time * x = malloc(20 * sizeof(Time)); 

    if (x == NULL){
        printf("ERRO: memoria insuficiente!\n");
        exit(1); 
    }
    
    FILE *fp = fopen(arquivo, "r"); 
    if (fp == NULL){
        printf("ERRO: arquivo nao pode ser aberto!\n");
        exit(1); 
    }

    int i = 0; 

    char cabecalho [100]; 
    fscanf(fp, "%s", cabecalho); 

    while (fscanf(fp, "%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d\n", &x[i].posicao, 
        &x[i].estado, &x[i].time, &x[i].pontos, &x[i].jogos, &x[i].vitorias, &x[i].empates, 
        &x[i].derrotas, &x[i].golP, &x[i].golS, &x[i].saldoG) == 11){

        printf("%s\n", x[i].time); 
        x[i].aproveitamento = (float) 100 * x[i].pontos / (3 * x[i].jogos);
        i++; 
    }
    

    fclose(fp);
}