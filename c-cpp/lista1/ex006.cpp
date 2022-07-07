/*
 * Um funcionário recebe um salário fixo mais
 * 4% de comissão sobre as vendas. Faça um
 * programa que receba o salário fixo do
 * funcionário e o valor sobre suas vendas,
 * calcule e mostre a comissão e seu salário
 * final.
*/
#include <iostream>

using namespace std;

int main(){
	float sal, ven, com, salfin;
	cout.precision(6);

	cout << "Salario fixo do funcionario: R$ ";
	cin >> sal;

	cout << "Valor das vendas: R$ ";
	cin >> ven;

	com = ven * 4/100;
	salfin = sal + com;
	cout << "A comissao eh de R$ " << com << " e o salario final do funcionario eh R$ " << salfin << endl;

	system("pause");
	return 0;
}
