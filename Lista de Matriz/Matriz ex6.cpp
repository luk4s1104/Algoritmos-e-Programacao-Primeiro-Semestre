#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int	matriz[3][4];
	int linha, coluna, escolhi = 0;
	float media = 0, soma = 0;
	
	for(int linha = 0; linha<3; linha++){
		for(int coluna = 0; coluna<4; coluna++){
		printf("Digite o elemento da posicao [%i,%i]:", linha, coluna);
		scanf("%i", &matriz[linha][coluna]);
		}
	}
	
	printf("\n");
	
	for(int linha = 0; linha<3; linha++){
		for(int coluna = 0; coluna<4; coluna++){
		printf("| %i |", matriz[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("\nEscolha uma linha para saber a media dos elementos:");
	scanf("%i", &escolhi);
	
	for(int linha = 0; linha<3; linha++){
		for(int coluna = 0; coluna<4; coluna++){
			if(escolhi==linha){
			soma += matriz[escolhi][coluna];
			media = soma/4;
			}
		}
	}
	
	printf("\nA media dos elementos dessa linha: %.2f", media);
	
	return 0;
}