#include <iostream>
#include <iomanip>
using namespace std;

enum Code {
    SIM = 1,
    NAO = 2
};

float getNota() {
    float nota;
    bool valida = false;
    do {
        cin >> nota;
        valida = (nota >= 0) && (nota <= 10);
        if (!valida) {
            cout << "nota invalida" << endl;
        }
    } while (!valida);
    return nota;
}

int main(int argc, char const *argv[])
{
    int code = SIM; 
    do {
        if (code == SIM) {
            float nota1 = getNota();
            float nota2 = getNota();
            float media = (nota1+nota2)/2;
            cout << fixed << setprecision(2) << "media = " << media << endl;
        }
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> code;
    } while (code != NAO);
    return 0;
}
