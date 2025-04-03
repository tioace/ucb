#include <stdio.h>
#include <math.h>

float quadrado (float a){
    float ar = pow(a, 2);
    return ar; 
}

float retangulo(float a, float b){
    float ar = a * b;
    return ar; 
}

float triangulo (float b, float h){
    float a = (b * h)/2;
    return a;
}

float losango(float D, float d){
    float a = (D * d) / 2;
    return a;  
}


float circulo (float pi, float r){
    float a = pi * pow(r, 2);
    return a; 
}


float trapezio (float B, float b, float h){
    float a = ((B + b) * h) / 2;
    return a; 
}



int main(int argc, char const *argv[])
{
    int a; 
    do{
        printf("\n---------------------------------------------\n\n");
        printf("Escolha o que deseja calcular \n\n");
        printf("1. Quadrado      2. Retangulo\n");
        printf("3. Triangulo     4. Losango\n");
        printf("5. Circulo       6. Trapezio\n");
        printf("\n\nDigite qualquer outro numero para sair.\n");

        printf("Escolha: ");
        scanf("%d", &a);
        printf("\n\n");

        if(a == 1){
            float a; 

            printf("Digite o lado: ");
            scanf("%f", &a);
            printf("\nArea do quadrado: %.2f\n\n", quadrado(a));
        }

        if(a == 2){
            float a, b; 
            printf("Digite a base: ");
            scanf("%f", &a);
            printf("Digite a altura: ");
            scanf("%f", &b);
            printf("\nArea do retangulo: %.2f\n\n", retangulo(a, b));
        }

        if(a == 3){
            float b, h; 

            printf("Digite a base: ");
            scanf("%f", &b);
            printf("Digite a altura: ");
            scanf("%f", &h);

            printf("\nArea do triangulo: %.2f\n\n", triangulo(b, h));
        }

        if(a == 4){
            float a, b; 

            printf("Digite a diagonal maior: ");
            scanf("%f", &a);
            printf("Digite a diagonal menor: ");
            scanf("%f", &b);
            printf("\nArea do losango: %.2f\n\n", losango(a, b));
        }

        if(a == 5){
            float pi, r;

            pi = 3.14;
            printf("Digite o raio: ");
            scanf("%f", &r);

            printf("\nArea do circulo: %.2f\n\n", circulo(pi, r));
        }

        if(a == 6){
            float a, b ,c;
            printf("Digite a base maior: ");
            scanf("%f", &a);
            printf("Digite a base menor: ");
            scanf("%f", &b);
            printf("Digite a altura: ");
            scanf("%f", &c);
            printf("\nArea do trapezio: %.2f\n\n", trapezio(a, b, c));
        }

    }while (a == 1 || a == 2 || a == 3 || a == 4 || a == 5|| a == 6);
    
    
    return 0;
}
