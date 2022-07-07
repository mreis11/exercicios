#include <iostream>

using namespace std;

int main(){
	int num, cont;
	for(num = 0; num < 10; num++){
		cout << "\n";
		for(cont = 1; cont < 11; cont++){
			cout << num << " x " << cont << " = " << num * cont << endl;
		}
	}
	return 0;
}
