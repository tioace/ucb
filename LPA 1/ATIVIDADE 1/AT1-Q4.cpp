#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <math.h>

void cabecalho(){
	printf("\tUniversidade Catolica de Brasilia - Campus Taguatinga.\n");
	printf ("\tDisciplina: Logica de Programacao - Turma: GPE02M0767.\n");
	printf("\tProfessor: Adam Smith\n");
	printf("\tAluno(a): Nicholas Rafael Queiroz dos Reis\n\n\n");
}

typedef struct {
    double x;
    double y;
} distanciaPonto;

double distancia(distanciaPonto p1, distanciaPonto p2){
	double dis = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
	return dis; 
}

int main(){
	cabecalho();
	distanciaPonto p1, p2;

    printf("Digite as coordenadas do primeiro ponto:\n");
    printf("Coordenada x: ");
    scanf("%lf", &p1.x);
    printf("Coordenada y: ");
    scanf("%lf", &p1.y);

    printf("\nDigite as coordenadas do segundo ponto:\n");
    printf("Coordenada x: ");
    scanf("%lf", &p2.x);
    printf("Coordenada y: ");
    scanf("%lf", &p2.y);

    double dis = distancia(p1, p2);

	printf("\n-----------------------------------------------------------------------\n"); 
    printf("\nA distancia entre os pontos (%.1f, %.1f) e (%.1f, %.1f) eh: %.2f\n",p1.x, p1.y, p2.x, p2.y, dis);

	return 0; 
} 
