/* 
 * Faça um programa que receba tres numeros,
 * calcule e mostre a multiplicaçao desses
 * numeros.
 */
#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3, mul;	

	cout << "Digite o 1° numero: ";
	cin >> n1;

	cout << "Digite o 2° numero: ";
	cin >> n2;

	cout << "Digite o 3° numero: ";
	cin >> n3;

	mul = n1 * n2 * n3;
	cout << "O resultado eh " << mul << endl;

	system("pause");
	return 0;
}
