#include <iostream>

using namespace std;

int main(){
	int n, soma = 0;

	cout << "Digite um número: ";
	cin >> n;
	
	for(int i = 1; i < n; i++){
		if(n % i == 0)
			soma += i;
	}

	if(soma == n)
		cout << n << " é número perfeito." << endl;
	else
		cout << n << " NÃO é número perfeito" << endl;

	system("pause");
	return 0;
}
