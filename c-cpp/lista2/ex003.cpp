#include <iostream>

using namespace std;

int main(){
	int num;

	cout << "Digite um número: ";
	cin >> num;

	if(num % 2 == 0)
		cout << num << " eh par" << endl;
	else
		cout << num << " eh ímpar" << endl;

	system("pause");
	return 0;
}
