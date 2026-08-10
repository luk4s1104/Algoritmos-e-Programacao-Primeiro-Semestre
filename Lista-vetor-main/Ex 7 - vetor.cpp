#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int vetor[100];

	for (int i = 0; i < 100; i++){
		vetor[i] =i;
		if(vetor[i]%2==0){
		printf("%i\n", vetor[i]);
		}
	}
	
	return 0;
}