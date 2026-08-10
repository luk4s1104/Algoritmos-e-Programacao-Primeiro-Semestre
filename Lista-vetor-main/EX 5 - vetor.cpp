#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int vetor[12];
	
	for (int i = 0; i < 12; i++){
		printf("Digite um numero:");
		scanf("%i", &vetor[i]);
	}
	
	printf("Positivos:\n");
	for (int i = 0; i < 12; i++){
		if(vetor[i]>0)
		printf("%i\n", vetor[i]);
	}

	
	return 0;
}