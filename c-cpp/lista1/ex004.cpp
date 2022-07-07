/*
 * Faça um programa que receba duas notas,
 * calcule e mostre a media ponderada dessas
 * notas, considerando peso 2 para a primeira
 * e peso 3 para a segunda.
 */
#include <iostream>

using namespace std;

int main(){
	float nota1, nota2, media;
	// estabelece a precisão de casas decimais
	cout.precision(2);

	cout << "Digite a primeira nota: ";
	cin >> nota1;

	cout << "Digite a segunda nota: ";
	cin >> nota2;

	media = (nota1 * 2 + nota2 * 3) / 5;
	cout << "Nota final: " << media << endl;

	system("pause");
	return 0;
}
