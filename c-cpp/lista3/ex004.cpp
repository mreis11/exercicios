#include <iostream>

using namespace std;

int main(){
	int n, d;
	float soma = 0;

	for(n = d = 1; d <= 50; d++, n+= 2)
		soma += (float)n/d;

	cout << soma << endl;
	return 0;
}
