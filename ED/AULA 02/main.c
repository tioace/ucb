#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fracao.h"

int main(int argc, char const *argv[]){
    //printf("O valor de F1 eh: %.2f\n", (float)f1.numerador/f1.denomindor);
    //printf("%d", mdc(-30, 40)); 
    system("cls");

    Fracao f1 = criarF(24, 30); 
    f1 = simplificar(f1); 
    exibirF(f1);

    Fracao f2 = criarF(-30, 40); 
    f2 = simplificar(f2); 
    exibirF(f2);

    Fracao f3 = criarF(37, 42); 
    f3 = simplificar(f3); 
    exibirF(f3);

    Fracao f4 = criarF(5, 6); 
    Fracao f5 = criarF(4, 9); 
    exibirF(somar(f4, f5));

    Fracao f6 = criarF(5, 6); 
    Fracao f7 = criarF(4, 9); 
    exibirF(subtracao(f6, f7));

    Fracao f8 = criarF(3, 4); 
    Fracao f9 = criarF(7, 9); 
    Fracao f10 = criarF(5, 12); 
    Fracao f11 = somar(subtracao(f8, f9), f10);
    exibirF(f11); 
    return 0;

}