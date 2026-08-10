#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char nome[20], sobrenome[20], inteiro[50];
	
	printf("Digite o seu nome:");
	gets(nome);
	fflush(stdin);
	
	printf("\nDigite o seu sobrenome:");
	gets(sobrenome);
	
    strcpy(inteiro, nome); 
	strcat(inteiro, sobrenome);
	
	printf("\n");
	printf("%s", inteiro);
	
	int tamanho = strlen(inteiro);
	printf("\n\nO numero de caracters em seu nome: %i", tamanho);
	
	 return 0;
}