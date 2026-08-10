#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 float num;
	for(int i=0; i < 10; i++){
		printf("Digite um numero:");
		scanf("%f", &num);
		
		if(num>0){
			printf("Esse numero e positivo\n");
		}
		else if(num<0){
			printf("Esse numero e negativo\n");
		} 
		else if(num==0){
			printf("Esse numero e nulo\n");
		}
	}
	
return 0;	
}