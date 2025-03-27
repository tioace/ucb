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
    
    printf("\n------------------------------------\n\n");

    printf("Peso: %.2fkg\nAltura: %.2fcm", peso, altura);
    printf("\n\nIMC: %.2f", imc(altura, peso));
    printf("\n\n------------------------------------\n\n");
    return 0;
}

