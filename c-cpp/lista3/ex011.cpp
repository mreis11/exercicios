#include <iostream>

using namespace std;

int main(){
	int num, soma_par, soma_impar;

	while(true){
		cout << "Digite um número inteiro positivo: ";
		cin >> num;

		if(num > 1000)
			break;

		if(num % 2 == 0)
			soma_par += num;
		else
			soma_impar += num;

	}

	cout << "A soma dos números pares é " << soma_par << endl;
	cout << "A soma dos números ímpares é " << soma_impar << endl;

	system("pause");
	return 0;
}
