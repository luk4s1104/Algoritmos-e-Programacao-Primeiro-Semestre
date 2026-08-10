#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>


int main(){

	int num;
	float nota, nota2, media;
	
	printf("Digite sua nota modulo1:");
	scanf("%f", &nota);
	if(nota<0 || nota>10){
		while(nota<0 || nota>10){
		printf("Nota invalida\n");
		printf("Digite novamente:");
		scanf("%f", &nota);
	}
}
		
	printf("\nDigite sua nota modulo2:");
	scanf("%f", &nota2);
	if(nota2<0 || nota2>10){
		while(nota2<0 || nota2>10){
		printf("Nota invalida\n");
		printf("Digite novamente:");
		scanf("%f", &nota2);
}
}

	media = (nota+nota2)/2;
	
	printf("\nSua media e %.2f", media);
	return 0;
}