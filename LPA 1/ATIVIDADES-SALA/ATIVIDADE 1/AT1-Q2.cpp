#include <stdio.h>
#include <math.h>

void cabecalho(){
	printf("\tUniversidade Catolica de Brasilia - Campus Taguatinga.\n");
	printf ("\tDisciplina: Logica de Programacao - Turma: GPE02M0767.\n");
	printf("\tProfessor: Adam Smith\n");
	printf("\tAluno(a): Nicholas Rafael Queiroz dos Reis\n\n\n");
}

float delta(float a, float b, float c){
	float delta =  pow(b,2) - 4 * a * c;
	float raiz = sqrt(delta); 
	return raiz; 
}

int main(){
	cabecalho();
	float a, b, c; 
	
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
			
	float r1 = (-b + delta(a,b,c))/ 2 * a;
	float r2 = (-b - delta(a,b,c))/ 2 * a;	
	
	printf("\n---------------------------------------------\n");
	printf("X1: %.f", r1);
	printf("\nX2: %.f", r2);
}
