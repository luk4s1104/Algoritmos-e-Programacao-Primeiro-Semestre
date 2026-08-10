#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int	matriz[4][4], vetor[4], i = 0;
	int linha, coluna, soma = 0;
	
	for(int linha = 0; linha<4; linha++){
		for(int coluna = 0; coluna<4; coluna++){
		printf("Digite o elemento da posicao [%i,%i]:", linha, coluna);
		scanf("%i", &matriz[linha][coluna]);
		}
	}
	
	for(int linha = 0; linha<4; linha++){
		for(int coluna = 0; coluna<4; coluna++){
			if(linha == coluna){
				soma += matriz[linha][coluna];
				vetor[i]=matriz[linha][coluna];
				i++;
			}
		}
	}
	printf("Soma da diagonal principal: %i\n", soma);
	
	for(int i = 0; i<4; i++){
		printf("| %i | ", vetor[i]);
	}
	
	return 0;
}