#include <stdio.h>

void cabecalho(){
	printf("\tUniversidade Catolica de Brasilia - Campus Taguatinga.\n");
	printf ("\tDisciplina: Logica de Programacao - Turma: GPE02M0767.\n");
	printf("\tProfessor: Adam Smith\n");
	printf("\tAluno(a): Nicholas Rafael Queiroz dos Reis\n\n\n");
}

float media (float n1, float n2, float n3, float p1, float p2, float p3){
	float m = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
	return m; 
}

int main(){
	cabecalho();
	float n1, n2, n3, p1, p2, p3; 

	printf("\n-----------------------------------\n");	
	printf("\n\nDigite as notas: \n");
	scanf("%f", &n1);	
	scanf("%f", &n2);
	scanf("%f", &n3);
	printf("\nDigite os pesos: \n");
	scanf("%f", &p1);
	scanf("%f", &p2);
	scanf("%f", &p3);	
	
	printf("\n-----------------------------------\n");
	printf("Media: %.2f", media(n1, n2, n3, p1, p2, p3));
}
