#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float peso, altura, imc;
	cout.precision(3);

	cout << "Digite seu peso(kg): ";
	cin >> peso;

	cout << "Digite sua altura(m): ";
	cin >> altura;

	imc = peso / pow(altura, 2);

	cout << "Seu IMC é " << imc << endl;

	if(imc < 18.5)
		cout << "Abaixo do peso\n";
	else if(imc >= 18.5 && imc <= 25)
		cout << "Peso normal\n";
	else if(imc >= 25 && imc <= 30)
		cout << "Acima do peso\n";
	else if(imc > 30)
		cout << "Obeso\n";

	system("pause");
	return 0;
}
