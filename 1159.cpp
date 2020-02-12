#include <iostream>
using namespace std;

bool isOdd(int num) {
    return num%2 == 0;
}

int consecutiveSum(int x) {
    int sum = 0, terms = 0, currentNumber = x;
    while (terms < 5) {
        if (isOdd(currentNumber)) {
            sum += currentNumber;
            terms++;
        }

        currentNumber++;
    }
    return sum;
}

int main() {
    int x;

    do {
        cin >> x;
        if (x != 0) {
            cout << consecutiveSum(x) << endl;
        }
    } while(x != 0);

    return 0;
}