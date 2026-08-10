#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	char senha[7], certo[7], correto = 0;
		
		do{
		
			printf("Defina a senha com 6 digitos:\n");
			gets(senha);
	
			if(strlen(senha) != 6){
			printf("Senha invalida!\n\n");
			}
			else{
				printf("Senha definida!\n\n");
			}
			
		}while(strlen(senha) != 6);
	
			printf("-----------------------------------------\n\n");
			printf("Digite a senha:\n");
			gets(certo);
			
			if(strcmp(senha, certo) == 0){
				printf("Senha correta!");
			}
			
			for(int i = 0; i < 6; i++){
				if(senha[i]==certo[i]){
					correto += 1;
				}
			}
			
			if(strcmp(senha, certo) != 0){
				printf("Senha incorreta!\n");
				if(correto == 3){
					printf("Houve algum erro de digitacao");
				}
			}
			
			
	return 0;
}