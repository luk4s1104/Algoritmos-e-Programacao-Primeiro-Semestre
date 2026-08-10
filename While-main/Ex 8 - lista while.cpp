#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int no =0, n1 =0, n2 =0, n3 =0, n4 =0, n5 =0;
	float jose, joao, maria, total;
	
	printf("Candidatos:\n");
	printf("Jose(no1)\n");
	printf("Maria(no2)\n");
	printf("Joao(no3)\n\n");
	printf("Voto branco(no4)\n");
	printf("Voto nulo(no5)\n");
	
	do{
		
	printf("\nDigite o numero do seu voto:");
	scanf("%i", &no);
		
		switch(no){
			case 0: printf("Resultado:\n");
				break;
			case 1: n1++;
				break;
			case 2: n2++;
				break;
			case 3: n3++;
				break;
			case 4: n4++;
				break;
			case 5: n5++;
				break;
			default: printf("Voto invalido\n");
				break;
		}
	
	total = n1+n2+n3+n4+n5;
	
	}while(no!=0);
	
		if(no==0){
		printf("Numero de votos no jose: %i\n", n1);
		printf("Numero de votos na maria: %i\n", n2);
		printf("Numero de votos no joao: %i\n", n3);
		printf("Numero de votos brancos: %i\n", n4);
		printf("Numero de votos nulos: %i\n\n", n5);
		}
	
		if(n1>n2 && n1>n3){
		joao = n1;
		maria = n2;
		jose = n3;
			printf("Jose vencedor com %.1f%% dos votos\n", (joao/total)*100);
			}
			else if(n2>n1 && n2>n3){
		joao = n1;
		maria = n2;
		jose = n3;
				printf("Maria vencedora com %.1f%% dos votos\n", (maria/total)*100);
			}
			else if(n3>n2 && n3>n1){
		joao = n1;
		maria = n2;
		jose = n3;
				printf("Joao vencedor com %.1f%% dos votos\n", (jose/total)*100);
			}
			else{
				printf("Empate");
			}
	
	return 0;
}