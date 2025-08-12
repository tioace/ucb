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

Fracao simplificarF(Fracao f){
    int nmdc = mdc(f.numerador, f.denomindor);
    f.numerador = f.numerador / nmdc; 
    f.denomindor = f.denomindor / nmdc; 
    return f;
}

Fracao somarF(Fracao f1, Fracao f2){
    Fracao f;
    int n1 = f1.numerador * f2.denomindor;
    int n2 = f2.numerador * f1.denomindor;
    int n3 = f1.denomindor * f2.denomindor; 

    f.numerador = n1 + n2; 
    f.denomindor = n3;

    f = simplificarF(f); 
    return f; 
}

Fracao subtracaoF(Fracao f1, Fracao f2){
    Fracao f;
    int n1 = f1.numerador * f2.denomindor;
    int n2 = f2.numerador * f1.denomindor;
    int n3 = f1.denomindor * f2.denomindor; 

    f.numerador = n1 - n2; 
    f.denomindor = n3;

    f = simplificarF(f); 
    return f; 
}

Fracao multiplicacao( Fracao f1, Fracao f2){
    Fracao f; 
    f.numerador = f1.numerador * f2.numerador;
    f.denomindor = f1.denomindor * f2.denomindor;
    f = simplificarF(f); 
    return f;
}

Fracao divisao( Fracao f1, Fracao f2){
    Fracao f; 
    f.numerador = f1.numerador * f2.denomindor;
    f.denomindor = f1.denomindor * f2.numerador;
    f = simplificarF(f); 
    return f;
}

int main(int argc, char const *argv[]){
    //printf("O valor de F1 eh: %.2f\n", (float)f1.numerador/f1.denomindor);
    //printf("%d", mdc(-30, 40)); 
    system("cls");

    Fracao f1 = criarF(24, 30); 
    f1 = simplificarF(f1); 
    exibirF(f1);

    Fracao f2 = criarF(-30, 40); 
    f2 = simplificarF(f2); 
    exibirF(f2);

    Fracao f3 = criarF(37, 42); 
    f3 = simplificarF(f3); 
    exibirF(f3);

    Fracao f4 = criarF(5, 6); 
    Fracao f5 = criarF(4, 9); 
    exibirF(somarF(f4, f5));
    return 0;
}