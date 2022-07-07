/* 
 * Faça um programa que receba tres numeros,
 * calcule e mostre a multiplicaçao desses
 * numeros.
*/
#include <stdio.h>

int main(){
	int n1, n2, n3, mul;

	printf("Digite o 1° numero: ");
	scanf("%d", &n1);

	printf("Digite o 2° numero: ");
	scanf("%d", &n2);

	printf("Digite o 3° numero: ");
	scanf("%d", &n3);

	mul = n1 * n2 * n3;
	printf("O resultado eh %d\n", mul);

	return 0;
}
