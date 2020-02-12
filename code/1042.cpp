#include <iostream>
using namespace std;

void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
	int values[3];
	int sValues[3];
	for(int i = 0; i < 3; i++) {
		cin >> values[i];
		sValues[i] = values[i];
	}
	
	bubble_sort(sValues, 3);
	
	for(int i = 0; i < 3; i++)
		cout << sValues[i] << endl;
	cout << endl;
	for(int i = 0; i < 3; i++)
		cout << values[i] << endl;
}