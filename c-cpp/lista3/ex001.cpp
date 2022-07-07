#include <iostream>

using namespace std;

int main(){
	// Declarando as variáveis do número a ser digitado e do maior e menor número
	float num, maior, menor;

	// Estrutura de repetição que lê 15 valores reais
	for(int cont = 0; cont < 15; cont++){
		cout << "Digite o " << cont + 1 << "° número: ";
		cin >> num;

		if(cont == 0){
			maior = num;
			menor = num;
		}
		if(num > maior)	
			maior = num;
		if(num < menor)
			menor = num;
	} 

	cout << "O maior número é " << maior << endl;
	cout << "O menor número é " << menor << endl;

	system("pause");
	return 0; 
}
