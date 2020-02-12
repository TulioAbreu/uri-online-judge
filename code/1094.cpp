#include <iostream>
#include <iomanip>
using namespace std;

float calc_porcentagem(float qtd, float total) {
    return qtd/total*100.0f;
}

int main() {
    int qt_testes;
    cin >> qt_testes;

    int qt_cobaias_total = 0;

    int qt_coelhos = 0;
    int qt_sapos = 0;
    int qt_ratos = 0;

    for (int i = 0; i < qt_testes; ++i) {
        int qt_cobaias;
        char tipo_cobaias;
        cin >> qt_cobaias >> tipo_cobaias;
        switch (tipo_cobaias) {
            case 'C': {
                qt_coelhos += qt_cobaias;
            } break;
            case 'S': {
                qt_sapos += qt_cobaias;
            } break;
            case 'R': {
                qt_ratos += qt_cobaias;
            } break;
        }
        qt_cobaias_total += qt_cobaias;
    }

    cout << "Total: " << qt_cobaias_total << " cobaias" << endl;
    cout << "Total de coelhos: " << qt_coelhos << endl;
    cout << "Total de ratos: " << qt_ratos << endl;
    cout << "Total de sapos: " << qt_sapos << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << calc_porcentagem(qt_coelhos, qt_cobaias_total) << " %" << endl;
    cout << "Percentual de ratos: " << calc_porcentagem(qt_ratos, qt_cobaias_total) << " %" << endl;
    cout << "Percentual de sapos: " << calc_porcentagem(qt_sapos, qt_cobaias_total)<< " %" << endl;
    return 0;
}