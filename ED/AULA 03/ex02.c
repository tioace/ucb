#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    FILE *fp; 
    fp = fopen("teste.txt", "w");

    if (fp == NULL){
        printf("ERRO: o arquivo nao foi aberto!\n");
        exit(1);
    } 

    printf("Arquivo aberto/criado"); 
    
    fclose(fp);
    return 0;
}