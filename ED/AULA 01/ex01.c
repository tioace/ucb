#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome [150];
    char telefone [20];
    char endereco [50];
} Pessoa;


int main(int argc, char const *argv[]){
    Pessoa p;
    
    strcpy(p.nome, "Maria Tereza");
    strcpy(p.telefone, "(61) 12345-6789");
    strcpy(p.endereco, "SHIS 12 25 13");

    printf("%s/t %s/t %s\n", p.nome, p.telefone, p.endereco); 

    return 0;
}
