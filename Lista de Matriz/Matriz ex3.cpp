#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int	matriz[5][3];
	int linha, coluna, maior = 0, linham, colunam;
	
	for(int linha = 0; linha<5; linha++){
		for(int coluna = 0; coluna<3; coluna++){
		printf("Digite o elemento da posicao [%i,%i]:", linha, coluna);
		scanf("%i", &matriz[linha][coluna]);
		}
	}
	
	for(int linha = 0; linha<5; linha++){
		for(int coluna = 0; coluna<3; coluna++){
		if(matriz[linha][coluna]>maior){
			maior = matriz[linha][coluna];
			linham=linha;
			colunam=coluna;
			
			}
		}
	}
	
	printf("O maior elemento da matriz: %i\n", maior);
	printf("Sua posicao e [%i,%i]", linham, colunam);
	
	return 0;
}