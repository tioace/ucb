#include <stdio.h>

void cabecalho(){
	printf("\tUniversidade Catolica de Brasilia - Campus Taguatinga.\n");
	printf ("\tDisciplina: Logica de Programacao - Turma: GPE02M0767.\n");
	printf("\tProfessor: Adam Smith\n");
	printf("\tAluno(a): Nicholas Rafael Queiroz dos Reis\n\n\n");
}

float salario(float s){
	float aumento = s * 0.25;
	float n = s + aumento;
	return n;
}

int main(){
	cabecalho();
	
	float s;
	
	scanf("%f", &s);
	printf("\n---------------------------\n");
	printf("Salario antigo: R$%.2f\n", s);
	printf("Novo salario: R$%.2f", salario(s));
}
