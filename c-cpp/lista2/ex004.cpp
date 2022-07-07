#include <iostream>

using namespace std;

int main(){
	int a, b, c;

	cout << "Digite o valor de A: ";
	cin >> a;

	cout << "Digite o valor de B: ";
	cin >> b;

	if(a == b)
		c = a + b;
	else
		c = a * b;

	cout << "Resultado: " << c << endl;

	system("pause");
	return 0;
}
