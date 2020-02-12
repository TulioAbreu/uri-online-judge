#include <iostream>
using namespace std;

void print_matriz(int tamanho);

int main() {
	int tamanho;
	while (cin >> tamanho) {
		print_matriz(tamanho);
	}
	return 0;
}

void print_matriz(int tamanho) {
	for (int i = 0; i < tamanho; ++i) {
		for (int j = 0; j < tamanho; ++j) {
			if (i+j == tamanho-1) {
				cout << 2;
			}
			else if (i == j) {
				cout << 1;
			}
			else {
				cout << 3;
			}
		}
		cout << endl;
	}
}