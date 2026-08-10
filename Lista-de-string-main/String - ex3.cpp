#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char palavra[11];
	
	printf("Digite uma palavra:");
	gets(palavra);
	
	for(int i; i<6; i++){
		printf("\n%c", palavra[i]);
	}
	
	 return 0;
}