#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){ 
	// exercicio 1
	int  num1;
	for(int num= 0; num < 10; num++){
		printf("Digite um numero:");
		scanf("%i", &num1);
		printf("O dobro dele e %i\n", num1*2);
	}
	
	// exercicio 2
	int num2;
	printf("Digite um numero:");
	scanf("%i", &num2);
	
	for(int i=0; i < 10; i++){
		printf("O numero:%i", num2);
	}
	
	return 0;
}