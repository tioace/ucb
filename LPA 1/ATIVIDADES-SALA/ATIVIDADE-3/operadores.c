#include <stdio.h>
#include <math.h>

float soma(float a, float b){
    float s = a + b;
    return s; 
}

float subtracao(float a, float b){
    float s = a +-b;
    return s; 
}

float multiplicacao(float a, float b){
    float s = a * b;
    return s; 
}

float divisao(float a, float b){
    float s = a / b;
    return s; 
}

float restoDiv(int a, int b){
    float s = a % b;
    return s; 
}

float potencia(float a, float b){
    float s = pow(a,b);
    return s; 
}

float raizA(float a){
    float s = sqrt(a);
    return s; 
}

float raizB(float b){
    float s = sqrt(b);
    return s; 
}

int main(int argc, char const *argv[]){
    /* code */
    float a, b; 

    printf("Digite um numero: ");
    scanf("%f", &a);
    printf("Digite outro numero: ");
    scanf("%f", &b);

    printf("\n------------------------------------\n\n");
    printf("Soma: %.2f\n", soma(a,b));
    printf("Subtracao: %.2f\n", subtracao(a,b));
    printf("Multiplicacao: %.2f\n", multiplicacao(a,b));
    printf("Divisao: %.2f\n", divisao(a,b));
    printf("Resto da Divisao: %.2f\n", restoDiv(a,b));
    printf("Potencia: %.2f\n", potencia(a,b));
    printf("Raiz do primeiro numero: %.2f\n", raizA(a));
    printf("Raiz do segundo numero numero: %.2f\n", raizB(b));
    printf("\n------------------------------------\n\n");

    return 0;
}