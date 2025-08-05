#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int numerador; 
    int denomindor; 
} Fracao;

Fracao criarF(int n, int d){
    Fracao f; 
    f.numerador = n; 
    f.denomindor = d; 

    return f; 
}

int main(int argc, char const *argv[]){
    Fracao f1 = criarF(7, 2); 
    printf("O valor de F1 eh: %.2f\n", (float)f1.numerador/f1.denomindor);
    return 0;
}
