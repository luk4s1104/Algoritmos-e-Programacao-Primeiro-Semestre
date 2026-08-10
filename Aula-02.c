#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1415


int main() {
	// exercicio 1
	float num1, num2;	
	printf("EXERCICIO 1 - Dobro");
	printf("\nDigite o numero:\n");
	scanf("%f", &num1); // sem o .2 do scan
	num2 = num1 * 2;
	printf("O dobro dele e %.2f\n", num2);
	fflush(stdin);
	
	// exercicio 2
	float num3, num4, num5;
	printf("\nEXERCICIO 2 - Media");
	printf("\nDigite o numero:\n");
	scanf("%f", &num3);
	printf("Digite o outro numero\n");
	scanf("%f", &num4);
	num5 = (num3 + num4) /2;
	printf("A media aritmetica entre eles e %.2f\n", num5);
	
	// exercicio 3
	float num6, num7;
	printf("\nEXERCICIO 3 - Conversao");
	printf("\nDigite um numero:\n");
	scanf("%f", &num6);
	num7 = num6*100;
	printf("%.2fm = %.2fcm\n", num6, num7);
	
	// exercicio 4
	float num8, num9, num10;
	printf("\nEXERCICIO 4 - Idade?");
	printf("\nEm qual ano voce nasceu?\n");
	scanf("%f", &num8);
	num9 = (2026-num8)*365;
	printf("\nVoce tem %.0f dias vividos\n", num9);
	
	// exercicio 5
	int num11, num12, num13, num14;
	printf("\nEXERCICIO 5 - Divisao");
	printf("\nDigite o dividendo:\n");
	scanf("%i", &num11);
	printf("Digite o divisor:\n");
	scanf("%i", &num12);
	num13 = num11/num12;
	printf("%i/%i = %i", num11, num12, num13);
	num14 = num11%num12;
	printf("\nO resto da divisao e %i\n", num14);
	
	// exercicio 6 
	float num15, num16, num17;
	printf("\nEXERCICIO 6 - Area de triangulo");
	printf("\nDigite a altura do triangulo:\n");
	scanf("%f", &num15);
	printf("Digite a base do triangulo:\n");
	scanf("%f", &num16);
	num17 = (num15 * num16)/2;
	printf("A area do triangulo e %.2f\n", num17);
	
	// exercicio 7
	float num18, num19;
	printf("\nEXERCICIO 7 - Temperatura");
	printf("\nDigite a temperatura em Fahrenheit:\n");
	scanf("%f", &num18);
	num19 = (num18-32)/1.8;
	printf("%.1f graus Fahrenheit sao %.1f graus Celsius\n", num18, num19);
	
	// exercicio 8 
	float num20, num21;
	printf("\n EXERCICIO 8 - Perimetro de circunferencia");
	printf("\nDigite o raio da circunferencia:\n");
	scanf("%f", &num20);
	num21 = 2*PI*num20;
	printf("O perimetro da circunferencia e %.2f\n", num21);
	
	// exercicio 9 
	float num22, num23, num24;
	printf("\n EXERCICIO 9 - Raiz e potencia");
	printf("\nDigite o numero:\n");
	scanf("%f", &num22);
	num23 = sqrt(num22);
	num24 = pow(num22, 8);
	printf("Sua raiz quadrada e %.2f e sua oitava potencia e %.2f\n", num23, num24);
	
	// exercicio 10
	float num25,num26, num27;
	printf("\n EXERCICIO 10 - Consumo medio de gasolina");
	printf("\nDigite quantos litros consumiu:\n");
	scanf("%f", &num25);
	printf("Digite quantos km percorreu:\n");
	scanf("%f", &num26);
	num27 = num26/num25;
	printf("O consumo medio foi de %.2f Km/l\n", num27);
	
	// exercicio 11
	float num28, num29, num30;
	printf("\n EXERCICIO 11 - Velocidade media");
	printf("\nDigite a distancia percorrida:\n");
	scanf("%f", &num28);
	printf("Digite o tempo decorrido em horas para completar o trajeto:\n");
	scanf("%f", &num29);
	num30 = num28/num29;
	printf("A sua velocidade media foi de %.2f Km/h\n", num30 );
	
	// exercicio 12
	float num31, num32, num33;
	printf("\n EXERCICIO 12 - Salario com relacao ao horario");
	printf("\nDigite o total de horas trabalhadas(s/ hora extra):\n");
	scanf("%f", &num31);
	printf("Digite o total de horas extras trabalhadas:\n");
	scanf("%f", &num32),
	num33 = (10*num31)+(15*num32);
	printf("O seu salario sera de R$%.2f\n", num33);
	
	// exercicio 13
	float num34, num35;
	printf("\n EXERCICIO 13 - Salario com imposto");
	printf("\nDigite quantos dias foram trabalhados pelo encanador:\n");
	scanf("%f", &num34);
	num35 = (num34*35)*0.92;
	printf("O seu salario sera de R$%.2f, ja descontando 8 por cento de imposto de renda\n", num35);
	
	// exercicio 14
	float num36, num37, num38, num39, num40, num41, num42;
	printf("\n EXERCICIO 14 - Media final ponderada");
	printf("\nDigite sua nota na Prova1 teorica:\n");
	scanf("%f", &num36);
	printf("Digite sua nota na Prova2 teorica:\n");
	scanf("%f", &num37);
	printf("Digite sua nota na Prova1 pratica:\n");
	scanf("%f", &num38);
	printf("Digite sua nota na Prova2 pratica:\n");
	scanf("%f", &num39);
	num40 = ((num36+num37)/2)*0.6;
	num41 = ((num38+num39)/2)*0.4;
	num42 = num40+num41;
	printf("Sua media final e %.2f", num42);
	
	return 0;
}

