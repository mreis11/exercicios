#include <iostream>

using namespace std;

int main(){
	int a, b, c;

	cout << "Digite o valor de A: ";
	cin >> a;

	cout << "Digite o valor de B: ";
	cin >> b;

	cout << "Digite o valor de C: ";
	cin >> c;

	if(a + b < c)
		cout << a << " + " << b << " eh igual a " << a + b << " e eh menor que " << c << endl;
	else if(a + b == c)
		cout << a << " + " << b << " eh igual a " << a + b << " e eh igual que " << c << endl;
	else if(a + b > c)
		cout << a << " + " << b << " eh igual a " << a + b << " e eh maior que " << c << endl;

	system("pause");
	return 0;
}
