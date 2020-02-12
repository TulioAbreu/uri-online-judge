#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    bool run_again = false;
    int vitorias_gremio = 0,
        vitorias_inter = 0,
        empates = 0,
        qt_grenais = 0;
    do {
        int gols_gremio, gols_inter;
        cin >> gols_inter >> gols_gremio;
        if (gols_inter == gols_gremio) {
            empates ++;
        }
        else if (gols_inter > gols_gremio) {
            vitorias_inter ++;
        }
        else {
            vitorias_gremio ++;
        }
        qt_grenais ++;
        int novo_grenal;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> novo_grenal;
        if (novo_grenal == 1) {
            run_again = true;
        }
        else {
            run_again = false;
        }
    } while (run_again);
    cout << qt_grenais << " grenais" << endl;
    cout << "Inter:" << vitorias_inter << endl;
    cout << "Gremio:" << vitorias_gremio << endl;
    cout << "Empates:" << empates << endl;
    if (vitorias_gremio == vitorias_inter) {
        cout << "Nao houve vencedor" << endl;
    }
    else if (vitorias_gremio > vitorias_inter) {
        cout << "Gremio venceu mais" << endl;
    }
    else {
        cout << "Inter venceu mais" << endl;
    }
    return 0;
}
