#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    FILE *fp, *t; 
    fp = fopen("compra.txt", "r");
    t = fopen("nota.txt", "w"); 

    if (fp == NULL){
        printf("ERRO: o arquivo nao foi aberto!\n");
        exit(1);
    } 

    int qtd; 
    float valor; 
    float soma = valor * qtd; 
    float total; 
    char prod[50]; 

    //printf("Arquivo aberto/criado"); 
    fprintf(t, "===== Nota Fiscal =====\n\n");
    
    while (fscanf(fp, "%s %d %f\n", &prod, &qtd, &valor) == 3){
        printf("%s: %d * %.2f = %.2f\n", prod, qtd, valor, soma); 
        fprintf(t, "%s: %d * %.2f = %.2f\n", prod, qtd, valor, soma, total); 
        total += soma;
    }
    
    fprintf(t, "\n\nValor total = %.2f", total);
    printf("\nValor total = %.2f", total); 

        
    fclose(fp);
    fclose(t);
    return 0;
}