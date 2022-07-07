#include <iostream>

using namespace std;

int main(){
	float val;

	cout << "Digite um valor: R$ ";
	cin >> val;

	for(int i = 1; i <= 200; i++){
		if(i % 10 == 0)
			cout << endl;
		cout << i <<  " X " << val << " = " << val * i << endl;
	}
	system("pause");
	return 0;
}
