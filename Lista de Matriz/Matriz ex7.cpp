#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int	matriz[3][5], modificada[3][5];
	int linha, coluna;
	
	for(int linha = 0; linha<3; linha++){
		for(int coluna = 0; coluna<5; coluna++){
			printf("Digite o elemento da posicao [%i,%i]:", linha, coluna);
			scanf("%i", &matriz[linha][coluna]);
		}
	}
	
	printf("\n");
	
	printf("\nMatriz original:\n");
	for(int linha = 0; linha<3; linha++){
		for(int coluna = 0; coluna<5; coluna++){
			printf("| %i |", matriz[linha][coluna]);
		}
		printf("\n");
	}
	
	for(int linha = 0; linha<3; linha++){
		for(int coluna = 0; coluna<5; coluna++){
			if(matriz[linha][coluna]<0){
				matriz[linha][coluna] = 0;
			}
		}
	}
	
	printf("\n");
	
	printf("\nMatriz modificada:\n");
	for(int linha = 0; linha<3; linha++){
		for(int coluna = 0; coluna<5; coluna++){
			modificada[linha][coluna] = matriz[linha][coluna];
			printf("| %i |", modificada[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("\nSoma de cada coluna da matriz modificada:\n");
    for(int coluna = 0; coluna < 5; coluna++) {
    		int soma = 0;
        for(linha = 0; linha < 3; linha++) {
        	soma += modificada[linha][coluna];
        }
        printf("Coluna %i: %i\n", coluna, soma);
    }

	return 0;
}