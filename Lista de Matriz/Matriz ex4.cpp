#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int	matriz[3][3], matrizd[3][3];
	int linha, coluna, soma;
	
	for(int linha = 0; linha<3; linha++){
		for(int coluna = 0; coluna<3; coluna++){
		printf("Digite o elemento da posicao [%i,%i]:", linha, coluna);
		scanf("%i", &matriz[linha][coluna]);
		}
	}
	
	for(int linha = 0; linha<3; linha++){
		for(int coluna = 0; coluna<3; coluna++){
		matrizd[linha][coluna] = matriz[linha][coluna]*2;
		}
	}
	
	for(int linha = 0; linha<3; linha++){
		for(int coluna = 0; coluna<3; coluna++){
		printf("| %i |", matrizd[linha][coluna]);
		}
		printf("\n");
	}
	
	return 0;
}