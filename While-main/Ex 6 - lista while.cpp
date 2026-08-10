#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float saldo, valor, finald, finalr;
	int opcao;
	
	printf("Saldo inicial da sua conta bancaria:");
	scanf("%f", &saldo);
	
	do{
		printf("\n[1] Deposito\n");
		printf("[2] Retirada\n");
		printf("[3] Fim\n");
		printf("Escolha a opcao:\n");
		scanf("%i", &opcao);
		fflush(stdin);
		
		switch(opcao){
			case 1:  printf("Valor do deposito:");
			scanf("%f", &valor);
			saldo += valor;
				break;
			case 2: printf("Valor da retirada:");
			scanf("%f", &valor);
			saldo -= valor;
				break;
			case 3: printf("FIM\n");
				break;
			default: printf("Opcao invalida\n");
				break;
		}

	}while(opcao ==1 || opcao ==2);
	
	if(opcao==3){
			printf("Saldo final: %.2f", saldo);
		}
		
		if (saldo == 0)
		printf("\nConta zerada\n\n");
		else if (saldo < 0)
		printf("\nConta estourada\n\n");
		else
		printf("\nConta preferencial\n\n");
		
	return 0;
}