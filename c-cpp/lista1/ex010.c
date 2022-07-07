/*
 * Faça um programa que receba a
 * quantidade de dinheiro em reais que
 * uma pessoa que vai viajar possui. Ela
 * vai passar por vários países e
 * precisa converter seu dinheiro em
 * dólares, marco alemão e
 * libra esterlina. Sabe-se que a
 * cotação do dólar é de R$ 1,80;
 * do marco alemão, de R$ 2,00;
 * e da libra esterlina, de R$ 3,57.
 * O programa deve fazer as conversões e
 * mostrá-las.
*/
#include <stdio.h>

int main(){
	float brl, usd, dm, gbp;

	printf("Dinheiro para a viagem: R$ ");
	scanf("%f", &brl);

	usd = brl / 1.80;
	dm = brl / 2.00;
	gbp = brl / 3.57;

	printf("R$ %.2f corresponde a: \n", brl);
	printf("%.2f USD - (%.2f dolares)\n", usd, usd);
	printf("%.2f DM - (%.2f marcos alemaes)\n", dm, dm);
	printf("%.2f GBP - (%.2f libras esterlinas)\n", gbp, gbp);

	return 0;
}
