#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int vetor[10], vetori[10];
	// recebendo os  numeros
	for (int i = 0; i < 10; i++){
		printf("Digite um numero:");
		scanf("%i", &vetor[i]);
	}
	// mostrando o vetor ao usuario 
	for (int i = 0; i < 10; i++){
		printf("%i ", vetor[i]);
	}
	
	printf("\n");
	
	// mostrando o vetor inverso 
	for (int i = 0; i < 10; i++){
		vetori[i] = vetor[9-i];
		printf("%i ", vetori[i]);
	}
	// mostrando as posicoes que possuem  os mesmos numeros
	printf("\nPosicoes:");
	for(int i = 0; i < 10; i++){
		if(vetor[i]==vetori[i]){
			printf("%i, ", i);
		}
	}
	return 0;
}