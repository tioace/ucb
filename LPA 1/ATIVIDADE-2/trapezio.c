#include <stdio.h>

float trapezio (float B, float b, float h){
    float a = ((B + b) * h) / 2;
    return a; 
}

int main(int argc, char const *argv[])
{
    float a, b ,c;

    printf("Digite a base maior: ");
    scanf("%f", &a);
    printf("Digite a base menor: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &c);

    printf("Area do trapezio: %.2f", trapezio(a, b, c));
    return 0;
}
