/*
 * Faça um programa que receba o ano de
 * nascimento de uma pessoa e o ano atual,
 * calcule e mostre:
 * a) a idade dessa pessoa em anos;
 * b) a idade dessa pessoa em meses;
 * c) a idade dessa pessoa em dias;
 * d) a idade dessa pessoa em semanas.
*/
#include <iostream>

using namespace std;

int main(){
	int nasc, anoatual;
	int idade, idade2, idade3, idade4;

	cout << "Ano de nascimento: ";
	cin >> nasc;

	cout << "Ano atual: ";
	cin >> anoatual;

	idade = anoatual - nasc;
	idade2 = idade * 12;
	idade3 = idade2 * 365;
	idade4 = idade2 * 4;
	cout << "A pessoa tem " << idade << " anos, " << idade2 << " meses, " << idade3 << " dias e " << idade4 << " semanas de idade." << endl;
	return 0;
}
