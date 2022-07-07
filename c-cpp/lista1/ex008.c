/*
 * Faça um programa que receba o ano de
 * nascimento de uma pessoa e o ano atual,
 * calcule e mostre:
 * a) a idade dessa pessoa em anos;
 * b) a idade dessa pessoa em meses;
 * c) a idade dessa pessoa em dias;
 * d) a idade dessa pessoa em semanas.
*/
#include <stdio.h>

int main(){
	int nasc, anoatual;
	int idade, idade2, idade3, idade4;

	printf("Ano de nascimento: ");
	scanf("%d", &nasc);

	printf("Ano Atual: ");
	scanf("%d", &anoatual);

	idade = anoatual - nasc;
	idade2 = idade * 12;
	idade3 = idade2 * 365;
	idade4 = idade2 * 4;
	printf("A pessoa tem %d anos, %d meses, %d dias e %d semanas de idade.\n", idade, idade2, idade3, idade4);

	return 0;
}
