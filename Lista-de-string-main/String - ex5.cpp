#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char letra, final[21];
	int num;
	
	do{
		printf("Digte uma letra:");
		scanf("%c", &letra);

		printf("\nDigte um numero:");
		scanf("%i", &num);
		fflush(stdin);
		
		if(num>20){
			printf("\nDigite um numero menor ou igual a 20 !\n\n");
		}
		
		for(int i = 0; i<num; i++){
			final[i] = letra;
		}
		
		puts(final);
		
	}while(num>20);
	
	return 0;
}