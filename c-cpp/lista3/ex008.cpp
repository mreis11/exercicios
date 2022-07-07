#include <iostream>

using namespace std;

int main(){
	float massa1, massa2, hora, min, seg;

	cout.precision(4);

	cout << "Digite a massa do material(g): ";
	cin >> massa1;
	massa2 = massa1;

	while(massa2 >= 0.5){
		massa2 /= 2;
		seg += 50;
	}

	hora = seg / 3600;
	min = seg / 60;

	cout << "O material de " << massa1 << "g terá sua massa de " << massa2 << "g em " << hora << " horas " << min << " minutos " << seg << " segundos." << endl;

	system("pause");
	return 0;
}
