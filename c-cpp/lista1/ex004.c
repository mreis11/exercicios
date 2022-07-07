/*
 * Faça um programa que receba duas notas,
 * calcule e mostre a media ponderada dessas
 * notas, considerando peso 2 para a primeira
 * e peso 3 para a segunda.
 */
#include <stdio.h>

int main(){
	float nota1, nota2, media;

	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);

	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);

	media = (nota1 * 2 + nota2 * 3) / 5;
	printf("Nota final: %.1f\n", media);

	return 0;
}
