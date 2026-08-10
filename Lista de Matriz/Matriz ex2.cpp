#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int	matriz[3][4];
	int linha, coluna, soma;
	
	for(int linha = 0; linha<3; linha++){
		for(int coluna = 0; coluna<4; coluna++){
		printf("Digite o elemento da posicao [%i,%i]:", linha, coluna);
		scanf("%i", &matriz[linha][coluna]);
		}
	}
	
	for(int linha = 0; linha<3; linha++){
		for(int coluna = 0; coluna<4; coluna++){
		soma += matriz[linha][coluna];
		}
	}
	
	printf("A soma dos elementos da matriz: %i", soma);
	
	return 0;
}