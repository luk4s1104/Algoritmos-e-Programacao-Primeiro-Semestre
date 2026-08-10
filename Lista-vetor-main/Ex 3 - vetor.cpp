#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int vetor[8], posicao;
	
	for (int i = 0; i < 8; i++){
		printf("Digite um numero:");
		scanf("%i", &vetor[i]);
	}
	
	printf("\n\nEscolha uma posicao do vetor(comeca no zero):\n");
	scanf("%i", &posicao);

	printf("\nO numero dessa posicao e:%i", vetor[posicao]);
	return 0;
}