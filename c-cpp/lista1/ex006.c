/*
 * Um funcionário recebe um salário fixo mais
 * 4% de comissão sobre as vendas. Faça um
 * programa que receba o salário fixo do
 * funcionário e o valor de suas vendas,
 * calcule e mostre a comissão e seu salário
 * final.*/
#include <stdio.h>

int main(){
	float sal, ven, com, salfin;

	printf("Salario fixo do funcionario: R$ ");
	scanf("%f", &sal);

	printf("Valor das vendas: R$ ");
	scanf("%f", &ven);

	com = ven * 4/100;
	salfin = sal + com;
	printf("A comissao eh de R$ %.2f e o salario final do funcionario eh R$ %.2f\n", com, salfin);

	return 0;
}
