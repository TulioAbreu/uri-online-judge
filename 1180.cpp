#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	int menor_valor = 1000;
	int indice_menor_valor = -1;

	for (int i = 0; i < N; ++i) {
		int novo_valor;
		cin >> novo_valor;
			
		if (novo_valor < menor_valor) {
			menor_valor = novo_valor;
			indice_menor_valor = i;
		}
	}
	
	cout << "Menor valor: " << menor_valor << endl;
	cout << "Posicao: " << indice_menor_valor << endl;
	
	
	return 0;
}