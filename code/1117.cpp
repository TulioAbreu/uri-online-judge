#include <iostream>
#include <iomanip>
using namespace std;

bool ehValida(float nota) {
    return nota >= 0 && nota <= 10;
}

int main(int argc, char const *argv[]) {
    int qt_notas_validas = 0;
    float somatorio_notas = 0;
    while (qt_notas_validas < 2) {
        float nota;
        cin >> nota;
        if (ehValida(nota)) {
            qt_notas_validas ++;
            somatorio_notas += nota;
        }
        else {
            cout << "nota invalida" << endl;
        }
    }
    cout << "media = " << fixed << setprecision(2) << somatorio_notas/2 << endl;
    return 0;
}
