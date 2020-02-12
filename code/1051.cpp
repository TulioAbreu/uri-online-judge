#include <iostream>
using namespace std;

float calcImpostos(float salario);

int main() {
    float salario;
    cin >> salario;
    float impostos = calcImpostos(salario);
    if (impostos == 0) {
        cout << "Isento";
    }
    else {
        printf("R$ %.2f", impostos);
    }
    cout << endl;
    return 0;
}

float aplicaImposto(float valor, float imposto, float min, float max) {
    float resultado = 0;

    if (valor > min) {
        if (valor > max) {
            if (max >= 99999) {
                resultado += (valor-min)*imposto;
            }
            else {
                resultado += (max-min)*imposto;
            }
        }
        else {
            valor -= min;

            resultado += valor*imposto;
        }
    }

    return resultado;
}


float calcImpostos(float salario) {
    float resultado = 0;

    resultado += aplicaImposto(salario, 0, 0, 2000);
    resultado += aplicaImposto(salario, 0.08, 2000, 3000);
    resultado += aplicaImposto(salario, 0.18, 3000, 4500);
    resultado += aplicaImposto(salario, 0.28, 4500, 99999);

    return resultado;
}