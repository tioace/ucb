#include <stdio.h>

float triangulo (float b, float h){
    float a = (b * h)/2;
    return a;
}

int main(int argc, char const *argv[]){
    float b, h; 

    printf("Digite a base: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &h);

    printf("Area do triangulo: %.2f", triangulo(b, h));
    return 0;
}
