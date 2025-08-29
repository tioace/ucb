#include <stdio.h>

int main(){
	int aluno, nota, s = 0; 
	float media, soma = 0; 
		
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &aluno);
	printf("\n-----------------------------\n\n"); 
	
	int i = 0; 
	
	while(i < aluno){
		printf("Digite a nota do aluno %d: ", i + 1);
		scanf("%d", &nota); 
		
		soma += nota; 
		
		if (nota >= 7 && nota <= 10){
			s++;
		}
		
		i++; 
	}
	
	media = soma / aluno; 
	
	printf("\n-----------------------------\n\n"); 
	printf("Media da turma: %.1f\n", media); 
	printf("Quantidade de alunos acima da media: %d\n", s);
	
	return 0; 	
}
