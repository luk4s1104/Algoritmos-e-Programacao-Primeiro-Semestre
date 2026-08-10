#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char algo[50], inverso[50];
	int num, j=0;
	
	printf("Digite uma palavra:");
	gets(algo);
	fflush(stdin);
	
	printf("\nPalavra: ");
	puts(algo);
	
	num = strlen(algo);
	
	for (int i = num - 1; i >= 0; i--, j++) {
        inverso[j] = algo[i];
    }
    printf("\nInverso: ");
	puts(inverso);
	
	 return 0;
}