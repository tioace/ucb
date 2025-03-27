#include <stdio.h>

typedef struct {
    int idade; 
    float altura; 
    float peso; 
    char nome[20];
} dados;


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


    printf("\n------------------------------------\n\n");

    printf("Nome: %s\nIdade: %d\nPeso: %.2fkg\nAltura: %.2fcm", d.nome, d.idade, d.peso, d.altura);
}