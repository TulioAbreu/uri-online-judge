#include <iostream>
#include <cmath>
using namespace std;

bool ehPrimo(int numero) {
    int qtDivisores = 0;

    for (int i = 1; i <= numero/2; ++i) {
        if (numero%i == 0) {
            qtDivisores++;

            if (qtDivisores > 1) {
                return false;
            }
        }
    }
    return true;
}


void teste() {
    int numero;
    cin >> numero;

    if (ehPrimo(numero)) {
        cout << numero << " eh primo" << endl;
    }
    else {
        cout << numero << " nao eh primo" << endl;
    }
}


int main() {
    int qtTestes = 0;
    cin >> qtTestes;
    for (int i = 0; i < qtTestes; i++) {
        teste();
    }
    return 0;
}