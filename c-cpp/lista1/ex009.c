/*
 * João recebeu seu salário e precisa
 * pagar duas contas atrasadas. Em razão
 * do atraso, ele deverá pagar multa de
 * 2% sobre cada conta. Faça um programa
 * que calcule e mostre quanto restará
 * do salário de João.
*/
#include <stdio.h>

int main(){
	float sal, ct1, ct2, mult, resto;

	printf("Salario de Joao: R$ ");
	scanf("%f", &sal);

	printf("Valor da primeira conta: R$ ");
	scanf("%f", &ct1);
	ct1 = ct1 + ct1 * 2/100;

	printf("Valor da segunda conta: R$ ");
	scanf("%f", &ct2);
	ct2 = ct2 + ct2 * 2/100;

	resto = sal - (ct1 + ct2);

	printf("Devido ao atraso, Joao tera que pagar 2%% a mais do valor das contas, sendo R$ %.2f e R$ %.2f respectivamente. Portanto, restara R$ %.2f do salario de Joao.\n", ct1, ct2, resto);

	return 0;
}
