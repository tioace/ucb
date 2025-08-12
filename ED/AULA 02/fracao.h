#ifndef FRACAO_H
#define FRACAO_H

typedef struct{
    int numerador; 
    int denomindor; 
} Fracao;

Fracao criarF(int n, int d);
Fracao simplificar(Fracao f);
Fracao somar(Fracao f1, Fracao f2);
Fracao subtracao(Fracao f1, Fracao f2);
Fracao multiplicacao( Fracao f1, Fracao f2);
Fracao divisao( Fracao f1, Fracao f2);
int mdc(int a, int b);
void exibirF(Fracao f);

#endif