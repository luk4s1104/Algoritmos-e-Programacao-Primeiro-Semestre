#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
	float notat, notal, final;
	for(int i=0; i<30; i++){
		printf("\nSua nota tirada de laboratorio:");
		scanf("%f", &notat);
		printf("Sua nota tirada de teoria:");
		scanf("%f", &notal);
		
		final = (notat*0.6)+(notal*0.4);
		
		if(final>=7){
			printf("Voce foi bem: %.2f\n", final);
		}
		else if(final>=5 && final<7){
			printf("Voce foi razoavel: %.2f\n", final);
		}
		else if(final<5){
			printf("Voce foi mal: %.2f\n", final);
		}
	}	
	
	return 0;
}