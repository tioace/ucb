#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fracao.h"

Fracao criarF(int n, int d){
    Fracao f; 
    f.numerador = n; 
    f.denomindor = d; 

    return f; 
}

void exibirF(Fracao f){
    printf ("%d / %d\n", f.numerador, f.denomindor);
}

int mdc(int a, int b){
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (a % b != 0){
        int temp = a; 
        a = b;
        b = temp % b; 
    }

    return b; 
}

Fracao simplificar(Fracao f){
    int nmdc = mdc(f.numerador, f.denomindor);
    f.numerador = f.numerador / nmdc; 
    f.denomindor = f.denomindor / nmdc; 
    return f;
}

Fracao somar(Fracao f1, Fracao f2){
    Fracao f;
    int n1 = f1.numerador * f2.denomindor;
    int n2 = f2.numerador * f1.denomindor;
    int n3 = f1.denomindor * f2.denomindor; 

    f.numerador = n1 + n2; 
    f.denomindor = n3;

    f = simplificar(f); 
    return f; 
}

Fracao subtracao(Fracao f1, Fracao f2){
    Fracao f;
    int n1 = f1.numerador * f2.denomindor;
    int n2 = f2.numerador * f1.denomindor;
    int n3 = f1.denomindor * f2.denomindor; 

    f.numerador = n1 - n2; 
    f.denomindor = n3;

    f = simplificar(f); 
    return f; 
}

Fracao multiplicacao( Fracao f1, Fracao f2){
    Fracao f; 
    f.numerador = f1.numerador * f2.numerador;
    f.denomindor = f1.denomindor * f2.denomindor;
    f = simplificar(f); 
    return f;
}

Fracao divisao( Fracao f1, Fracao f2){
    Fracao f; 
    f.numerador = f1.numerador * f2.denomindor;
    f.denomindor = f1.denomindor * f2.numerador;
    f = simplificar(f); 
    return f;
}