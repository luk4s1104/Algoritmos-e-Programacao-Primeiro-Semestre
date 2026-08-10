#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 
int num;
	printf("Digite um numero:");
	scanf("%i", &num);
	
	int mult=1;
	
	for(int i=0; i < 10; i++){
		printf("\n%i\n", num*mult);
		mult++;
	}

return 0;	
}