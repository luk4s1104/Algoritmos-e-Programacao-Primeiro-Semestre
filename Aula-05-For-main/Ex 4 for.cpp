#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 
int num, num1, num2;
	printf("Digite o menor numero:");
	scanf("%i", &num);
	fflush(stdin);
	printf("\nDigite o maior numero:");
	scanf("%i", &num1);

	for(++num; num<num1; num++){
		printf("\n%i", num);
	}

return 0;	
}