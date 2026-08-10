#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int main(){
	printf("Lista Switch\n");
	
	// exercico 1
	int mes;
	printf("Ex 1 - mes\n");
	printf("Qual o numero do mes que voce nasceu ?\n");
	scanf("%i", &mes); 
	fflush(stdin);
	
	switch(mes)
	{
		case 1: printf("E o mes de janeiro\n", mes);
			 	break;
		case 2: printf("E o mes de fevereiro\n", mes);
				break;
		case 3: printf("E o mes de marco\n", mes);
			 	break;
		case 4: printf("E o mes de abril\n", mes);
				break;
		case 5: printf("E o mes de maio\n", mes);
			 	break;
		case 6: printf("E o mes de junho\n", mes);
				break;
		case 7: printf("E o mes de julho\n", mes);
			 	break;
		case 8: printf("E o mes de agosto\n", mes);
				break;
		case 9: printf("E o mes de setembro\n", mes);
			 	break;
		case 10: printf("E o mes de outubro\n", mes);
				break;
		case 11: printf("E o mes de novembro\n", mes);
			 	break;
		case 12: printf("E o mes de dezembro\n", mes);
				break;
		default: printf("Nao existe esse mes\n");
				break;			
	}
	
	//exercicio 2
	char letra;
	printf("\nEx 2 - alfabeto");
	printf("\nDigite uma letra:\n");
	scanf("%c", &letra);
	fflush(stdin);
	
	//exercico 3
	letra = tolower(letra);
		
	switch(letra)
	{
		case 'a': printf("A letra %c e vogal\n", letra);
				break;
		case 'e': printf("A letra %c e vogal\n", letra);
				break;
		case 'i': printf("A letra %c e vogal\n", letra);
				break;
		case 'o': printf("A letra %c e vogal\n", letra);
				break;
		case 'u': printf("A letra %c e vogal\n", letra);
				break;
		default: printf("Essa letra e consoante\n");
			break;
	}
	
	// exercicio 4
	int num;
	printf("\nEx 4 - erro do sistema");
	printf("\nDigite o numero do erro so sistema:\n");
	scanf("%i", &num);
	
	switch(num)
	{
		case 200: printf("OK\n");
				break;
		case 400: printf("Pagina nao encontrada\n");
				break;
		case 500: printf("Erro interno no servidor\n");
				break;
		case 503: printf("Servico indisponivel\n");
				break;
		default: printf("Esse numero nao e um erro sistema\n");
			    break;
	}

	return 0;
}