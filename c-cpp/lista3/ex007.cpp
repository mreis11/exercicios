#include <iostream>

using namespace std;

int main(){
	for(int n = 1000; n <= 1999; n++){
		if(n % 11 == 5)
			cout << n << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
