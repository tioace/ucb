#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

#define NUMEROS "0123456789"
#define MINUSCULAS "abcdefghijklmnopqrstuvwxyz"
#define MAIUSCULAS "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define SIMBOLOS "!@#$%^&*()_+-=[]{}|;:,.<>?/"
#define ARQUIVO_SENHAS "senhas.txt"

void gerarSenha(int tamanho, int incluir_numeros, int incluir_maiusculas, int incluir_simbolos, char *senha) {
    char conjunto[256] = MINUSCULAS; // Sempre inclui minúsculas

    if (incluir_numeros) strcat(conjunto, NUMEROS);
    if (incluir_maiusculas) strcat(conjunto, MAIUSCULAS);
    if (incluir_simbolos) strcat(conjunto, SIMBOLOS);

    srand(time(NULL) + getpid());

    for (int i = 0; i < tamanho; i++) {
        senha[i] = conjunto[rand() % strlen(conjunto)];
    }
    senha[tamanho] = '\0';
}

void salvarSenha(const char *nome, const char *usuario, const char *senha) {
    FILE *arquivo = fopen(ARQUIVO_SENHAS, "a"); // Modo 'append' (adiciona ao final)
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    fprintf(arquivo, "Nome: %s | Usuario: %s | Senha: %s\n", nome, usuario, senha);
    fclose(arquivo);
    printf("Senha salva em '%s'!\n", ARQUIVO_SENHAS);
}

int main() {
    int tamanho, opcao;
    char nome[50], usuario[50], senha[100];
	int incluir_numeros;
	int incluir_maiusculas;
	int incluir_simbolos;
	
    printf("=== GERADOR DE SENHAS SEGURAS ===\n\n");

	do{
	   
    printf("Nome/Descricao da senha (ex: 'Email Google'): ");
    scanf(" %[^\n]", nome); // Lê até a quebra de linha

    printf("Usuario/Login associado: ");
    scanf(" %[^\n]", usuario);

    printf("Tamanho da senha: ");
    scanf("%d", &tamanho);
    
    printf("\n\n---------------------------------------\n\n");

    printf("Incluir numeros? \n1-Sim   \n2-Nao\n\nEscolha: ");
    scanf("%d", &opcao);
    printf("\n");
    
    if(opcao == 1){
		incluir_numeros = 1;
	} else {
		incluir_numeros = 0;
	}
    

    printf("Incluir letras maiusculas? \n1-Sim  \n2-Nao\n\nEscolha: ");
    scanf("%d", &opcao);
    printf("\n");
    
	if(opcao == 1){
    	incluir_maiusculas = 1;	
	} else {
		incluir_maiusculas = 0;	
	}
	

    printf("Incluir simbolos? \n1-Sim  \n2-Nao\n\nEscolha: ");
    scanf("%d", &opcao);
    printf("\n");
    
	if(opcao == 1){
	    incluir_simbolos = 1;    	
	} else {
		incluir_simbolos = 0;    	
	}


    gerarSenha(tamanho, incluir_numeros, incluir_maiusculas, incluir_simbolos, senha);
    printf("\n\n---------------------------------------\n\n");
	printf("\nSenha gerada: %s\n", senha);
	printf("\n\n---------------------------------------\n\n");
    salvarSenha(nome, usuario, senha);
	
	printf("\n\n---------------------------------------\n\n");
	printf("Deseja ter outra senha? \n1-Sim \n2-Nao\n\n");
	printf("Escolha: ");
	scanf("%d", &opcao);
	printf("\n\n---------------------------------------\n\n");
	
	if(opcao == 2){
		break;
	}
	
	} while (opcao == 1 || opcao == 2);
	
    return 0;
}
