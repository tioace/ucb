#include <stdio.h>

float losango(float D, float d){
    float a = (D * d) / 2;
    return a;
}

int main(int argc, char const *argv[])
{
    float a, b; 

    printf("Digite a diagonal maior: ");
    scanf("%f", &a);
    printf("Digite a diagonal menor: ");
    scanf("%f", &b);

    printf("Area do losango: %.2f", losango(a, b));
    return 0;
}
