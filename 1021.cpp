#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int NOTA = 1;
const int MOEDA = 2;

void aplicar(double fValorNota, int& valorAtual, int tipo) {  
    int valorNota = fValorNota * 100;
    int qtNotas = valorAtual/valorNota;
    valorAtual = valorAtual - qtNotas*valorNota;

    switch(tipo) {
        case NOTA: {
            cout << fixed << setprecision(0) << qtNotas << " nota(s) de R$ " << fixed << setprecision(2) << fValorNota << endl;
        } break;
        case MOEDA: {
            cout << fixed << setprecision(0) << qtNotas << " moeda(s) de R$ " << fixed << setprecision(2) << fValorNota << endl;
        } break;
    }
}


int main() {
    double fValorAtual;
    cin >> fValorAtual;

    int valorAtual = (fValorAtual*100);
    cout << "NOTAS:" << endl;
    aplicar(100, valorAtual, NOTA);
    aplicar(50, valorAtual, NOTA);
    aplicar(20, valorAtual, NOTA);
    aplicar(10, valorAtual, NOTA);
    aplicar(5, valorAtual, NOTA);
    aplicar(2, valorAtual, NOTA);
    cout << "MOEDAS:" << endl;
    aplicar(1, valorAtual, MOEDA);
    aplicar(0.50, valorAtual, MOEDA);
    aplicar(0.25, valorAtual, MOEDA);
    aplicar(0.1, valorAtual, MOEDA);
    aplicar(0.05, valorAtual, MOEDA);
    aplicar(0.01, valorAtual, MOEDA);
}