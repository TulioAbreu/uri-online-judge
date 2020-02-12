#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int qt_lesmas;
    while (cin >> qt_lesmas) {
        vector<int> vel_lesmas;
        for (int i = 0; i < qt_lesmas; ++i) {
            int nova_velocidade;
            cin >> nova_velocidade;

            vel_lesmas.push_back(nova_velocidade);
        }
        sort(vel_lesmas.begin(), vel_lesmas.end());

        int maior_velocidade = vel_lesmas.at(qt_lesmas-1);
        if (maior_velocidade < 10) {
            cout << 1 << endl;
        }
        else if (maior_velocidade < 20) {
            cout << 2 << endl;
        }
        else {
            cout << 3 << endl;
        }
    }
    return 0;
}