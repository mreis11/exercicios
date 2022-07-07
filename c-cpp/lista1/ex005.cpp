/*
 * Faça um programa que receba o preço de um
 * produto, calcule e mostre o novo preço,
 * sabendo-se que este sofreu um desconto de
 * 10%.
*/
#include <iostream>

using namespace std;

int main(){
	float preco, preco2;
	cout.precision(5);

	cout << "Digite o preco do produto: R$ ";
	cin >> preco;

	preco2 = preco - preco * 10/100;
	cout << "O novo preco sera R$ " << preco2 << endl;

	system("pause");
	return 0;
}
