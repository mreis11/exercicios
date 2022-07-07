#include <iostream>

using namespace std;

int main(){
	float altura, peso_ideal;
	char sexo;

	cout << "Digite sua altura(em metro): ";
	cin >> altura;

	cout << "Digite seu sexo(M/F): ";
	cin >> sexo;

	if(sexo == 'M')
		peso_ideal = (72.7 * altura) - 58;
	else
		peso_ideal = (62.1 * altura) - 44.7;

	cout << "O seu peso ideal eh de " << peso_ideal << "kg." << endl;

	system("pause");
	return 0;
}
