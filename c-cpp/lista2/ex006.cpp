#include <iostream>

using namespace std;

int main(){
	int var, res;

	cout << "Digite um valor: ";
	cin >> var;

	if(var % 2 == 0)
		res = var + 5;
	else
		res = var + 8;

	cout << "Resultado: " << res << endl;

	system("pause");
	return 0;
}
