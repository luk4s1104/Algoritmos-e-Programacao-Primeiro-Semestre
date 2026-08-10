#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int main(){

	int num, contador;
	float num2, num3 =0, media, soma;
	
	printf("[1] Digite um numero\n");
	printf("[2] Sair\n");
	printf("Escolha uma opcao:");
	scanf("%i", &num);
	
	do{
		if(num ==1){
		printf("\nDigite o numero:");
		scanf("%f", &num2);
		printf("[1] Digite um numero\n");
		printf("[2] Sair\n");
		printf("Escolha uma opcao:");
		scanf("%i", &num);
		
		soma +=num2;
		contador++;
		}
		
	if(num2>num3){
		num3=num2;
	}
	
	media = soma/contador;
	
	}while(num ==1);
	
		if(num ==2){
			printf("O maior numero e %.2f\n", num3);
			printf("A media e %.2f", media);
		}
		
	return 0;
}