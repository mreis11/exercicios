#include <iostream>

using namespace std;

int main(){

	float n1, n2, n3;

	while(true){
		cout << "Digite o primeiro número: ";
		cin >> n1;

		cout << "Digite o segundo número: ";
		cin >> n2;

		cout << "Digite o terceiro número: ";
		cin >> n3;

		if(not(n1 < n2 and n2 < n3))
			break;

		cout << "A soma dos números é: " << n1 + n2 + n3 << endl;
		cout << "O produto dos números é: " << n1 * n2 * n3 << endl;
		cout << "A média dos números é: " << (n1 + n2 + n3) / 3 << endl;

	} 

	system("pause");
	return 0;
}
