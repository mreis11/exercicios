#include <iostream>

using namespace std;

int main(){
	string nome, est_civil;
	char sexo;
	int temp_cas;

	cout << "Digite seu nome: ";
	cin >> nome;

	cout << "Digite seu sexo(M/F): ";
	cin >> sexo;

	cout << "Digite seu estado civil(em letras maiúsculas): ";
	cin >> est_civil;

	if(sexo == 'F' && est_civil == "CASADA"){
		cout << "Digite o tempo de casada(anos): ";
		cin >> temp_cas;
	}

	cout << "Nome: " << nome << endl;
	cout << "Sexo: " << sexo << endl;
	cout << "Estado civil: " << est_civil << endl;

	system("pause");
	return 0;
}
