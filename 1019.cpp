#include <iostream>
using namespace std;
int main(){
	int entrada;
	cin >> entrada;
	int horas, minutos, segundos, aux;
	horas = entrada / 3600;
	aux = entrada % 3600;
	minutos = aux / 60;
	aux = aux % 60;
	segundos = aux;
	cout << horas << ":" << minutos << ":" << segundos;
	cout << endl;
	return 0;
}