#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int vetor[10], soma;
	
	for (int i = 0; i < 10; i++){
		printf("Digite um numero:");
		scanf("%i", &vetor[i]);
		
		if(vetor[i]<0){
			while(vetor[i]<0){
			printf("Numero invalido\n");
			printf("Digite novamente:");
			scanf("%i", &vetor[i]);
			}
		}
	}
	for(int i = 0; i < 10; i++){
		if(i%2!= 0){
			soma+=vetor[i];
		}
	}
	printf("\nA soma das posicoes impares: %i", soma);
	
	return 0;
}
