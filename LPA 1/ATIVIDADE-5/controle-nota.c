#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b; 
    float somador = 0; 
    float maior = 0;  
    float menor = 10;
    int aprovado = 0; 
    float media, nota;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &a);
	printf("\n");
	
	float notas[a];
    for (int i = 0; i < a; i++){
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota); 
	
        while (nota < 0 || nota > 10);{
            printf("Nota invalida! Digite a nota novamente: ");
            scanf("%f", &nota);
        }
        
        notas[i] = nota; 
        

	        if(nota >= 6){
	            aprovado ++;
	        }

	        if(nota > maior){
	            maior = nota;
	        }

	        if(nota < menor){
	            menor = nota;
	        }

	        somador += nota; 			
		
	}

    media = somador / a;
    
    printf("\n\n-------------------------------------\n\n");
    printf("Media geral: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Quantidae de alunos aprovados: %d\n", aprovado);
    printf("\n\n-------------------------------------\n\n");

    printf("Digite a posicao do aluno que deseja saber a nota: ");
    scanf("%d", &b);

    printf("\n\n-------------------------------------\n\n");
    printf("Nota do aluno na posicao %d eh: %.2f\n", b, notas[b]);
    printf("\n\n-------------------------------------\n\n");

    return 0;
}


/* Solicite ao usuário o número de alunos da turma.
    Leia as notas dos alunos (valores entre 0.0 e 10.0), armazenando-as em um vetor de float.
    Calcule:
        A média geral da turma.
        A maior e a menor nota.
        A quantidade de alunos aprovados (nota = 6.0).
        A nota do aluno na posição k, escolhida pelo usuário.
    Exiba os resultados calculados.
*/
