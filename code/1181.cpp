#include <iostream>
#include <iomanip>
using namespace std;

const char operationSum = 'S';
const char operationMean = 'M';

bool isInsideInterval(int i, int j);
int line;

int main() {
    float M[12][12];
    cin >> line;

    char operation;
    cin >> operation;

    float sum = 0.0;
    int numbers = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
            if (isInsideInterval(i, j)) {
                sum += M[i][j];
                numbers++;
            }
        }
    }

    switch (operation) {
    case operationSum: {
        cout << fixed << setprecision(1) << sum << endl;
    } break;
    case operationMean: {
        cout << fixed << setprecision(1) << sum/numbers << endl;
    } break;
    }

    return 0;
}

bool isInsideInterval(int i, int j) {
    if (i == line) {
        return true;
    }
    return false;
}