#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    FILE *fp; 
    fp = fopen("bd.txt", "r");

    if (fp == NULL){
        printf("ERRO: o arquivo nao foi aberto!\n");
        exit(1);
    } 

    int conta; 
    float saldo; 
    char nome[50]; 

    //printf("Arquivo aberto/criado"); 

    for (int i = 0; i < 4; i++){
        fscanf(fp, "%d %f %[^\n]\n", &conta, &saldo, &nome); 
        printf("%d\t %.2f\t %s\n", conta, saldo, nome); 
    }
    
    fclose(fp);
    return 0;
}