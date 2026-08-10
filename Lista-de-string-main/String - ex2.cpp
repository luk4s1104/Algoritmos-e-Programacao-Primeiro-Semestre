#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char palavra[11];
	int tamanho;
	
	do{
		printf("Digite uma palavra:");
		gets(palavra);
	
		tamanho = strlen(palavra);
	
		if(tamanho<3 || tamanho>10){
			printf("\nTente novamente !\n\n");
		}
		else{
			printf("\n");
			puts(palavra);
			printf("\nTamanho: %i letras", tamanho);
		}
		
	}while(tamanho<3 || tamanho>10);
	
	return 0;
}