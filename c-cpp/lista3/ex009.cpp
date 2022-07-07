#include <iostream>

using namespace std;

int main(){
	int term, n1 = 1, n2 = 1, i = 1;

	cout << "Digite o número desejado de termos: ";
	cin >> term;

	while(i <= term){
		if(i == term)
			cout << n1 << endl << endl;
		else if(i + 1 == term)
			cout << n1 << " " << n2 << " " << endl;
		else
			cout << n1 << " " << n2 << " ";

		n1 += n2;
		n2+= n1;

		i += 2;
	}

	system("pause");
	return 0;
}
