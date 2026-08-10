#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int vetor[12], count;
	
	for (int i = 0; i < 12; i++){
		printf("Digite um numero:");
		scanf("%i", &vetor[i]);
	}
	
	for (int i = 0; i < 12; i++){
		if(vetor[i]<0)
	count++;
	}
	printf("\n%i numeros negativos", count);
	
	return 0;
}