#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int vetor[10], num, count, certo;
	// preencher o vetor 
	for (int i = 0; i < 10; i++){
		printf("Digite um numero:");
		scanf("%i", &vetor[i]);
	}
		// receber um numero 
	do{
		printf("\n\nDigite um numero para saber se tem no vetor:");
		scanf("%i", &num);
		// verificar quantas vezes ele aparece
		for (int i = 0; i < 10; i++){
			if(num==vetor[i]){
				count++;
			}
		}
		// resultado
		if(count>=1){
			printf("\nO numero %i apareceu %i vez(es) no vetor", num, count);
		}
		else{
			printf("\nNao ha esse numero, tente novamente");
		}
	
	}while(count<1);
		
	return 0;
}