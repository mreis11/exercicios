#include <iostream>

using namespace std;

int main(){
	int num, mult;

	mult = 1;

	while(true){
		cout << "Digite um número: ";
		cin >> num;

		if(num == 0){
			break;
		}

		mult *= num;
	} 

	cout << "O produto é igual a " << mult << endl; 

	system("pause");
	return 0;
}
