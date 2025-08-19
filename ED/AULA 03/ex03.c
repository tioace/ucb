#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    FILE *fp; 
    fp = fopen("teste03.txt", "w");

    if (fp == NULL){
        printf("ERRO: o arquivo nao foi aberto!\n");
        exit(1);
    } 

    printf("Arquivo aberto/criado"); 
    
    int fixo = 9; 
    int resultado; 

    fprintf(fp, "==== Tabuada do %d ====\n\n", fixo);
    for(int i = 1; i < 11; i++){
        resultado = fixo * i;
        fprintf(fp, "%d x %d = %d\n", fixo, i, resultado); 
    }

    fclose(fp);
    return 0;
}