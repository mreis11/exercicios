/*
 * João recebeu seu salário e precisa
 * pagar duas contas atrasadas. Em razão
 * do atraso, ele deverá pagar multa de
 * 2% sobre cada conta. Faça um programa
 * que calcule e mostre quanto restará
 * do salário de João.
*/
#include <iostream>

using namespace std;

int main(){
	float sal, ct1, ct2, resto;
	cout.precision(5);

	cout << "Salario de Joao: R$ ";
	cin >> sal;

	cout << "Valor da primeira conta: R$ ";
	cin >> ct1;
	ct1 = ct1 + ct1 * 2/100;

	cout << "Valor da segunda conta: R$ ";

	cin >> ct2;
	ct2 = ct2 + ct2 * 2/100;

	resto = sal - (ct1 + ct2);

	cout << "Devido ao atraso, Joao tera que pagar 2% a mais do valor das contas, sendo R$ " << ct1 << " e R$ " << ct2 << " respectivamente. Portanto, restara R$ " << resto << " do salario de Joao." << endl;
	return 0;
}
