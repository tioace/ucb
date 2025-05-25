#include <stdio.h>
#include <math.h>

typedef struct{
    float x;
    float y; 
} Ponto;

float distancia (Ponto p1, Ponto p2){
    float distancia = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));

    return distancia; 
}


int main(int argc, char const *argv[]){
    Ponto p1, p2; 

    if (argc != 5) {
        printf("Uso: %s x1 y1 x2 y2\n", argv[0]);
        printf("Onde:\n");
        printf("x1 - coordenada x do primeiro ponto\n");
        printf("y1 - coordenada y do primeiro ponto\n");
        printf("x2 - coordenada x do segundo ponto\n");
        printf("y2 - coordenada y do segundo ponto\n");
        return 1;
    }

    p1.x = atof(argv[1]);
    p1.y = atof(argv[2]);
    p2.x = atof(argv[3]);   
    p2.y = atof(argv[4]);
    
    float d = distancia(p1,p2);
    printf("\nA distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) eh: %.2f\n\n", p1.x, p1.y, p2.x, p2.y, d);
    
    return 0;
}
