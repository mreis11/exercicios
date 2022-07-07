/* 
 * Faça um programa que receba dois numeros,
 * calcule e mostre a divisao do primeiro
 * numero pelo segundo. Sabe-se que o segundo
 * numero nao pode ser zero, portanto, nao eh
 * necessario se preocupar com validaçoes.
 * */
#include <stdio.h>

int main(){
	int n1, n2, div;

	printf("Digite um numero: ");
	scanf("%d", &n1);

	printf("Digite outro numero: ");
	scanf("%d", &n2);

	div = n1 / n2;
	printf("O resultado eh %d\n", div);

	return 0;
}
