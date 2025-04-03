#include <stdio.h>

float retangulo(float a, float b){
    float ar = a * b;
    return ar; 
}

int main(int argc, char const *argv[])
{
    float a, b; 
    
    printf("Digite a base: ");
    scanf("%f", &a);
    printf("Digite a altura: ");
    scanf("%f", &b);

    printf("Area do retangulo: %.2f", retangulo(a, b));
    return 0;
}
