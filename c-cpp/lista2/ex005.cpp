#include <iostream>

using namespace std;

int main(){
	int num, res;

	cout << "Digite um número: ";
	cin >> num;

	if(num >= 1)
		res = 2 * num;
	else
		res = 3 * num;

	cout << "Resultado: " << res << endl;

	system("pause");
	return 0;
}
