/* 
 * Faça um programa que receba dois numeros,
 * calcule e mostre a divisao do primeiro
 * numero pelo segundo. Sabe-se que o segundo
 * numero nao pode ser zero, portanto, nao eh
 * necessario se preocupar com validaçoes.
 * */
#include <iostream>

using namespace std;

int main(){
	int n1, n2, div;

	cout << "Digite um numero: ";
	cin >> n1;

	cout << "Digite outro numero: ";
	cin >> n2;

	div = n1 / n2;
	cout << "O resultado eh " << div << endl;

	system("pause");
	return 0;
}
