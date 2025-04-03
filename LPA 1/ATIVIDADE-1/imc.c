#include <stdio.h>
#include <math.h>

float imc(float altura, float peso){
    float imc = peso/pow(altura, 2);
    return imc;
}

int main(){
    float altura, peso; 
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite seu altura: ");
    scanf("%f", &altura);
    
    float i = imc(altura, peso);

    printf("\n------------------------------------\n\n");

    printf("Peso: %.2fkg\nAltura: %.2fcm", peso, altura);
    printf("\n\nIMC: %.2f", imc(altura, peso));
    printf("\n\n------------------------------------\n\n");

    if (i < 18.5){
        printf("Abaixo do peso");
    }
    if (i > 18.5 && i <= 24.9){
        printf("Peso ideal");
    }
    if (i > 24.9 && i <= 29.9){
        printf("Levemente acima do peso");
    }
    if (i > 29.9 && i <= 34.9){
        printf("Obesidade grau I");
    }
    if (i > 34.9 && i <= 39.9){
        printf("Obesidade grau II");
    }
    if (i > 39.9){
        printf("Obesidade grau III");
    }
    
    printf("\n\n------------------------------------\n\n");
    
    return 0;
}

