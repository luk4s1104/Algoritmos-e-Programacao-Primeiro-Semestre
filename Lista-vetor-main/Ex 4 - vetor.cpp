#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int vetor[15], num;
	
	for (int i = 0; i < 15; i++){
		printf("Digite um numero:");
		scanf("%i", &vetor[i]);
	}
	
	for (int i = 0; i < 15; i++){
		num = vetor[i]*2;
		printf("\nO dobro dele e: %i\n", num);
	}
	
	return 0;
}