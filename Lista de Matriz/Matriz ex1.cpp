#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int	matriz[4][3];
	int linha, coluna;
	
	for(int linha = 0; linha<4; linha++){
		for(int coluna = 0; coluna<3; coluna++){
		printf("Digite o elemento da posicao [%i,%i]:", linha, coluna);
		scanf("%i", &matriz[linha][coluna]);
		}
	}
	
	for(int linha = 0; linha<4; linha++){
		for(int coluna = 0; coluna<3; coluna++){
		printf("| %i |", matriz[linha][coluna]);
		}
		printf("\n");
	}
	
	return 0;
}