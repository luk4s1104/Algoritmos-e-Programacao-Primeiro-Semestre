#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	
	char palavra[50];
	
	printf("Digite uma palavra: ");
	gets(palavra);
	fflush(stdin);

	for(int i = 0; i < strlen(palavra); i++){
		palavra[i] = toupper(palavra[i]);
	}
	
	printf("\n");
	puts(palavra);
	
	 return 0;
}