#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	float num1, num2, num3;
	int sinal;
	do{
	printf("[1] Adicao\n");
	printf("[2] Subtracao\n");
	printf("[3] Multiplicacao\n");
	printf("[4] Divisao\n");
	printf("[5] Sair\n");
	printf("Escolha a operacao:");
	scanf("%i", &sinal);
	
	switch(sinal){
		case 1: printf("digite um numero:");
			scanf("%f", &num1);
			printf("Digite o outro numero:");
			scanf("%f", &num2);
			num3 = num1 + num2;
			printf("Resultado: %.2f\n\n", num3);
			break;
		case 2: printf("digite um numero:");
			scanf("%f", &num1);
			printf("Digite o outro numero:");
			scanf("%f", &num2);
			num3 = num1 - num2;
			printf("Resultado: %.2f\n\n", num3);
			break;
		case 3: printf("digite um numero:");
			scanf("%f", &num1);
			printf("Digite o outro numero:");
			scanf("%f", &num2);
			num3 = num1 * num2;
			printf("Resultado: %.2f\n\n", num3);
			break;
		case 4: printf("digite um numero:");
			scanf("%f", &num1);
			printf("Digite o outro numero:");
			scanf("%f", &num2);
			num3 = num1/num2;
			printf("Resultado: %.2f\n\n", num3);
			break;
		case 5: printf("Tchau");
			break;
		default: printf("Numero invalido");
			break;	
	}
	}while(sinal>0 && sinal<5);

	return 0;
}