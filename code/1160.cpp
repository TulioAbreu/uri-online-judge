#include <iostream>
#include <cmath>
using namespace std;

void next_year(int& p, float c) {
    p = p + floor(p*c/100.f);
}

int main() {
    int tests;
    cin >> tests;

    for (int i = 0; i < tests; i++) {
        int pA, pB;
        float cA, cB;
        cin >> pA >> pB >> cA >> cB;
        int year_count = 0;
        while (pA <= pB) {
            next_year(pA, cA);
            next_year(pB, cB);
            year_count ++;

            if (year_count > 100) {
                break;
            }
        }

        if (year_count > 100) {
            cout << "Mais de 1 seculo." << endl;
        }
        else {
            cout << year_count << " anos." << endl;
        }
    }
    return 0;
}