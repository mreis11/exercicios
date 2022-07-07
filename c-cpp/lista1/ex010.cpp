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
#include <iostream>

using namespace std;

int main(){
	float brl, usd, dm, gbp;
	cout.precision(6);

	cout << "Dinheiro para a viagem: R$ ";
	cin >> brl;

	usd = brl / 1.80;
	dm = brl / 2.00;
	gbp = brl / 3.57;

	cout << "R$ " << brl << " corresponde a: " << endl;
	cout << usd << " USD - (" << usd << " dolares)" << endl;
	cout << dm << " DM - (" << dm << " marcos alemaes)" << endl;
	cout << gbp << " GBP - (" << gbp << " libras esterlinas)" << endl;

	system("pause");
	return 0;
}
