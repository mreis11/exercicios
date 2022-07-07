/*
 * Faça um programa que receba o preço de um
 * produto, calcule e mostre o novo preço,
 * sabendo-se que este sofreu um desconto de
 * 10%.
*/
#include <stdio.h>

int main(){
	float preco, preco2;

	printf("Digite o preco do produto: R$ ");
	scanf("%f", &preco);

	preco2 = preco - preco * 10/100;
	printf("O novo preco sera R$ %.2f\n", preco2);

	return 0;
}
