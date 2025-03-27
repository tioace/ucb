#include <stdio.h>
#include <math.h>

typedef struct {
    int idade; 
    float altura; 
    float peso; 
    char nome[20];
} dados;

double imc(dados dados){
    double imc = dados.peso/pow(dados.altura, 2);
    return imc;
}

int main(){
    dados d; 

    printf("Digite seu nome: ");
    scanf("%s", &d.nome); 
    printf("Digite seu peso: ");
    scanf("%f", &d.peso);
    printf("Digite seu altura: ");
    scanf("%f", &d.altura);
    printf("Digite seu idade: ");
    scanf("%d", &d.idade);

    double im = imc(d);
    
    printf("\n------------------------------------\n\n");

    printf("Nome: %s\nIdade: %d\nPeso: %.2fkg\nAltura: %.2fcm", d.nome, d.idade, d.peso, d.altura);
    printf("\n\nIMC: %.2f", im);
    printf("\n------------------------------------\n\n");
    return 0;
}

