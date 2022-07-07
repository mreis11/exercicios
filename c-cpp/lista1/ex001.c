/* 
 * Faça um programa que receba dois numeros,
 * calcule e mostre a subtraçao do primeiro
 * numero pelo segundo.
 */
#include <stdio.h>

int main(){
	int n1, n2, df;

	printf("Digite um numero: ");
	scanf("%d", &n1);

	printf("Digite outro numero: ");
	scanf("%d", &n2);

	df = n1 - n2;
	printf("A diferenca eh %d\n", df);

	return 0;
}
