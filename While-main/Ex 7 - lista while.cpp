#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int div, int1, int2;
	
	printf("Digite um divisor:");
	scanf("%i", &div);
	printf("Digite o inicio do intervalo:");
	scanf("%i", &int1);
	printf("Digite o final do intervalo:");
	scanf("%i", &int2);

	while(int1<=int2){
		if(int1 % div == 0){
			printf("%i\n", int1);
		}
		int1++;
	}
		
	return 0;
}