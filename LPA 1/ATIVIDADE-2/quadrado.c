#include <stdio.h>
#include <math.h>

float quadrado (float a){
    float ar = pow(a, 2);
    return ar; 
}

int main(int argc, char const *argv[])
{
    float a; 

    printf("Digite o lado: ");
    scanf("%f", &a);

    printf("Area do quadrado: %.2f", quadrado(a));
    return 0;
}
