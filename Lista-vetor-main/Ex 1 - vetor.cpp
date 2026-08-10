#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int vetor[10];
	
	for (int i = 0; i < 10; i++){
		printf("Digite um numero:");
		scanf("%i", &vetor[i]);
	}
	
	printf("Ordem correta:\n");
	for (int i = 0; i < 10; i++){
		printf("%i\n", vetor[i]);
		
		
	}
	
	return 0;
}