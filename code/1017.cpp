#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int tempo, velocidade_media;
	cin >> tempo >> velocidade_media;
	int distancia;
	double fuel;
	distancia = tempo * velocidade_media;
	fuel = distancia / 12.0;
	cout << fixed << setprecision(3) << fuel << endl;
	return 0;
}