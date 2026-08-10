#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
// exercicio 1
    int num1;
    printf("EXERCICIO 1- E positivo ou negativo?\n");
    printf("Digite um numero\n");
    scanf("%i", &num1);
    
    if (num1 >= 0){
    printf("Nao e negativo\n");	
	}
	else{
	printf("E negativo\n");
	}
	
// exercicio 2
   printf("\nEXERCICIO 2- Esta entre um intervalo de numeros?\n");
   printf("Digite um numero\n");
   scanf("%i", &num1);
   
   if( num1>=0 && num1<=9 ){
   	printf("O numero esta entre 0 e 9\n");
   }
   else{
   	printf("O numero nao esta entre 0 e 9\n");
   }

// exercicio 3
	float num2, num3, num4;
    
    printf("\nEXERCICIO 3- Divisao possivel\n");
    printf("Digite o numerador:\n");
    scanf("%f", &num2);
    fflush(stdin);
    printf("Digite o denominador:\n");
    scanf("%f", &num3);

    if(num3 != 0){
    	num4 = (num2/num3);
    	printf("O resultado e %.2f\n", num4);
	}
	else{
		printf("Nao existe divisao por zero\n");
	}
	
// exercicio 4
	float num5, num6, num7, num8;
	printf("\nEXERCICIO 4- Media do aluno\n");
	printf("Nota P1:\n");
	scanf("%f", &num5);
	printf("Nota P2:\n");
	scanf("%f", &num6);
	
	num7 = (num5 + num6)/2;
	
	if(num7>=5){
		printf("Voce foi aprovado\n");
	}
	else{
		num8 = 5 - num7;
		printf("Faltou %.2f para a aprovacao\n", num8);
		}
		
// exercicio 5
	float num9, num10;
	printf("\nEXERCICIO 5- O maior numero\n");
	printf("Digite um numero:\n");
    scanf("%f", &num9);
	printf("Digite um numero:\n");
    scanf("%f", &num10);
	
	if(num9>num10){
		printf("%.2f e maior que %.2f\n", num9, num10);
	}
	if(num10>num9){
		printf("%.2f e maior que %.2f\n", num10, num9);
	}
	if(num9==num10){
		printf("Os numeros sao iguais\n");
	}
		
// exercicio 6
	float num11, num12;
	printf("\nEXERCICIO 6- Ordem crescente\n");
	printf("Digite um numero:\n");
	scanf("%f", &num11);
	printf("Digite um numero:\n");
	scanf("%f", &num12);
	
	if(num11<num12){
		printf("%.1f < %.1f\n", num11, num12);
	}
	if(num11>num12){
		printf("%.1f < %.1f\n", num12, num11);
	}
	if(num11==num12){
		printf("Os numeros sao iguais\n");
	}
	
// exercicio 7
	float num13, num14, num15;
	printf("\nEXERCICIO 7- Salario\n");
	printf("Digite o salario:\n");
	scanf("%f", &num13);
	
	if(num13<=1000){
		num14 = num13*1.05;
		printf("O seu novo salario com o aumento e %.2f reais\n", num14);
	}
	else{
		num15 = num13*1.07;
		printf("O seu nvo salario com o aumento e %.2f reais\n", num15);
	}
	
// exercicio 8 
	float num16, num17;
	printf("\nEXERCICIO 8- Plano celular\n");
	printf("Digite quantos minutos voce usou do plano:\n");
	scanf("%f", &num16);
	
	if(num16>50){
		num17 = ((num16-50)*1.5)+50;
		printf("O valor da sua conta sera de %.2f reais\n", num17);
	}
	else{
		printf("O valor da sua conta sera de 50 reais\n");
	}
	
	// exercicio 9
	int num18;
	printf("\nEXERCICIO 9- Ano bissexto\n");
	printf("Digite o ano:\n");
	scanf("%i", &num18);
	
	if((num18 % 4 == 0 && num18 % 100 != 0) || num18 % 400 == 0){
	printf("Ano bissexto\n");
	}
	else{
	printf("Ano Nao-bissexto\n");
 	}
	return 0; 
}