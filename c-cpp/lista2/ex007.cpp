#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	int a, b, c;

	cout << "Digite o primeiro numero: ";
	cin >> n1;

	cout << "Digite o segundo numero: ";
	cin >> n2;

	cout << "Digite o terceiro numero: ";
	cin >> n3;

	if(n1 > n2 && n2 > n3 && n3 < n1){
		a = n1;
		b = n2;
		c = n3;
	} else if(n1 > n2 && n2 < n3 && n3 < n1){
		a = n1;
		b = n3;
		c = n2;
	} else if(n2 > n1 && n1 < n3 && n3 < n2){
		a = n2;
		b = n3;
		c = n1;
	} else if(n2 > n1 && n1 > n3 && n3 < n2){
		a = n2;
		b = n1;
		c = n3;
	} else if(n3 > n2 && n2 > n1 && n1 < n3){
		a = n3;
		b = n2;
		c = n1;
	} else if(n3 > n2 && n2 < n1 && n1 < n3){
		a = n3;
		b = n1;
		c = n2;
	}

	cout << a << " " << b << " " << c << endl;

	system("pause");
	return 0;
}
