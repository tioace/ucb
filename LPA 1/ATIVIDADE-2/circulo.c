#include <stdio.h>
#include <math.h>

float circulo (float pi, float r){
    float a = pi * pow(r, 2);
    return a; 
}

int main(int argc, char const *argv[])
{
    float pi, r;

    pi = 3.14;
    printf("Digite o raio: ");
    scanf("%f", &r);

    printf("Area do circulo: %.2f", circulo(pi, r));
    return 0;
}
