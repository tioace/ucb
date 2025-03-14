#include <stdio.h>

void cabecalho(){
	printf("\tUniversidade Catolica de Brasilia - Campus Taguatinga.\n");
	printf ("\tDisciplina: Logica de Programacao - Turma: GPE02M0767.\n");
	printf("\tProfessor: Adam Smith\n");
	printf("\tAluno(a): Nicholas Rafael Queiroz dos Reis\n\n\n");
}

float soma(float a, float b){
	float s = a + b;
	return s; 
}

float sub(float a, float b){
	float s = a - b;
	return s; 
}

float mult(float a, float b){
	float m = a * b;
	return m; 
}

float div(float a, float b){
	float d = a / b;
	return d; 
}

int main(){
	cabecalho();
	float a, b; 
	
	scanf("%f", &a);
	scanf("%f", &b);
	
	printf("\n----------------------------------------------\n");
	printf("\nSoma: ");
	printf("%.2f\n", soma(a, b));
	printf("Subtracao: ");
	printf("%.2f\n", sub(a, b));
	printf("Multiplicacao: ");
	printf("%.2f\n", mult(a, b));
	printf("Divisao: ");
	printf("%.2f\n", div(a, b));
			
}
