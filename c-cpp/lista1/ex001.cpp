/* 
 * Faça um programa que receba dois numeros,
 * calcule e mostre a subtraçao do primeiro
 * numero pelo segundo.
*/
#include <iostream>

using namespace std;

int main(){
	int n1, n2, df;

	cout << "Digite um numero: ";
	cin >> n1;

	cout << "Digite outro numero: ";
	cin >> n2;

	df = n1 - n2;
	cout << "A diferenca eh " << df << endl;

	system("pause");
	return 0;
}
